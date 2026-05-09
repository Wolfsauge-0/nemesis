#include <iostream>
#include <string>
#include <ListTools.hpp>


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


//
// class Element
//

  Element::Element( int elementValue, Element* previous, Element* next){
    value=elementValue;
    previousElement=previous;
    nextElement=next;
  }
  bool operator<(const Element& left, const Element& right){
    return left.getValue() < right.getValue();  
  }

  Element* Element::getNextElement(Element* currentElement){
    return currentElement->nextElement;
  }

  Element* Element::getPreviousElement(Element* currentElement){
    return currentElement->previousElement;
  }

  int Element::getValue() const{
    return this->value;
  }

