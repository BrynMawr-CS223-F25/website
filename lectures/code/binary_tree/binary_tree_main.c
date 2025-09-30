#include "binary_tree.h"
#include <stdio.h>

int main()
{
    btree_node* root = NULL;
    root = insert(4, root);
    root = insert(9, root);
    root = insert(7, root);
    root = insert(10, root);
    root = insert(1, root);
    root = insert(3, root);

    print(root);

    root = delete(9, root);
    print(root);

    if (find(9, root)) printf("Found 9!\n");
    if (!find(1, root)) printf("-1 Not Found!");

    clear(root);
    root = NULL;
}