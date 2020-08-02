#include <iostream>
#include <cstdio>
#include <cstdbool>
#include <cstdlib>

int main(int argc, char* argv[]) {
	bool b=true;
	char a;

    char de[9]={'>', '<', '+', '-', '.', ',', '[', ']', 0};

    int x=-1000;
	while(b) {
		a = (char)getchar();
		if (a == '\n') {
			b = false;
		}else if(a==-66){//아
            a = (char)getchar();
            if(a==-58)x=0;
        }else if(a==-64){
            a = (char)getchar();
            if(a==-52){//이
                x+=1;
            }else if(a==-41){//잉
                if(x>0 && x<9){
                    std::cout << de[x-1];
                }
                x=-1000;
            }
		}
	}
    std::cout << "\n";
	system("pause");
	return 0;
}