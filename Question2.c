//2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]
#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
struct Employee input()
{     
    struct Employee b1;
    

     printf("Enter id :\n");
    scanf("%d",&b1.id);

    printf("Enter name of employee :\n");
     fflush(stdin);
    gets(b1.name);
   
  
    printf("enter salary of employee :");
    scanf("%f",&b1.salary);

}
int main()
{
    struct Employee b;
    b=input();
    printf("\n");
    return 0;
}
