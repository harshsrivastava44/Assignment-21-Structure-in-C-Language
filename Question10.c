/*10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.*/
#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[20];
    int chem_marks,math_marks,phy_marks;

};

int main()
{
    struct student st[100];
    int i,n;
    float percentage;
    printf("enter the number of student to store information :\n ");
    scanf("%d",&n);
    for (i=0; i < n; i++)
    {
     printf("Enter Rollno:\n");
     scanf("%d",&st[i].rollno);
     printf("Enter Name :\n");
     fflush(stdin);
     fgets(st[i].name,20,stdin);
     st[i].name[strlen(st[i].name)-1]='\0';
     printf("enter marks of chemistry math and physics : \n");
     scanf("%d%d%d",&st[i].chem_marks,&st[i].math_marks,&st[i].phy_marks);
    }
    for ( i=0;i<n;i++)
    {
        printf("%d %s \n",st[i].rollno,st[i].name);
        printf("chem=%d ,math=%d ,phy=%d",st[i].chem_marks,st[i].math_marks,st[i].phy_marks);
        percentage=(st[i].chem_marks + st[i].math_marks + st[i].phy_marks)/3;
        printf("\nPercentage =%.2f\n",percentage);
        printf("\n");
    }

return 0;

}
