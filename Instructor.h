#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here

class Instructor : Person{

protected:
string department;
int experienceYears;


public: 
Instructor ( string department , int experienceYears) {}
void display();

}



#endif
