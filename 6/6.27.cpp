#include <iostream>
#include <vector>

using namespace std;

int iCount(vector<int> i)
{
    int count = 0;
    for(auto val : i)
        count += val;
    return count;
}

int main()
{
    cout << iCount({1, 2}) << endl;
    return 0;
}
