// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template <typename T, int size>
class TStack {
 private:
  T arr[size];
  int top;

 public:
  TStack() : top(-1){};

  bool isEmpty() const { return top == -1; };
  bool isFull() const { return top == (size - 1); };

  T get() const { return isEmpty() ? throw std::string("empty") : arr[top]; };
  T pop() { return isEmpty() ? throw std::string("empty") : arr[top--]; };
  void push(T v) { isFull() ? throw std::string("full") : arr[++top] = v; };
};

#endif  // INCLUDE_TSTACK_H_
