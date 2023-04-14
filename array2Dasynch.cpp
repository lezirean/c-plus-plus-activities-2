#include <iostream>
#include <conio.h> // getch()
#include <math.h>
#include <cstdlib> // system("cls")
#include <stdio.h> // gotoxy
#include <windows.h> // SetConsoleCursorPosition and GetStd Handle (aka gotoxy)
#include <algorithm>
//#include "MMHEADER.H"
//#include "arr2DayMenuHeader.h"
#define clrscr() system("cls")


using namespace std;

//gotoxy(35,2); start kapag ifo-format yung output
int arr2D[2][5] = { 0 }, arr2D2[2][5] = {0}, rows = 2, cols = 5; //{1,2,3,4,5}, {6,7,8,9,10}

void gotoxy(short x, short y){  //definition of gotoxy function//

 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void input(int arr2D[][5], int rows, int cols){
  clrscr();
  //cout << "How many rows and columns would you like your arr2Day to have? "; cin >> rows >> cols;
  //cout << "\n\n";
  cout << "Input the elements into your 2 x 5 arr2Day: ";
  for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j)
    cin >> arr2D[i][j];
  }
}

void display(int arr2D[][5], int rows, int cols){
  clrscr();
  cout << "The elements in the arr2Day are: ";
    for(int k = 0; k < rows; ++k){
      for(int s = 0; s < cols; ++s ){
       cout << arr2D[k][s] << " ";
      }
      cout << endl;
    }
getch();
}

void searchElement(int arr2D[][5], int rows, int cols){
     clrscr();
     int val, che = 0;
     cout << "Enter value to search: "; cin >> val;
	for(int se = 0; se < rows; ++se){
     for(int se2 = 0; se2 < cols; ++se2){
	  if(arr2D[se][se2] == val){
	   ++che;
	   cout << "The value is found at index " << se << ", " << se2;
	  }
     }
	}
	if(che == 0) cout << "The value is not in the arr2Day.";
getch();
}

void swap (int &x , int &y)
{
    int temp = x ;
    x = y ;
    y = temp ;
}
void sortarr2Day(int arr2D[][5], int rows, int cols){
     clrscr();
     int x;
       for (int k = 0; k < rows; k++)
       {
        for (int m = 0; m < cols; m++)
        {
            x = m+1;
            for (int i = k; i < rows ; i++)
            {
                for (int j = x; j < cols; j++)
                {
                    if (arr2D [k][m] > arr2D [i][j])
                        swap(arr2D [k][m] ,arr2D [i][j]);
                }
                x=0;
            }
        }
       }
      int see;
      cout << "The sorted arr2Day in ascending order is: ";
      for(see = 0; see < rows; ++see){
        for(int see2 = 0; see2 < cols; ++see2){
	     cout << arr2D[see][see2] << " ";
        }
        cout << endl;
      }

      cout << "\n\n";
      cout << "The sorted arr2Day in descending order is: ";
      for(see = rows-1; see >=0; --see){
        for(int see2 = cols-1; see2 >= 0; --see2){
	   cout << arr2D[see][see2] << " ";
        }
        cout << endl;
      }
getch();
}

void deleteElement(int arr2D[][5], int rows, int cols){
    clrscr();
    int deleteEle, count = 0;
    cout << "Enter element to be deleted: "; cin >> deleteEle;

     for(int i = 0; i < rows; ++i){
      for(int i2 = 0; i2 < cols; ++i2){
       if(arr2D[i][i2] == deleteEle){
	     arr2D[i][i2] = 0;
	     count = 1;
       }
      }
     }
     int i;
     if(count == 1){
       cout << "Element deleted." << endl;
       cout << "Modified arr2Day is: ";
       for(i = 0; i < rows; ++i){
        for(int i2 = 0; i2 < cols; ++i2){
            cout << arr2D[i][i2] << " ";
        }
        cout << endl;
       }
     }
     else {
	 cout << "Element not found.";
     }
 getch();
}

void updatearr2Day(int arr2D[][5], int rows, int cols){
  clrscr();
  int newVal, atIndex, atIndex2;
  cout << "Enter the new value and indices to update arr2Day: "; cin >> newVal >> atIndex >> atIndex2;
  arr2D[atIndex][atIndex2] = newVal;
  cout << "Modified arr2Day is: ";
   for(int i = 0; i < rows; ++i){
    for(int i2 = 0; i2 < cols; ++i2){
        cout << arr2D[i][i2] << " ";
    }
    cout << endl;
   }
getch();
}

void largestElement(int arr2D[][5], int rows, int cols){
   clrscr();
    for(int i = 0; i < rows; ++i){
     for(int i2 = 0; i2 < cols; ++i2){
     if(arr2D[0][0] < arr2D[i][i2])
      arr2D[0][0] = arr2D[i][i2];
     }
    }
    cout << "The largest element is: " << arr2D[0][0];
getch();
}

