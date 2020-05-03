#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

typedef struct TreeNode Node;
int size(struct TreeNode* root) {
	if (root == NULL) return 0;
	return size(root->left) + size(root->right) + 1;
}
 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */

int* preorder(struct TreeNode* root, int* arr) {
	if (root == NULL) return arr;
	*arr = root->val;
	arr++;
	return preorder(root->right, preorder(root->left, arr));
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
	*returnSize = size(root);
	int* arr = (int*)malloc(sizeof(int) * *returnSize);
	
	preorder(root, arr);

	return arr;
}









int main(int argc, char* argv[]) {
	// printf() displays the string inside quotation
	
	Node root;
	root.val = 3;
	
	Node r2;
	r2.val = 2;

	Node r5;
	r5.val = 5;

	root.left = &r2;
	root.right = &r5;

	r2.left = NULL;
	r2.right = NULL;
	r5.left = NULL;
	r5.right = NULL;

	//printf("%d", sizeof(r2));

	int* p = (int*)malloc(10000000000);
	if (p == NULL) printf("1");
	p = (int*)malloc(1000000000);

	if (p == NULL) printf("2");
	p = (int*)malloc(1000000000);

	if (p == NULL) printf("3");
	p = (int*)malloc(1000000000);

	if (p == NULL) printf("4");
	p = (int*)malloc(1000000000);

	if (p == NULL) printf("5");
	p = (int*)malloc(1000000000);

	if (p == NULL) printf("6");
	p = (int*)malloc(1000000000);
	 
	if (p == NULL) printf("7");
	p = (int*)malloc(1000000000);

	if (p == NULL) printf("8");
	p = (int*)malloc(1000000000);

	if (p == NULL) printf("9");
	p = (int*)malloc(1000000000);
	if (p == NULL) printf("10");
	

	int i = 0;
	while (i < 100000000) {
		p++;
		i++;
		printf(" ", p);
	}



	return 0;
}