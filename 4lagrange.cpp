#include<iostream>
using namespace std;
class example{
    private:
    double x[20],y[20],n,X;
    double p(int N){
        double product=1;
        for (int i = 0; i < n; i++)
        {
            if (i==N)
            {
                continue;
            }
            else
            {
                product=product*(X-x[i])/(x[N]-x[i]);
            }
        }
        product=product*y[N];
        return product;
    }
    public:
    void in(){
        cout<<"Enter number of given values: ";
        cin>>n;
        cout<<"Enter given values: \n";
        for (int i = 0; i < n; i++)
        {
            cout<<"x"<<i+1<<"=";
            cin>>x[i];
            cout<<"y"<<i+1<<"=";
            cin>>y[i];
        }
        cout<<"Enter the value to be interpolated:";
        cin>>X;

    }
    void lagrange(){
        double sum=0;
        for (int i = 0; i < n; i++)
        {
            sum=sum+p(i);                       
        }
        cout<<"f("<<X<<")="<<sum<<endl;     
    }
};
int main(){
    example A;
    A.in();
    A.lagrange();
    return 0;
}