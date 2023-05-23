#include<algorithm>
#include<iostream>
using namespace std;
struct student
{
    string id, name;
    int score;
};
bool cmp1(student s1,student s2){
    return s1.id < s2.id;
}
bool cmp2(student s1,student s2){
    if (s1.name>s2.name)
    {
        return false;
    }
    else if (s1.name==s2.name)
    {
        return cmp1(s1, s2);
    }
    else{
        return true;
    }
}
bool cmp3(student s1,student s2){
    if (s1.score>s2.score)
    {
        return false;
    }
    else if (s1.score==s2.score)
    {
        return cmp1(s1, s2);
    }
    else{
        return true;
    }
}
int main(){
    int n, c;
    cin >> n >> c;
    student stu[n];
    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].id >> stu[i].name >> stu[i].score;
    }
    if (c==1)
    {
        sort(stu, stu + n, cmp1);
    }
    else if (c==2)
    {
        sort(stu, stu + n, cmp2);
    }
    else{
        sort(stu, stu + n, cmp3);
    }
    for (int i = 0; i < n; i++)
    {
        cout << stu[i].id << " " << stu[i].name << " " << stu[i].score << endl;
    }
    
}