#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
class func
{
private:
    double A,B,C,D,l,u;
public:
    func(double a=0,double b=0,double c=0,double d=0){
        A=a;
        B=b;
        C=c;
        D=d;
    };
    double value(double x){
        return (A*pow(x,3)+B*pow(x,2)+C*pow(x,1)+D);
    }
    void inp(){
        cout<<setprecision(10);
        cout<<"Enter the coefficients of cubic polynomial:\n";
        cin>>A>>B>>C>>D;
        cout<<"Enter the upper limit:";
        cin>>u;
        cout<<"Enter the lower limit:";
        cin>>l;
        cout<<"The function is:\n"<<A<<"x^3 + "<<B<<"x^2 + "<<C<<"x + "<<D<<endl;
    }
    void bisection(){
        double m,Fl,Fm,Fu;
        m=(u+l)/2;
        while (u-l>=0.005)
        {
            m=(u+l)/2;
            Fl=value(l);
            Fm=value(m);
            Fu=value(u);
            if (Fm==0)
            {
                break;
            }
            else if (Fl*Fm)
            {
                u=m;
            }
            else if (Fu*Fm)
            {
                l=m;
            }            
        }
        cout<<"The value of root is: "<<m<<endl;        
        }
};
int main(){
    func example;
    example.inp();
    example.bisection();
    return 0;
}