#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string f, m, fj, mj;
    int fc=-1, mc=101;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name,gender,obj;
        int grade;
        cin >> name >> gender >> obj >> grade;
        if (gender=="M")
        {
            if (grade<mc)
            {
                mc = grade;
                m = name;
                mj = obj;
            }  
        }
        else{
                if (grade>fc)
                {
                    fc = grade;
                    f = name;
                    fj = obj;
                }
            }
    }
    if (fc==-1)
    {
        cout << "Absent" << endl;
    }
    else{
        cout << f << " " << fj << endl;
    }
    if (mc==101)
    {
        cout << "Absent" << endl;
    }
    else{
        cout << m << " " << mj << endl;
    }
    if (fc!=-1&&mc!=101)
    {
        cout << fc - mc;
    }
    else{
        cout << "NA";
    }
}