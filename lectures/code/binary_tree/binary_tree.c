#include "binary_tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

btree_node* find( int x, btree_node* T)
{
    if( T == NULL ) 
    {
        return NULL; // not found
    }

    if( x < T->value ) 
    {
        return find( x, T->left );
    }
    else if( x > T->value ) 
    {
        return find( x, T->right );
    }
    return T; // found it
}

btree_node* insert( int x, btree_node* T )
{
    if( T == NULL ) // create a new node
    { 
        T = malloc (sizeof(btree_node));
        assert(T != NULL);
        T->value = x;
        T->left = T->right = NULL;
    }
    else if( x < T->value )
    {
        T->left = insert( x, T->left );
    }
    else if( x > T->value )
    {
        T->right = insert( x, T->right );
    }
    return T; 
}
            

btree_node* find_min( btree_node* T )
{
    if (T == NULL)
    {
        return NULL;
    }

    if (T->left == NULL) 
    {
        return T;
    }

    return find_min(T->left);
}

btree_node* delete( int x, btree_node* T )
{
    if( T == NULL )
    {
        printf("ERROR: value not found\n");
    }
    else if( x < T->value ) 
    {
        T->left = delete( x, T->left );
    }
    else if( x > T->value ) 
    {
        T->right = delete( x, T->right );
    }
    else // Found value to be deleted 
    {
        btree_node* tmp_cell;
        btree_node* child;
        if( T->left && T->right ) // Two children
        { 
            tmp_cell = find_min( T->right );
            T->value = tmp_cell->value;
            T->right = delete( T->value, T->right );
            return T;
        }
        else if( T->left == NULL ) 
        {
            child = T->right;
            free(T);
        }
        else if( T->right == NULL )
        {
            child = T->left;
            free(T);
        } 
        return child;
    }

    return T;
}

void _print(btree_node* T)
{
    if (T == NULL)
    {
        return;
    }

    _print(T->left);
    printf(" %d ", T->value);
    _print(T->right);    
}

void print(btree_node* T)
{
    if (T == NULL)
    {
        return;
    }

    _print(T);
    printf("\n");
}


void clear(btree_node* T)
{
    if (T == NULL)
    {
        return;
    }

    clear(T->left); 
    clear(T->right); 
    free(T);
}