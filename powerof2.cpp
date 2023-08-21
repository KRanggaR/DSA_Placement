#include <iostream>
using namespace std;

bool isPow2(int n)
{
    if(n == 0)
        return false;
    
    return ((n & (n - 1)) == 0);
}
    
int main() {
	
	int n = 4;
	string result=(isPow2(n))? "YES": "NO";
	cout << result;
}