#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int myAge, currentYear, compareYear,V;
    //double x1,x2,y1,y2,D;
    cout<<"Vuvedete godinite si"<<endl;
    cin>>myAge;
    cout<<"Vuvedete koq godina e sega"<<endl;
    cin>>currentYear;
    cout<<"Vuvedete v koq godina se chudite dali shte ste jiv"<<endl;
    cin>>compareYear;
    V=compareYear-currentYear+ myAge;
    if(V>150)
    {
        cout<<"You will be so dead"<<endl;;
    }
    else
    cout<<"Vie shte ste na "<<V<<" godini"<<endl;
    //D=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	return 0;
}

