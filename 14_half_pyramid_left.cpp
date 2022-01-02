# include <iostream>
using namespace std;

int main()
{
    int n;
    char c;
    cout<<"Enter number of rows: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j<=i)
            {
                cout<<i;
            }
            else{cout<<" ";}
        }
        cout<<"\n";
    }
    return 0;
}