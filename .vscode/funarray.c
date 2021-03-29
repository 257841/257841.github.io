#include<stdio.h>
#include<stdlib.h>
typedef struct person
{
    int age;
    float weight;
    char name[100];
}per;
void display(per s);
int main()
{
    //int n;
   per p;
    //printf("enter the number of persons:");
    //scanf("%d",&n);
   // for(int i=0;i<n;i++)
    //{
        printf("eneter the name:\n");
        scanf("%s",p.name);
        printf("enter the age:\n");
        scanf("%d",&p.age);
        printf("enter the weight:\n");
        scanf("%f",&p.weight);
        
    //}
     display(p);
    return 0;
}

   void display(per s)
   {
       printf("INFORMATION:\n");
       printf("Name:%s\n",s.name);
       printf("age:%d\n",s.age);
       printf("weight:%f\n",s.weight);
   }

    

