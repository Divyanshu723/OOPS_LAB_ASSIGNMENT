#include<bits/stdc++.h>
using namespace std;
void check(int a[],int n,int &asc, int &des)
{
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1])
        asc=1;
        else if(a[i]<a[i+1])
        des=1;
    }
}
int main()
{
    int n;
    int asc=0,des=0;
    cout<<"Enter the size of array\n";
    cin>>n;
    int a[n];
    cout<<"\n Enter the elements\n";
    for(int i=0;i<n;i++)
    cin>>a[i];
    check(a,n,asc,des);
    if(asc==0 && des==0)
    cout<<"Sorted but neither ascending nor descending";
    else if(asc==0)
    cout<<"Sorted in ascending order";
    else if(des==0)
    cout<<"Sorted in descending order";
    else
    cout<<"not sorted";
}
