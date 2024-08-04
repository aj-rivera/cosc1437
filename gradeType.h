
class gradeType
{
private:
public:
    char courseGrade;
    int grades[10];
    double average;

    void setCourseGrade();
    void setAverage(int index);
    void setGrade(int grade, int index);

    char getCourseGrade();
    double getAverage();

    gradeType();
};