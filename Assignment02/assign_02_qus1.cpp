#include<bits/stdc++.h>
using namespace std;
void pattern(int n = 5,int diff=1)
{
    int count=1;
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
           if(count>=10){
             count=1;
             cout<<1<<" ";
           }
           else
            cout<<count<<" ";
            count=count+diff;
        } cout<<endl;
    }
}
int main()
{
    int n,diff;
    cout<<"Enter the number of lines: ";
    cin>>n;
    cout<<"Enter the difference between numbers: ";
    cin>>diff;
    cout<<"By default the pattern is: \n";
    pattern();
    cout<<endl;
    cout<<"No.of lines ="<<n<<", difference = "<<diff<<endl;
    pattern(n,diff);
    return 0;
}
