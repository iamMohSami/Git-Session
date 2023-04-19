#include<stdio.h>
#include<string.h>

struct student {
    int Roll_no ;
    char name[33] ;
    float marks ;
} ;

int main() {
    struct student *p ;
    struct student s ;
    char str[20] ;
     p= &s;
     printf("Enter your Roll.no , name and marks respectuvely \n") ;
     scanf(" %d",&p->Roll_no);
     gets(s.name) ;
     scanf("%f",&p->marks);
     printf("The Roll no is %d \n",(*p).Roll_no) ;
     printf("The name is %s \n",p->name);
     printf("Your marks are %f",p->marks) ;

}