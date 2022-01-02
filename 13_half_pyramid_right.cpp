# include <iostream>
using namespace std;

int main()
{
    int n;
    char c;
    cout<<"Enter number of rows: ";
    cin>>n;

    cout<<"Enter the character you want to print: ";
    cin>>c;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j<n-i+1)
            {
                cout<<" ";
            }
            else{cout<<c;}
        }
        cout<<"\n";
    }
    return 0;
}