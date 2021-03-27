#include<stdio.h>
#include<stdlib.h>
typedef struct person
{
float salary;
int age;
char name[50];
}per;

int main()
{
int i,n;
per *ptr;
ptr=(per*)malloc((sizeof(per)));
printf("enter the number of persons:");
scanf("%d",&n);
for (i=0; i<n; i++)
{
printf("enter the name and age respectively: ");
scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);

}


   printf("Displaying Information:\n");
   for(i = 0; i < n; i++)
       printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);

   return 0;


}
