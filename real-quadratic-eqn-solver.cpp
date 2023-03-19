#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,x1,x2,d;
    cout<<"Enter coefficient of x^2:";
    cin>>a;
    cout<<"Enter coefficient of x:";
    cin>>b;
    cout<<"Enter constant:";
    cin>>c;
    d=b*b-4*a*c;
    x1=(-b+ sqrt(d))/(2*a);
    x2=(-b- sqrt(d))/(2*a);
    if (d>0){
        cout<<"Two roots of the equation are"<<x1<<" ,"<<x2;
    }
    else if(d=0){
        cout<<"Two roots are equal "<<x1<<endl;
    }
    else {
        cout<<"Roots are imaginary";
    }
    return 0;
}