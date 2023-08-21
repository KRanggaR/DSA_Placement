#include <iostream>
using namespace std;

int power(int n, int p)
{
    if(p==0)
    {
        return 1;
    }
    return n*power(n,p-1);
}

int main() 
{
    
    int number;
    int pow;
    cout<<"(n,p)="<<endl;
    cin>>number;
    cin>>pow;
    cout<<power(number,pow);
    return 0;
}