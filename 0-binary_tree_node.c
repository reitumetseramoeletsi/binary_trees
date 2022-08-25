#include "binary_trees.h"
/**
 * binary_tree_node - create a node
 * @parent: pointer to parent
 * @value: value of the node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *n0;

n0 = malloc(sizeof(binary_tree_t));
if (n0 == NULL)
return (NULL);
n0->n = value;
n0->parent = parent;
n0->left = NULL;
n0->right = NULL;
return (n0);
}
