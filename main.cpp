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

};
// ==================== Student Class Implementation ====================
class Student {

Student ( int yearLevel, string major ) {
this-> yearLevel = yearLevel;
this-> major = major;
}

void display() {
cout << "This student's year level is: " << this-> yearLevel << endl << "This student's major is: " << this-> major << endl;
}

};
// ==================== Instructor Class Implementation ====================
class Instructor {

Instructor ( string department, int experienceYears ) {

this-> department = department;
this-> experienceYears = experienceYears;

}
void display(){

cout<< "This Instructor's department is: " << this-> department << endl << "This Instructor's Experience is: " << this-> experienceYears << endl;
}

// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
