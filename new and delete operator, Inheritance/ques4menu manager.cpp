#include<iostream>
using namespace std;
class person
{
public:
    char name[40],add[40];
    long long phone_n0;

};
class employee : public person
{
public:
    int eno;
    char ename[40];
};
class manager : public employee
{
public:
    char des[40],dename[40];
    float sa;
public:
    void input()
    {
        cout<<"Enter Details of Manager"<<endl;
        cout<<"------------------------"<<endl;
        cout<<"Enter Employee No. : ";
        cin>>eno;
        cout<<endl;
        cout<<"Enter Name. : ";
        cin>>name;
        cout<<endl;
        cout<<"Enter Phone No. : ";
        cin>>phone_n0;
        cout<<endl;
        cout<<"Enter Designation. : ";
        cin>>des;
        cout<<endl;
        cout<<"Enter Department Name. : ";
        cin>>dename;
        cout<<endl;
        cout<<"Enter Basic Salary. : ";
        cin>>sa;
        cout<<endl;
    }
};
int main()
{
    manager m[100];
    int n,i;
    cout<<"How Many Managers You Want to Enter ? :";
    cin>>n;
    cout<<endl;
    for(i = 1; i <= n; i++)
    {
        m[i].input();
    }
    int temp = 0;
    for(i = 1; i <= n; i++)
    {
        if(m[temp].sa<m[i].sa)
            temp = i;
    }
    cout<<"\n Manager with highest Salary is : "<<m[temp].sa<<endl;
    cout<<"\n And Manager Name is : "<<m[temp].name<<endl;
    return 0;
}
