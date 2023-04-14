#include <iostream>

using namespace std;


int main(int argc, char* argv[]){ //swaps the two values entered
//clrscr();

    if(argc != 2){
            cout << "Argument input error.";
            exit(1);
    }
    else{
	 /*int num1five, num2five, sumfive;
	 cin>>num1five;
	 cin>>num2five;
	 */

	/*cout<<"Values before swapping: ";
	cout<<"num1 - "<<num1five;
	cout<<"num2 - "<<num2five;
	*/
    int sumfive;
	sumfive=atoi(argv[0])+atoi(argv[1]);
	atoi(argv[1])=sumfive-atoi(argv[1]);
	atoi(argv[0])=sumfive-atoi(argv[0]);

	cout<<"Values after swapping: ";
	cout<<"num1 - "<<atoi(argv[0]);
	cout<<"num2 - "<<atoi(argv[1]);
    }

//getch();
return 0;
}