void smallestElement(int arr2D[][5], int rows, int cols){
  clrscr();

   for(int i = 0; i < rows; ++i){
    for(int i2 = 0; i2 < cols; ++i2){
     if(arr2D[0][0] > arr2D[i][i2]){
      arr2D[0][0] = arr2D[i][i2];
     }
    }
   }
   cout << "The smallest element is: " << arr2D[0][0];
getch();
}

void displayEven(int arr2D[][5], int rows, int cols){
  clrscr();
  cout << "The even elements of the arr2Day: ";
   for(int i = 0; i < rows; ++i){
    for(int i2 = 0; i2 < cols; ++i2){
    if(arr2D[i][i2] % 2 == 0)
     cout << arr2D[i][i2] << " ";
    }
   }
getch();
}

void displayOdd(int arr2D[][5], int rows, int cols){
   clrscr();
   cout << "The odd elements of the arr2Day: ";
    for(int i = 0; i < rows; ++i){
     for(int i2 = 0; i2 < cols; ++i2){
     if(arr2D[i][i2] % 2 != 0)
      cout << arr2D[i][i2] << " ";
     }
    }
getch();
}

int sumOfAllElements(int arr2D[][5], int rows, int cols){

   int sum = 0;
    for(int i = 0; i < rows; ++i){
     for(int i2 = 0; i2 < cols; ++i2)
     sum += arr2D[i][i2];
    }

return sum;
}

void indexOfSmallest(int arr2D[][5], int rows, int cols){
  clrscr();
  int rowIndex = 0, colIndex = 0;

   for(int i = 0; i < rows; ++i){
    for(int i2 = 0; i2 < cols; ++i2){
      if(arr2D[rowIndex][colIndex] > arr2D[i][i2]){
      rowIndex = i; colIndex = i2;
      }
    }
   }

   cout << "The indices of the smallest element of the arr2Day is: " << rowIndex << ", " << colIndex;
getch();
}

void indexOfLargest(int arr2D[][5], int rows, int cols){
   clrscr();
   int largestIndex = 0, largestIndex2 = 0;
    for(int i = 0; i < rows; ++i){
     for(int i2 = 0; i2 < cols; ++i2){
      if(arr2D[largestIndex][largestIndex2] < arr2D[i][i2]){
       largestIndex = i; largestIndex2 = i2;
      }

     }
    }

    cout << "The indices of the largest element of the arr2Day is: " << largestIndex << ", " << largestIndex2;
getch();
}

int sumSquare(int arr2D[][5], int rows, int cols){
   int sumSquaredElements = 0;
   for(int i = 0; i < rows; ++i){
    for(int i2 = 0; i2 < cols; ++i2){
    sumSquaredElements += pow(arr2D[i][i2], 2);
    }
   }
return sumSquaredElements;
}

void copyElements(int arr2D[][5], int rows, int cols){
 clrscr();
    for(int i = 0; i < rows; ++i){
     for(int i2 = 0; i2 < cols; ++i2){
        arr2D2[i][i2] = arr2D[i][i2];
     }
    }

    cout << "Copied elements to another arr2Day: ";
    for(int i = 0; i < rows; ++i){
     for(int i2 = 0; i2 < cols; ++i2){
       cout << arr2D2[i][i2] << " ";
     }
     cout << endl;
    }
getch();
}

void searchElementBin(int arr2D[][5], int rows, int cols, int val){

     int che = 0;

	for(int se = 0; se < rows; ++se){
     for(int se2 = 0; se2 < cols; ++se2){
	  if(arr2D[se][se2] == val){
	   ++che;
	   cout << "The value is found at index " << se << ", " << se2;
	  }
     }
	}
	if(che == 0) cout << "The value is not in the arr2Day.";

}

int binSearch(int arr2D[][5], int rows, int cols, int x){

     int u;
       for (int k = 0; k < rows; k++)
       {
        for (int m = 0; m < cols; m++)
        {
            u = m+1;
            for (int i = k; i < rows ; i++)
            {
                for (int j = u; j < cols; j++)
                {
                    if (arr2D [k][m] > arr2D [i][j])
                        swap(arr2D [k][m] ,arr2D [i][j]);
                }
                u = 0;
            }
        }
       }

    int low = 0, high = rows*cols, mid;
    while (low < high){
        mid = (low + high) / 2;

        if(arr2D[mid / cols][mid % cols] == x) return 1;
        else if(arr2D[mid / cols][mid % cols] < x) low = mid + 1;
        else high = mid;
    }
 return -1;

}

