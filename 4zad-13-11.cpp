#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,m,value,j;
    cout<<"Vuvedete broq na elementite ! "<<endl;
    cin>>n;
    int a[n];
    cout<<"Vuvedete elementie na masiva"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=1;i<n;i++)
    {
            value=a[i];
            j=i-1;

        while (j>=0&&a[j]>value)
        {
            m=a[j+1];
            a[j+1]=a[j];
            a[j]=m;
            j=j-1;
        }
    }
    cout<<"Podredenite chisla sa: "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
