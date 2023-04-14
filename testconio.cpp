#include <conio.h> // getch()
#include <iostream>
#include <cstdlib> // system("cls")
#include <math.h>
#include <stdio.h> // gotoxy
#include <windows.h> // gotoxy
//#include <bits/stdc++.h>
using namespace std;
int arr[5], numElements;
void gotoxy(short x, short y);

void input(void);
void display(void);
int main(void){
  int choice; //arr[5];

    do{ system("cls");
    gotoxy(20,2);
	cout << "ARRAY MENU" << endl;
	cout << "1. Input elements of the array" << endl;
	cout << "2. Display the elements of the array" << endl;
	cout << "3. Search elements from the array" << endl;
	cout << "4. Sort the elements of the array" << endl;
	cout << "5. Delete element from the array" << endl;
	cout << "6. Update/Edit the element of the array" << endl;
	cout << "7. Largest element in the array" << endl;
	cout << "8. Smallest element in the array" << endl;
	cout << "9. Display all even numbers in the array" << endl;
	cout << "10. Display all odd numbers in the array" << endl;
	cout << "11. Display the sum of all the elements in the array" << endl;
	cout << "12. Display the index of the smallest element of the array" << endl;
	cout << "13. Display the index of the largest element of the array" << endl;
	cout << "14. Display the sum of all the squares of the array" << endl;
	cout << "15. Exit" << endl;
	cout << "Enter your choice: "; cin >> choice;

	switch(choice){
	   case 1: /*system("cls");
		   for(int i = 0; i < 5; ++i){
		     cin >> arr[i];
		   }*/ {input();}
	   break;
	   case 2:/*system("cls");
		   for(int k = 0; k < 5; ++k){
		     cout << arr[k] << " ";
		   }  getch();*/
		      {display();}
	   break;
	   case 3: {system("cls"); int val, che;
		   cout << "Enter value to search: "; cin >> val;
		   for(int se = 0; se < 5; ++se){
		      if(arr[se] == val){
			 ++che;
			 cout << "The value is found at index " << se;
		      }
		   }
		   if(che == 0) cout << "The value is not in the array.";
		   getch();}
	   break;
	   case 4: {system("cls");
		   int temp;
		   for(int ele = 0; ele < 5-1; ++ele){
		      int minIndex = ele;
		      for(int afterEle = ele+1; afterEle < 5; ++afterEle){
			if(arr[afterEle] < arr[minIndex]){
			  minIndex = afterEle;
			}
		      }
		      temp = arr[ele];
		      arr[ele] = arr[minIndex];
		      arr[minIndex] = temp;
		}
		   for(int see = 0; see < 5; ++see)
			cout << arr[see] << " ";
		   getch();}

	     break;
	     case 5: {system("cls");
		     int deleteEle, count = 0;
		     cout << "Enter element to be deleted: "; cin >> deleteEle;
		     for(int i = 0; i < 5; ++i){
		       if(arr[i] == deleteEle){
			  for(int j = i; j < 5-1; ++j){
			    arr[j] = arr[j+1];
			  }
			  ++count;
			  break;
		       }
		     }
		     if(count == 0) cout << "Element not found.";
		     else{
			cout << "Element deleted." << endl;
			cout << "Modified array is: ";
			for(int i = 0; i < 5-1; ++i) cout << arr[i] << " ";
		     }
		     getch();}
	     break;
	     case 6: {system("cls");
		     int newVal, atIndex;
		     cout << "Enter the new value and index to update array: "; cin >> newVal >> atIndex;
		     arr[atIndex] = newVal;
		     cout << "Modified array is: ";
		     for(int i = 0; i < 5; ++i) cout << arr[i] << " ";
		     getch();}
	     break;
	     case 7: {system("cls");
		     for(int i = 1; i < 5; ++i){
			if(arr[0] < arr[i])
			   arr[0] = arr[i];
		     }
		     cout << "The largest element is: " << arr[0];
		     getch();}
	     break;
	     case 8: {system("cls");
		     for(int i = 1; i < 5; ++i){
			if(arr[0] > arr[i])
			   arr[0] = arr[i];
		     }
		     cout << "The smallest element is: " << arr[0];
		     getch();}
	     break;
	     case 9: {system("cls");
		     cout << "The even elements of the array: ";
		     for(int i = 0; i < 5; ++i){
		      if(arr[i] % 2 == 0)
		       cout << arr[i] << " ";
		     }
		     getch();}
	     break;
	     case 10: {system("cls");
		      cout << "The odd elements of the array: ";
		     for(int i = 0; i < 5; ++i){
		      if(arr[i] % 2 != 0)
		       cout << arr[i] << " ";
		     }
		     getch();}
	     break;
	     case 11: {system("cls");
		      int Sum = 0;
		      for(int i = 0; i < 5; ++i)
		      Sum += arr[i];
		      cout << "The sum of all the elements in the array is: " << Sum;
		      Sum = 0;
		      getch();}
	     break;
	     case 12:{ system("cls");
		      int smallestIndex = 0;
		      for(int i = 1; i < 5; ++i){
			if(arr[smallestIndex] > arr[i])
			  smallestIndex = i;
		      }
		      cout << "The index of the smallest element of the array is: " << smallestIndex;
		      getch();}
	     break;
	     case 13: {system("cls");
		      int largestIndex = 0;
		      for(int i = 1; i < 5; ++i){
			if(arr[largestIndex] < arr[i])
			  largestIndex = i;
		      }
		      cout << "The index of the largest element of the array is: " << largestIndex;
		      getch();}
	     break;
	     case 14: system("cls");
		      int sumSquare = 0;
		      for(int i = 0; i < 5; ++i){
			sumSquare += pow(arr[i], 2);
		      }
		      cout << "The sum of all the squares in the array is: " << sumSquare;
		      getch();

	}//  end of switch
    }while(choice < 15 && choice > 0);
return 0;
}// end of main

void input(void){
    system("cls");
    cout << "How many elements would you like your array to have? "; cin >> numElements;

    cout << "\n\n";
    cout << "Enter the elements into your array: ";
        for (int i = 0; i < numElements; ++i){
            cin >> arr[i];
        }
}

void display(void){
    system("cls");
    cout << "The elements in your array are: ";
    for (int i = 0; i < numElements; ++i){
            cout << arr[i] << " ";
        }
getch();
}

void gotoxy(short x, short y)           //definition of gotoxy function//
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
