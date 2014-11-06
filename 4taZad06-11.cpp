#include<iostream>
using namespace std;
int main()
{
    int x,n;
    cout<<"Tova e menu za broq na cifrite na vasheto chislo."<<endl;
    cout<<"Ako vasheto chislo ima 1 cifra natisnete 1."<<endl;
    cout<<"Ako vasheto chislo ima 2 cifri natisnete 2."<<endl;
    cout<<"Ako vasheto chislo ima 3 cifri natisnete 3."<<endl;
    cout<<"Ako vasheto chislo ima 4 cifri natisnete 4."<<endl;
    cout<<"Ako vasheto chislo ima 5 cifri natisnete 5."<<endl;
    cout<<"Ako vasheto chislo ima 6 cifri natisnete 6."<<endl;
    cout<<"Ako vasheto chislo ima 7 cifri natisnete 7."<<endl;
    cin>>n;
    cout<<"Vuvedete chisloto vi : "<<endl;
    cin>>x;
    switch(n)
    {
        case 1: cout<<x<<endl;
        break;
        case 2: cout<<x/10<<endl<<x%10;
        break;
        case 3: cout<<endl<<x/100<<endl<<(x/10)%10<<endl<<x%10<<endl;
        break;
        case 4: cout<<endl<<x/1000<<endl<<(x/100)%10<<endl<<(x/10)%10<<endl<<x%10<<endl;
        break;
        case 5: cout<<endl<<x/10000<<endl<<(x/1000)%10<<endl<<(x/100)%10<<endl<<(x/10)%10<<endl<<x%10<<endl;
        break;
        case 6: cout<<x/100000<<endl<<(x/10000)%10<<endl<<(x/1000)%10<<endl<<(x/100)%10<<endl<<(x/10)%10<<endl<<x%10<<endl;
        break;
        case 7: cout<<x/1000000<<endl<<(x/100000)%10<<endl<<(x/10000)%10<<endl<<(x/1000)%10<<endl<<(x/100)%10<<endl<<(x/10)%10<<endl<<x%10<<endl;
        break;
    }

    return 0;
}
