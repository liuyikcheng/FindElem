#include "FindElement.h"
#include "SimpleList.h"
#include <malloc.h>
#include <stdio.h>
#include <string.h>

Element *listFind(List *list, void *data, int (*compare)(void *, void*)){
  Element *elem = malloc(sizeof(Element));
  int result;
  elem = list->head;
  
  while (result != 0){
  printf("%d\n", *((int *)elem->data));
    result = compare(data, elem->data);
    if(result != 0)
      elem = elem->next;
  }
  
  return elem;
}


int intCompare(void *first, void *second){
  if(*((int*)first) == *((int*)second))
    return 0;
  else 
    return 1;
}

Element *strListFind(List *list, void *data, int (*compare)(void *, void*)){
  Element *elem = malloc(sizeof(Element));
  int result = 1;
  elem = list->head;
  
  while (result != 0){
    printf("%s\n", (char *)data);
    printf("%s\n", (char *)elem->data);
    printf("%d\n", result);
    result = compare(data, elem->data);
    printf("%d\n", result);
    if(result != 0)
      elem = elem->next;
  }
  return elem;
}

int strCompare(void *first, void *second){
  if(strcmp(((char*)first), ((char*)second)) == 0)
    return 0;
  else
    return 1;
}