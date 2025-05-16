#include <iostream>
using namespace std;
#include <vector>
#include <tuple>

int main(){

vector<tuple<int,string,string>>v;
int rec,roll;
string name,city;
cout<<"enter how many records\n";
cin>>rec;

cout<<"enter rolln\n";
cin>>roll;

cout<<"enter name\n";
cin>>name;

cout<<"enter city\n";
cin>>city;

v.push_back({roll,name,city});
for(auto p:v)
{

cout<<get<0>(p)<<","<<get<1>(p)<<","<<get<2>(p);
}
}



