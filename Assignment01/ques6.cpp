#include<bits/stdc++.h>
using namespace std;
void check_index(int a[],int size,int pos)
{
    int left_c=0,right_c=0;
    for(int i=0;i<size;i++)
    {
        if(i<pos && a[i]<a[pos])
            left_c++;
       else if(i>pos && a[i]>a[pos])
            right_c++;
    }
    cout<<"Number of elements on the left of "<<pos<<" that are less than the element at "<<pos<<" is: "<<left_c<<endl;
    cout<<"Number of elements on the right of "<<pos<<" that are greater than the element at "<<pos<<" is: "<<right_c;
}
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int a[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>*(a+i);
    }
     int pos;
    cout<<"Enter the index position: ";
    cin>>pos;
    check_index(a,size,pos);
    return 0;

}
