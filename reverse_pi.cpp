#include <iostream>
using namespace std;


void rev(string s)
{
	if(s.length() == 0)
    {
        return;
    }
    if(s.substr(0,2) == "pi")
    {
	    cout<<"3.14";
        rev(s.substr(2));
    }
    else{
        cout<<s[0];
        rev(s.substr(1));
    }

}

int main() {
	
	string str = "pippxxppiixipi";
	
	rev(str);
	
	return 0;
}