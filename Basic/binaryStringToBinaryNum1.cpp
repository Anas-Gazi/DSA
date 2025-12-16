#include <iostream>
#include <bitset> 
using namespace std;

int main()
{
    string s1= "1011";
    string s2 ="101111";

    // binary string to integer
    int n1 = stoi(s1, nullptr,2); // // binary to decimal
    int n2 = stoi(s2, nullptr, 2);

    int sum = n1+ n2;


    //Integer to binary

    string result = bitset<32>(sum).to_string();
    result = result.substr(result.find('1'));

    cout << result;
       return 0;
}