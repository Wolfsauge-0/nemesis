#ifndef LIST_H

#define LISTT_H

#include <string>
#include <Element.hpp>

class List{
public:
  List();
  int addElement(int value);
  int deleteElement();
  int getElement();
  friend std::ostream& operator<<(std::ostream &, const List& list);
  // std::string to_string();
private:
  Element* firstElement;
};


#endif