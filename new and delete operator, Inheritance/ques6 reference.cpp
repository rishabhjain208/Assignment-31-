#include<iostream>
using namespace std;
class two;
class one
{
protected :
    int a;
public:
    one()
    {
        cout<<"before"<<endl;
        a  = 2;
        cout<<"Value of a = "<<a<<endl;
    }

    void input()
    {
        cout<<"Value of a  = "<<a<<endl;
    }
    friend void swap(one *o1,two *t1);

};
class two
{
protected:
    int b;
public:
    two()
    {
    //    cout<<"befor"<<endl;
         b  = 3;
        cout<<"Value of a = "<<b<<endl;
    }
    void inputs()
    {
        cout<<"Value of b = "<<b<<endl;
    }
    friend void swap(one *o1,two *t1);
};
void swap(one *o, two *t)
{

    int temp;
    temp = o->a;
    o->a = t->b;
    t->b = temp;
}
int main()
{
    one o2;
    two o3;
    swap(&o2,&o3);
    cout<<"After\n";
    o2.input();
    o3.inputs();
    return 0;
}

/*#include<iostream>
using namespace std;
class Derived;
class Base
{
    protected:
        int num1;
    public:
        Base()
        {
                num1=10;
        }
        void show()
        {
                cout<<"\n Value of Number 1 : "<<num1;
        }
        friend void swap(Base *num1, Derived *num2);
};
class Derived
{
    protected:
        int num2;
    public:
        Derived()
        {
                num2=20;
        }
        void show()
        {
                cout<<"\n Value of Number 2 : "<<num2;
        }
        friend void swap(Base *num1, Derived *num2);
};
void swap(Base *no1, Derived *no2)
{
        int no3;
        no3=no1->num1;
        no1->num1=no2->num2;
        no2->num2=no3;
}
int main()
{
        Base b;
        Derived d;
        swap(&b, &d);
        b.show();
        d.show();
        return 0;
}*/

