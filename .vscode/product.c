#include<stdio.h>
/**
 * @brief 
 * 
 */
typedef struct complex
{
    float real;float imaginary;

}comp;
comp add(comp n1,comp n2);
//comp prod(comp n1,comp n2);
comp diff(comp n1,comp n2);
int main()
{
    comp n1;comp n2;comp res1,res2;
n1.real=5;n1.imaginary=9;
n2.real=8;n2.imaginary=5;
res1=add(n1,n2);
res2=diff(n1,n2);
printf("sum: %f + j%f\n",res1.real,res1.imaginary);
printf("difference:%f+j%f\n",res2.real,res2.imaginary);
return 0;

}
/**
 * @brief 
 * 
 * @param n1 
 * @param n2 
 * @return comp 
 */
comp add(comp n1,comp n2)
{
    comp temp;
    temp.real=n1.real+n2.real;
    temp.imaginary=n1.imaginary+n2.imaginary;
    return(temp);
}
comp diff(comp n1,comp n2)
{
     comp temp;
    temp.real=n1.real-n2.real;
    temp.imaginary=n1.imaginary-n2.imaginary;
    return(temp);
}


