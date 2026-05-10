#ifndef ELEMENT_H

#define ELEMENT_H
class Element{
  public:
    Element(int elementValue, Element* previousElement, Element* nextElement);
    Element* getNextElement();
    Element* getPreviousElement();
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