#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

// count the number of vowels and consonants in the string using pointers

int main(void){
        char str[50]; char * p;
        int vowel = 0, conso = 0;



        cout << "Input a string: "; cin >> str;

        p = str;


        for(int i = (strlen(str)-1); i >= 0; --i){
            if(p[i] == 'A' || p[i] == 'E' || p[i] == 'I' || p[i] == 'O' || p[i] == 'U' || p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u' ){
                ++vowel;
            }
            else ++conso;
            //cout << p[i];
        }

        cout << endl << "The number of vowels in the string is: " << vowel;
        cout << endl << "The number of consonants in the string is: " << conso;


return 0;
}
