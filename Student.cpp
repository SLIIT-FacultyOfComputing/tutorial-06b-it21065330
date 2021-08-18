#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
void Student:: assignDetails(int stdId , char pname[20]) {

    studentID = stdId;
    strcpy(name,pname);
}

// Display StudentId and Name
void Student::display() {
   cout<<"Student ID : " <<studentID <<endl;
   cout<<"Student Name : " <<name;

}
