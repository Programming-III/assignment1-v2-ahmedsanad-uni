#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here


class Course {

private:
string courseCode;
string courseName;
int maxStudents;
Student* students;
int currentStudents;

public:
Course(string courseCode, string courseName, int maxStudents, Student* students, int currentStudents) {}
addStudent( const student& s );
void displayCourseInfo();

getCourseCode();
getCourseName();
getMaxStudents();
getCurrentStudents();

}




#endif
