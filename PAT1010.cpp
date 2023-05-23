#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string num1, num2;
    int tag, radix;
    cin >> num1 >> num2 >> tag >> radix;
    int res1, res2;
    if (tag==2)
    {
        swap(num1, num2);
    }
    res1 = stoll(num1, 0, radix);
    long long n = 900000000000000000;
    for (long long i = 2; i < n; i++)
    {
        try
        {
            res2 = stoll(num2, 0, i);
            if (res2==res1)
            {
                cout << i;
                return 0;
            }
        }
        catch(...)
        {
            continue;
        }
    }
    cout << "Impossible";
}