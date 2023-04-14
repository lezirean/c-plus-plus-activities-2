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
    string store;

    cout << "Enter username: ";
    getline (cin, userType.username);
    cout << "Enter password: ";
    getline (cin, userType.pass);
    cout << "Enter gender: ";
    getline (cin, userType.gender);
    cout << "Enter birthday: ";
    getline (cin, userType.bday);
    cout << "Enter contact number: ";
    getline (cin, userType.contact);

    fstream myFile;
    myFile.open("userType.txt", ios::out);
    if(myFile.is_open()){
        myFile << userType.username << endl;
        myFile << userType.pass << endl;
        myFile << userType.gender << endl;
        myFile << userType.bday << endl;
        myFile << userType.contact << endl;
        myFile.close();
    }
return 0;
}
