#include<iostream>
using namespace std;
class student
{

protected: float e,m,s;
public:
    void set(float en, float ma, float sc)
    {
        e = en;
        m = ma;
        s = sc; 
    }


};
class total : public student 
{
    public:
    float c;
    void cal()
    {
        c = ((e+m+s)/300)*100; 
    }
    

};
class marks : public total 
{
public:
    void display()
    {
        cout<<"student percentage = "<<c<<"%";
    }

};
int main()
{
    marks m;
    m.set(90,80,70);
    m.cal();
    m.display();
    return 0;
}