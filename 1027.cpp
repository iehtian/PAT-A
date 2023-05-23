#include<algorithm>
#include<iostream>
using namespace std;
string intToA(int n,int radix)    //n是待转数字，radix是指定的进制
{
	string ans="";
	do{
		int t=n%radix;
		if(t>=0&&t<=9)	ans+=t+'0';
		else ans+=t-10+'A';
		n/=radix;
	}while(n!=0);	//使用do{}while（）以防止输入为0的情况
	reverse(ans.begin(),ans.end());
	return ans;	
}
int main(){
    int r, g, b;
    cin >> r >> g >> b;
    string rr = intToA(r, 13), gg = intToA(g, 13), bb = intToA(b, 13);
    while (rr.length()<2)
    {
        rr = '0' + rr;
    }
    while (gg.length()<2)
    {
        gg = '0' + gg;
    }
    while (bb.length()<2)
    {
        bb = '0' + bb;
    }
    cout << "#" << rr << gg << bb;
}