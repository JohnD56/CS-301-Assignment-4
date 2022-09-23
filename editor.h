//
// Created by ronel on 9/21/2022.
//

#ifndef CS_301_ASSIGNMENT_4_EDITOR_H
#define CS_301_ASSIGNMENT_4_EDITOR_H

using namespace std;

class editor {
public:
    int numAssignments;
    int numTests;
    int numExams;

    string lastName;
    string firstName;
    int studentNum;
    int testNum;
    int examNum
    int progNum;

    editor();
    editor(int test);

    void setup();
    void addStudent();
    void recordAssignmentGrade();
    void recordTestGrade();
    void recordExamGrade();
    void changeGrade();
    void finalGrade();
    void gradeData();
    bool isSetup();

private:

};


#endif //CS_301_ASSIGNMENT_4_EDITOR_H
