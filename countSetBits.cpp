// CPP program to check if k-th bit 
// of a given number is set or not using 
// right shift operator. 
#include <iostream> 
using namespace std; 

int countSetBits(int n) 
{ 
    int res = 0;
	while(n)
    {
        n=n&(n-1);
        res++;
    }
    return res;
} 

// Driver code 
int main() 
{ 
	int n = 52; 
	cout << countSetBits(n); 
	return 0; 
} 
