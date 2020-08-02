#include "aing.h"

class longstring {
private:
public:
	int pos[2];
	char arr[20][16384] = { {0,}, };

	longstring() {
		pos[0] = 0; //max 20
		pos[1] = 0; //max 16383
	}

	longstring(char Iarr[]) {
		strcpy(arr[0], Iarr);
	}

	void set(longstring Istring) {
		int i;
		for (i = 0; i < 20; i++) {
			strcpy(arr[i], Istring.arr[i]);
		}
	}

	void set() {
		int i, j;
		char a;
		for (i = 0; i < 20; i++) {
			for (j = 0; j < 16383;j++) {
				a = (char)getchar();
				if (a == '\n') {
					return;
				}
				arr[i][j] = a;
			}
		}
	}

	void inputTest() {
		int i, j;
		for (i = 0; i < 20; i++) {
			for (j = 0; j < 16383; j++) {
				if (arr[i][j] == 0) {
					return;
				}
				cout << arr[i][j];
			}
		}
	}

	void next() {
		if (pos[1] >= 16383) {
			if (pos[0] >= 20) {
				cout << "error" << endl;
			}
			else {
				pos[0] += 1;
				pos[1] = 0;
			}
		}
		else {
			pos[1]++;
		}
	}

	void previous() {
		if (pos[1] <= 0) {
			if (pos[0] <= 0) {
				cout << "error" << endl;
			}
			else {
				pos[0] -= 1;
				pos[1] = 16383;
			}
		}
		else {
			pos[1]--;
		}
	}

	void plus() {
		arr[pos[0]][pos[1]]++;
	}

	void minus() {
		arr[pos[0]][pos[1]]--;
	}

	void input() {
		cin >> arr[pos[0]][pos[1]];
	}

	void print() {
		cout << arr[pos[0]][pos[1]];
	}

	/*
	code.h 들어오면 while(*ptr != 0) 넣기
	*/
};