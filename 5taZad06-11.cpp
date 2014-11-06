#include<iostream>
using namespace std;
int main()
{
    int x,k=0,copy;
    bool b=true;
    cout<<"Vuvedete chislo : "<<endl;
    cin>>x;
    copy=x;
    int digits[100];
    while (copy!=0)
    {
        digits[k]=copy%10;
        copy/=10;
        k++;
    }
    for(int i=0;i<=k/2;i++)
    {
        if(digits[i]!=digits[k-i-1])
        b=false;
    }
    if(b==true) cout<<"Chisloto e palindrom"<<endl;
    else cout<<"Chisloto ne e palindrom";
    return 0;
}
