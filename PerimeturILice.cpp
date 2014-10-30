#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Vuvedete stranite na pravougulnika."<<endl;
    cin>>n>>i;
    while (n<0||i<0)

    {
        cout<<"Vuvedete nanovo!";
        cin>>n>>i;


    }

	cout<<"Perimeturut e "<<2*n+2*i<<", a liceto e  "<<n*i<<"."<<endl;
	return 0;
}

