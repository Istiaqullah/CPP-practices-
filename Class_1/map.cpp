
#include<iostream>
#include<map>
using namespace std;
int main() {
map<string, int> fruits;
fruits.insert(make_pair("apple", 3)); //insert
fruits ["mango"]=10; //insert
fruits.insert(pair<string, int>("orange", 6));//insert

//change the count of apple to 7
fruits ["apple"]=7;
//print the map
for (auto i=fruits.begin(); i!=fruits.end(); i++) {
        cout<<i->first<<":"<<i->second<<endl;
}


//add 4 more mangoes
auto it= fruits.find("mango");
if (it!=fruits.end()) {
    fruits ["mango"]=fruits["mango"]+4;
}

//remove orange from the list
it= fruits.find("orange");
if (it!=fruits.end()) fruits.erase(it);
//print the map removing orange
for (auto i: fruits)
cout<<i.first<<" "<<i.second<<endl;
}
