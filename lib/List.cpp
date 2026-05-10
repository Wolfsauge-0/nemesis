#include <iostream>
#include <string>
#include <List.hpp>
#include <Element.hpp>


//
// class List
//


List::List(){
  Element* firstElement=NULL;
}

int List::addElement(int value){
  if (firstElement==NULL){
    Element temp(value, NULL, NULL);
    firstElement=(& temp);
  }
  else{

  }
  return 0; 
}



int List::deleteElement(){
  std::cout << "deleting element from list" << std::endl;
  return 0;
}

int List::getElement(){
  std::cout << "returning queried Element" << std::endl;
  return 0;
}
