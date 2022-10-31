#include<iostream>
#include<cstring>
using namespace std;
class person
{
    private:
        char name[40];
        int age;
    public:
        void setname(char *n)
        {
            strcpy(name,n);
        } 
        void setage(int a)
        {
            age = a;
        }
        char * getname()
        {
            return name;
        }
        int getage()
        {
            return age;
        }
};
class employee : public person 
{
    private:
        int empid;
        float salary;
    public:
        void setempid(int e)
        {
            empid = e;
        }
        void setsalary(float s)
        {
            salary = s;
        }
        int getempid()
        {
           return empid; 
        }
        float getsalary()
        {
            return salary;
        }
};
int main()
{
    employee e1,e2;
    e1.setname("Rishabh");
    e1.setage(20);
    cout<<"Person details "<<endl<<endl;
    cout<<"Name = "<<e1.getname()<<endl;
    cout<<"age = "<<e1.getage()<<endl<<endl;
    cout<<"Employee details "<<endl<<endl;
    e1.setempid(20600162);
    e1.setsalary(30000);
    cout<<"Employee Id = "<<e1.getempid()<<endl;
    cout<<"Employee Salary = "<<e1.getsalary()<<endl<<endl; 
   return 0;
}