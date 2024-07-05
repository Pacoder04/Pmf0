#define _POSIX_C_SOURCE 200809L
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ast.h"
#include <unistd.h>



// opsti cvor
ASTNode *createNode(NodeType type)
{
    ASTNode *node = (ASTNode *)malloc(sizeof(ASTNode));
    node->nodeType = type;
    node->left = NULL;
    node->right = NULL;
    node->next = NULL;
    return node;
}

// FUNKCIJE ZA KONSTANTE
ASTNode *create_int_node(int value)
{
    ASTNode *node = createNode(NODE_INT);
    node->dataType = TYPE_INT;
    node->value.invalue = value;
    return node;
}

ASTNode *create_double_node(double value)
{
    ASTNode *node = createNode(NODE_DOUBLE);
    node->dataType = TYPE_DOUBLE;
    node->value.double_value = value;
    return node;
}

ASTNode *create_bool_node(int value)
{
    ASTNode *node = createNode(NODE_BOOL);
    node->dataType = TYPE_BOOL;
    node->value.invalue = value;
    return node;
}

ASTNode *create_string_node(char *value)
{
    ASTNode *node = createNode(NODE_STRING);
    node->dataType = TYPE_STRING;
    node->value.string_value = strdup(value);
    return node;
}

ASTNode *create_ident_node(char *ident)
{
    ASTNode *node = createNode(NODE_IDENTIFIER);
    node->dataType = TYPE_STRING;
    node->value.ident = strdup(ident);
    return node;
}

ASTNode *create_decl_node(ASTNode *type, ASTNode *id_list)
{
    ASTNode *node = createNode(NODE_DECLARATION);
    node->left = type;
    node->right = id_list;
    return node;
}
ASTNode *create_decl_seq_node(ASTNode *seq, ASTNode *decl)
{
    if (!seq)
    {
        return decl;
    }
    ASTNode *temp = seq;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = decl;
    return seq;
}

ASTNode *create_binary_node(OpType op, ASTNode *left, ASTNode *right)
{
    ASTNode *node = createNode(NODE_BINARY);
    node->opType = op;
    node->left = left;
    node->right = right;
    return node;
}
ASTNode *create_unary_node(OpType op, ASTNode *left)
{
    ASTNode *node = createNode(NODE_UNARY);
    node->opType = op;
    node->left = left;
    return node;
}

ASTNode *create_seq_node(ASTNode *stmt)
{
    ASTNode *node = createNode(NODE_SEQ);
    node->left = stmt;
    return node;
}

ASTNode *create_assign_node(ASTNode *ident, ASTNode *exp)
{
    ASTNode *node = createNode(NODE_ASSIGN);
    node->left = ident;
    node->right = exp;
    return node;
}

ASTNode *create_if_node(ASTNode *condition, ASTNode *thenStmt, ASTNode *elseStmt)
{
    ASTNode *node = createNode(NODE_IF);
    node->left = condition;
    node->right = thenStmt;
    node->next = elseStmt;
    return node;
}

ASTNode *create_while_node(ASTNode *condition, ASTNode *body)
{
    ASTNode *node = createNode(NODE_WHILE);
    node->left = condition;
    node->right = body;
    return node;
}



ASTNode *create_read_node(ASTNode *ident)
{
    ASTNode *node = createNode(NODE_READ);
    node->left = ident;
    return node;
}

ASTNode *create_write_node(ASTNode *exp)
{
    ASTNode *node = createNode(NODE_WRITE);
    node->left = exp;
    return node;
}

ASTNode *create_break_node()
{
    ASTNode *node = createNode(NODE_BREAK);
    return node;
}

void add_statement_to_seq(ASTNode *seq, ASTNode *stmt)
{
    if (seq->left == NULL)
    {
        seq->left = stmt;
    }
    else
    {
        ASTNode *temp = seq->left;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = stmt;
    }
}

