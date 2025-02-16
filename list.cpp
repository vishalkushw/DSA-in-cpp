#include<iostream>
using namespace std;
#include<list>
int main(){
    //this list insert and delete happend from both side front and back
    list<int>l1;
    l1.push_back(22);
    l1.push_back(20);
    l1.push_back(70);
    l1.push_front(34);
    l1.pop_back();
    l1.pop_front();
    for(auto p:l1){
        cout<<p<<" ";
    }
}
