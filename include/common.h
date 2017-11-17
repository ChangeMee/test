#ifndef __COMMON_H_
#define __COMMON_H_

#define format "%d\n%s\n%f\n%f\n%f\n"
#define len sizeof(stu)

typedef struct student{
    long num;
    float score;
    struct student *next;
}stu;


#endif