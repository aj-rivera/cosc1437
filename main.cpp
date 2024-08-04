#include <iostream>
#include "gradeType.h"

using namespace std;

int main()
{
    gradeType currentStudent;

    int input;
    int gradesEntered = 0;
    cout << "Enter up to 10 grades. Enter 999 to quit.\n";
    cout << "Enter grade: ";
    cin >> input;

    while (gradesEntered < 9 && input != 999)
    {
        if (input != 999)
        {
            currentStudent.setGrade(input, gradesEntered);
            gradesEntered++;
        }
        cout << "Enter grade: ";
        cin >> input;
    }

    currentStudent.setAverage(gradesEntered);
    cout << currentStudent.getAverage();
    currentStudent.setCourseGrade();
    cout << currentStudent.getCourseGrade();

    cout << "Done";

    return 0;
}