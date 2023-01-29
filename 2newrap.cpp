#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
class func{
    private:
    double a,b,c,d,x,m;
    double f(double x){
        return a*pow(x,3)+b*pow(x,2)+c*x+d;
    }
    double df(double x){
        return a*pow(x,2)+b*x+c;
    }
    public:
    void inp(){
        // cout<<setprecision(10);
        cout<<"Enter coefficients of the cubic function:"<<endl;
        cin>>a>>b>>c>>d;
        cout<<"Enter the initial point:";
        cin>>x;
        cout<<"Enter multiplier:";
        cin>>m;
    }
    void NR(){
        double h,temp;
        while (abs(temp-x)>0.00005)
        {
            temp=x;
            x=x-m*f(x)/df(x);  
        }
        cout<<"The approximate root is "<<x<<endl;
    }
};
int main(){
    func newton;
    newton.inp();
    newton.NR();
    return 0;
}