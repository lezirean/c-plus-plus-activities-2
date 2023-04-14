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
    string lastName;
    string firstName;
    string middleName;
    double quiz1score;
    double quiz2score;
    double quiz1grade;
    double quiz2grade;
    double  exercisesGrade;
    double projectGrade;
    double semestralGrade;
    double equiGrade;
    string remarks;
}studentGrade[50];

double quiz1total, quiz2total;

int main(void){
    char choice;
    int n = 50;
    do{ clrscr();

        gotoxy(50, 6);
        cout << "STUDENT GRADES";
        gotoxy(35, 9);
        cout << "A - Add students' info";
        gotoxy(35, 10);
        cout << "B - Display students' info in horizontal manner";
        gotoxy(35, 11);
        cout << "C - Input the total score for quiz 1 & quiz 2";
        gotoxy(35, 12);
        cout << "D - Search student";
        gotoxy(35, 13);
        cout << "E - Sort records in descending order based on equivalent grade";
        gotoxy(35, 14);
        cout << "F - Exit";
        gotoxy(35, 16);
        cout << "Enter your choice: "; cin >> choice;

        switch(choice){
            case 'A': { clrscr();
                        for(int i = 0; i < n; ++i){
                        cout << "Enter student " << i+1 << "'s last name: "; cin >> studentGrade[i].lastName;
                        }

                        cout << endl;

                        for(int i = 0; i < n; ++i){
                        cout << "Enter student " << i+1 << "'s first name: "; cin >> studentGrade[i].firstName;
                        }

                        cout << endl;

                        for(int i = 0; i < n; ++i){
                        cout << "Enter student " << i+1 << "'s middle name: "; cin >> studentGrade[i].middleName;
                        }

                        cout << endl;

                        for(int i = 0; i < n; ++i){
                        cout << "Enter student " << i+1 << "'s quiz 1 score: "; cin >> studentGrade[i].quiz1score;
                        }

                        cout << endl;

                        for(int i = 0; i < n; ++i){
                        cout << "Enter student " << i+1 << "'s quiz 2 score: "; cin >> studentGrade[i].quiz2score;
                        }

                        cout << endl;

                        for(int i = 0; i < n; ++i){
                        cout << "Enter student " << i+1 << "'s exercise grade: "; cin >> studentGrade[i].exercisesGrade;
                        }

                        cout << endl;

                        for(int i = 0; i < n; ++i){
                        cout << "Enter student " << i+1 << "'s project grade: "; cin >> studentGrade[i].projectGrade;
                        }

                      }
            break;
            case 'B': { clrscr();

                            gotoxy(0, 1);
                            cout << "Last Name";
                            gotoxy(16, 1);
                            cout << "First Name";
                            gotoxy(32, 1);
                            cout << "Middle Name";
                            gotoxy(48, 1);
                            cout << "Quiz 1";
                            gotoxy(64, 1);
                            cout << "Quiz 2";
                            gotoxy(80, 1);
                            cout << "Exercises";
                            gotoxy(96, 1);
                            cout << "Projects";

                        for(int i = 0; i < n; ++i){
                            //cout << "\n";
                            gotoxy(0, 2+i);
                            cout << studentGrade[i].lastName;
                            gotoxy(16, 2+i);
                            cout << studentGrade[i].firstName;
                            gotoxy(32, 2+i);
                            cout << studentGrade[i].middleName;
                            gotoxy(48, 2+i);
                            cout << studentGrade[i].quiz1score;
                            gotoxy(64, 2+i);
                            cout << studentGrade[i].quiz2score;
                            gotoxy(80, 2+i);
                            cout << studentGrade[i].exercisesGrade;
                            gotoxy(96, 2+i);
                            cout << studentGrade[i].projectGrade;

                        }

                        getch();
                      }
            break;
            case 'C': { clrscr();

                        cout << "Enter the total score for quiz 1: "; cin >> quiz1total;
                        cout << "Enter the total score for quiz 2: "; cin >> quiz2total;

                        cout << "\n";

                        for(int i = 0; i < n; ++i){
                            studentGrade[i].quiz1grade = (studentGrade[i].quiz1score/quiz1total) * 100;
                            studentGrade[i].quiz2grade = (studentGrade[i].quiz2score/quiz2total) * 100;
                            cout << "Student " << i+1 << "'s q1 grade: " << studentGrade[i].quiz1grade << "\n";
                            cout << "Student " << i+1 << "'s q2 grade: " << studentGrade[i].quiz2grade  << "\n";
                        }


                        cout << "\n";


                        for(int i = 0; i < n; ++i){
                            studentGrade[i].semestralGrade = (studentGrade[i].quiz1grade + studentGrade[i].quiz2grade + studentGrade[i].exercisesGrade + studentGrade[i].projectGrade) / 4;
                            cout << "Student " << i+1 << "'s semestral grade: " << studentGrade[i].semestralGrade << "\n";
                        }

                        cout << "\n";

                        for(int i = 0; i < n; ++i){
                            if(studentGrade[i].semestralGrade >= 97.0 && studentGrade[i].semestralGrade <= 100)
                                studentGrade[i].equiGrade = 1.0;
                            else if(studentGrade[i].semestralGrade >= 94.0 && studentGrade[i].semestralGrade <= 96.0)
                                studentGrade[i].equiGrade = 1.25;
                            else if(studentGrade[i].semestralGrade >= 91.0 && studentGrade[i].semestralGrade <= 93.0)
                                studentGrade[i].equiGrade = 1.50;
                            else if(studentGrade[i].semestralGrade >= 88.0 && studentGrade[i].semestralGrade <= 90.0)
                                studentGrade[i].equiGrade = 1.75;
                            else if(studentGrade[i].semestralGrade >= 85.0 && studentGrade[i].semestralGrade <= 87.0)
                                studentGrade[i].equiGrade = 2.0;
                            else if(studentGrade[i].semestralGrade >= 82.0 && studentGrade[i].semestralGrade <= 84.0)
                                studentGrade[i].equiGrade = 2.25;
                            else if(studentGrade[i].semestralGrade >= 79.0 && studentGrade[i].semestralGrade <= 81.0)
                                studentGrade[i].equiGrade = 2.50;
                            else if(studentGrade[i].semestralGrade >= 76.0 && studentGrade[i].semestralGrade <= 78.0)
                                studentGrade[i].equiGrade = 2.75;
                            else if(studentGrade[i].semestralGrade == 75.0)
                                studentGrade[i].equiGrade = 3.0;
                            else if (studentGrade[i].semestralGrade < 75.0) studentGrade[i].equiGrade = 5.0;
                        }

                        for(int i = 0; i < n; ++i){
                            if(studentGrade[i].equiGrade != 5.0){
                                cout << "Student " << i+1 << "'s equivalent grade: " << studentGrade[i].equiGrade << ". Passed." << "\n" ;

                            }
                            else{
                                cout << "Student " << i+1 << "'s equivalent grade: " << studentGrade[i].equiGrade << ". Failed." << "\n";

                            }
                        }


                        getch();
                      }
            break;
            case 'D': { clrscr();
                        string fname, lname;
                        int found = 0;
                        cout << "Enter the last name of the student: "; cin >> lname;
                        cout << "Enter the first name of the student: "; cin >> fname;
                        //cout << "Enter the middle name of the student: "; cin >> mname;

                        cout << "\n";

                        for(int i = 0; i < n; ++i){
                            if(lname == studentGrade[i].lastName && fname == studentGrade[i].firstName){

                                cout << "Quiz 1 score: " << studentGrade[i].quiz1score << "\n";
                                cout << "Quiz 2 score: " << studentGrade[i].quiz2score << "\n";
                                cout << "Quiz 1 grade: " << studentGrade[i].quiz1grade << "\n";
                                cout << "Quiz 2 grade: " << studentGrade[i].quiz2grade << "\n";
                                cout << "Exercise grade: " << studentGrade[i].exercisesGrade << "\n";
                                cout << "Project grade: " << studentGrade[i].projectGrade << "\n";
                                found = 1;
                            }
                        }

                        if(found == 0) cout << "No such record exists.";
                        getch();
                      }
            break;
            case 'E': { clrscr();

                            int i, j;
                            studenGrade temp;

                            for (i = 0; i < n - 1; i++)
                            {
                                for (j = 0; j < (n - 1-i); j++)
                                {
                                    if (studentGrade[j].equiGrade > studentGrade[j + 1].equiGrade)
                                    {
                                        temp = studentGrade[j];
                                        studentGrade[j] = studentGrade[j + 1];
                                        studentGrade[j + 1] = temp;
                                    }
                                }
                            }


                        cout << "Student records in descending order based on equivalent grade:" << endl;
                        for(int i = 0; i < n; ++i){
                            cout << studentGrade[i].lastName << ", " << studentGrade[i].firstName << ": " << studentGrade[i].equiGrade;
                            cout << endl;
                        }

                        getch();

                      }
            break;
            case 'F': {
                        exit(0);
                      }
            break;
            default: { cout << "Invalid choice input.";}


        }

    }while(choice < 'F' && choice >= 'A');

return 0;
}
