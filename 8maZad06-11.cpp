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

    int z=1;

    for (int i=0; i<n-1; i++)
    {
        // Spaces
        for (int j=n; j>i; j--)
        {
            cout<<" ";
        }
        cout<<c;   // first non empty space

        if (i!=0) // If it's not the first line, cuz only one character there
        {
            // Z is to keep track how many spaces in the middle
            for (int k=1; k<=z; k++)
            {
                cout<<" "; // spaces in the middle
            }
            cout<<c; // character on the right side
            z+=2; // the next line has 2 more spaces in the midle
        }
        cout<<endl;
    }

    // Draw bottom ---------------------
    cout<<" ";
    for (int i=0; i<n; i++)
    {
        cout<<c<<" ";
    }
    // ---------------------------------

    return 0;
}
