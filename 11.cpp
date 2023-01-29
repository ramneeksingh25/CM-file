#include<iostream>
using namespace std;
double funct(double x,double y){
    return (y*y-x*x)/(y*y+x*x);
}
int main(){
    float x,y,X,Y,k1,k2,k3,k4,h;
    cout<<"Enter x0:";
    cin>>x;
    cout<<"Enter y0:";
    cin>>y;
    cout<<"Enter value at which function to be calculated: ";
    cin>>X;
    cout<<"Enter h:";
    cin>>h;
    int n=int((X-x)/h);
    for (int i = 0; i < n; i++)
    {
        k1=h*funct(x,y);
        k2=h*funct(x+h/2,y+k1/2);
        k3=h*funct(x+h/2,y+k2/2);
        k4=h*funct(x+h,y+k3);
        y+=(k1+2*k2+2*k3+k4)/6;
        x+=h;
    }
    cout<<"The value of diff eq at "<<X<<" is "<< y << endl;
    return 0;
}