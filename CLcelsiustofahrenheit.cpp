#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


int main(int argc, char* argv[]){ //convert celsius to fahrenheit

    if(argc != 2) cout << "Argument input error.";
    else{
        cout << "Celsius to Fahrenheit: " << fixed << setprecision(2) << (1.8*(atof(argv[1]))) + 32 << "F";
        cout << "\n";
        //float f=(1.8*atof(argv[1]))+32;
        //cout << f;

    }

return 0;
}
