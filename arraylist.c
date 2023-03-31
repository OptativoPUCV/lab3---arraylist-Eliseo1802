#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void){
  ArrayList* list = (ArrayList*)malloc(sizeof(ArrayList));
  if(list == NULL) return NULL;
  list->size = 0;
  list->capacity = 2;
  list->data = malloc(sizeof(void*));
  if(list->data == NULL) return NULL;
  return list;
}

void append(ArrayList * l, void * data){
  if(l->size == l->capacity)
    l->capacity*=2;
  l->data[l->size] = data;
  l->size++;
}

void push(ArrayList * l, void * data, int i){
  if(i <= l->size){
    if(l->size == l->capacity)
      l->capacity*=2;
    for(int k = l->size;k+1 > i;k--)
      l->data[k+1] = l->data[k];
    l->data[i] = data;
    l->size++;
  }
}

void* pop(ArrayList * l, int i){
  if(i>l->size) return NULL;
  if(l->size == 0) return NULL;
  if(i<0) i=l->size+i;
  for(int k = i;k < l->size;k++)
      l->data[k] = l->data[k+1];
  l->size--;
  return l;
}

void* get(ArrayList * l, int i){
  if(i>l->size) return NULL;
  if(i<0) i=l->size+i;
  return l->data[i];
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
  list->size = 0;
  free(list->data);
  list->data = NULL; 
}
