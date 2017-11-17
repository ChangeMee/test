#include "student.h"

stu * create()
{
    stu *p1 = NULL, *p2 = NULL, *head = NULL;
    int i,t,k=1;
    n=0;
    printf("输入学生信息的个数\n");
    scanf("%d",&t);

    head=0;
    for(i=0;i<t;i++)
    {
        p1=(stu *)malloc(len);
        printf("输入第%d个学生的信息\n",k++);
        printf("学号：");
        scanf("%ld",&p1->num);
        printf("成绩:");
        scanf("%f",&p1->score);
        n=n+1;
        if(n==1)
            head=p1;
        else
        p2->next=p1;
        p2=p1;
    }
    p2->next=0;
    return head;
}