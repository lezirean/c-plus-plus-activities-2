#include <iostream>
#include <conio.h> // getch()
#include <math.h>
#include <cstdlib> // system("cls")
#include <stdio.h> // gotoxy
#include <windows.h> // SetConsoleCursorPosition and GetStd Handle (aka gotoxy)
#include <algorithm>
#include "MMHEADER.H"
//#include "arrayMenuHeader.h"
#define clrscr() system("cls")


using namespace std;
//int arr[5] = {1,2,3,4,5}, arr2[5] = {0}, numElements = 5;

//gotoxy(35,2); start kapag ifo-format yung output
/* start1  int arr[5] = {1,2,3,4,5}, arr2[5] = {0}, numElements = 5;

void gotoxy(short x, short y){  //definition of gotoxy function//

 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void input(int arr[], int numElements){
  clrscr();
  cout << "How many elements would you like your array to have? "; cin >> numElements;
  cout << "\n\n";
  cout << "Input the elements into your array: ";
  for(int i = 0; i < numElements; ++i) cin >> arr[i];
}

void display(int arr[], int numElements){
  clrscr();
  cout << "The elements in the array are: ";
    for(int k = 0; k < numElements; ++k){
       cout << arr[k] << " ";
    }
getch();
}

void searchElement(int arr[], int numElements){
     clrscr();
     int val, che = 0;
     cout << "Enter value to search: "; cin >> val;
	for(int se = 0; se < numElements; ++se){
	  if(arr[se] == val){
	   ++che;
	   cout << "The value is found at index " << se;
	  }
	}
	if(che == 0) cout << "The value is not in the array.";
getch();
}
void sortArray(int arr[], int numElements){
     clrscr();
     int temp;
      for(int ele = 0; ele < numElements-1; ++ele){
       int minIndex = ele;
	for(int afterEle = ele+1; afterEle < numElements; ++afterEle){
	 if(arr[afterEle] < arr[minIndex]){
	   minIndex = afterEle;
	 }
	}
	temp = arr[ele];
	arr[ele] = arr[minIndex];
	arr[minIndex] = temp;
      }
      int see;
      cout << "The sorted array in ascending order is: ";
      for(see = 0; see < numElements; ++see)
	cout << arr[see] << " ";

      cout << "\n\n";
      cout << "The sorted array in descending order is: ";
      for(see = numElements-1; see >=0; --see)
	cout << arr[see] << " ";
getch();
}

void deleteElement(int arr[], int numElements){
    clrscr();
    int deleteEle, count = 0;
    cout << "Enter element to be deleted: "; cin >> deleteEle;
     for(int i = 0; i < numElements; ++i){
      if(arr[i] == deleteEle){
	 arr[i] = 0;
	 count = 1;
      }
     }
     int i;
     if(count == 1){
       cout << "Element deleted." << endl;
       cout << "Modified array is: ";
       for(i = 0; i < numElements; ++i) cout << arr[i] << " ";
     } else {
	 cout << "Element not found.";
     }
/*       for(int j = i; j < numElements-1; ++j){
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
       for(i = 0; i < numElements-1; ++i) cout << arr[i] << " ";
     }
 */
//comment getch();
//comment }

