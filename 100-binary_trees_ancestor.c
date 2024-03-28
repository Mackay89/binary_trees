#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 * Return: A pointer to the lowest common ancestor node.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *a, *p;


	if (first == NULL || second == NULL)
		return (NULL);


	if (first == second)
		return ((binary_tree_t *)first);

	a = first;
	p = second;

	while (a != p)
	{
		if (a == NULL)
			a = second;
		else
			a = a->parent;

		if (p == NULL)
			p = first;
		else
			p = p->parent;
	}

	return ((binary_tree_t *)a);
}
