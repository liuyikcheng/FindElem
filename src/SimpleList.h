#ifndef SimpleList_H
#define SimpleList_H

typedef struct Element_t Element;

struct Element_t{
  Element *next;
  void *data; // data is a pointer that point to unknow type (any type)
};

typedef struct {
  Element *head;
  int length; 
}List;

List *listCreate();
Element *elementCreate(void *data);
#endif // SimpleList_H
