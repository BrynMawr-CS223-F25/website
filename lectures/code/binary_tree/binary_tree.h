#ifndef _binary_tree_H_
#define _binary_tree_H_

typedef struct btree_nodeT
{
    int value;
    struct btree_nodeT* left;
    struct btree_nodeT* right;
} btree_node;

extern btree_node* find( int x, btree_node* root);
extern btree_node* insert( int x, btree_node* root );
extern btree_node* find_min( btree_node* root );
extern btree_node* delete( int x, btree_node* root );
extern void clear( btree_node* root );
extern void print( btree_node* root );

#endif
