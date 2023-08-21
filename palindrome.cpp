#include <iostream>
using namespace std;

bool isPal(int n)
{
    int rev = 0;
	int temp = n;
	while(temp != 0)
	{
		int ld = temp % 10;
		rev = rev * 10 + ld;
		temp = temp / 10;
	}	
	return rev==n;
}

int main() 
{
    
    int number;
    cout<<"Enter a no."<<endl;
    cin>>number;
    cout<<(bool)isPal(number);
    return 0;
}