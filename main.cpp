#include <iostream>

using namespace std;

int main() {
	const int ROWS = 6;
	const int COLS = 5;

	int arr[ROWS][COLS]{};

	if (COLS % 2 == 0) {
		cout << "Chislo kolonok dolzhno bit nechetnoe!" << endl;
	}

	else {

		for (int i = 0; i < ROWS; i++) {
			if ((i == 0) || (i == ROWS - 1)) {
				continue;
			}
			if (i == ROWS - 2) {
				for (int j = 0; j < COLS; j++) {
					if ((j == 0) || (j == COLS - 1)) {
						continue;
					}
					arr[i][j] = 1;
				}
			}
			arr[i][(int)COLS / 2] = 1;
		}

		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COLS; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
}