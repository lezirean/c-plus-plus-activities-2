#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <windows.h>
#include <algorithm>
#include "MMHEADER.H"

#define clrcscr() system("cls")
/*int even(int num);
int odd (int num);
//void mmbox();
void SPDQ (){   //Calculates the sum, product, difference, and quotient from the 2 numbers entered
   //system("cls");
   clrscr();
				float num1, num2, sum, diff, prod, quo;
		 gotoxy(30,11);	cout<<"Enter two numbers: "; cin>>num1>>num2;
				//cin>>num1>>num2;

				sum=num1+num2;
				diff=num1-num2;
				prod=num1*num2;
				quo=num1/num2;

				//clrscr();
		   gotoxy(30,13); cout<<"The sum is "<<setprecision(2)<<sum<<endl;
		   gotoxy(30,14); cout<<"The difference is "<<setprecision(2)<<diff<<endl;
		   gotoxy(30,15); cout<<"The product is "<<setprecision(2)<<prod<<endl;
		   gotoxy(30,16); cout<<"The quotient is "<<setprecision(2)<<quo<<endl;
				getch();
}

void quadratic(int a, int b, int c){   //computes the roots of the perfect square trinomial from the 3 constants in a quadratic equation
float x1, x2, d; gotoxy(15,13); cout<<"The quadratic equation for the values you inputted is: "<<a<<"x^2+"<<b<<"x+"<<c;

	 d=b*b-(4*a*c);
	 x1=(-b+sqrt(d))/(2*a);
	 x2=(-b-sqrt(d))/(2*a);
	   //clrscr();
	   gotoxy(15,14);
	   cout<<"The roots of the quadratic equation are: "<<setprecision(2)<<x1<<" and "<<setprecision(2)<<x2;
getch();
}

float arearec(float length, float width){ //computes the area of the rectangle given the length and width
    float area= length*width;

return area;
}

float perimeterrec(float length, float width){//computes the perimeter of the rectangle given the length and width
   float perimeter= 2*(length+width);
return perimeter;
}

float average(){ //gets the total of 3 values and divides it by 3 to get average grade
   float pre, mid, finals, ave;
    gotoxy(13,12);
     cout<<"Enter your grades from prelim, midterm, and finals: ";
     cin>>pre>>mid>>finals;
     ave=(pre+mid+finals)/3; gotoxy(28,13);

return ave;
}

float CtoF( float celsius ){ //converts degrees celsius to degrees fahrenheit

float f=(1.8*celsius)+32;
return f;

}

void squareAndCube(){ //multiplies the given number by 2 and 3 times to itself
     clrscr();
       int num;
       gotoxy(30,12);
       cout<<"Enter a number: "; cin>>num;
       gotoxy(24,14);
       cout<<"The square of the number is = "<<num*num;
       gotoxy(24,15);
       cout<<"The cube of the number is = "<<num*num*num;
       getch();
}

/*void mmboxSEQ(){ //prints out a rectangular box of asterisks
for(int hori=20; hori<=65; ++hori){
	   gotoxy(hori,1);
	   cout<<"*";
	   gotoxy(hori,17);
	   cout<<"*";
	}

	for(int verti=1; verti<=17; ++verti){
	    gotoxy(20,verti);
	    cout<<"*";
	    gotoxy(65, verti);
	    cout<<"*";
	}
} */
/*void hello(){  //prints out "Hello, World!" in the console
clrscr();
 gotoxy(33,12);
 cout<<"Hello, World!";
 getch();
}

void swap(){ //swaps the two values entered
clrscr();
	int num1five, num2five, sumfive;
	gotoxy(30,9);
	cout<<"Enter first number: "; cin>>num1five;
	gotoxy(30,10);
	cout<<"Enter second number: "; cin>>num2five;
	//clrscr();
	gotoxy(30,12);
	cout<<"Values before swapping: ";
	gotoxy(30,13);
	cout<<"num1 - "<<num1five;
	gotoxy(30,14);
	cout<<"num2 - "<<num2five;

	sumfive=num1five+num2five;
	num2five=sumfive-num2five;
	num1five=sumfive-num1five;
	//clrscr();
	gotoxy(30,16);
	cout<<"Values after swapping: ";
	gotoxy(30,17);
	cout<<"num1 - "<<num1five;
	gotoxy(30,18);
	cout<<"num2 - "<<num2five;

getch();
}

void caseseven (float diameter){ //calculates the area and circumference of the circle from the entered diameter
float radius, Area, circumference;
radius=diameter/2;
  Area=3.14*radius*radius;
  circumference=2*3.14*radius;
  gotoxy(28,14);
  cout<<"The area is: "<<setprecision(2)<<Area;
  gotoxy(28,15);
  cout<<"The circumference is: "<<setprecision(2)<<circumference;
getch();
}

void casenine(){ //serves as a payroll system that computes an employee's gross pay and net pay
clrscr();
  char empNo[15], firstName[15],middleName[15],lastName[15], jobPosition[15];
  float hoursWorked, deduction, ratePerHour, grossPay, netPay;
  gotoxy(25,8);
  cout<<"Please enter your employee number: "; cin>>empNo;
  gotoxy(25,9);
  cout<<"Enter your first name: "; cin>>firstName;
  gotoxy(25,10);
  cout<<"Enter your middle name: "; cin>>middleName;
  gotoxy(25,11);
  cout<<"Enter your last name: "; cin>>lastName;
  gotoxy(25,12);
  cout<<"Enter your job position: "; cin>>jobPosition;
  gotoxy(25,13);
  cout<<"Enter the number of hours worked: "; cin>>hoursWorked;
  gotoxy(25,14);
  cout<<"Enter the rate per hour: "; cin>>ratePerHour;
  gotoxy(25,15);
  cout<<"Enter deduction value: "; cin>>deduction;


    grossPay=hoursWorked*ratePerHour;
    netPay= grossPay - deduction;
    gotoxy(25,17);
     cout<<"Your gross pay is: "<<setprecision(2)<<grossPay;
     gotoxy(25,18);
     cout<<"Your net pay is: "<<setprecision(2)<<netPay;

getch();
}
void sequence(){ //the sequence programs submenu
char choice;


    do{clrscr(); //mmboxSEQ();
	gotoxy(33,4); textcolor(CYAN+BLINK); textbackground(RED);
	cprintf("SEQUENCE SUBMENU");
	gotoxy(9,6);  textcolor(WHITE);  textbackground(BLACK);
	cout<<"A. HELLO WORLD (void w/o parameters)";
	gotoxy(9,7);  textcolor(WHITE);
	cout<<"B. SUM, DIFF, PROD, QUO OF TWO NUMBERS (void w/o parameters)";
	gotoxy(9,8); textcolor(WHITE);
	cout<<"C. ROOTS OF QUADRATIC EQUATION (void w/ parameters)";
	gotoxy(9,9);  textcolor(WHITE);
	cout<<"D. AREA AND PERIMETER OF RECTANGLE (value-returning w/ parameters)";
	gotoxy(9,10); textcolor(WHITE);
	cout<<"E. SWAPPING OF TWO NUMBERS (void w/o parameters)";
	gotoxy(9,11); textcolor(WHITE);
	cout<<"F. PRELIM, MIDTERM, FINALS AVERAGE (value-returning w/o parameters)";
	gotoxy(9,12); textcolor(WHITE);
	cout<<"G. AREA AND CIRCUMFERENCE OF A CIRCLE (void w/o parameters)";
	gotoxy(9,13);  textcolor(WHITE);
	cout<<"H. CELSIUS TO FAHRENHEIT (value-returning w/o parameters)";
	gotoxy(9,14); textcolor(WHITE);
	cout<<"I. GROSS PAY AND NET PAY (void w/o parameters)";
	gotoxy(9,15);  textcolor(WHITE);
	cout<<"J. SQUARE AND CUBE OF A NUMBER (void w/o parameters)";
	gotoxy(9,16);  textcolor(WHITE);
	cout<<"K. EXIT";
	gotoxy(9,18); textcolor(WHITE);
	cout<<"Enter your choice: "; cin>>choice;

	switch(choice){
			case 'A':
			       hello();
			break;

			case 'B':
				SPDQ();
			break;
			case 'C': clrscr();
				int a, b, c;
				//float x1, x2, d;
				gotoxy(15,12);
				cout<<"Enter three numbers for the quadratic equation: "; cin>>a>>b>>c;  gotoxy(15,13);

				//cout<<"The quadratic equation for the values you inputted is: "<<a<<"x^2+"<<b<<"x+"<<c;

			       /*	d=b*b-(4*a*c);
				x1=(-b+sqrt(d))/(2*a);
				x2=(-b-sqrt(d))/(2*a);

				cout<<"The roots of the quadratic equation are: "<<x1<<" and "<<x2;   */
			       //	quadratic(a, b, c);
				//getch();
		     /*  break;
		       case 'D': clrscr();
			       float length, width;  gotoxy(15,12);
			       cout<<"Enter length and width of the rectangle: "; cin>>length>>width;
			       gotoxy(32,13);

			      //area= length*width;
			       //perimeter= 2*(length+width);

			       cout<<"Area = "<<setprecision(2)<<arearec(length, width)<<endl;
			       gotoxy(32,14);
			       cout<<"Perimeter = "<<setprecision(2)<<perimeterrec(length, width);
			       getch();
		       break;
		       case 'E':
				swap();
			 break;
			 case 'F': clrscr();
				 /*float pre, mid, finals, ave;
				 cout<<"Enter your grades from prelim, midterm, and finals: "<<endl;
				 cin>>pre>>mid>>finals;

				 ave=(pre+mid+finals)/3; */
			       /*	 cout<<"Your average grade is: "<<setprecision(2)<<average();
				 getch();
			 break;
			 case 'G': clrscr();
				 float diameter; gotoxy(28,12);
				 cout<<"Enter the diameter of circle: ";
				 cin>>diameter;

				 /*radius=diameter/2;
				 Area=3.14*radius*radius;
				 circumference=2*3.14*radius;

				 cout<<"The area is: "<<Area<<endl;
				 cout<<"The circumference is: "<<circumference;
				 getch();*/
		     /*		 caseseven(diameter);
			 break;
			 case 'H': clrscr();
				 float C;  gotoxy(22,12);
				 cout<<"Enter the temperature in Celsius: "; cin>>C;


				 //f=(1.8*C)+32;
				 gotoxy(22,14);
				 cout<<"The temperature in Fahrenheit = "<<setprecision(2)<<CtoF(C);
				 getch();
			 break;
			 case 'I':
				 casenine();
			break;
			case 'J': clrscr();
				 /*int num;
				 cout<<"Enter a number: "<<endl;
				 cin>>num;

				 cout<<"The square of a number is= "<<num*num<<endl;
				 cout<<"The cube of a number is= "<<num*num*num;
				 getch(); */
		     /*		  squareAndCube();


	}//switch
}while(choice != 'K'); // do...while loop

}//sequence

int even(int num){   //Divides num by 2 and gets the remainder. It then checks if the remainder is 0; if not, it calls the odd-checking function.
  int num1 = num % 2;

  if(num1 == 0)
	return 0;
  else
   return odd(num);
}

int odd(int num){  //Divides num by 2 and gets the remainder. It then checks if the remainder is 1; if not, it calls the even-checking function.
  int num1 = num % 2;
  if(num1 != 0)
	return 1;
    else
    return even(num);

}

void larger(float a, float b){ // Checks condition whether a is greater than b and prints out the designated string.
	if(a > b){ gotoxy(27,13);
	  cout<<setprecision(2)<<a<<" is the larger number.";
	}
	else{ gotoxy(27,13);
	  cout<<setprecision(2)<<b<<" is the larger number.";
	}
getch();
}

void largest(float A, float B, float c){ // Checks condition of which among the 3 values is the largest and prints out the designated string.
 //larger(c, larger(a, b));
  if(A>B && A>c){ gotoxy(32,13);
   cout<<setprecision(2)<<A<<" is the largest.";}
  else if(B>A && B>c){ gotoxy(32,13);
   cout<<setprecision(2)<<B<<" is the largest."; }
  else{ gotoxy(32,13);
   cout<<setprecision(2)<<c<<" is the largest.";}
getch();
}
void case3con(float num){ // Checks the inputted number if it is greater or less than the neutral number and prints out designated string.
 if(num > 0){ gotoxy(29,14);
   cout<<"It is a positive number.";}
 else{ gotoxy(29,14);
   cout<<"It is a negative number.";}

getch();
}

float total_sales(float unitprice, int unitsold){ // Multiplies unit price and units sold and stores the product to the variable totalsales.

  float totalsales = unitprice * unitsold;

return totalsales;
}

void case7con(float num1){ // It first checks if the inputted number is 0, otherwise, it calls the function that checks if the number is positive or negative.
  if(num1 == 0){ gotoxy(29,14);
   cout<<"The number is neutral.";
   getch();
  }
  else
   case3con(num1);
}

void condition ()
{
char option;

do{  clrscr(); //mmbox();
	   gotoxy(33, 6); textcolor(CYAN+BLINK); textbackground(RED);
	 cprintf("SELECTION SUBMENU");
	 gotoxy(16, 8); textcolor(WHITE); textbackground(BLACK);
	 cout<<"A. PASS OR FAIL GRADE (value-returning w/o parameters)";
	 gotoxy(16, 9); textcolor(WHITE); textbackground(BLACK);
	 cout<<"B. EVEN OR ODD (value-returning w/ parameters)";
	 gotoxy(16, 10); textcolor(WHITE); textbackground(BLACK);
	 cout<<"C. POSITIVE OR NEGATIVE (void w/ parameters)";
	 gotoxy(16, 11); textcolor(WHITE); textbackground(BLACK);
	 cout<<"D. COMMISSION (value-returning w/ parameters)";
	 gotoxy(16, 12); textcolor(WHITE); textbackground(BLACK);
	 cout<<"E. LARGER BETWEEN TWO NUMBERS (void w/ parameters)";
	 gotoxy(16, 13); textcolor(WHITE); textbackground(BLACK);
	 cout<<"F. LARGEST AMONG THREE NUMBERS (void w/ parameters)";
	 gotoxy(16, 14); textcolor(WHITE); textbackground(BLACK);
	 cout<<"G. POSITIVE, NEGATIVE, OR NEUTRAL (void w/ parameters)";
	 gotoxy(16, 15); textcolor(WHITE); textbackground(BLACK);
	 cout<<"H. EXIT";
	 gotoxy(16, 17); textcolor(WHITE); textbackground(BLACK);
	 cout<<"Enter choice: ";
	 cin>>option;

		   switch(option){
			  case 'A': clrscr(); float ave;
				 /* float pre, mid, final, ave;
				  cout<<"Input your prelim, midterm, and final grades: "<<endl;
				  cin>>pre>>mid>>final;*/

			 /*	  ave = average();

				  if(ave>=97 && ave<=100){ gotoxy(20,13);
				  cout<<"Your average is: "<<setprecision(2)<<ave<<". You got 1.0. Passed.";}
				  else if(ave>=94 && ave<=96) {gotoxy(20,13);
				  cout<<"Your average is: "<<setprecision(2)<<ave<<". You got 1.25. Passed.";}
				  else if(ave>=91 && ave<=93){gotoxy(20,13);
				  cout<<"Your average is: "<<setprecision(2)<<ave<<". You got 1.50. Passed.";}
				  else if(ave>=88 && ave<=90){gotoxy(20,13);
				  cout<<"Your average is: "<<setprecision(2)<<ave<<". You got 1.75. Passed.";}
				  else if(ave>=85 && ave<=87){gotoxy(20,13);
				  cout<<"Your average is: "<<setprecision(2)<<ave<<". You got 2.0. Passed.";}
				  else if(ave>=82 && ave<=84){gotoxy(20,13);
				  cout<<"Your average is: "<<setprecision(2)<<ave<<". You got 2.25. Passed.";}
				  else if(ave>=79 && ave<=81){gotoxy(20,13);
				  cout<<"Your average is: "<<setprecision(2)<<ave<<". You got 2.50. Passed.";}
				  else if(ave>=76 && ave<=78){gotoxy(20,13);
				  cout<<"Your average is: "<<setprecision(2)<<ave<<". You got 2.75. Passed.";}
				  else if(ave == 75){gotoxy(20,13);
				  cout<<"Your average is: "<<setprecision(2)<<ave<<". You got 3.0. Passed.";}
				  else{gotoxy(20,13);
				  cout<<"Your average is: "<<setprecision(2)<<ave<<". You got 5.0. Failed."; }

				  getch();
			    break;
			    case 'B':clrscr();
				   int num, numm;
				   gotoxy(29,13);
				   cout<<"Input a number: ";
				   cin>>num;

				   numm = even(num);

				   if(numm == 0){gotoxy(29,14);
				   cout<<"It is an even number.";}

				   else{gotoxy(29,14);
				   cout<<"It is an odd number.";}

				   getch();
			    break;
			    case 'C': clrscr();
				    float Num; gotoxy(29,13);
				    cout<<"Enter a number: ";
				    cin>>Num;

				    /*if(Num > 0)
				    cout<<"It is a positive number.";
				    else
				    cout<<"It is a negative number.";

				    getch();*/
		    //		    case3con(Num);
	      /*		     break;
			     case 'D': clrscr();
				     char salesmanName[15];
				     int salesmanNum, noOfUnitsSold;
				     float unitPrice, totalSales, commission;
			       gotoxy(26,10); cout<<"Enter salesman name: ";
				     cin>>salesmanName;
			       gotoxy(26,11); cout<<"Enter salesman number: ";
				     cin>>salesmanNum;
			       gotoxy(26,12); cout<<"Enter number of units sold: ";
				     cin>>noOfUnitsSold;
			       gotoxy(26,13); cout<<"Enter unit price: ";
				     cin>>unitPrice;

				     totalSales = total_sales(unitPrice, noOfUnitsSold);

				     if(totalSales <= 10000){ gotoxy(26,15);
				     commission = totalSales*0.1;
				     cout<<"Your commission is: "<<setprecision(2)<<commission; }
				     else if(totalSales <= 15000){ gotoxy(26,15);
				     commission = totalSales*0.15;
				     cout<<"Your commission is: "<<setprecision(2)<<commission; }
				     else if(totalSales <= 20000){ gotoxy(26,15);
				     commission = totalSales*0.2;
				     cout<<"Your commission is: "<<setprecision(2)<<commission; }
				     else {  gotoxy(26,15);
				     commission = totalSales*0.3;
				     cout<<"Your commission is: "<<setprecision(2)<<commission; }

				     getch();
				break;
				case 'E': clrscr();
					float a, b; gotoxy(27,12);
					cout<<"Enter two numbers: ";
					cin>>a>>b; larger(a, b);

					/*if(a > b)
					cout<<a<<" is the larger number.";

					else
					cout<<b<<" is the larger number.";

					getch();*/
		 /*		  break;
				  case 'F': clrscr();
					  float A, B, c; gotoxy(27,12);
					  cout<<"Enter three numbers: ";
					  cin>>A>>B>>c; largest(A, B, c);

					  /*if(A>B && A>c)
					  cout<<A<<" is the largest.";
					  else if(B>A && B>c)
					  cout<<B<<" is the largest.";
					  else
					  cout<<c<<" is the largest.";
					  getch();*/
	       /*			    break;
				    case 'G': clrscr();
					    float num1; gotoxy(29,13);
					    cout<<"Enter a number: ";
					    cin>>num1; case7con(num1);

					    /*if(num1 == 0)
					    cout<<"The number is neutral.";
					    else if(num1>0)
					    cout<<"The number is positive.";
					    else
					    cout<<"The number is negatuve.";*/


				  //     }//end switch
				//  }//end of do
  /*				   while(option != 'H');

  }//end of condition
/*void mmbox(){
	for(int hori=20; hori<=65; ++hori){
	   gotoxy(hori,1);
	   cout<<"*";
	   gotoxy(hori,15);
	   cout<<"*";
	}

	for(int verti=1; verti<=15; ++verti){
	    gotoxy(20,verti);
	    cout<<"*";
	    gotoxy(65, verti);
	    cout<<"*";
	}
} */