void free_ast(ASTNode *root)
{
    if (root == NULL)
    {
        return;
    }
    free_ast(root->left);
    free_ast(root->right);
    free_ast(root->next);
    if (root->nodeType == NODE_IDENTIFIER || root->nodeType == NODE_STRING)
    {
        free(root->value.string_value);
    }
    free(root);
}

void print_s(char *sim, int level)
{
    for (int i = 0; i < level; i++)
    {
        printf("  ");
    }
    printf(sim);
    printf("\n");
}
int x;

void print_ast(ASTNode *root, int level)
{
    if (root == NULL)
    {
        return;
    }
    for (int i = 0; i < level; i++)
    {
        printf("|   ");
    }
    switch (root->nodeType)
    {
    case NODE_PROGRAM:
        printf("|-- PROGRAM\n");
        print_ast(root->left, level + 1);
        print_ast(root->right, level + 1);
        break;
    case NODE_TYPE:
        printf("|-- TYPE (%s)\n", root->value.string_value);
        break;
    case NODE_DECLARATION:
        printf("|-- DECLARATION\n");
        break;
    case NODE_IDENTIFIER:
        printf("|-- IDENTIFIER (%s)\n", root->value.ident);
        break;
    case NODE_SEQ:
        printf("|-- SEQ\n");
        break;
    case NODE_IF:
        printf("|-- IF\n");
        print_ast(root->left, level + 1);
        printf("|   %*s|-- THEN\n", level * 4, "");
        print_ast(root->right, level + 1);
        if (root->next)
        {
            printf("|   %*s|-- ELSE\n", level * 4, "");
            print_ast(root->next, level + 1);
        }
        break;
    case NODE_WHILE:
        printf("|-- WHILE\n");
        print_ast(root->left, level + 1);
        printf("|   %*s|-- DO\n", level * 4, "");
        print_ast(root->right, level + 1);
        break;
   
    case NODE_READ:
        printf("|-- READ\n");
        break;
    case NODE_WRITE:
        printf("|-- WRITE\n");
        break;
    case NODE_ASSIGN:
        printf("|-- ASSIGN\n");
        break;
    case NODE_BINARY:
        printf("|-- BINARY (");
        switch (root->opType)
        {
        case PLUS: printf("+"); break;
        case MINUS: printf("-"); break;
        case MULTIPLY: printf("*"); break;
        case DIVIDE: printf("/"); break;
        case MODULUS: printf("%%"); break;
        case LESS_THAN: printf("<"); break;
        case GREATER_THAN: printf(">"); break;
        case LESS_THAN_EQUAL: printf("<="); break;
        case GREATER_THAN_EQUAL: printf(">="); break;
        case EQUAL: printf("=="); break;
        case NOT_EQUAL: printf("!="); break;
        case LOGICAL_AND: printf("&&"); break;
        case LOGICAL_OR: printf("||"); break;
        case LOGICAL_NOT: printf("!"); break;
        default: printf("unknown"); break;
        }
        printf(")\n");
        break;
    case NODE_INT:
        printf("|-- INT (%d)\n", root->value.invalue);
        break;
    case NODE_DOUBLE:
        printf("|-- DOUBLE (%lf)\n", root->value.double_value);
        break;
    case NODE_BOOL:
        printf("|-- BOOL (%d)\n", root->value.invalue);
        break;
    case NODE_STRING:
        printf("|-- STRING (%s)\n", root->value.string_value);
        break;
    case NODE_BREAK:
        printf("|-- BREAK\n");
        break;
    case NODE_LOGICAL_NOT:
        printf("|-- LOGICAL NOT\n");
        break;
    case NODE_UNARY:
        printf("|-- UNARY\n");
        break; 
    default:
        printf("|-- Unknown node type\n");
        break;
    }
    if (root->nodeType != NODE_PROGRAM && root->nodeType != NODE_IF && root->nodeType != NODE_WHILE )
    {
        print_ast(root->left, level + 1);
        print_ast(root->right, level + 1);
        print_ast(root->next, level);
    }
}
