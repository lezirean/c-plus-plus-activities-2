#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

struct userInfo{

  string username;
  string pass;
  string gender;
  string bday;
  string contact;
}userType;


int main(){
    string store, store2;

    cout << "Enter username: ";
    getline (cin, store);
    cout << "Enter password: ";
    getline (cin, store2);

    fstream myFile;
    myFile.open("userType.txt", ios::in);
    if(myFile.is_open()){
        string line, temp;

        while(getline(myFile, line)){
            if(line == store){
                cout << line;
            }else if(line == store2){
                cout << line;
            }else
              cout << line;

        }

        myFile.close();
    }
return 0;
}
