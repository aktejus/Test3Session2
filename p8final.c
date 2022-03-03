#include<stdio.h>
struct _fraction
{
int num,den;
}
typedef Fraction;
int gcd(int a,int b)
{
  int gcd(int a,int b);
  int t;
    while (b !=0)
      {
        t = b;
        b = a%b;
        a = t;
        }
    return a;
}
int input_n()
{
  int n;
  printf("Enter n \n");
  scanf("%d",&n);
  return n;
}
Fraction input_fraction()
{
  Fraction f;
  printf("Input a fraction\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}
void input_n_fractions(int n,Fraction f[n])
{
  for(int i=0;i<n;i++)
    {
      f[i]=input_fraction();
    }
}
Fraction add_fractions(Fraction f1, Fraction f2)
{
  Fraction sum;
  sum.num=f1.num*f2.den+f2.num*f1.den;
  sum.den=f1.den*f2.den;
  int g=gcd(sum.num,sum.den);
  sum.num=sum.num/g;
  sum.den=sum.den/g;
  return sum;
}
Fraction add_n_fractions(int n,Fraction f[n])
{
  Fraction sum;
  sum=f[0];
  for(int i=1;i<n;i++)
    {
      sum=add_fractions(sum,f[i])
    }
  return sum;
}
void output(Fraction f1, Fraction f2, Fraction sum)
{
  printf("The sum of %d/%d + %d/%d is %d/%d\n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
int main()
{
  int n;
  n=input_n();
  Fraction f[n];
  input_n_fractions(n,f);
  return 0;
}
