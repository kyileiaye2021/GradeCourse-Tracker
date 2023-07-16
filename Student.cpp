// ID: 10616278, First name: Kyi Lei, Last name: Aye 
// Date: 05/24/2023
// Project 1

//class member func definitions
#include "Student.h"

Student :: Student(){
    //default constructor
}

//defining Student constructor with three parameters   
Student :: Student(int student_id, string student_name, int student_score) {
    id = student_id;
    name = student_name;
    score = student_score;
}

Student :: ~Student(){
    //defining destructor
}

//defining mutator and accessor functions   
void Student :: setId(int student_id){
    id = student_id;
}

void Student :: setName(string student_name){
    name = student_name;
}

void Student :: setScore(int student_score){
    score = student_score;
}

int Student :: getId(){
    return id;
}

string Student :: getName(){
    return name;
}

int Student :: getScore(){
    return score;
}