#include <iostream>
#include "gradeType.h"

using namespace std;

gradeType::gradeType()
{
    courseGrade;
    grades[10];
    average;
}

void gradeType::setGrade(int grade, int index)
{
    grades[index] = grade;
}

void gradeType::setAverage(int index)
{
    double sum = 0;
    for (int i = 0; i <= index; i++)
    {
        sum += grades[index];
    }
    average = sum / (index + 1);
}

void gradeType::setCourseGrade()
{
    if (average >= 90)
        courseGrade = 'A';
    else if (average >= 80)
        courseGrade = 'B';
    else if (average >= 70)
        courseGrade = 'C';
    else if (average >= 60)
        courseGrade = 'D';
    else
        courseGrade = 'F';
}

char gradeType::getCourseGrade()
{
    return courseGrade;
}

double gradeType::getAverage()
{
    return average;
}