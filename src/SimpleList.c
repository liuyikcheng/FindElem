#include "SimpleList.h"
#include <malloc.h>
#include <stdio.h>

List *listCreate(){
  List *list = malloc(sizeof(List));
  list->head = NULL;
  list->length = 0;
  return list;
}

Element *elementCreate(void *data){
  Element *elem = malloc(sizeof(Element));
  elem->next = NULL;
  elem->data = data;
  return elem;
}

void elemDestroy(Element *elem){
  free(elem);
}