#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int tag = 0,res=0;
    vector<string> na,pa;
    for (int i = 0; i < n; i++)
    {
        string name, password;
        cin >> name >> password;
        int tt = 0;
        while (password.find_first_of("10lO")!=-1)
        {
            tag = 1;
            tt = 1;
            int k = password.find_first_of("10lO");
            if (password[k]=='1')
            {
                password[k] = '@';
            }
            else if (password[k]=='0')
            {
                password[k] = '%';
            }
            else if (password[k]=='l')
            {
                password[k] = 'L';
            }
            else{
                password[k] = 'o';
            }
        }
        if (tt==1)
        {
            na.push_back(name);
            pa.push_back(password);
        }
    }
    if (tag==1)
    {
        cout << na.size() << endl;
        for (int i = 0; i < na.size(); i++)
        {
            cout << na[i] << " " << pa[i] << endl;
        }
    }
    if (tag==0&&n==1)
    {
        cout << "There is 1 account and no account is modified";
    }
    else if (tag==0)
    {
        cout << "There are " << n << " accounts and no account is modified";
    }
    
}