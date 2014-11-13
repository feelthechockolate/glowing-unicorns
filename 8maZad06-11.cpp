#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Vuvedete simvola : "<<endl;
    cin>>c;
    int n;
    cout<<"Vuvedete kolko golqm shte e triugulnikut : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<c<<"  ";
    }
    cout<<endl;
    for (int j=n-2;j>0;j--)
    {
        cout<<"  "<<c;
        for(int k=0;k<j;k++)
        cout<<"  ";
        cout<<c<<endl;
    }
    for(int l=0;l<n/2;l++)
    cout<<"  ";
    cout<<c;
    return 0;
}
