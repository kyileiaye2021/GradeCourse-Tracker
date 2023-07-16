// ID: 10616278, First name: Kyi Lei, Last name: Aye 
// Date: 05/24/2023
// Project 1

//menu func and user choice func def
#include "Student.h"

/**
 * @brief the showMenu function will print out the options of Menu
 * @param choice - int reference type integer that will be changed according to the user input
 * @param num_of_courses - integer for number of courses
 * @param fileName - string type array for filename
 */
void showMenu(int& choice, int num_of_courses, string fileName[]){
    do{
        cout << "============================= Menu =============================" << endl;
        cout << "1. Show all course list " << endl;
        cout << "2. List of students who take all courses " << endl;
        cout << "3. List of students who take two courses " << endl;
        cout << "4. Print out top three scores for each course " << endl;
        cout << "5. Quit" << endl;
        cout << "---> select : ";
        cin >> choice;
        cout << endl;
        menuChoiceAction(choice, num_of_courses, fileName);
    }while(choice != 5);
    
}

/**
 * @brief the menuChoiceAction func will call functions according to the user's option
 * @param choice - user's choice for menu
 * @param num_of_courses - integer for number of courses
 * @param fileName - string type array for the file names
 */
void menuChoiceAction(int choice, int num_of_courses, string fileName[]){
    Course* total = new Course[num_of_courses];
    switch (choice)
    {
        case 1 : 
            getData(total, num_of_courses, fileName);
            showAllLists(total, num_of_courses);
            break;

        case 2 :
            getData(total, num_of_courses, fileName);
            allCourseStudent(total);
            break;
        
        case 3 :
            getData(total, num_of_courses, fileName);
            twoCourseStudent(total);
            break;
        
        case 4 :
            getData(total, num_of_courses, fileName);
            topThreeScore(total);
            break;
        
        default :
            exit(0);
    }
}
