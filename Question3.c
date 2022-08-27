//3. Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
void display(struct Employee b)
{
    printf("%d %s %.2f",b.id,b.name,b.salary);

}
struct Employee input()
{     
    struct Employee b1;
    

     printf("Enter id :\n");
    scanf("%d",&b1.id);

    printf("Enter name of employee :\n");
    fflush(stdin);
    gets(b1.name);
   
  
    printf("enter salary of employee :\n");
    scanf("%f",&b1.salary);
     return b1;

}
int main()
{
    struct Employee b;
    b=input();
    display(b);
    printf("\n");
    return 0;
}
