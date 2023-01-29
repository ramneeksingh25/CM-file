#include<iostream>
using namespace std;
double trapezoidal(double y[],float a,float b, int n)
{
    float sum=y[0]+y[n];
    for(int i=1;i<n;i++){
        sum=sum+2*y[i];
    }
    return ((b-a)/n)*sum/2;
}
int main(){
    double y[20];
    int a,b,n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter upper limit of integral:";
    cin>>b;
    cout<<"Enter lower limit of integral:";
    cin>>a;
    cout<<"Enter the values of function: \n";
    for(int i=0;i<=n;i++){
        cout<<"f(x"<<i<<")=";
        cin>>y[i];
    }
    cout<<"Value of integral is "<<trapezoidal(y,a,b,n)<<endl;
}