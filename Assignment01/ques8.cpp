#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int x[n],sum1=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        sum1+=x[i];
    }
     float M=sum1/(n*1.0),sum2=0;
    for(int i=0;i<n;i++)
    {
        sum2+=pow((x[i]-M),2);
    }
    float var=sum2/n;
    cout<<"VARIANCE IS: "<<fixed<<setprecision(2)<<var<<endl;
    cout<<"STANDARD DEVIATION is: "<<fixed<<setprecision(2)<<sqrt(var)<<endl;
    return 0;
}
