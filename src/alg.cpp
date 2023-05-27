// Copyright 2021 NNTU-CS
#include <cctype>
#include <map>
#include <string>

#include "tstack.h"

std::string infx2pstfx(std::string inf) {
  // добавьте код
  return std::string("");
}

int grabNum(int &index, std::string str) {
  int ret = 0;
  while (index < str.size() && isdigit(str[index])) {
    ret *= 10;
    ret += str[index] - '0';
    index++;
  }
  return ret;
}

int eval(std::string pref) {
  TStack<int, 100> stack;

  for (int i = 0; i < pref.size(); i++) {
    if (isdigit(pref[i])) {
      stack.push(grabNum(i, pref));
      continue;
    }
    switch (pref[i]) {
      case '+':
        stack.push(stack.pop() + stack.pop());
        break;
      case '-':
        stack.push(stack.pop() - stack.pop());
        break;
      case '*':
        stack.push(stack.pop() * stack.pop());
        break;
      case '/':
        stack.push(stack.pop() / stack.pop());
        break;
    }
  }

  return stack.get();
}
