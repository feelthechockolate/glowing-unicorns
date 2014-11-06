#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Vuvedete chisloto vi: "<<endl;
    cin>>x;
    while(x!=0)
    {
        cout<<x%2<<endl;
        x=x/2;
    }
    return 0;
}
