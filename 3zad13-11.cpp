#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double s=0;
    double sa;
    cout<<"Vuvedete ocenkite si! "<<endl;
    int a[5];
    for (int i=0;i<5;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    sa=s/5;
    cout<<"Srednoto vi aritmetichno e : "<<sa<<endl;
    return 0;
}
