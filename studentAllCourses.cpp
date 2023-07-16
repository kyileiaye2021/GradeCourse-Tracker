// ID: 10616278, First name: Kyi Lei, Last name: Aye 
// Date: 05/24/2023
// Project 1

//defining functions for students who take all courses
#include "Student.h"

/**
 * @brief allCourseStudent func will print out  students who take all courses
 * @param total_students - this is Course type array for total students
 */
void allCourseStudent(Course total_students[]){
    int all_course_student_count = 0;//this will count the num of student who join all courses
    int structureIndex = 0;

    vector <int> all_course_id;
    vector <string> all_course_student_name;
    vector <int> cpp_score;
    vector <int> java_score;
    vector <int> python_score;

    
    for(int i = 0; i < total_students[structureIndex].num_of_students; i++){
        for(int j = 0; j < total_students[structureIndex + 1].num_of_students; j++){

            //if the same id appears in two files
            if(total_students[structureIndex].student_info[i].getId() == total_students[structureIndex + 1].student_info[j].getId()){

                //find that id in another text file
                for(int k = 0; k < total_students[structureIndex + 2].num_of_students; k++){

                    if(total_students[structureIndex].student_info[i].getId() == total_students[structureIndex + 2].student_info[k].getId()){

                        all_course_id.push_back(total_students[structureIndex].student_info[i].getId());
                        all_course_student_name.push_back(total_students[structureIndex].student_info[i].getName() );
                        cpp_score.push_back(total_students[structureIndex].student_info[i].getScore());
                        java_score.push_back(total_students[structureIndex + 1].student_info[j].getScore());
                        python_score.push_back(total_students[structureIndex + 2].student_info[k].getScore());

                        all_course_student_count++;
                    }
                }
            }
        }
    }

    //printing out the students who take all courses
    cout << "  There are "  << all_course_student_count << " students who take all courses" << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    for(int i = 0; i < all_course_student_count; i++){
        cout << all_course_id[i] << setw(10) << all_course_student_name[i] << setw(13) << total_students[0].course_name << "(" << cpp_score[i] << ")" 
        << setw(13) << total_students[1].course_name << "(" << java_score[i] << ")" << setw(13) << total_students[2].course_name << "(" << python_score[i] << ")" << endl;
    }
    cout << endl;
}