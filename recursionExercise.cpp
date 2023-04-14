#include <iostream>
#include <conio.h>
#include <cstdlib>
#define clrscr() system("cls")

using namespace std;

int sumD(int n){      // sum of the digits in a number
    if( n < 0 ) n*= -1;
    if ( n == 0) return n;
    else
        return (n%10) + sumD(n/10);
}

int Find(int decimal_number){   // Decimal to binary conversion
    if (decimal_number == 0)
        return 0;
    else
        return (decimal_number % 2 + 10 *
                Find(decimal_number / 2));
}

long long int factorial(long long int n){   // factorial function
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int sumEven(int start){ // sum of even numbers from 1 to 10

    if(start == 10) return start;
    if(start % 2 != 0) return sumEven(start+1);
    //if (start % 2 == 0) return start + sumEven(start+1);
    return start + sumEven(start+1);

}

int sumRange(int m, int n){ // sum of the elements from m to n inclusive
    if(m == n) return m;
    return m + sumRange(m+1, n);
}

void printn(int num){   // print pyramid pattern

    if (num == 0)
        return;
    cout << "* ";

    printn(num - 1);
}


void pattern(int n, int i){ // pyramid pattern

    if (n == 0)
        return;
    printn(i);
    cout << endl;

    pattern(n - 1, i + 1);
}

bool isPrime(int n, int i = 2){ // check if a number is prime

    if (n <= 2)
        return (n == 2) ? true : false;
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;

    return isPrime(n, i + 1);
}


bool isConsonant(char ch){ // Function to check for consonant


    ch = toupper(ch); // To handle lower case

    return !(ch == 'A' || ch == 'E' ||
            ch == 'I' || ch == 'O' ||
            ch == 'U') && ch >= 65 && ch <= 90;
}

int totalConsonants(string str, int n){ // to count total number of consonants from 0 to n-1

    if (n == 1)
        return isConsonant(str[0]);

    return totalConsonants(str, n - 1) +
           isConsonant(str[n-1]);
}

int main(void){
    clrscr();

    int choice;

    cout << "Recursion Submenu" << endl;
    cout << "1. Factorial" << endl;
    cout << "2. Sum of numbers in a range (inclusive)" << endl;
    cout << "3. Sum of even numbers from 1 to 10" << endl;
    cout << "4. Sum of the digits in a number" << endl;
    cout << "5. Print a pattern using recursion" << endl;
    cout << "6. Check if a number is a prime" << endl;
    cout << "7. Count consonants in a string" << endl;
    cout << "8. Decimal to binary" << endl;
    cout << "9. Exit" << endl;
    cout << "Enter your choice: "; cin >> choice;

    switch(choice){
        case 1: { clrscr();
                  long long int num;
                  cout << "Enter a number: "; cin >> num;
                  cout << endl << "The factorial of the number is " << factorial(num);
                  getch();
                }
        break;
        case 2: { clrscr();
                  int num1, num2;
                  cout << "Enter a two numbers to get sum: "; cin >> num1 >> num2;
                  cout << endl << "The sum within the range is " << sumRange(num1, num2);
                  getch();
                }
        break;
        case 3: { clrscr();
                  int num = 1;
                  cout << "The sum of even numbers from 1-10 is " << sumEven(num);
                  getch();
                }
        break;
        case 4: { clrscr();
                  int num;
                  cout << "Enter a number: "; cin >> num;
                  cout << endl << "The sum digits of the number is " << sumD(num);
                  getch();
                }
        break;
        case 5: { clrscr();
                  int rows = 5;
                  pattern(rows, 1);
                }
        break;
        case 6: { clrscr();
                  int n;
                  cout << "Enter a number: "; cin >> n;
                  if (isPrime(n))
                   cout << "Yes";
                  else
                   cout << "No";
                }
        break;
        case 7: { clrscr();
                  string str;
                  cout << "Enter a string: "; cin >> str;
                  cout << "The number of consonants is: " << totalConsonants(str, str.length());
                }
        break;
        case 8: { clrscr();
                  int decimal;
                  cout << "Enter a number: "; cin >> decimal;
                  cout << "The binary sequence is: " << Find(decimal);
                }
    }
return 0;
}
