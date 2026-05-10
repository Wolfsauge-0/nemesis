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
  if ( firstElement == NULL ){
    Element temp(value, NULL, NULL);
    firstElement = &temp;
  }
  else{

  }
  return 0; 
}



int List::deleteElement(){
  std::cout << "deleting element from list" << std::endl;
  return 0;
}


//
// Operators
//
std::ostream& operator<<(std::ostream& os, const List& list){
  std::string outputStr = "";
  Element* currentElement=list.firstElement;
  outputStr = "[";
  if ( currentElement != NULL){
    do {
      outputStr = outputStr + " " + std::to_string(currentElement->getValue());
      if ( currentElement->getNextElement() != NULL ){
        outputStr = outputStr + ",";
      }
      currentElement=currentElement->getNextElement();
    } while ( currentElement != NULL );
    
  }
  outputStr += " ]"; 
  os << outputStr;
  return os;
}