/*long unsigned int factorial(){ //Multiplies the inputted number with number - 1 and stores the product in the variable factorial. Then factorial continuously multiplies with number - 1 until it reaches 1.
   int input, multiplier; gotoxy(25,12);
     cout<<"Enter a number to get factorial: ";
     cin>>input;

   long unsigned int factorial=1;
    for(multiplier = input; multiplier >= 1; multiplier--)
     factorial = factorial * multiplier;


return factorial;
}

void asterisk(){ //The outer loops if for counting rows while the inner loop is for printing the asterisks in each row.
clrscr();
  for(int i=1; i<=5; i++){
   for(int j=1; j<=i; j++){ gotoxy(37+j,10+i);
    cout<<"*";
   }
   cout<<endl;
  }

getch();
}

void printname(){ // Prints the inputted name five times (one for every row)
clrscr();
   int ctr=1; char name[20];
   gotoxy(33,10);
   cout<<"Enter name: "; cin>>name;
   for(ctr; ctr<=5; ctr++){ gotoxy(38,11+ctr);
   cout<<name;}

getch();
}

void nums1to10(){ // Prints the numbers 10 down to 1.
clrscr();
  int rtc=1, i=28;
  for(rtc; rtc<11; rtc++){ gotoxy(i += 2,13);
  cout<<rtc;  }

getch();
}

void in_countdown(){ // Prompts user for a number from which will be the starting point for the countdown.
clrscr();
 int trc, i=28; gotoxy(30,12);
 cout<<"Enter a number: "; cin>>trc;

   for(trc; trc>=1; trc--){ gotoxy(i += 2 ,14);
    cout<<trc;
   }

getch();
}

void even(){ // Prints out all even numbers from 1 to 10
clrscr();
  int even;
  for(even=2; even <= 10; even=even+2){ gotoxy(33 + even, 13);
   cout<<even;  }
getch();
}

void posiprint(){ // Determines whether the inputted number is positive and prints it out if it is.
clrscr();
  int five=1, in, odd=1, even=2;
  for(five; five<=5; five++){ odd = odd+2;  even=even+2;
   gotoxy(30, 5+odd);
   cout<<"Enter a number: "; cin>>in;
   if(in>0) { gotoxy(30, 5+even);
   cout<<in<<". It is positive.";    }
   else{ gotoxy(30, 5+even);
   cout<<"The entered number is not positive."; }

    cout<<endl;
  }
getch();
}

void invertedpyra(){// Prints an inverted pyramid of numbers that prints out according to the value of the number.
clrscr(); int j=1;
  for(int row=5; row>=1; row--){ j += 1;
   for(int print=row; print>=1; print--){ gotoxy(38+print, 9+j);
    cout<<row;
   }

  }
getch();
}

void iteration()
{
char choice;

	do{ clrscr(); //mmbox();
		gotoxy(33, 6); textcolor(CYAN+BLINK); textbackground(RED);
		cprintf("ITERATION SUBMENU");
		gotoxy(16,8); textcolor(WHITE); textbackground(BLACK);
	       cout<<"A. PRINT NAME 5 TIMES (void w/o parameters)";
	       gotoxy(16,9); textcolor(WHITE); textbackground(BLACK);
	       cout<<"B. NUMBERS FROM 1 TO 10 (void w/o parameters)";
	       gotoxy(16,10); textcolor(WHITE); textbackground(BLACK);
	       cout<<"C. COUNTDOWN (void w/o parameters)";
	       gotoxy(16,11); textcolor(WHITE); textbackground(BLACK);
	       cout<<"D. FACTORIAL (value-returning w/o paramaters)";
	       gotoxy(16,12); textcolor(WHITE); textbackground(BLACK);
	       cout<<"E. EVEN NUMBERS FROM 1 TO 10 (void w/o parameters)";
	       gotoxy(16,13); textcolor(WHITE); textbackground(BLACK);
	       cout<<"F. PRINT POSITIVE NUMBERS (void w/o parameters)";
	       gotoxy(16,14); textcolor(WHITE); textbackground(BLACK);
	       cout<<"G. RIGHT TRIANGLE ASTERISK (void w/o parameters)";
	       gotoxy(16,15); textcolor(WHITE); textbackground(BLACK);
	       cout<<"H. INVERTED RIGHT TRIANGLE NUMBERS (void w/o parameters)";
	       gotoxy(16,16); textcolor(WHITE); textbackground(BLACK);
	       cout<<"I. EXIT MAIN MENU";
	       gotoxy(16,18);  textcolor(WHITE); textbackground(BLACK);
	       cout<<"ENTER YOUR CHOICE: "; cin>>choice;

		  switch(choice){

			 case 'A':
				printname();
			  break;

			  case 'B':
				  nums1to10();
			  break;
			  case 'C':
				  in_countdown();
			 break;
			 case 'D': clrscr();
				 /*int input;
				 cout<<"Enter a number to get factorial: ";
				 cin>>input;
			       long unsigned int factorial=1, multiplier=1;
				 for(factorial, multiplier; multiplier <= input; multiplier++)
				 factorial = factorial * multiplier;*/
 /*				 long unsigned int hold = factorial();
			gotoxy(25,14);	 cout<<"The factorial is: "<<hold;

			 getch();
			 break;
			 case 'E':
				even();

			break;
			case 'F':
				posiprint();
			break;
			case 'G': asterisk();
				  /*for(int i=1; i<=5; i++){
					for(int j=1; j<=i; j++){
					cout<<"*";
					}
					cout<<endl;
				  }

				getch(); */
