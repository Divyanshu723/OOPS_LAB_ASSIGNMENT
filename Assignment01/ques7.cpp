#include<bits/stdc++.h>
using namespace std;
int non_rec_sum(int n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+(n%10);
        n/=10;
    }
    return sum;
}
int rec_sum(int n)
{
    int sum=n%10;
    if(n>=1 && n<=9)
        return n;
    else{
    return sum+rec_sum(n/10);
    }
}
int main()
{
    int n;
    cout<<"Enter the integer: ";
    cin>>n;
    int result1=non_rec_sum(n);
    int result2=rec_sum(n);
    cout<<"Sum of digits of a given integer using non-recursive function is :"<<result1<<endl;
    cout<<"Sum of digits of a given integer using recursive function is :"<<result2<<endl;
    return 0;
}
