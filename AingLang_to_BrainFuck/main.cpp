#include <iostream>
#include <cstdio>
#include <cstdbool>
#include <cstdlib>

int main(int argc, char* argv[]) {


	bool b=true;


	int i, j;
	char a;

    char de[9]={'>', '<', '+', '-', '.', ',', '[', ']', 0};

    int stack=-1000;
	for (i = 0; i < 20 && b; i++) {
		for (j = 0; j < 16383 && b; j++) {
			a = (char)getchar();
			if (a == '\n') {
				b = false;
			}else if(a==-66){//아
                a = (char)getchar();
                if(a==-58)stack=0;
            }else if(a==-64){
                a = (char)getchar();
                if(a==-52){//이
                    stack+=1;
                }else if(a==-41){//잉
                    if(stack>0 && stack<9){
                        std::cout << de[stack-1];
                    }
                }
            }
		}
	}

	system("pause");
	return 0;
}