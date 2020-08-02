#include "aing.h"
#include "code.h"

int main(int argc, char** argv) {
	wcin.imbue( locale( "C" ) );
    wcout.imbue( locale( "C" ) ); 

	Code code;
	
	wstring ac;
	
	wcin >> ac;

	std::cout << std::endl;

	char* charArray = code.getCode(ac);

	for(int i = 0; i < sizeof(charArray); i++) {
		std::cout << charArray[i];
	}

	std::cout << std::endl;
	
	system("pause");

	return 0;
}
