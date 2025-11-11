#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

class Person {
Person ( string name, int id ) {
this-> name = name;
this -> id = id;
}

void display(){
cout<<"Person's name is: " << this-> name << endl << "Person's id is: " << this-> id << endl;
}

getName() {

}

};
// ==================== Student Class Implementation ====================
class Student : Person{

Student ( int yearLevel, string major ) {
this-> yearLevel = yearLevel;
this-> major = major;
}

void display() {
cout << "This student's year level is: " << this-> yearLevel << endl << "This student's major is: " << this-> major << endl;
}

};
// ==================== Instructor Class Implementation ====================
class Instructor : Person {

Instructor ( string department, int experienceYears ) {

this-> department = department;
this-> experienceYears = experienceYears;

}
void display(){

cout<< "This Instructor's department is: " << this-> department << endl << "This Instructor's Experience is: " << this-> experienceYears << endl;
}

};
// ==================== Course Class Implementation ====================

class Course {

Course(string courseCode, string courseName, int maxStudents, Student* students, int currentStudents) {
this-> courseCode = courseCode;
this-> courseName = courseName;
this-> maxStudents = maxStudents;
this-> currentStudents = currentStudents;
}

addStduent(const Students& s){
   
}

void display(){
   cout << "This course's code is: " << this-> courseCode << endl << "This course's name is: " << this-> courseName << endl << "Max number of students is: "
<< this-> maxStudents << endl << "The number of current students is: " << this-> currentStudents << endl << "The students enrolled in this course are: " 
<< Student.display();

};
// ==================== Main Function ====================
int main() {
   
Course c = ("CS101", " Introduction to Programming ", 3 );
Instructor i = ( "Dr. Lina Khaled " , " Computer Science ", 5 );
Student s = ("Omar Nabil", 2 , "Informatics" );   
c.display();
   i.display();
   s.display();
   
   return 0;
}
