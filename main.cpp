
#include <iostream>


#include <List.hpp>


int main(){
  int value = 5;
  List testObj;
  std::cout << testObj << std::endl;
  testObj.addElement(5);
  std::cout << testObj << std::endl;
  testObj.deleteElement();
  return 0;
}