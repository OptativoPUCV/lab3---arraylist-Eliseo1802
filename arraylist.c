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
  
  
  
  
  //l->size++;  
}

void push(ArrayList * l, void * data, int i){
  
  
  
  
  
  //l->size++;
}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
