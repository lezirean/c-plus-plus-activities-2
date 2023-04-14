#include <iostream>
using namespace std;

// swap two numbers using pointers
int main(void){
        int num1 = 5, num2 = 6;
        int * p1 = &num1, * p2 = &num2;

        cout << "The numbers before swapping is: " << num1 << " and " << num2 << endl;

        int * temp = p1;
        p1 = p2;
        p2 = temp;

        cout << "The numbers after swapping is: " << *p1 << " and " << *p2;


return 0;
}
