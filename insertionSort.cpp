#include <iostream>
using namespace std;

int main(void){
    int Array[5] = {5,1,2,4,3};
    int sizeArray = sizeof(Array)/sizeof(Array[0]);

    for(int i = 1; i < sizeArray; ++i){ // start with index 1 because index 0 is already sorted
        int value = Array[i];   // stores current array element
        int vacant = i;         // stores the index of the current iteration

        while(vacant > 0 && Array[vacant-1] > value){       // loop to repeatedly place the
            Array[vacant] = Array[vacant-1];                //
            --vacant;                                       //
        }
        Array[vacant] = value;                              // stores the current array element to the vacant position it belongs
    }

    for(int i = 0; i < sizeArray; ++i) cout << Array[i] << " ";
return 0;
}
