#include <iostream>

using namespace std;

// add two integers using call by reference

int addInts(int& a, int& b){
    return a + b;
}

int main(void){
    int num1, num2;

    cout << "Enter two integers: "; cin >> num1 >> num2;

    cout << endl << "The sum of two integers is: " << addInts(num1, num2);

return 0;
}