/*		     break;
		     case 'H':
			     invertedpyra();

		  }//end of switch

			}while(choice != 'I');


}

void sumofnegative(){  clrscr();  // Loops through every array element and adds all those negative numbers in the variable sum.
  int i, sum = 0;
  float arr[5]; gotoxy(27,12);
  cout<<"Enter 5 numbers: ";
   for(i = 0; i<5; i++) cin>>arr[i];

    for(i = 0; i<5; i++){
	if(arr[i] < 0)
	    sum += arr[i];
    }
	    gotoxy(16,14);
    cout<<"The sum of the negative numbers in the array is: "<<sum;
getch();
}

void displayprime(){ clrscr(); //Loops through every array element and checks if it's is divisible by j. If it is not then the program displays the number.
 int arr[5], i,f,m; gotoxy(28,12);
 cout<<"Enter 5 numbers: ";
 for(i = 0; i<5; i++) cin>>arr[i]; cout<<"\n";
  int k=37;
  for(i = 0; i<5; i++){ f=0; if(arr[i] == 0 || arr[i] == 1) continue;
    for(int j=2; j<arr[i]; j++){
     m = arr[i] % j;
      if(m == 0){
       f = 1; break; }
    }
    if (f == 0){ gotoxy(k += 2, 14); cout<<arr[i];   }

  }
getch();
}//end of void


void countanddisplayvowels(){   clrscr(); //Loops through every array element and checks if it matches any of the vowels in the condition. If it is matching, then it will print it out and increment count variable by 1.
   char arr[5]; int i, count=0; gotoxy(26,11);
    cout<<"Enter 5 letters: ";
    for(i=0; i<5; i++) cin>>arr[i];   int k=35;

    for(int j=0; j<5; j++){
      if(arr[j]=='a' || arr[j] == 'e' || arr[j]=='i' || arr[j] == 'o' ||  arr[j]=='u' || arr[j] == 'A' || arr[j]=='E' || arr[j] == 'I' || arr[j]=='O' || arr[j] == 'U'){
      gotoxy(k+=2,13);	cout<<arr[j];
	++count;
      }
    } gotoxy(27,15);
    cout<<"The number of vowels: "<<count;
getch();
}

void d(){  clrscr(); // Displays in category the odd and even numbers; as well as counting how many items in each of the 2 categories.
 int arr[10], count=0,i,j; gotoxy(23,10);
    cout<<"Enter 10 numbers: ";
    for(i=0; i<10; i++) cin>>arr[i];  cout<<endl;
       gotoxy(26,12);
    cout<<"The even numbers are: ";
    for(i=0; i<10; i++){
       if(arr[i] % 2 == 0){
	  cout<<arr[i]<<" "; ++count;
       }
    } gotoxy (26,13); cout<<"The number of even numbers: "<<count;   count = 0;
	gotoxy(26,15);
    cout<<"The odd numbers are: ";
    for(j=0; j<10; j++){
       if(arr[j] % 2 != 0){
	  cout<<arr[j]<<" "; ++count;
       }
    } gotoxy(26,16); cout<<"The number of odd numbers: "<<count;


getch();
}

void arrays(){
 char choice;

    do{ clrscr();  //mmboxx();
       gotoxy(33, 8); textcolor(CYAN+BLINK); textbackground(RED);
      cprintf("ARRAY SUBMENU");
      gotoxy(13,10); textcolor(WHITE); textbackground(BLACK);
      cout<<"A. SUM OF ALL NEGATIVE NUMBERS (void w/o parameters)";
      gotoxy(13,11);
      cout<<"B. DISPLAY ALL PRIME NUMBERS (void w/o parameters)";
      gotoxy(13,12);
      cout<<"C. COUNT AND DISPLAY VOWELS (void w/o parameters)";
      gotoxy(13, 13);
      cout<<"D. DISPLAY AND COUNT THE NUMBER OF ODD AND EVEN";
      gotoxy(16,14);
      cout<<"NUMBERS (void w/o parameters)";
      gotoxy(13,15);
      cout<<"E.  EXIT";
      gotoxy(13,17);
      cout<<"ENTER YOUR CHOICE:  "; cin>>choice;

	switch(choice){
	    case 'A':
			sumofnegative();
	    break;
	    case 'B':
			displayprime();
	    break;
	    case 'C':   countanddisplayvowels();
	    break;
	    case 'D':   d();
	    //break;
	}
     }while(choice == 'A'|| choice == 'B' || choice == 'C' || choice == 'D');
//getch();

}  */

