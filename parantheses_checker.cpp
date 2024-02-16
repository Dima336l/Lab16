#include "parantheses_checker.h"

bool isValid(std::string pattern) {
  Stack <char> stack;
  std::string openBrackets ="{([";
  for (size_t i = 0; i < pattern.length(); i++) {
    if (stack.isEmpty()) {
      stack.push(pattern[i]);
    } else if ((stack.returnTop() == '(' && pattern[i] == ')')
	       || (stack.returnTop() == '[' && pattern[i] == ']')
	       || (stack.returnTop() == '{' && pattern[i] == '}')) {
      stack.pop();
    } else {
      stack.push(pattern[i]);
    }
  }
  return stack.isEmpty();
}

int main (int argc, char *argv[]) {
  if (isValid(argv[1])) {
    std::cout << "Balanced." << std::endl;
  } else {
    std::cout << "Not Balanced." << std::endl;
  }
  
}
