#include<iostream>
using namespace std;
class num{
    int n;
    double f[20];
    float sum,a,b,h;
    public:
    void inp(){
        cout<<"Enter n:";
        cin>>n;
        if (n%2!=0)
        {
            cout<<"enter valid n!!"<<endl;
            return;
        }
        cout<<"Enter upper limit";
        cin>>a;
        cout<<"Enter lower limit";
        cin>>b;
        h=(a-b)/n;
        cout<<"Enter values of function:";
        for (int i = 0; i <= n; i++)
        {
            cout<<"f("<<b+i*h<<")=";
            cin>>f[i];
        }
    }
    void simp13()
    {
        sum=f[0]+f[n];
        cout<<f[n];
        for (int i = 0; i <=n; i++)
        {
            if (i%2==0)
            {
                sum=sum+2*f[i];
            }
            else
            {
                sum=sum+4*f[i];
            }
        }
        cout<<"The integral is "<<h*sum/3<<endl;
    }
};
int main(){
    num example;
    example.inp();
    example.simp13();
}