//6. Write a function to sort employees according to their names [refer structure from question 1].
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
void sort(struct Employee b[],int size)
{
     int i,j;
     struct Employee temp;


     for ( i = 1; i <=size-1; i++)
     {
        for ( j =0; j <=size-1-i; j++)
        {
            if(strcmp(b[i].name,b[j+1].name)>0)
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;

            }
          

        }

     }

}
int main()
{
    struct Employee b[10];
    int i;
    for(i=0;i<10;i++)
    b[i]=input();

    sort(b,10);
    printf("Employees According to their names are :\n");

    for ( i = 0; i <10; i++)
    {
     display(b[i]);
     printf("\n");
    }


    printf("\n");
    return 0;
}