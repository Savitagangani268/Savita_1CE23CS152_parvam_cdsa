#include<stdio.h>
#include<string.h>
int main()
{
    struct person   
    {
       int age;
       char name[20];
       float marks;

    };
    struct person p1;
    printf("enter the user name");
    fgets(p1.name,sizeof(p1.name),stdin);
    printf("age is %d\n",p1.age);
    printf("name is %s\n",p1.name);
    printf("marks is %.2f\n",p1.marks);
    printf("the student :%s"p1.name+" "+"is passed");
    return 0;
}




    
    
