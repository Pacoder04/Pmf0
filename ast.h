

#ifndef AST_H
#define AST_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct ASTNode {
    int nodeType;
    struct ASTNode *left;
    struct ASTNode *right;
    char *value;
} ASTNode;

ASTNode *createNode(int nodeType, ASTNode *left, ASTNode *right, char *value) {
    ASTNode *node = (ASTNode *)malloc(sizeof(ASTNode));
    node->nodeType = nodeType;
    node->left = left;
    node->right = right;
    node->value = value ? strdup(value) : NULL;
    return node;
}

void printLevel(ASTNode *root, int level) {
    if (root == NULL) return;
    if (level == 1) {
        if (root->value)
            printf("%s ", root->value);
        else
            printf("%d ", root->nodeType);
    } else if (level > 1) {
        printLevel(root->left, level - 1);
        printLevel(root->right, level - 1);
    }
}

void printLevels(ASTNode *root) {
    int level = 1;
    while (1) {
        printf("Level %d: ", level);
        printLevel(root, level);
        printf("\n");
        level++;
    }
}

ASTNode *root = NULL;

#endif // AST_H