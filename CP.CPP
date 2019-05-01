#include<iostream.h>
#include<conio.h>
class exp
{
long int n,a;
public:
void get_n();
void display();
long int fact(long int n);
void calculate(long int r);
};
void exp::get_n()
{
cout<<"Enter degree for coefficient of Binomial Expansion"<<endl;
cin>>n;
}
long int exp::fact(long int n)
 {
long int b,f=1;
for(b=1;b<=n;b++)
  {
   f=f*b;
  }
return f;
 }
void exp::calculate(long int r)
{
a=fact(n)/(fact(r)*fact(n-r));
}
void exp::display()
{
long int c;
for(c=0;c<=n;c++)
  {
  calculate(c);
  cout<<a<<" ";
  }
}
void main()
{
 clrscr();
 exp c;
 c.get_n();
 c.display();
 getch();
}
/*output
Enter degree for coefficient of Binomial Expansion
6
1 6 15 20 15 6 1 */











                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
