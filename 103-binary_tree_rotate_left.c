#include "binary_trees.h"


/**
 * binary_tree_rotate_left - Performs a left rotation on  abinary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 * Return: A pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	pivot = tree->right;
	tree->right = pivot->left;

	if (pivot->left != NULL)
		pivot->left->parent = tree;

	pivot->left = tree;
	pivot->parent = tree->parent;
	tree->parent = pivot;
	return (pivot);
}

