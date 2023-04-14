#include <iostream>
#include <math.h>

using namespace std;


int main(int argc, char* argv[]){ //square and cube of a number

    if(argc != 2) cout << "Argument input error.";
    else{
        cout << "Squared number: " << pow(atoi(argv[1]), 2) << "\n";
        cout << "Cubed number: " << pow(atoi(argv[1]), 3) << "\n";
    }

return 0;
}
