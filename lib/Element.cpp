#include <Element.hpp>

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

