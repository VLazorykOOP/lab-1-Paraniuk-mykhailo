#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 10;
    int a[n] = {3, 1, -8, 13, 11, 7, -23, 0, 2, 18};
    vector<int> b;
    for (int i=0; i < n; i++)
    if (a[i] > 10)
    {
       b.push_back(a[i]);
    }
    for (int i = 0; i < b.size(); i++){
    cout << b[i] << " ";
    }
}