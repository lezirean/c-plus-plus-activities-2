#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

// output the reverse of the string using pointers

int main(void){
        char str[50]; char * p;

        cout << "Input a string: "; cin >> str;

        p = str;

        cout << endl << "The string in reverse is: ";
        for(int i = (strlen(str)-1); i >= 0; --i){
            cout << p[i];
        }


return 0;
}
