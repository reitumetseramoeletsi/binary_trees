#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_insert_right - Inserts a node
 * on the right of a parent
 * @parent: The given node whose left to be inserted on
 * @value: The value to be given to the node
 *
 * Return: A pointer to the created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r;

	if (parent == NULL)
		return (NULL);
	r = malloc(sizeof(binary_tree_t));
	if (r == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		r->n = value;
		r->left = NULL;
		r->right = NULL;
		parent->right = r;
		r->parent = parent;
	}
	else
	{
		r->n = value;
		r->right = parent->right;
		parent->right->parent = r;
		r->left = NULL;
		r->parent = parent;
		r->parent = parent;
		parent->right = r;

	}
	return (r);
}