/*start2 void updateArray(int arr[], int numElements){
  clrscr();
  int newVal, atIndex;
  cout << "Enter the new value and index to update array: "; cin >> newVal >> atIndex;
  arr[atIndex] = newVal;
  cout << "Modified array is: ";
   for(int i = 0; i < numElements; ++i) cout << arr[i] << " ";
getch();
}

void largestElement(int arr[], int numElements){
   clrscr();
    for(int i = 1; i < numElements; ++i){
     if(arr[0] < arr[i])
      arr[0] = arr[i];
    }
    cout << "The largest element is: " << arr[0];
getch();
}

void smallestElement(int arr[], int numElements){
  clrscr();
   for(int i = 1; i < numElements; ++i){
    if(arr[0] > arr[i])
     arr[0] = arr[i];
   }
   cout << "The smallest element is: " << arr[0];
getch();
}

void displayEven(int arr[], int numElements){
  clrscr();
  cout << "The even elements of the array: ";
   for(int i = 0; i < numElements; ++i){
    if(arr[i] % 2 == 0)
     cout << arr[i] << " ";
   }
getch();
}

void displayOdd(int arr[], int numElements){
   clrscr();
   cout << "The odd elements of the array: ";
    for(int i = 0; i < numElements; ++i){
     if(arr[i] % 2 != 0)
      cout << arr[i] << " ";
    }
getch();
}

int sumOfAllElements(int arr[], int numElements){

   int sum = 0;
    for(int i = 0; i < numElements; ++i)
     sum += arr[i];

return sum;
}

void indexOfSmallest(int arr[], int numElements){
  clrscr();
  int smallestIndex = 0;
   for(int i = 1; i < numElements; ++i){
    if(arr[smallestIndex] > arr[i])
     smallestIndex = i;
   }
   cout << "The index of the smallest element of the array is: " << smallestIndex;
getch();
}

void indexOfLargest(int arr[], int numElements){
   clrscr();
   int largestIndex = 0;
    for(int i = 1; i < numElements; ++i){
     if(arr[largestIndex] < arr[i])
      largestIndex = i;
    }

    cout << "The index of the largest element of the array is: " << largestIndex;
getch();
}

int sumSquare(int arr[], int numElements){

   int sumSquaredElements = 0;
   for(int i = 0; i < numElements; ++i){
    sumSquaredElements += pow(arr[i], 2);
   }
return sumSquaredElements;
}

void copyElements(int arr[], int numElements){
 clrscr();
    for(int i = 0; i < numElements; ++i){
        arr2[i] = arr[i];
    }

    cout << "Copied elements to another array: ";
    for(int i = 0; i < numElements; ++i){
       cout << arr2[i] << " ";
    }
getch();
}

int binSearch(int arr[], int numElements, int x){
    int i, key, j;  // used insertion sort
    for (i = 1; i < numElements; i++){
        key = arr[i];
        j = i - 1;
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */  //end2
/*start3        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

   int low = 0, high = numElements - 1;
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
      return mid;

    if (arr[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

void insertionSort(int arr[], int numElements){
 clrscr();
    int i, key, j;  // used insertion sort
    for (i = 1; i < numElements; i++){
        key = arr[i];
        j = i - 1;
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */  //end3
  /*start4      while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    cout << "Sorted elements using Insertion Sort: ";
    for(int i = 0; i < numElements; ++i) cout << arr[i] << " ";

getch();
}
end4*/

int main(void){
  int choice;

    do{ clrscr();
	cout << "ARRAY MENU" << endl << endl ;
	cout << "1. Input elements of the array" << endl;
	cout << "2. Display the elements of the array" << endl;
	cout << "3. Search elements from the array" << endl;
	cout << "4. Sort the elements of the array" << endl;
	cout << "5. Delete element from the array" << endl;
	cout << "6. Update/Edit the element of the array" << endl;
	cout << "7. Largest element in the array" << endl;
	cout << "8. Smallest element in the array" << endl;
	cout << "9. All even numbers in the array" << endl;
	cout << "10. All odd numbers in the array" << endl;
	cout << "11. Sum of all the elements in the array" << endl;
	cout << "12. Display the index of the smallest element of the array" << endl;
	cout << "13. Display the index of the largest element of the array" << endl;
	cout << "14. Sum of all the squares of the array" << endl;
	cout << "15. Copy elements from 1D array to another 1D array" << endl;
	cout << "16. Search element in 1D array using Binary Search" << endl;
	cout << "17. Sort elements in 1D array using Insertion Sort" << endl;
	cout << "18. Exit" << endl;
	cout << "Enter your choice: "; cin >> choice;

	switch(choice){
	     case 1:  {input(arr, numElements);}
	     break;
	     case 2:  {display(arr, numElements);}
	     break;
	     case 3:  {searchElement(arr, numElements);}
	     break;
	     case 4:  {sortArray(arr, numElements);}
	     break;
	     case 5:  {deleteElement(arr, numElements);}
	     break;
	     case 6:  {updateArray(arr, numElements);}
	     break;
	     case 7:  {largestElement(arr, numElements);}
	     break;
	     case 8:  {smallestElement(arr, numElements);}
	     break;
	     case 9:  {displayEven(arr, numElements);}
	     break;
	     case 10: {displayOdd(arr, numElements);}
	     break;
	     case 11: {
			clrscr();
			cout << "The sum of all the elements in the array is: " << sumOfAllElements(arr, numElements);
			getch();
		      }
	     break;
	     case 12: {indexOfSmallest(arr, numElements);}
	     break;
	     case 13: {indexOfLargest(arr, numElements);}
	     break;
	     case 14: {
		       clrscr();
		       cout << "The sum of all the squares in the array is: " << sumSquare(arr, numElements);
		       getch();
		      }
         break;
         case 15: { copyElements(arr, numElements); }
         break;
         case 16: { clrscr(); int target, isPresent;
                     cout << "Enter the element to search: "; cin >> target;
                     isPresent = binSearch(arr, numElements, target);
                       if(isPresent != -1) cout << "The element was found at index " << isPresent;
                       else cout << "The element is not found in the array.";
                     getch();
                  }
         break;
         case 17: {insertionSort(arr, numElements);}


	}//  end of switch
    }while(choice < 18 && choice > 0);
 return 0;
}// end of main
