#include<bits/stdc++.h>
using namespace std;
struct product
{
    string pr_id,pr_name;
    int dis_per,pr_lbl,user_rat;
};
void input_detail(product p[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the product id of product "<<i+1<<" : ";
        cin>>p[i].pr_id;
        fflush(stdin);
        cout<<"Enter the product name: ";
        getline(cin,p[i].pr_name);
        cout<<"Enter the current discount percentage: ";
        cin>>p[i].dis_per;
        cout<<"Enter the product label price: ";
        cin>>p[i].pr_lbl;
        cout<<"Enter the user rating of the product: ";
        cin>>p[i].user_rat;
        fflush(stdin);
    }   cout<<endl<<endl;
}
void output_detail(product p[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"The product id of"<<i+1<<" product is: "<<p[i].pr_id<<endl;
        cout<<"Name of the product: "<<p[i].pr_name<<endl;
        cout<<"Current discount percentage on the product: "<<p[i].dis_per<<endl;
        cout<<"Product label price is: "<<p[i].pr_lbl<<endl;
        cout<<"User rating on the product: "<<p[i].user_rat<<endl;
    }   cout<<endl<<endl;
}
void compute_salesprice(product p[],int size)
{
    for(int i=0;i<size;i++)
    {
    double sgst=(0.06)*(p[i].pr_lbl-(p[i].dis_per)/(100.0)*p[i].pr_lbl);
    double cgst=sgst;
    double sales_price=p[i].pr_lbl-(p[i].dis_per)/(100.0)*p[i].pr_lbl+sgst+cgst;
    cout<<"The sales price of the product"<<i+1<<" is: "<<sales_price<<endl;
    }
}
int main()
{
    int size=5;
    product p[size];
    input_detail(p,size);
    output_detail(p,size);
    compute_salesprice(p,size);
    return 0;
}
