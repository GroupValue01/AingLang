#include <iostream>
#include <cstdio>
#include <cstdbool>
#include <cstdlib>

int main(int argc, char* argv[]) {
	bool b=true;


	int i, j;
	char a;
	while(b){
		a = (char)getchar();
		if (a == '\n') {
			b = false;
		}else if (a == 62) {
			std::cout << "아이잉";
		}else if (a == 60) {
			std::cout << "아이이잉";
		}else if (a == 43) {
			std::cout << "아이이이잉";
		}else if (a == 45) {
			std::cout << "아이이이이잉";
		}else if (a == 46) {
			std::cout << "아이이이이이잉";
		}else if (a == 44) {
			std::cout << "아이이이이이이잉";
		}else if (a == 91) {
			std::cout << "아이이이이이이이잉";
		}else if (a == 93) {
			std::cout << "아이이이이이이이이잉";
		}
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}