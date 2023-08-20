#include<iostream>
#include<string>
using namespace std;
class vehicle
{
public:
    int year;
    string brand;
    string model;
public:
    void setvalue(int x,string y,string z)
    {
         year=x;
         brand=y;
         model=z;
    }
    void display()

    {
        cout<<"year:"<<year<<"\n";
        cout<<"brand:"<<brand<<"\n";
        cout<<"model:"<<model<<"\n";
        }
};
class Car : public vehicle
{
private:
    float fuelefficiencycar;
public:
    void setcar(int a,string b,string c,float f)
    {
        setvalue(a,b,c);
        fuelefficiencycar=f;
    }
    void display2()
    {
        cout<<"car information"<<"\n";
         display();
        cout<<"fuelefficiency:"<<fuelefficiencycar<<"miles\gallon"<<"\n";
    }
};
class Motorcycle:public vehicle
{
    private:
        float fuelefficiencymotor;
    public:
        void setmotorcycle(int a,string b ,string c,float f)
        {
            setvalue(a,b,c);
            fuelefficiencymotor=f;

        }
        void display2()
        {
            cout<<"Motorcycle information"<<"\n";
            display();
            cout<<"fuelefficiency:"<<fuelefficiencymotor<<"miles\gallon"<<"\n";
        }

};
class bicycle:public vehicle
{
     public:
        void setbicycle(int a,string b ,string c)
        {
            setvalue(a,b,c);

        }
        void display2()
        {
            cout<<"bicycle information"<<"\n";
            display();
        }
};
int main()
{
    Car c;
    Motorcycle m;
    bicycle b;
    c.setcar(2023,"Toyota","Camry",30.5);
    m.setmotorcycle(2023,"Honda","CBR600RR",40.2);
    b.setbicycle(2023,"Trek","Mountain bike");
    c.display2();
    m.display2();
    b.display2();
}
