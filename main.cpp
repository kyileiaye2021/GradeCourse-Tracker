// ID: 10616278, First name: Kyi Lei, Last name: Aye 
// Date: 05/24/2023
// Project 1

//main func def
#include "Student.cpp"
#include "menu.cpp"
#include "data.cpp"
#include "showAllList.cpp"
#include "studentAllCourses.cpp"
#include "studentTwoCourses.cpp"
#include "topThreeScores.cpp"

int main(){

    int num_of_courses, menu_choice;
    cout << "Enter the number of courses : ";
    cin >> num_of_courses;

    //a dynamic array for storing file names 
    string* fileName = new string[num_of_courses];
    
    for(int i = 0; i < num_of_courses; i++){
        cout << "Enter filename " << (i + 1) << " : ";
        cin >> fileName[i];
    }

    cout << endl;
    showMenu(menu_choice, num_of_courses, fileName);

}