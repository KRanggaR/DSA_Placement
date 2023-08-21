#include <iostream>
using namespace std;

int findOdd(int arr[], int n)
{
    int res = 0;
    
    for(int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    
    return res;
}
    
int main() {
	
	int arr[]= {3, 4, 3}, n = 3;
	
    cout<<findOdd(arr, n);
    
}