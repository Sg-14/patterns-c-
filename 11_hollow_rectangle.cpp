# include <iostream>
using namespace std;

int main()
{
    int a,b;
    char c;
    cout<<"\nEnter number of rows: ";
    cin>>a;
    cout<<"\nEnter number of columns: ";
    cin>>b;

    cout<<"Please enter the character you want to print: ";
    cin>>c;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (i==1 || i==a)
            {
                cout<<c;
            }
            else if (j==1 || j==b)
            {
                cout<<c;
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<"\n";
    }
    return 0;    
}