#include<iostream>
#include<string>
using namespace std;
struct Person
{
    string name;
    int day;
    int month;
    int year;
    void setName (string _name)
    {
        name=_name;
    }
    void setDob (int _day, int _month, int _year)
    {
        day=_day;
        month=_month;
        year=_year;
    }
    void printName()
    {
    cout<<"My name is "<<name<<endl;
    }
     void printDOB (){
    cout<<"My DOB is "<<day<<"/"<<month<<"/"<<year<<endl;
     }
};
    int main()
    {
        Person personl;
        personl.setName ("Abul Hasnat");
        personl.setDob (11,9,2004);
        personl.printName();
        personl.printDOB ();
    }
