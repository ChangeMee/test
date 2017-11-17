#include "student.h"

void print(stu * head)
{
    stu * p;
    printf("此时的%d个学生信息是:\n",n);
    p=head;
    if(head!=0)
    {
        while(p!=0)
       {
        printf("学号:%-10ld成绩:%f\n",p->num,p->score);
        p=p->next;
       }
    }
}

int Tips()
{
    int p;
    printf("<----------请选择需要的功能---------->\n");
    printf("<----------1.输入一个新的链表-------->\n");
    printf("<----------2.删除一个新的纪录-------->\n");
    printf("<----------3.插入一个新的记录-------->\n");
    printf("<----------4.显示全部学生成绩-------->\n");
    printf("<----------0.退出------------------->\n");
    scanf("%d",&p);
    return p;

}