#include "student.h"

stu * del(stu * head,long num)
{
    stu *p1 = NULL,*p2 = NULL;
    if(head==0)
        printf("表空!\n");
    else
    {
        p1=head;
        while(p1->num!=num && p1->next!=0)
        {
            p2=p1;p1=p1->next;
        }
        if(p1->num==num)
        {
            if(p1==head)
            {
            head=p1->next;
            }
            else
            {
                p2->next=p1->next;

            }
            printf("删除学号:%ld成功\n",num);
            n=n-1;
       }
       else
            printf("没有%ld这个学号!\n",num);
    }
      return head;
}