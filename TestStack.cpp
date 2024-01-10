#include "Stack.h"
#include <iostream>
using namespace std;

int main() {
  Stack s1;
  s1.push(10);
  s1.push(20);
  s1.push(30);

  while (!s1.isEmpty()) {
    int element = s1.pop();
    cout << "Popped: " << element << endl;
  }

  return 0;
}
