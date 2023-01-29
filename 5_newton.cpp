#include<iostream>
using namespace std;

void table(float x[],float y[][10],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            y[j][i]=(y[j][i-1] - y[j+1][i-1])/(x[j]-x[i+j]);
        }
    }
}
void printtable(float y[][10],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<y[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
float product(int i,float value, float x[]){
    float p=1;
    for (int j = 0; j < i; j++)
    {
        p=p*(value-x[j]);
    }
    return p;
}
float formula(float value, float x[],float y[][10],int n){
    float sum=y[0][0];
    for (int i = 1; i < n; i++)
    {
        sum=sum+product(i,value,x)*y[0][i];
    }
    return sum;
}
int main(){
    int n;
    float value,sum,x[10],y[10][10];
    cout<<"Enter the number of inputs:";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter x"<<i<<": ";
        cin>>x[i];
        cout<<"Enter y"<<i<<": ";
        cin>>y[i][0];
    }
    table(x,y,n);
    printtable(y,n);
    cout<<"Enter value to be interpolated: ";
    cin>>value;
    cout<<"Value of function at "<<value<<" is "<<formula(value,x,y,n)<<endl;
    return 0;
}