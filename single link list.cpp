//Forward list   it called singly link list insertion and delete from front

#include <iostream>
using namespace std;
#include <forward_list>
int main(){
 forward_list<int>f1;
f1.push_front(10);
f1.push_front(4);
f1.push_front(21);
f1.push_front(7);
f1.push_front(8);

for(auto p:f1)
{

   cout<<p<<"\t";
}
f1.pop_front();
cout<<"\n after delete :  ";
for(auto p:f1)
{

    cout<<p<<"\t";
}

f1.push_front(800);
cout<<"\n after insertion  :  ";
for(auto p:f1)
{

    cout<<p<<"\t";
}


}



