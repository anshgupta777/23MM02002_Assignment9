#include<stdio.h>

struct company{
    
    
    char company_name[20];
    char company_add[50];
    long long int company_phone;
    int noOfEmployee;

};

struct company details;

void main()
{

    printf("\nEnter the Company's nname: ");
    gets(details.company_name);

    printf("\nEnter the Company's Address: ");
    gets(details.company_add);

    printf("\nEnter the phone number: ");
    scanf("%lld",&details.company_phone);

    printf("\nEnter the number of the members at the company: ");
    scanf("%d",&details.noOfEmployee);

    printf("\n\nThe Details of the company are as follows: \n");

    
    printf("Name: %s \n",details.company_name);
    printf("Address: %s \n",details.company_add);
    printf("Phone: %lld \n",details.company_phone);
    printf("Number of Employees: %d \n",details.noOfEmployee);

}