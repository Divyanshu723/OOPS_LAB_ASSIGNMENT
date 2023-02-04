#include<bits/stdc++.h>
using namespace std;
void matrix_mul(int a[][3],int b[][3],int c[][3])
{

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=0;
            for(int k=0;k<3;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int (*a)[3]=new int[3][3];
    int (*b)[3]=new int[3][3];
    int (*c)[3]=new int[3][3];
    cout<<"Enter the elements of 1st matrix:\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
     cout<<"Enter the elements of 2nd matrix:\n";
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"The matrix multiplication is: \n";
    matrix_mul(a,b,c);
    for(int i=0;i<3;i++){
    delete[] a[i];
    delete[] b[i];
    delete[] c[i];
    }
    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}
