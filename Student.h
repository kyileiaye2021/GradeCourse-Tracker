// ID: 10616278, First name: Kyi Lei, Last name: Aye 
// Date: 05/24/2023
// Project 1

//class and func declaration

#ifndef AYE_KYI_LEI
#define AYE_KYI_LEI

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

class Student{

private : 
    int id;
    string name;
    int score;

public : 
    //constructors and destructor declaration
    Student();
    Student(int student_id, string student_name, int student_score);
    ~Student();
    
    //mutator and accessor func declaration
    void setId(int);
    void setName(string);
    void setScore(int);
    int getId();
    string getName();
    int getScore();
};

struct Course{

    string course_name;
    int num_of_students;
    Student * student_info;//a pointer var which will point to a dynamic array of Student type

};

//func declaration
void showMenu(int&, int, string[]);//this function will show menu
void menuChoiceAction(int, int, string[]);//this function will navigate to the functions according to the user's choices
void getData(Course[], int, string[]);//this func will get data from each file to each dynamic array of Student type
void readData(string, Course[], Student * , int);//this func will read data from each file
void showAllLists(Course[], int);//this func will print out all students from each file
void allCourseStudent(Course[]);//this func will print out students who take all three courses
void checkTwoCourse(Course[], int, int);//this func will check which students take two courses
void twoCourseStudent(Course[]);//this func will print out students who take two courses
void checkTopScores(Course[], int);//this func will check which students get highest three scores
void topThreeScore(Course[]);//this func will print out students who get highest three scores

#endif