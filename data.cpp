// ID: 10616278, First name: Kyi Lei, Last name: Aye 
// Date: 05/24/2023
// Project 1

//functions for reading and getting data from data files
#include "Student.h"

/// @brief the getData func will get data from the file to each dynamic array of Student type obj
/// @param total_students - this is the Course struct type array for total students 
/// @param num_of_courses - this is the int type number of courses
/// @param fileName - this is the string type array of file names
void getData(Course total_students[], int num_of_courses, string fileName[]){

    //get data for each file
    for(int i = 0; i < num_of_courses; i++){
        Student * course;//class dynamic obj array according to num_of_courses
        readData(fileName[i], total_students, course, i);
        
    }

}

/// @brief the readData func will read data from the file to to each dynamic array of Student type obj
/// @param file - this is the string type file whose name will be used in the function
/// @param total_students - this is the Course struct type array for total students  
/// @param each_course_student - this is the Student type dynamic array of each file name
/// @param struct_index - this is the int that will be used as an index of array when taking data
void readData(string file, Course total_students[], Student * each_course_student, int struct_index){
    int student_id, student_score;
    string student_name;

    //open and connect the file
    ifstream infile;
    infile.open(file);
    if(infile.fail()){
        cout << "Input file opening failed." << endl;
        exit(1);
    }

    //read the first line
    infile >> total_students[struct_index].course_name >> total_students[struct_index].num_of_students;

    each_course_student = new Student[total_students[struct_index].num_of_students];//creating a dynamic array of each obj of Stuent type 

    //read student data and assign them to dynamic array indexed var
    for(int i = 0; i < total_students[struct_index].num_of_students; i++){
        infile >> student_id >> student_name >> student_score;
        each_course_student[i].setId(student_id);
        each_course_student[i].setName(student_name);
        each_course_student[i].setScore(student_score);
    }

    total_students[struct_index].student_info = each_course_student;//assigning the array of students into an object of struct Course type
}

