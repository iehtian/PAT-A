#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int c = a + b;
    string s = to_string(abs(c));
    if (c<0)
    {
        printf("-");
    }
    
    if (s.length()<=3)
    {
        cout << abs(c);
    }
    else if (s.length()<=6)
    {
        cout << s.substr(0, s.length() - 3)<<","<<s.substr(s.length() - 3, 3);
    }
    else{
        cout << s.substr(0, s.length() - 6) << "," << s.substr(s.length() - 6, 3) << "," << s.substr(s.length() - 3, 3);
    }
}