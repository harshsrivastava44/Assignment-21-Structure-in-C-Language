//1. Define a structure Employee with member variables id, name, salary
#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct Employee b;
    char name[20];
    printf("Enter id :\n");
    scanf("%d",&b.id);

    printf("Enter name of employee :\n");
     fflush(stdin);
    gets(b.name);
   
  
    printf("enter salary of employee :");
    scanf("%f",&b.salary);
    printf("employee detail : \n %d ,%s ,%.2f",b.id,b.name,b.salary);
    return 0;
  
}
