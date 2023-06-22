#include <iostream>
using namespace std;

class Queues {
	int FRONT, REAR, max = 5;
	int queue_array[5];

public:
	Queues() {
		FRONT = -1;
		REAR = -1;
	}

	void insert() {
		int num;
		cout << "Enter a number: ";
		cin >> num;
		cout << endl;

		//Cek apakah antrian penuh
		if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
			cout << "\nQueu overflow\n";
			return;
		}

		//Cek apakah antrian kosong
		if (FRONT == -1) {
			FRONT = 0;
			REAR = 0;
		}
		else {
			//jika REAR berada di posisi terakhir array, kembali ke awal array
			if (REAR == max - 1)
				REAR = 0;
			else
				REAR = REAR + 1;
		}
		queue_array[REAR] = num;
	}

	void remove() {
		//cek apakah antrian kosong 
		if (FRONT == -1) {
			cout << "Queu underflow\n";
			return;
		}
		cout << "\nThe element deleted from the queue is: " << queue_array[FRONT] << "\n";

		// cek jika antrian hanya memiliki satu element
		if (FRONT == REAR) {
			FRONT = -1;
			REAR = -1;
		}
		else {
			//jika element yang dihapus berada diposisi terakhir array, kembali ke awal array
			if (FRONT == max - 1)
				FRONT = 0;
			else
				FRONT = FRONT + 1;
		}
	}

	void display() {
		int FRONT_position = FRONT;
		int REAR_position = REAR;

		//cek apakah antrian kosong
		if (FRONT == -1) {
			cout << "Queue is empty\n";
			return;
		}

		cout << "\nElements in the queue are...\n";

		
	}
};