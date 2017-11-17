#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <jansson.h>
#include <ulfius.h>
#include <sys/stat.h>
#include <stdbool.h>
#include <errno.h>
#include <iniparser.h>
#include <openssl/conf.h>
#include <time.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <net/if.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <bson.h>
#include <bcon.h>
#include <mongoc.h>
#include <pthread.h>

#include "student.h"

int n;

#if RELEASE
int main()
#else
int student()
#endif
{

#if PRINT 
  printf("hello print \n");
#endif
    stu * head=0,*stud;
    int m;
    long del_num;
    int i=1;

    while(i>0)
    {
        system("clear");
        i=Tips();
        switch(i)
        {
            case 1:
           {   system("clear");
               printf("开始输入学生信息:\n");
               head=create();
               system("clear");
               print(head);
               printf("请输入0返回\n");
               scanf("%d",&m);
               while(m!=0)
               {
                   printf("请输入0返回\n");
                   scanf("%d",&m);
               }
               break;

           }
            case 2:
           { 
                system("clear");
                printf("输入要删除的学号:");
                scanf("%ld",&del_num);
                head=del(head,del_num);
                print(head);
                printf("请输入0返回\n");
                scanf("%d",&m);
                while(m!=0)
                {
                   printf("请输入0返回\n");
                   scanf("%d",&m);
                }
                break;
           }
            case 3:
            {
                system("clear");
                stud=(stu *)malloc(len);
                printf("输入要增加的学生学号:");
                scanf("%ld",&stud->num);
                printf("输入要增加的学生成绩:");
                scanf("%f",&stud->score);
                head=insert(head,stud);
                print(head);
                printf("请输入0返回\n");
                scanf("%d",&m);
                while(m!=0)
                {
                    printf("请输入0返回\n");
                    scanf("%d",&m);
                }
                break;
            }
            case 4:
            {   
                system("clear");
                print(head);
                printf("请输入0返回\n");
                scanf("%d",&m);
                while(m!=0)
                {
                    printf("请输入0返回\n");
                    scanf("%d",&m);
                }
                break;
            }
       }
    }

    return 0;
}
