// ID: 10616278, First name: Kyi Lei, Last name: Aye 
// Date: 05/24/2023
// Project 1

//defining funcs for students who got top three score in each course
#include "Student.h"

/// @brief topThreeScore func will print out students who get top three highest scores
/// @param total_students - this is Course type array for total students
void topThreeScore(Course total_students[]){
    int firstStructureIndex = 0;
    int secondStructureIndex = 1;
    int thirdStructureIndex = 2;

    //for the students who got top three scores in 1st course
    checkTopScores(total_students, firstStructureIndex);

    //for the students who got top three scores in 2nd course
    checkTopScores(total_students, secondStructureIndex);

    //for the students who got top three scores in 3rd course
    checkTopScores(total_students, thirdStructureIndex);
}


/// @brief checkTopScores func will check which students get the highest top three scores
/// @param total_students  - this is Course type array for total students
/// @param structureIndex - this is an integer for index of Structure type obj array
void checkTopScores(Course total_students[], int structureIndex){
    vector <int> scores;
    vector <int> unique_scores;

    //putting all scores of each course into scores vector
    for(int i = 0; i < total_students[structureIndex].num_of_students; i++){
        scores.push_back(total_students[structureIndex].student_info[i].getScore());
    }

    //arranging the elements of scores vector from largest to smallest num
    for(int i = 0; i < scores.size(); i++){
        for(int j = 0; j < scores.size(); j++){
            if(scores[j] < scores[i]){
                int temp = scores[j];
                scores[j] = scores[i];
                scores[i] = temp;
            }
        }
    }

    //putting all distinct scores into another vector unique_scores
    for(int i = 0; i < scores.size(); i++){
        if(scores[i] != scores[i + 1]){
            unique_scores.push_back(scores[i]);
        }
    }
   
    //for printing out the top three highest scores of each course
    cout << "[ " << total_students[structureIndex].course_name << " Top Three Scores ]" << endl;

    for(int i = 0; i < 3; i++){

        int highest_score_students = 0;

        for(int j = 0; j < total_students[structureIndex].num_of_students; j++){

            if( unique_scores[i] == total_students[structureIndex].student_info[j].getScore()){
                highest_score_students++;

                if(highest_score_students >= 2){
                    cout << setw(9) << total_students[structureIndex].student_info[j].getId() << setw(10) << total_students[structureIndex].student_info[j].getName() << endl;
                }
                else{
                    cout << (i + 1) << ". " << unique_scores[i] << endl;
                    cout << setw(9) << total_students[structureIndex].student_info[j].getId() << setw(10) << total_students[structureIndex].student_info[j].getName() << endl;
                }

            }
        }
        //for the courses which has no second and third highest score students
        if(highest_score_students == 0){
            if(i == 1){
                cout << "There is no 2nd place student. " << endl;
            }
            else{
                cout << "There is no 3rd place student." << endl;
            }
        }
    }
    cout << endl;
}