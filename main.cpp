#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	
	const int ROWS = 5;
	const int COLS = 5;

	int arr[ROWS][COLS]{};

	if ((ROWS % 2 == 0) || (COLS % 2 == 0)) {
		cout << "Число строк и колонок должно быть нечетное!" << endl;
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