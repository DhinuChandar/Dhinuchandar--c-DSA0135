#include<iostream>
using namespace std;

int main()
{
	int i, j, rows;
     
    cout << "Enter Right Pascals Number Triangle Row = ";
    cin >> rows;

    for(i = 1; i <= rows; i++)
    {
    	for(j = 1; j <= i; j++)
		{
            cout << rows<< " ";  
        }
        cout << "\n";
    }	

    for(i = rows -1; i >= 1; i--)
    {
    	for(j = 1; j <= i; j++)
		{
            cout << rows << " "; 
        }
        cout << "\n";
    }	
 	return 0;
}
