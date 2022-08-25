#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_insert_left - Inserts a node
 * on the left of a parent
 * @parent: The given node whose left to be inserted on
 * @value: The value to be given to the node
 *
 * Return: A pointer to the created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *l;

	if (parent == NULL)
		return (NULL);
	l = malloc(sizeof(binary_tree_t));
	if (l == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		l->n = value;
		l->right = NULL;
		l->left = NULL;
		parent->left = l;
		l->parent = parent;
	}
	else
	{
		l->n = value;
		l->left = parent->left;
		parent->left->parent = l;
		l->right = NULL;
		l->parent = parent;
		l->parent = parent;
		parent->left = l;

	}
	return (l);
}
