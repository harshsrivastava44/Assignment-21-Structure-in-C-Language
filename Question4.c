/*4. Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]*/
#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};
void display(struct Employee b)
{
    printf("%d %s %d",b.id,b.name,b.salary);

}
struct Employee input()
{
    struct Employee b1;

     printf("Enter id , Name and salary :\n");
      scanf("%d",&b1.id);
     fflush(stdin);
     fgets(b1.name,20,stdin);
     b1.name[strlen(b1.name)-1]='\0';

     scanf("%d",&b1.salary);
     return b1;

}
struct Employee sort(struct Employee b[],int size)
{
     int i,j;
     struct Employee temp,max;


     for ( i = 1; i <=size-1; i++)
     {
        for ( j =0; j <=size-1-i; j++)
        {
            if(b[i].salary>b[j+1].salary)
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;

            }
            max=b[i];

        }

     }
return max;
}
int main()
{
    struct Employee b[10];
    struct Employee c;
    int i;
    for(i=0;i<2;i++)
    b[i]=input();

    c=sort(b,2);

    for ( i = 0; i <2; i++)
    {
     display(b[i]);
     printf("\n");
    }
    printf("\n");
    display(c);




    printf("\n");
    return 0;
}
