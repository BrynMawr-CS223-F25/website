#ifndef _linkedlist_H_
#define _linkedlist_H_

struct list
{
  int size;
  struct node* head;
};

struct node
{
  int val; // could be a struct or any other type
  struct node* next;
};

extern void insert_front(int val, struct list* li);
extern void insert_after(int val, struct list* li);
extern void insert_middle(int val, int position, struct list* li);
extern void clear(struct list* li);
extern int size(struct list* li);
extern struct node* search(int val, struct list* li);
extern int is_empty(struct list* li);


#endif
