#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

Person ( string name, int id ) {
this-> name = name;
this -> id = id;
}

void display(){
cout<<"Person's name is: " << this-> name << endl << "Person's id is: " << this-> id << endl;
}

// ==================== Student Class Implementation ====================

Student ( int yearLevel, string major ) {
this-> yearLevel = yearLevel;
this-> major = major;
}

void display() {
cout << "This student's year level is: " << this-> yearLevel << endl << "This student's major is: " << this-> major << endl;
}

// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
