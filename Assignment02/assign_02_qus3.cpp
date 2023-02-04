#include<bits/stdc++.h>
using namespace std;
inline ideal_gas(float P, float V, float N, float T)
{
    if(P*V==N*8.314*T)
        return 1;
        return 0;
}
int main()
{
    float P,V,N,T;
    cout<<"Enter the pressure,volume,no.of moles and Temperature(in Kelvin) of the Ideal Gas: \n";
    cin>>P>>V>>N>>T;
    if(ideal_gas(P,V,N,T))
        cout<<"IDEAL GAS LAW VERIFIED";
    else
        cout<<"IDEAL GAS LAW NOT VERIFIED";
        return 0;
}
