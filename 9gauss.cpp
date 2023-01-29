#include <iostream>
using namespace std;
class matrix
{
    float a[10][10], x[10];
    int n;
    public:
    void inp()
    {
        cout << "Enter the number of unknowns: ";
        cin >> n;
        cout << "Enter the values of augmented matrix: \n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n + 1; j++)
            {
                cout << "A[" << i << "][" << j << "]=";
                cin >> a[i][j];
            }
        }
    }
    void gauss()
    {
        float ratio;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    ratio = a[j][i] / a[i][i];
                    for (int k = 0; k < n + 1; k++)
                    {
                        a[j][k] -= ratio * a[i][k];
                    }
                    cout << "Intermediate forms:\n";
                    for (int x = 0; x < n; x++)
                    {
                        for (int y = 0; y < n + 1; y++)
                            cout << a[x][y] <<"\t";
                        cout << endl;
                    }
                    cout << endl;
                }
            }
        }
        cout<<"SOLUTION:\n";
        for (int i = 0; i < n; i++)
        {
            cout<<a[i][n]/a[i][i]<<endl;
        }
    }
};
int main(){
    matrix A;
    A.inp();
    A.gauss();
}