#include<iostream>
using namespace std;
int main()
{
    int x;
    bool b=true;
    cout<<"Vuvedete chisloto, koeto iskate da proverite : ";
    cin>>x;
    if(x==1)
        b=false;
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
            b=false;

    }
    if(b==0)
        cout<<"False";
    else cout<<"True";
    return 0;
}
