#include <iostream>
using namespace std;
int countZero(int n)
{
    int count=0;
    int i;
    for(i=5;i<=n;i=i*5)
    {
        count=count+n/i;
    }
    return count;
}
int main() 
{
    
    int number;
    cout<<"Enter a no."<<endl;
    cin>>number;
    cout<<countZero(number);
    return 0;
}