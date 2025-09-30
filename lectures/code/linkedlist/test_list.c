
#include "linkedlist.h"
#include <stdio.h>

int main()
{
  struct list li;

  printf("isempty: %d\n", is_empty(&li));
  insert_front(3, &li);

  clear(&li);
  return 0;
}

