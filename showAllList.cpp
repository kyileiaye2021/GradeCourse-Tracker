// ID: 10616278, First name: Kyi Lei, Last name: Aye 
// Date: 05/24/2023
// Project 1

//showAllList Func Def
#include "Student.h"

/**
 * @brief showAllLists func will print out all students in all files
 * @param total_students - this is the Course type array for total students
 * @param num_of_courses - this is the integer for number of students
 */
void showAllLists(Course total_students[], int num_of_courses){
    int a = 0;
    while(a < num_of_courses){
        cout << "Course : " << total_students[a].course_name << endl;
        cout << "----------------------------------------------" << endl;

        for(int i = 0; i < total_students[a].num_of_students; i++){
            cout << setw(10) << total_students[a].student_info[i].getId() << setw(10) << total_students[a].student_info[i].getName() << setw(6) << total_students[a].student_info[i].getScore() << endl;
        }

        cout << "==============================================" << endl;
        cout << endl;
        a++;
    }
}


