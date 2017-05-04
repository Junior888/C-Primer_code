/********************************************

********************************************/

#include <iostream>
#include <string>

using namespace std;

char &get_val(string s, string::size_type n)
{
    return s[n];
}

int main()
{
    string str("sun Junior");
    cout << str << endl;
    get_val(str, 1) = '1';
    cout << str << endl;
    return 0;
}

