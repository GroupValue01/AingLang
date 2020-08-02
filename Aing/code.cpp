#include "code.h"

char* Code::getCode(wstring wstr) {
    const wchar_t *arr = wstr.c_str();

    char spl[INT_MAX];

    int a = 0;

    for(int i = 0; i < sizeof(arr); i++) {
        if(arr[i] == '잉') {
            a = 0;
        }
        if(arr[i] == '이') {
            a++;
            spl[i] = (char)a;
        }
    }

    return spl;
}
