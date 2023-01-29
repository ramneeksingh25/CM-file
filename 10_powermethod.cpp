#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a[10][10], x[10],c[10],d=0,temp;
    int n;
    cout<<"Enter the order of matrix:";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j = 1; j <= n; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    }
    cout<<"Enter the starting vector: \n";
    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
    }
    do
    {
        for (int i = 0; i < n; i++)
        {
            c[i]=0;
            for (int j = 0; j < n; j++)
            {
                c[i]=c[i]+ a[i][j]*x[j];
            }            
        }
        for (int i = 0; i < n; i++)
        {
            x[i]=c[i];
        }
        temp=d;
        d=0;
        for (int i = 0; i < n; i++)
        {
            if (fabs(x[i])>fabs(d))
            {
                d=x[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            x[i]=x[i]/d;
        }
    } while (fabs(d-temp)>0.000001);
    cout<<"EIGENVALUE IS: "<<d<<endl;  
    return 0;
}