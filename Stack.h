#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define INITIAL_CAPACITY 16
using namespace std;

class Stack {
public:
  Stack();  // Constructor
  ~Stack(); // Destructor
  void push(int element);
  int pop();
  bool isEmpty() const;
  bool isFull() const;

private:
  int *data;
  int size;
  int capacity;
};

#endif 
