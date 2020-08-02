#include <iostream>
#include <cstdio>
#include <cstdbool>
#include <cstdlib>

int main(int argc, char* argv[]) {
	bool b=true;


	int i;
	char a;
	while(b){
		a = (char)getchar();
		if (a == '\n') {
			b = false;
		}else{
            std::cout << ">";
            for(i=0; i<a;i++){
                std::cout << "+";
            }
            std::cout << ".";
        }
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}