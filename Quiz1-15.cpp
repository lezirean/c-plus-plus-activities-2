#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct bday{
    string date;
};

struct employee{
    string name;
    bday birthdate;
}Emp;


int main(){
    string store;
    employee arr[1];

    cout << "Enter employee's name: ";
    getline(cin, Emp.name);

    cout << "Enter employee's birthday: ";
    getline(cin, Emp.birthdate.date);

    arr[0].name = Emp.name;
    arr[0].birthdate.date = Emp.birthdate.date;

    cout << endl << endl;

    cout << "Employee's name is: " << arr[0].name << "born in " << arr[0].birthdate.date;


return 0;
}
