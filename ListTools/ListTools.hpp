#ifndef LISTTOOLS_H

#define LISTTOOLS_H

#include <string>

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

class Element{
  public:
    Element(int elementValue, Element* previousElement, Element* nextElement);
    Element* getNextElement(Element* currentElement);
    Element* getPreviousElement(Element* currentElement);
    int getValue() const;
    friend bool operator<(const Element& left, const Element& right);
    friend bool operator>(const Element& left, const Element& right);
    friend bool operator==(const Element& left, const Element& right);
    friend bool operator!=(const Element& left, const Element& right);
  private:
    int key;
    int value;
    Element* nextElement;
    Element* previousElement;
};

#endif