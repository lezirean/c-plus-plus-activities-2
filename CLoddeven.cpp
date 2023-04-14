#include <iostream>

using namespace std;

int main(int argc, char* argv []){
    if(argc != 2){
        cout << "\n" << "Argument input error." << "\n";
        exit(1);
    }

    if(atoi(argv[1]) % 2 == 0)
        cout << "\n" << "Even number." << "\n";
    else
        cout << "\n" << "Odd number." << "\n";

return 0;
}
