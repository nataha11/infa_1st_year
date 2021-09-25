#include <stdio.h>
#include <stdlib.h>

typedef int Data;

struct Node {
	Data val;            // данные в узле
	struct Node * left;  // левый ребенок
	struct Node * right; // правый ребенок
};

struct Node * tree_add (struct Node * tree, Data x) {
	if (tree == NULL) {
		struct Node * new = malloc (sizeof (struct Node));
		new->val = x;
		new->left = new->right = NULL;
		return new;
	}
	if (x < tree->val) {
		tree->left = tree_add(tree->left, x);
	}
	if (x > tree->val) {
		tree->right = tree_add(tree->right, x);
	}
	return tree;
}

void tree_print (struct Node * tree) {
	if (tree == NULL)
		return;
	tree_print (tree->left);
	printf("%d ", tree->val);
	tree_print (tree->right);
}

void tree_destroy (struct Node * tree) {
	if (tree == NULL)
		return;
	tree_destroy (tree->left);
	tree_destroy (tree->right);
	free(tree);
}

void print_leaves (struct Node * tree) {
	if (tree == NULL)
		return;
	if (tree->left == NULL && tree->right == NULL)
		printf("%d ", tree->val);
	print_leaves(tree->left);
	print_leaves(tree->right);
}

int main() {
	struct Node * tree = NULL;
	Data v;
	while (1) {
		scanf ("%d", &v);
		if (v == 0) 
			break;
		tree = tree_add(tree, v);
	}
	print_leaves(tree);	
	tree_destroy(tree); 
	return 0;
}