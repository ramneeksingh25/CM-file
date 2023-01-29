#include<iostream>
#include<math.h>
using namespace std;
class func{
    private:
    double a,b,c,d,x,y;
    double f(double X){return a*pow(X,3)+b*pow(X,2)+c*X+d;}
    public:
    void inp(){
        cout<<"Enter the coefficient of the cubic function:";
        cin>>a>>b>>c>>d;
        cout<<"Enter initial points:";
        cin>>x>>y;
    }
    void Secant(){
        float temp;
        while (abs(x-y)>0.0005)
        {
            temp=x;
            x=x-(x-y)*f(x)/(f(x)-f(y));
            y=temp;
        }
        cout<<"The root is "<<y<<endl;
    }
};
int main(){
    func Sec;
    Sec.inp();
    Sec.Secant();
    return 0;
}