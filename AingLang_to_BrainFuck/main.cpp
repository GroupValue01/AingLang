#include <iostream>
#include <cstdio>
#include <cstdbool>
#include <cstdlib>

int main(int argc, char* argv[]) {
	char arr[20][16384] = { {0,}, };


	bool b=true;


	int i, j;
	char a;
	for (i = 0; i < 20 && b; i++) {
		for (j = 0; j < 16383 && b; j++) {
			a = (char)getchar();
			if (a == '\n') {
				b = false;
			}else if (a == ){

            }
			arr[i][j] = a;
		}
	}

	system("pause");
	return 0;
}