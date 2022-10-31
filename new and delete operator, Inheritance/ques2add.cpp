#include<iostream>
using namespace std;
class add
{
protected:
    int a,b;    
public:
    void input()
    {
        cout<<"Enter the Two Number  = ";
        cin>>a>>b;
    }
};
class sum : public add 
{
public:
        void display()
        {
            cout<<"Sum of Two number is = "<<a+b;
        }
};
int main()
{
    sum s1;
    s1.input();
    s1.display();
    return 0;
}