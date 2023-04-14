#include <iostream>


using namespace std;

int sumEven(int start){

    if(start == 10) return start;
    if(start % 2 != 0) return sumEven(start+1);
    //if (start % 2 == 0) return start + sumEven(start+1);
    return start + sumEven(start+1);

}

int main(void){
 int start = 1;
 cout << "The sum of all even numbers from 1 to 10 is: " << sumEven(start);

return 0;
}
