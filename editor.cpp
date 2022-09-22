//
// Created by ronel on 9/21/2022.
//

#include <iostream>
#include <fstream>

#include "editor.h"

using namespace std;

bool isSet = false;

editor::editor() {

}

editor::editor(int test) {

}

void editor::setup() {
    bool loop = true;

    while(loop) { // Number of programming assignments prompt  (range 0 - 6)
        cout << "Please enter number of programming assignments:";
        cin >> numAssignments;

        if(numAssignments >=0 && numAssignments <=6) {
            loop = false;
        } else {
            cout << "Please enter a valid number.";
        }
    }

    loop = true;

    while(loop) { // Number of tests prompt  (range 0 - 4)
        cout << "Please enter number of tests:";
        cin >> numTests;

        if(numTests >=0 && numTests <=4) {
            loop = false;
        } else {
            cout << "Please enter a valid number.";
        }
    }

    loop = true;

    while(loop) { // Number of exams prompt  (range 0 - 1)
        cout << "Please enter number final exams:";
        cin >> numExams;

        if(numExams >=0 && numExams <=7) {
            loop = false;
        } else {
            cout << "Please enter a valid number.";
        }
    }

    isSet = true;
}

void editor::addStudent() {
    bool loop = true;

    while(loop) { // Student last name prompt
        cout << "Please enter student last name";
        cin >> lastName;

        if(lastName.length()<21) {
            loop = false;
        } else {
            cout << "Please enter a valid length.";
        }
    }

    loop = true;

    while(loop) { // Student first name prompt
        cout << "Please enter student first name";
        cin >> firstName;

        if(firstName.length()<21) {
            loop = false;
        } else {
            cout << "Please enter a valid length.";
        }
    }

    loop = true;

    while(loop) { // Student last name
        cout << "Please enter student number";
        cin >> studentNum;

        if(studentNum > 0 && studentNum < 10000) {
            loop = false;
        } else {
            cout << "Please enter a valid student number.";
        }
    }
}

void editor::recordAssignmentGrade() { // half finished
    bool loop = true;

    while(loop) { // Ask which program number is to be recorded
        cout << "Please enter program number";
        cin >> progNum;

        if(progNum > 0 && progNum <= progNum) {
            loop = false;


        } else {
            cout << "Please enter a valid program number.";
        }
    }
}

void editor::recordTestGrade() {

}

void editor::recordExamGrade() {

}

void editor::changeGrade() {

}

void editor::finalGrade() {

}

void editor::gradeData() {

}

bool editor::isSetup() {
    return isSet;
}
