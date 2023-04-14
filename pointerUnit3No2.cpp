#include <iostream>
using namespace std;

// calculate the length of the string using pointers
int main(void){
        char str[50];
        char * strp;
        int ctr = 0;

        cout << "Input a string: "; cin >> str;

        strp = str;

        while(*strp != '\0'){
                ++ctr;
                ++strp;
        }

        cout << endl << "The length of the string is: " << ctr;


return 0;
}