void insertionSort(int arr2D[][5], int rows, int cols){
 clrscr();

/*    int i, j, k;                          // real insertion sort pero may error huhu why naman ganon

    int min_value = arr2D[0][0];
    for(i = 0; i < rows; ++i)
        for(j = 0; j < cols; ++j)
            if(arr2D[i][j] < min_value)
              min_value = arr2D[i][j];

    for(k = 0; k < rows; ++k){
        for(i = 1; i < rows*cols; ++i){
            int tmp_value = arr2D[k][i];
            for(j = i; j >= 1 && tmp_value >= min_value && arr2D[k][j-1] > tmp_value; --j)
                arr2D[k][j] = arr2D[k][j-1];
            arr2D[k][j] = tmp_value;

            if(tmp_value < min_value) break;
        }
    }
*/
int x;
for (int k = 0; k < rows; k++)
       {
        for (int m = 0; m < cols; m++)
        {
            x = m+1;
            for (int i = k; i < rows ; i++)
            {
                for (int j = x; j < cols; j++)
                {
                    if (arr2D [k][m] > arr2D [i][j])
                        swap(arr2D [k][m] ,arr2D [i][j]);
                }
                x=0;
            }
        }
       }


    cout << "Sorted elements using Insertion Sort: ";
    for(int i = 0; i < rows; ++i){
      for(int j = 0; j < cols; ++j){
        cout << arr2D[i][j] << " ";
      }
      cout << endl;
    }

getch();
}

int main(void){
  int choice;

    do{ clrscr();
	cout << "arr2DAY MENU" << endl << endl ;
	cout << "1. Input elements of the arr2Day" << endl;
	cout << "2. Display the elements of the arr2Day" << endl;
	cout << "3. Search elements from the arr2Day" << endl;
	cout << "4. Sort the elements of the arr2Day" << endl;
	cout << "5. Delete element from the arr2Day" << endl;
	cout << "6. Update/Edit the element of the arr2Day" << endl;
	cout << "7. Largest element in the arr2Day" << endl;
	cout << "8. Smallest element in the arr2Day" << endl;
	cout << "9. All even numbers in the arr2Day" << endl;
	cout << "10. All odd numbers in the arr2Day" << endl;
	cout << "11. Sum of all the elements in the arr2Day" << endl;
	cout << "12. Display the index of the smallest element of the arr2Day" << endl;
	cout << "13. Display the index of the largest element of the arr2Day" << endl;
	cout << "14. Sum of all the squares of the arr2Day" << endl;
	cout << "15. Copy elements from 1D arr2Day to another 1D arr2Day" << endl;
	cout << "16. Search element in 1D arr2Day using Binary Search" << endl;
	cout << "17. Sort elements in 1D arr2Day using Insertion Sort" << endl;
	cout << "18. Exit" << endl;
	cout << "Enter your choice: "; cin >> choice;

	switch(choice){
	     case 1:  {input(arr2D, rows, cols);}
	     break;
	     case 2:  {display(arr2D, rows, cols);}
	     break;
	     case 3:  {searchElement(arr2D, rows, cols);}
	     break;
	     case 4:  {sortarr2Day(arr2D, rows, cols);}
	     break;
	     case 5:  {deleteElement(arr2D, rows, cols);}
	     break;
	     case 6:  {updatearr2Day(arr2D, rows, cols);}
	     break;
	     case 7:  {largestElement(arr2D, rows, cols);}
	     break;
	     case 8:  {smallestElement(arr2D, rows, cols);}
	     break;
	     case 9:  {displayEven(arr2D, rows, cols);}
	     break;
	     case 10: {displayOdd(arr2D, rows, cols);}
	     break;
	     case 11: {
			clrscr();
			cout << "The sum of all the elements in the arr2Day is: " << sumOfAllElements(arr2D, rows, cols);
			getch();
		      }
	     break;
	     case 12: {indexOfSmallest(arr2D, rows, cols);}
	     break;
	     case 13: {indexOfLargest(arr2D, rows, cols);}
	     break;
	     case 14: {
		       clrscr();
		       cout << "The sum of all the squares in the arr2Day is: " << sumSquare(arr2D, rows, cols);
		       getch();
		      }
         break;
         case 15: { copyElements(arr2D, rows, cols); }
         break;
         case 16: { clrscr(); int target, isPresent;
                     cout << "Enter the element to search: "; cin >> target;
                     isPresent = binSearch(arr2D, rows, cols, target);
                       if(isPresent != -1){
                            //cout << "The element was found at index " << isPresent;
                            searchElementBin(arr2D, rows, cols, target);
                       }
                       else cout << "The element is not found in the arr2Day.";
                     getch();
                  }
         break;
         case 17: {insertionSort(arr2D, rows, cols);}


	}//  end of switch
    }while(choice < 18 && choice > 0);
 return 0;
}// end of main
