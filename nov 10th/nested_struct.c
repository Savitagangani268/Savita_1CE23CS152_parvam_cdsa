#include<stdio.h>
#include<string.h>
    struct address  
    {
       char street[20];;
       char city[20];
       char state[20];
    };
    struct person
    {
        int age;
        char name[20];
        struct address address;

    };
    int main()
    {
    struct person person;
    printf("enter the user name");
    scanf("%s",person.name);
    printf(" ENTER age :");
    scanf("%d",&person.age);
    printf("enter street:");
    scanf("%s",person.address);
    printf("enter city:");
    scanf("%s",person.address.city);
    printf("enter state:");
    scanf("%s",person.address.state);

    printf("\n Name :%s\n",person.name);
    printf("Age :%d\n",person.age);
    printf("Street :%s\n",person.address.street);
    printf("City :%s\n",person.address.city);
    printf("State :%s\n",person.address.state);
    return 0;
    }




    
    
