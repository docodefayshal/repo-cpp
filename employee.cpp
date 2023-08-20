#include<iostream>
#include<string>
using namespace std;
class employee
{
public:
    string name;
    int employeeid;
    int salary;
    void setdata(string x,int y,int z)
    {
        name=x;
        employeeid=y;
        salary=z;
    }
    void display()
    {
        cout<<"Name :"<<name<<"\n";
        cout<<"Employee Id :"<<employeeid<<"\n";
        cout<<"salary :"<<salary<<"$"<<"\n";
    }
};
class employee1:public employee
{
public:
    void dataemployee1(string a,int b,int c)
    {
        setdata(a,b,c);
    }
    void display2()
    {
        display();
    }
};
class employee2:public employee
{
public:
     void dataemployee2(string a,int b,int c)
    {
        setdata(a,b,c);
    }
    void display2()
    {
        display();
    }
};
class employee3:public employee
{
public:
     void dataemployee3(string a,int b,int c)
    {
        setdata(a,b,c);
    }
    void display2()
    {
        display();
    }
};
int main()
{
    employee1 m;
    employee2 n;
    employee3 p;
    m.dataemployee1("John Doe",101,6500);
    n.dataemployee2("Jane Smith",102,6000);
    p.dataemployee3("Mike Johnson",103,4500);
    m.display2();
    n.display2();
    p.display2();

}
