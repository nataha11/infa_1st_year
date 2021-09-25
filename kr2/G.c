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

void tree_destroy (struct Node * tree) {
	if (tree == NULL)
		return;
	tree_destroy (tree->left);
	tree_destroy (tree->right);
	free(tree);
}

Data sumLevel(struct Node * tree, int n) {
	int sum = 0;
	if (tree == NULL) 
		return 0;
	if (n <= 0) {
		sum += tree->val + sumLevel(tree->left, n - 1) + sumLevel(tree->right, n - 1);
	}
	else
		sum += sumLevel(tree->left, n - 1) + sumLevel(tree->right, n - 1);
	return sum;
}

int main () {
	struct Node * tree = NULL;
	Data v;
	while (1) {
		scanf ("%d", &v);
		if (v == 0) 
			break;
		tree = tree_add(tree, v);
	}
	int n;
	scanf("%d", &n);
	printf("%d\n", sumLevel(tree, n));
	tree_destroy(tree);
	return 0;
}