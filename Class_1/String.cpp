
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1="Hello World";
    string str2= "Hola World";
    int position = str1.find("World");
    cout<<"The word World starts at position :"<<position<<endl;
    string substring = str1.substr(1,5);
    cout<<"Sub String "<<substring<<endl;
    cout<<endl;

    string str3="data structure";
    string str4="Algorithms ";
//length of the string
    int l=str3.length();
    cout<<"length:"<<l<<endl;
//char at a particular index
    char c=str3.at(2);
    cout<<"char at index 2:"<<c<<endl;
//concatenating strings
    string course_name=str3+" and "+str4+to_string(2);
    cout<<"course name:"<<course_name<<endl;
    cout<<endl;

    //comparing strings
    if(str3==str4)
        cout<<"equal strings"<<endl;
    else cout<<"not equal"<<endl;
//convert a character to upper case
    str3[3]=toupper(str3[3]);
    cout<<str3<<endl;
//same to lower
//find a substring in a string
    int idx=str3.find("hello");
//if the substring exists return the start idx, else -1
//extract a substring (start idx, substring size)
    string sub=str3.substr(3,4);
//this extracts substring of length 4 from index 3
    cout<<endl;

    string str="hello!!!";
//insert a string in an index
    str.insert(5," world"); //hello world!!!
    cout<<str<<endl;
//replace world with Mina
//6->starting index 5->size of world
    str.replace (6,5, "Mina");
    cout<<str<<endl;
//hello Mina!!!
//erase Mina .6->start index of Mina // 4->size of Mina
    str.erase(6,4);
    cout<<str<<endl;


}







