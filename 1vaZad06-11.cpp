#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Vuvedete simvola si : ";
    cin>>c;
    if(c>='0'&&c<='9')
    {
        cout<<"Simvolut e cifra"<<endl;
    }
        else
        {
            if(c>='a'&&c<='z')
            {
                cout<<"Simvolut e malka bykva"<<endl;
            }
                else
                    {
                        if(c>='A'&&c<='Z')
                        {
                            cout<<"Simvolut e glavna bykva"<<endl;
                        }
                            else cout<<"Simvolut e dryg";
                    }
        }
    return 0;
}
