#ifndef ASH
#define ASH
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define node types
typedef enum
{
    NODE_PROGRAM,
    NODE_TYPE,
    NODE_DECLARATION,
    NODE_IDENTIFIER,
    NODE_SEQ,
    NODE_DECL_SEQ,
    NODE_BODY,
    NODE_IF,
    NODE_IF_TER,
    NODE_WHILE,
    NODE_RETURN,
    
    NODE_READ,
    NODE_WRITE,
    NODE_ASSIGN,
    NODE_BINARY,
    NODE_INT,
    NODE_DOUBLE,
    NODE_BOOL,
    NODE_STRING,
    NODE_BREAK,
    NODE_LOGICAL_NOT,
    NODE_UNARY

} NodeType;


typedef enum
{
    TYPE_INT,
    TYPE_DOUBLE,
    TYPE_BOOL,
    TYPE_STRING
} DataType;

typedef enum
{
    
    MINUS,
     PLUS,
    MULTIPLY,
    DIVIDE,
    MODULUS,
    LESS_THAN,
    
    LESS_THAN_EQUAL,
    GREATER_THAN,
    GREATER_THAN_EQUAL,
    EQUAL,
    NOT_EQUAL,
    LOGICAL_AND,
    LOGICAL_OR,
    LOGICAL_NOT,
    UNARY_MINUS
} OpType;


typedef struct ASTNode
{
    NodeType nodeType;
    DataType dataType;
    OpType opType;
    union
    {
        int invalue;
        double double_value;
        char *string_value;
        char *ident;
    } value;
    struct ASTNode *left;
    struct ASTNode *right;
    struct ASTNode *next; 
} ASTNode;


ASTNode *createNode(NodeType type);
ASTNode *create_int_node(int value);
ASTNode *create_double_node(double value);
ASTNode *create_bool_node(int value);
ASTNode *create_string_node(char *value);

ASTNode *create_ident_node(char *ident);
ASTNode *create_decl_node(ASTNode *type, ASTNode *id_list);
ASTNode *create_decl_seq_node(ASTNode *seq, ASTNode *decl);
ASTNode *create_binary_node(OpType op, ASTNode *left, ASTNode *right);
ASTNode *create_unary_node(OpType op, ASTNode *exp);
ASTNode *create_seq_node(ASTNode *stmt);
ASTNode *create_assign_node(ASTNode *ident, ASTNode *exp);
ASTNode *create_if_node(ASTNode *condition, ASTNode *thenStmt, ASTNode *elseStmt);
ASTNode *create_while_node(ASTNode *condition, ASTNode *body);
ASTNode *create_read_node(ASTNode *ident);
ASTNode *create_write_node(ASTNode *exp);
ASTNode *create_break_node();
void add_statement_to_seq(ASTNode *seq, ASTNode *stmt);
void free_ast(ASTNode *root);
void print_ast(ASTNode *root, int level);

#endif