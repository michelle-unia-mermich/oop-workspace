#ifndef GRADE_H
#define GRADE_H
#include <string>
using namespace std;


class Grade
{
    private:
    string assignment;
    int value;
    int student_id; //this shows the association |student|1--(student_id)--------------0..*|Grade|
    int course_id; //this shows the association |Course|1--(student_id)--------------0..*|Grade|
    //this means that each Grade can only have one student_id and one course_id
    //but the same student_id and course_id can be used for different classes
    public:
    Grade();
    Grade(string _assignment, int _value, int _student_id, int _course_id);
    
    int get_value();
    string get_assignment();

    ~Grade()
    {

    };
};

#endif
