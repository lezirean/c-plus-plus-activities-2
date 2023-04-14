#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct movies{

  string title;
  int year;

}movieType;


int main(){
    string store;

    cout << "Enter title: ";
    getline (cin, movieType.title);
    cout << "Enter year: ";
    getline (cin, store);
    stringstream(store) >> movieType.year;

    cout << endl << endl;

    cout << "Your movie is: ";
    cout << movieType.title;
    cout << " (" << movieType.year << ")\n";

return 0;
}
