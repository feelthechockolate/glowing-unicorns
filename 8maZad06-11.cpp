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
<<<<<<< HEAD
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
=======
    // ---------------------------------

>>>>>>> origin/branch2
    return 0;
}
