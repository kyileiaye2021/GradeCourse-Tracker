// ID: 10616278, First name: Kyi Lei, Last name: Aye 
// Date: 05/24/2023
// Project 1

//function definitions for students who take two courses
#include "Student.h"

/// @brief twoCourseStudent function will print out students who take two courses
/// @param total_students - this is Course type array for total students
void twoCourseStudent(Course total_students[]){
    int firstStructureIndex = 0;
    int secondStructureIndex = 1;
    int thirdStructureIndex = 2;

    //for the students who take first and second courses
    checkTwoCourse(total_students, firstStructureIndex, secondStructureIndex);
    //for the students who take second and third courses
    checkTwoCourse(total_students, secondStructureIndex, thirdStructureIndex);
    //for the students who take first and third courses
    checkTwoCourse(total_students, firstStructureIndex, thirdStructureIndex);

}

/**
 * @brief checkTwoCourse function will check which students take two courses
 * @param total_students - this is Course type array for total students
 * @param structureIndex1 - this is integer for index of Structure type obj array
 * @param structureIndex2 - this is integer for index of Structure type obj array
 */
void checkTwoCourse(Course total_students[], int structureIndex1, int structureIndex2){

    int two_course_student_count = 0;
    vector <int> all_course_id;
    vector <string> all_course_student_name;
    vector <int> course1_score;
    vector <int> course2_score;

    for(int i = 0; i < total_students[structureIndex1].num_of_students; i++){
        for(int j = 0; j < total_students[structureIndex2].num_of_students; j++){

            if(total_students[structureIndex1].student_info[i].getId() == total_students[structureIndex2].student_info[j].getId()){

                all_course_id.push_back(total_students[structureIndex1].student_info[i].getId());
                all_course_student_name.push_back(total_students[structureIndex1].student_info[i].getName());
                course1_score.push_back(total_students[structureIndex1].student_info[i].getScore());
                course2_score.push_back(total_students[structureIndex2].student_info[j].getScore());

                two_course_student_count++;
            }
        }
    }

    if(two_course_student_count >= 2){
        cout << "  There are " << two_course_student_count << " students who take " << total_students[structureIndex1].course_name << " and " << total_students[structureIndex2].course_name << endl;
    }
    else if(two_course_student_count == 1){
        cout << "  There are " << two_course_student_count << " student who takes " << total_students[structureIndex1].course_name << " and " << total_students[structureIndex2].course_name << endl;
    }
    else{
        cout << "There is no student who takes " << total_students[structureIndex1].course_name << " and " << total_students[structureIndex2].course_name << endl;
    }
    
    cout << "--------------------------------------------------" << endl;
    for(int i = 0; i < two_course_student_count; i++){
        cout << all_course_id[i] << setw(10) << all_course_student_name[i] << setw(12) << total_students[structureIndex1].course_name <<
         "(" << course1_score[i] << ")" << setw(12) << total_students[structureIndex2].course_name << "(" << course2_score[i] << ")"  << endl;
    }
    cout << endl;
}