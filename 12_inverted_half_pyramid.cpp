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
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<c;
        }
        cout<<"\n";
    }
    return 0;
}