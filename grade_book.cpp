//
// Created by Alexandro I. Milanez on 9/20/22.
//
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void viewgrade();
void addgrade();
void removegrade();
void savegrade();
int count,x,i=0,saved;
float avg=0;
char ch='a';

string str,name[100],assign[100],word;
float grade[100];
ifstream file;
ofstream file2;

int main()
{
    file.open("_blank_file_.txt");
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
    while(ch!='x')// This program will loop until it finds x
    {
        cout<<"Enter your command : ";
        cin>>ch;
        if(ch=='v'||ch=='a'||ch=='r'||ch=='s'||ch=='x')
        {
            if(ch=='v')
            {
                viewgrade();
            }
            else if(ch=='a')
            {
                addgrade();
            }
            else if(ch=='r')
            {
                removegrade();
            }
            else if(ch=='s')
            {
                savegrade();
            }
        }
        else
        {
            cout<<"Invalid Entry";
        }
    }
}
void viewgrade()
{

}
void addgrade()
{

}
void removegrade()
{

}
void savegrade()
{

}


