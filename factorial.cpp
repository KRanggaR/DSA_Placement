#include <iostream>
using namespace std;

int fact(int n)
{
    int res=1;
    while(n!=0)
    {
        res=res*n;
        --n;
    }
    return res;
}

int main() 
{
    
    int number;
    cout<<"Enter a no."<<endl;
    cin>>number;
    cout<<fact(number);
    return 0;
}