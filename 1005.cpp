#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int res=0;
    string r[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i = 0; i < s.length(); i++)
    {
        res += s[i] - 48;
    }
    s = to_string(res);
    cout << r[s[0] - 48];
    if (s.length()==1)
    {
        return 0;
    }
    
    for (int i = 1; i < s.length(); i++)
    {
        cout << " " << r[s[i] - 48];
    }
    
}