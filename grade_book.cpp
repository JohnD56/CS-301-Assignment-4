//
// Created by Alexandro I. Milanez on 9/20/22.
//
#include<iostream>
#include<fstream>
#include<string>

#include "editor.h"

using namespace std;

int count,x,i=0,saved;
float avg=0;

string str,name[100],assign[100],word;
float grade[100];
ifstream file;
ofstream file2;

int main()
{
    file.open("_blank_file_.txt"); // "Grades.dat"
    count=0;// We can use this to find name, the assignment, or grade
    while(file>>word)//This will read the file and store values to the array
    {
        if (count % 3 == 0) {
            name[i] = word;
        } else if (count % 3 == 1) {
            assign[i] = word;
        } else if (count % 3 == 2) {
            grade[i] = stof(word);
            i++;
        }
        saved = i;
        count++;
    }

    editor editor(10); // Test implementation, edit later

    bool loop = true;
    char ch;

    while (loop) {
        cout << "\nEnter your command:";
        cin >> ch;

        switch (ch) {
            case 'S': { // Set up for new semester
                cout << "\nSet up for new semester:" << endl;
                editor.setup();
                break;
            }

            case 'A': { // Add a student
                if(editor.isSetup()) {
                    cout << "\nAdd a student:" << endl;
                    editor.addStudent();
                } else {
                    cout << "Please set up for new semester first." << endl;
                }
                break;
            }

            case 'P': { // Record programming assignment grade for all students
                cout << "\nRecord programming assignment grade for all students:" << endl;
                editor.recordAssignmentGrade();
                break;
            }

            case 'T': { // Record test grade for all students
                cout << "\nRecord test grade for all students:" << endl;
                editor.recordTestGrade();
                break;
            }

            case 'F': { // Record final exam grade for all students
                cout << "\nRecord final exam grade for all students:" << endl;
                editor.recordExamGrade();
                break;
            }

            case 'C': { // Change a grade for a particular student
                cout << "\nChange a grade for a particular student:" << endl;
                editor.changeGrade();
                break;
            }

            case 'G': { // Calculate final grade
                cout << "\nCalculate final grade:" << endl;
                editor.finalGrade();
                break;
            }

            case 'O': { // Output the grade data
                cout << "\nOutput the grade data:" << endl;
                editor.gradeData();
                break;
            }

            case 'Q': { // Quit
                cout << "\nQuit." << endl;
                loop = false;
                break;
            }

            default: {
                cout << "\nPlease enter valid command." << endl;
                break;
            }
        }
    }
}
