#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <windows.h>
#define clrscr() system("cls")

using namespace std;

void gotoxy(short x, short y){  //definition of gotoxy function//

 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

struct studenGrade{
    char lastName[20];
    char firstName[20];
    char middleName[20];
    double quiz1score;
    double quiz2score;
    double quiz1grade;//
    double quiz2grade;//
    double  exercisesGrade;
    double projectGrade;
    double semestralGrade;//
    double equiGrade;//
    string remarks;//
}studentGrade[2];

float quiz1total, quiz2total;

int main(void){
    char choice;
    int n = 2;
    do{ clrscr();

        gotoxy(35, 3);
        cout << "Student Grades";
        gotoxy(35, 5);
        cout << "A - Add studentGrade's info"; // except q2grade, q1grade, semgrade, equigrade, & remarks
        gotoxy(35, 6);
        cout << "B - Display studentGrade's info in horizontal manner";
        gotoxy(35, 7);
        cout << "C - Input the total score for q1 & q2"; // these variables must be global variables
                                                                 // then compute the q1grade, q2grade, semgrade, equigrade, & remarks
        gotoxy(35, 8);
        cout << "D - Search studentGrades";
        gotoxy(35, 9);
        cout << "E - Sort records in descending order based on equiGrade";
        gotoxy(35, 10);
        cout << "F - Exit";
        gotoxy(35, 12);
        cout << "Enter your choice: "; cin >> choice;

        switch(choice){
            case 'A': { clrscr();
                        for(int i = 0; i < n; ++i){
                        cout << "Enter the student " << i+1 << "'s last name: "; cin >> studentGrade[i].lastName;
                        }

                        cout << endl;

                        for(int i = 0; i < n; ++i){
                        cout << "Enter the student " << i+1 << "'s first name: "; cin >> studentGrade[i].firstName;
                        }

                        cout << endl;

                        for(int i = 0; i < n; ++i){
                        cout << "Enter the student " << i+1 << "'s middle name: "; cin >> studentGrade[i].middleName;
                        }

                        cout << endl;

                        for(int i = 0; i < n; ++i){
                        cout << "Enter the student " << i+1 << "'s quiz 1 score: "; cin >> studentGrade[i].quiz1score;
                        }

                        cout << endl;

                        for(int i = 0; i < n; ++i){
                        cout << "Enter the student " << i+1 << "'s quiz 2 score: "; cin >> studentGrade[i].quiz2score;
                        }

                        cout << endl;

                        for(int i = 0; i < n; ++i){
                        cout << "Enter the student " << i+1 << "'s exercise grade: "; cin >> studentGrade[i].exercisesGrade;
                        }

                        cout << endl;

                        for(int i = 0; i < n; ++i){
                        cout << "Enter the student " << i+1 << "'s project grade: "; cin >> studentGrade[i].projectGrade;
                        }

                      }
            break;
            case 'B': { clrscr();       // edit to output horizontal: student 1: --------

                            gotoxy(1, 1);
                            cout << "Last Name";
                            gotoxy(12, 1);
                            cout << "First Name";
                            gotoxy(25, 1);
                            cout << "Middle Name";
                            gotoxy(33, 1);
                            cout << "Quiz 1";
                            gotoxy(39, 1);
                            cout << "Quiz 2";
                            gotoxy(44, 1);
                            cout << "Exercises";
                            gotoxy(51, 1);
                            cout << "Projects";

                        for(int i = 0; i < n; ++i){
                            cout << "\n";
                            gotoxy(1, i+1);
                            cout << studentGrade[i].lastName;
                            gotoxy(12, i+1);
                            cout << studentGrade[i].firstName;
                            gotoxy(25, i+1);
                            cout << studentGrade[i].middleName;
                            gotoxy(33, i+1);
                            cout << studentGrade[i].quiz1score;
                            gotoxy(39, i+1);
                            cout << studentGrade[i].quiz2score;
                            gotoxy(44, i+1);
                            cout << studentGrade[i].exercisesGrade;
                            gotoxy(51, i+1);
                            cout << studentGrade[i].projectGrade;


                        getch();
                      }
            break;
            case 'C': { clrscr();   // then compute the q1grade, q2grade, semgrade, equigrade, & remarks

                        cout << "Enter the total score for quiz 1: "; cin >> quiz1total;
                        cout << "Enter the total score for quiz 2: "; cin >> quiz2total;

                        for(int i = 0; i < n; ++i){
                            studentGrade[i].quiz1grade = (studentGrade[i].quiz1score/quiz1total) * 100;
                            studentGrade[i].quiz2grade = (studentGrade[i].quiz2score/quiz2total) * 100;
                        }

                        for(int i = 0; i < n; ++i){
                            studentGrade[i].semestralGrade = (studentGrade[i].quiz1grade + studentGrade[i].quiz2grade + (studentGrade[i].exercisesGrade + studentGrade[i].projectGrade)) / 4;

                        }

                        for(int i = 0; i < n; ++i){
                            if(studentGrade[i].semestralGrade >= 97 && studentGrade[i].semestralGrade <= 100)
                                studentGrade[i].equiGrade = 1.0;
                            if(studentGrade[i].semestralGrade >= 94 && studentGrade[i].semestralGrade <= 96)
                                studentGrade[i].equiGrade = 1.25;
                            if(studentGrade[i].semestralGrade >= 91 && studentGrade[i].semestralGrade <= 93)
                                studentGrade[i].equiGrade = 1.50;
                            if(studentGrade[i].semestralGrade >= 88 && studentGrade[i].semestralGrade <= 90)
                                studentGrade[i].equiGrade = 1.75;
                            if(studentGrade[i].semestralGrade >= 85 && studentGrade[i].semestralGrade <= 87)
                                studentGrade[i].equiGrade = 2.0;
                            if(studentGrade[i].semestralGrade >= 82 && studentGrade[i].semestralGrade <= 84)
                                studentGrade[i].equiGrade = 2.25;
                            if(studentGrade[i].semestralGrade >= 79 && studentGrade[i].semestralGrade <= 81)
                                studentGrade[i].equiGrade = 2.50;
                            if(studentGrade[i].semestralGrade >= 76 && studentGrade[i].semestralGrade <= 78)
                                studentGrade[i].equiGrade = 2.75;
                            if(studentGrade[i].semestralGrade == 75)
                                studentGrade[i].equiGrade = 3.0;
                            else studentGrade[i].equiGrade = 5.0;
                        }

                        for(int i = 0; i < n; ++i){
                            if(studentGrade[i].equiGrade >= 75) studentGrade[i].remarks = "Passed.";
                            else studentGrade[i].remarks = "Failed.";
                        }


                        getch();
                      }
            break;
            case 'D': { clrscr(); // input last, first, and middle name tas output yung scores something ng student
                        char fname[20], lname[20], mname[20];
                        int found = 0;
                        cout << "Enter the last name of the student: "; cin >> lname;
                        cout << "Enter the first name of the student: "; cin >> fname;
                        cout << "Enter the middle name of the student: "; cin >> mname;

                        for(int i = 0; i < n; ++i){
                            if(lname == studentGrade[i].lastName && fname == studentGrade[i].firstName && mname == studentGrade[i].middleName){
                                cout << "The record was found.";
                                found = 1;
                            }
                        }

                        if(found == 0) cout << "No such record exists.";
                      }
            break;
            case 'E': {

                      }
            break;
            case 'F': {
                        exit(0);
                      }
            break;
            default: { cout << "Invalid choice input.";}


        }

    } while(choice < 'F' && choice >= 'A');

return 0;
}
