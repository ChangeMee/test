#include "student.h"

stu *insert(stu * head, stu * stud)
{
    stu *p1 = NULL, *p2 = NULL, *p0 = NULL;
    p0=stud;p1=head;
    if(head==0)
    {
        head=p0;stud->next=0;
    }
    else
    {
        while(p1->num<p0->num && p1->next!=0)
        {
            p2=p1;p1=p1->next;
        }
        if(p1->num>=p0->num)
        {
            if(p1==head)
            {
                head=p0;
                p0->next=p1;
             }
            else
            {
                p2->next=p0;
                p0->next=p1;
            }

        }
        else
        {
            p1->next=p0,p0->next=0;
        }

    }
    n=n+1;
    return head;
}