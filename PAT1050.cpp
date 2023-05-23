#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    while (s1.find_first_of(s2)!=-1)
    {
        int k = s1.find_first_of(s2);
        s1.erase(s1.begin() + k);
    }
    cout << s1;
}