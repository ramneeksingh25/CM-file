#include<iostream>
using namespace std;
class num{
    float h,a,b,sum,f[20];
    int n;
    public:
    void inp(){
        cout<<"Enter n: ";
        cin>>n;
        cout<<"Enter upper limit: ";
        cin>>b;
        cout<<"Enter lower limit: ";
        cin>>a;
        h=b-a/n;
        for (int i = 0; i <n; i++)
        {
            cout<<"f("<<a+i*h<<")=";
            cin>>f[i];            
        }
    }
    void simpsons38(){
        sum=f[0]+f[n];
        for (int i = 0; i < n; i++)
        {
            if (i%3==0)
            {
                sum=sum+2*f[i];
            }
            else
            {
                sum=sum+3*f[i];
            }
        }
        float integral=3*h*sum/8;
        cout<<"The value of integral is "<<integral<<endl;
    }
};
int main(){
    num A;
    A.inp();
    A.simpsons38();
}