typedef int inti;
typedef char single;

inti main()
{
    single choice;
   do{ clrscr();
	gotoxy(34,8);
	cout << "MAIN MENU";
	gotoxy(28,10);
	cout << "A.";
	gotoxy(30,10);
	cout<<" Sequence Programs ";
	gotoxy(28,11);
	cout << "B.";
	gotoxy(30,11);
	cout<<" Selection Programs ";
	gotoxy(28,12);
	cout << "C.";
	gotoxy(30,12);
	cout<<" Iteration Programs ";
	gotoxy(28,13);
	cout << "D.";
	gotoxy(30, 13);
	cout<<" Array Programs (1D) ";
	gotoxy(28,14);
	cout << "E. Array Programs (2D)";
	gotoxy(28,15);
	cout << "F. Recursive Programs";
	gotoxy(28,16);
	cout << "G. Pointer Programs";
	gotoxy(28,17);
	cout << "H. Stucture Programs";
	gotoxy(28,18);
	cout << "I. File Handling, Classes, and Objects Programs"; // at least 3 problems from the given exercise
	gotoxy(28,19);
	cout << "J. Exit";
	gotoxy(28,21);
	cout <<"Enter your choice: ";
	cin>>choice;

	    switch(choice){
			    case 'A':{ clrscr();
				          sequence();
			             }
			    break;
			    case 'B':{
				          condition();
                         }
			    break;
			    case 'C':{
				          iteration();
                         }
			    break;
			    case 'D':{
				          arrays();
                         }
                break;
                case 'E': {
                           arrays2D();
                          }
                case 'F': {
                            recurse();
                          }
                break;
                case 'G': {
                            pointers();
                          }
                break;
                case 'H': {
                            structure();
                          }
                break;
                case 'I': {
                            fileHandling();
                          }
	    }


   }while (choice != 'J');
return 0;
}//end of main
