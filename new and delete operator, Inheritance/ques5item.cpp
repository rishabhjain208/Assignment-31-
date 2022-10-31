#include<iostream>
using namespace std;
class Item
{
    protected :
        int item_no;
        char name;
        int price;

};
class Discounted_Item : public Item
{
    public :
    void input()
    {
        cout<<"Enter Item Name : "<<endl;
        cin>>name;
        
        cout<<"Enter Item No : "<<endl;
        cin>>item_no; 
       
        cout<<"Enter Item price : "<<endl;
        cin>>price;
        
        cout<<"Enter Item Name : "<<endl;
        cin>>name;
        
        cout<<"Enter Item Name : "<<endl;
        cin>>name; 
    }
};
