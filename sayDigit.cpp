#include<bits/stdc++.h> 
using namespace std;

void sayDigit(int n, vector<string> arr) {

    //base case
    if(n == 0)
        return ;

    //processing 
    int temp = n % 10;
    n = n / 10;
    

    //recursive call
    sayDigit(n, arr);

    cout << arr[temp] << " ";

}

int main() {

    vector<string> arr = {"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};
    int n;
    cin >> n;

    cout << endl << endl << endl ;
    sayDigit(n, arr);
    cout << endl << endl << endl ;


    return 0;
}