#include "binary_trees.h"


/**
 * binary_tree_height - Measures the height of binary tree
 * @tree; Pointer to the root node of the tree
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;


	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	}
	return ((left > right) ? left : right);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Balance factor of the tree, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, tatal = 0;

	if (tree)
	{
		left = ((int)binary_tree_height(tree->left));
		right = ((int)binary_tree_height(tree->right));
	}
	return (left - right);
}

