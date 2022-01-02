#include<iostream>
using namespace std;

int main()
{
	int rows, columns;
	char ch;
	
	cout << "\nPlease Enter the Total Number of Rectangle Rows    =  ";
	cin >> rows;
	
	cout << "\nPlease Enter the Total Number of Rectangle Columns =  ";
	cin >> columns;
	
	cout << "\nPlease Enter Any Symbol to Print  =  ";
	cin >> ch;	
		
	cout << "\n-----Rectangle Pattern-----\n";
	for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
		{
           cout << ch;
        }
        cout << "\n";
	}
 	return 0;
}