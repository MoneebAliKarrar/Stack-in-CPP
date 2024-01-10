#include "Stack.h"
#include <iostream>

Stack::Stack() {
  capacity = INITIAL_CAPACITY;
  data = (int *)(malloc(capacity * sizeof(int)));
  if (data == NULL) {
    cout << "Failed to allocate memory " << endl;
    exit(1);
  }
  size = 0;
}

Stack::~Stack() { free(data); }

void Stack::push(int element) {
  if (isFull()) {
    capacity *= 2;
    data = (int *)(realloc(data, capacity * sizeof(int)));
    if (data == NULL) {
      cout << "Failed to reallocate memory " << endl;
      exit(1);
    }
  }
  data[size++] = element;
}

int Stack::pop() {
  if (isEmpty()) {
    cout << "Error: Cannot pop from an empty stack" << endl;
  }
  return data[--size];
}

bool Stack::isEmpty() const { return size == 0; }
bool Stack::isFull() const { return size == capacity; }
