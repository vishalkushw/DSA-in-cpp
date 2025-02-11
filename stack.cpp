//stack :-it is follow LIFO(last in first out)
//there are 4 function push(),pop(),top(),empty()

#include <iostream>
#include <stack>
using namespace std;

int main() {
  // Stack create karna
  stack<int> st;

  // Push operation: elements ko stack mein daalna
  st.push(34);
  st.push(4);
  st.push(12);
  st.push(5);

  while (!st.empty()) {
    cout << st.top() << "\t";
    st.pop();
  }
  if (st.empty()) {
    cout << "stack is empty";
  } else {
    cout << "stack is not empty";
  }

  cout << st.top();
  cout << "\n stack is" << st.empty();
  st.pop();
  cout << "\n";
  cout << "top" << st.top();
}
