#include<bits/stdc++.h>
using namespace std;
struct KYC
{
    string name;
    struct dob
{
    int date;
    int month;
    int year;
}d;
    string pan_no;
    long long adr_no;
    string add;
    long int anl_inc,sav;

};
 void input_data(KYC a[],int size)
 {
     for(int i=0;i<size;i++)
     {
         cout<<"Enter the name of the member\n";
         getline(cin,a[i].name);
         cout<<"Enter the date of birth in DD/MM/YYYY format\n";
         cin>>a[i].d.date>>a[i].d.month>>a[i].d.year;
         cout<<"Enter the pan number\n";
         cin>>(a[i].pan_no);
         cout<<"Enter the aadhar number\n";
         cin>>(a[i].adr_no);
         fflush(stdin);
         cout<<"Enter the address of the member\n";
         getline(cin,a[i].add);
         cout<<"Enter the annual income\n";
         cin>>a[i].anl_inc;
         cout<<"Enter the saving income\n";
         cin>>a[i].sav;
         fflush(stdin);
         cout<<endl<<endl;
     }
 }
 void output_data(KYC a[],int size)
 {
     for(int i=0;i<size;i++)
     {
         cout<<"Name of the "<<i+1<<" member is: "<<a[i].name<<endl;
         cout<<"Date of birth of the member is: "<<a[i].d.date<<"/"<<a[i].d.month<<"/"<<a[i].d.year<<endl;
         cout<<"Pan number of the member is: "<<a[i].pan_no<<endl;
         cout<<"Address of the member is: "<<a[i].add<<endl;
         cout<<"Annual Income of the member is: "<<a[i].anl_inc<<endl;
         cout<<"Saving income of the customer is: "<<a[i].sav<<endl;
     }
 }
 void computeIncometax( KYC a[],int size)
 {
     for(int i=0;i<size;i++){
     if(a[i].anl_inc<=500000)
      cout<<"NO NEED TO PAY TAX"<<endl;
     else if(a[i].anl_inc>500000 && a[i].anl_inc<=1000000)
     {
         if(a[i].sav>150000){
            long int diff=(a[i].anl_inc-150000);
             cout<<"TAX TO BE PAID BY "<<i+1<<" MEMBER IS: "<<(0.1)*diff<<endl;
         }
         else{
           long int diff=(a[i].anl_inc-a[i].sav);
             cout<<"TAX TO BE PAID BY "<<i+1<<" MEMBER IS: "<<(0.1)*diff<<endl;
         }
     }
     else if(a[i].anl_inc>1000000)
     {
         if(a[i].sav>150000){
           long int diff=(a[i].anl_inc-150000);
             cout<<"TAX TO BE PAID BY "<<i+1<<" MEMBER IS: "<< (0.2)*diff<<endl;
         }
         else{
           long int diff=(a[i].anl_inc-a[i].sav);
             cout<<"TAX TO BE PAID BY "<<i+1<<" MEMBER IS: "<<(0.2)*diff<<endl;
         }
     }
   }
 }
int main()
{
    int size=7;
    KYC a[size];
    input_data(a,size);
    output_data(a,size);
    computeIncometax(a,size);
    return 0;
}
