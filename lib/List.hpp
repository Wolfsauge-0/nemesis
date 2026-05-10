#ifndef LIST_H

#define LISTT_H

//
// Standard Libs
//

#include <string>
#include <iostream>

//
// Custom Libs
//
#include <Element.hpp>

class List{
public:
  List();
  int addElement(int value);
  int deleteElement();
  friend std::ostream& operator<<(std::ostream& os, const List& list);
private:
  Element* firstElement;
};


#endif