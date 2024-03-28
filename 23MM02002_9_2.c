#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    char roll_no[20];
    char address[50];
    int age;
    double avg;

}s[6];

void display (struct student s)
{
    printf("\nName: %s",s.name);
    printf("\tRoll number:%s",s.roll_no);
    printf("\nAddress: %s",s.address);
    printf("\nAge: %d",s.age);
    printf("\nAverage Marks: %lf",s.avg);

}

void main()
{
    int i;
    for(i=0;i<=5;i++)
    {
        
        
        printf("Enter the name of student %d",i+1);
        scanf("%s",s[i].name);
        printf("Enter the rollno of student %d",i+1);
        scanf("%s",s[i].roll_no);
        printf("Enter the address of sstudent %d",i+1);
        scanf("%s",s[i].address);
        printf("Enter the age of student %d",i+1);
        scanf("%d",&s[i].age);
        printf("Enter the marks of student %d",i+1);
        scanf("%lf",&s[i].avg);


    }

    printf("The Details of the students are as follows");

    for(i=0;i<6;i++)
    {

        display(s[i]);

    }

}