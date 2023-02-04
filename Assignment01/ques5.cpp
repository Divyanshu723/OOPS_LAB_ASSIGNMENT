#include<bits/stdc++.h>
using namespace std;
void conv_in_binary(int n)
{
    int i=0,a[20];
    while(n>0)
    {
        a[i]=n%2;
        n/=2;
        i++;
    }
   cout<<"The binary equivalent is: ";
    for(int j=i-1;j>=0;j--)
        cout<<a[j]<<" ";
}
int main()
{
    int n;
    cout<<"Enter the integer: ";
    cin>>n;
    conv_in_binary(n);
    return 0;
}
