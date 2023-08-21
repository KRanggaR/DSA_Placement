#include <iostream>
using namespace std;
int lcm(int a,int b)
{
    int num=max(a,b);
    int max=a*b;
    while(num<=max)
    {
        if(num%a==0 && num%b==0)
        {
            break;
        }
        num++;

    }
    
    return num;

}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
    return 0;
}