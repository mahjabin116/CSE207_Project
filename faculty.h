#ifndef FACULTY_H
#define FACULTY_H
enum designation{
    LECTURER = 1,
    SENIOR_LECTURER,
    ASSISTANT_PROFESSOR,
    ASSOCIATE_PROFESSOR,
    PROFESSOR,
};

typedef struct faculty{
    char *name;
    char *id;
    int designator;
}  faculty;

void addfaculty();




#endif