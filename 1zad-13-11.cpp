#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
   /* string a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t;
    cout<<"Vuvedete imenata na 20 vashi priqteli !";
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    getline(cin,d);
    getline(cin,e);
    getline(cin,f);
    getline(cin,g);
    getline(cin,h);
    getline(cin,i);
    getline(cin,j);
    getline(cin,k);
    getline(cin,l);
    getline(cin,m);
    getline(cin,n);
    getline(cin,o);
    getline(cin,p);
    getline(cin,q);
    getline(cin,r);
    getline(cin,s);
    getline(cin,t);
    cout<<"Imenata sa: "<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl<<g<<endl<<h<<endl<<i<<endl<<j<<endl<<k<<endl<<l<<endl<<m<<endl<<n<<endl<<o<<endl<<p<<endl<<q<<endl<<r<<endl<<s<<endl<<t<<endl;*/
    string a[20];
    cout<<"Vuvedete imenata na 20 vashi priqteli !"<<endl;
    for(int i=0;i<20;i++)
    {
        getline(cin,a[i]);
    }
    cout<<"Imenata sa : "<<endl;
    for(int i=0;i<20;i++)
    {
        cout<<a[i]<<endl;
    }






    return 0;

}
