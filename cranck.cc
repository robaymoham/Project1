#include<iostream>
#include<string>
#include<cstdlib>
#include<stdio.h>
#include<cmath>
#include<math.h>
using namespace std;
  
double f(double x,double c,double d,double PV,double FV,double N)  
  
{
 

    double h= (((c/x)*pow(1+x,1-d))+((FV-(c/x))*(1/pow(1+x,N+d)))) - PV;   
    return h;
}
int main()
{
double c,d,FV,PV,N;
   cout << "Enter the coupon value=" << endl;
cin >> c;
cout << "Enter the year fraction=" << endl;
cin >> d;
cout << "Enter the final value=" << endl;
cin >> FV;
cout << "Enter the present value=" << endl;
cin >> PV;
cout << "Enter the number untill maturity="<<endl;
cin >> N;

double r0,r1,r2,e;
cout << "Enter the initial guess="<< endl;
cin >> r0;
cout << "b=\n"<< endl;               
cin >> r1;
cout << "Enter the degree of accuracy"<< endl;
cin >> e;                    
while(abs(r0-r1)>=e)
{    
                   
r2=r1-((f(r1,c,d,PV,FV,N)*(r1-r0))/(f(r1,c,d,PV,FV,N)-f(r0,c,d,PV,FV,N)));
r0=r1;
r1=r2;

  
}          
cout <<"\nYTM is  "<< r2 << endl;    //print the root
return 0;
}
