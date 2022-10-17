#include <iostream.h>
#include <conio.h>
#include <vcl.h>
#pragma hdrstop
#pragma argsused
//--
int main(int argc, char* argv0])
int ac,bc,cc,i=0;
double a,b,c,x,xn,xk,dx,F;
cout<<"Enter a=";cin>>a; cout<<"Enter b=";cin>>b; cout<<"Enter c=";cin>>c; cout<<"Enter xn=";cin>>xn; cout<<"Enter xk=";cin>>xk;
cout<<"Enter dx=";cin>>dx;
ac=a,bc=b,cc=c;
cout<<"\n\nn X"<<!'<<" F"<<endl<<endl;
for(x=xn;x<=xk;x+=dx)
if((c<0)&&(b!=0))F=a*x*x+b*b*x;
if((c>0)&&(b==0))F=(x+a)/(x+c);
else F=x/c;
if(((ac&bc)|(ac&cc))!=0)
{
cout<<++i<<" | "<<x<<" | "<<F<<endl;
else cout<<++i<<" | "<<x<<" | "<<int(F)<<endl;
}
getch();
return 0;
}