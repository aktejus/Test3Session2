#include<stdio.h>
void input(int *num1,int *den1,int *num2,int *den2)
{
  printf("Enter the two fractions\n");
  scanf("%d%d %d%d",num1,den1,num2,den2);
}
void add(int num1,int den1,int num2,int den2,int *num3,int *den3)
{
  *den3= den1*den2;
  *num3= (num1*den2)+(num2*den1);
}
void output(int num1,int den1,int num2,int den2,int num3,int den3)
{
  printf("The sum of %d/%d + %d/%d is %d/%d",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int a,b,c,d,x,y;
  input(&a,&b,&c,&d);
  add(a,b,c,d,&x,&y);
  output(a,b,c,d,x,y);
  return 0;
}