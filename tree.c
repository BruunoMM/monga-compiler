#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

Def *definitionsNode(Def *leftDefs, Def *rightDefs) {
    Def* node = safeAlloc(sizeof(Def));

    node->sequencedef.tag = SEQ_DEF;
    node->sequencedef.left = leftDefs;
    node->sequencedef.right= rightDefs;

    return node;
}

Def *varDefinitionNode(char *id, Type* type) {
    Def* node = safeAlloc(sizeof(Def));

    node->vardef.tag = VAR_DEF;
    node->vardef.var = variableNode(id, type);

    return node;
}

Var *variableNode(char *id, Type* type) {
    Var *node = safeAlloc(sizeof(Var));

    node->id = id;
    node->type = type;

    return node;
}

Type *sequenceTypeNode(MULTYPE_TAG tag, Type *type) {
    Type *node = safeAlloc(sizeof(Type));

    node->typesequence.tag = tag;
    node->typesequence.left = type;

    return node;
}

Type *typeNode(TYPE_TAG typeTag) {
    Type *node = safeAlloc(sizeof(Type));

    node->atomictype.tag = ATOMIC;
    node->atomictype.typeTag = typeTag;

    return node;
}

DefBlock *defBlockNode(Def *def, Statement *block) {
    DefBlock *node = safeAlloc(sizeof(DefBlock));

    node->def = def;
    node->block = block;

    return node;
}

Statement *blockNode(Def *def, Statement *block) {
    Statement *node = safeAlloc(sizeof(Statement));

    node->defblock.tag = BLOCK_STAT;
    node->defblock.block = defBlockNode(def, block);

    return node;
}

Statement *statementsNode(Statement *left, Statement *right) {
    Statement *node = safeAlloc(sizeof(Statement));

    node->multiple.tag = BLOCK_STAT;
    node->multiple.left = left;
    node->multiple.right = right;

    return node;
}

Statement *ifNode(Exp *expression, Statement *ifblock, Statement *elseblock) {
    Statement *node = safeAlloc(sizeof(Statement));

    node->ifelse.tag = IF_STAT;
    node->ifelse.exp = expression;
    node->ifelse.ifblock = ifblock;
    node->ifelse.elseblock = elseblock;

    return node;
}

Statement *whileNode(Exp *expression, Statement *block) {
    Statement *node = safeAlloc(sizeof(Statement));

    node->whilestat.tag = WHILE_STAT;
    node->whilestat.exp = expression;
    node->whilestat.block = block;

    return node;
}


Statement *attrNode(VarRef *varRef, Exp *expression) {
    Statement *node = safeAlloc(sizeof(Statement));

    node->attr.tag = ATTRIB_STAT;
    node->attr.varRef = varRef;
    node->attr.exp = expression;

    return node;
}

Statement *returnNode(Exp *exp) {
    Statement *node = safeAlloc(sizeof(Statement));

    node->returnstat.tag = RETURN_STAT;
    node->returnstat.exp = exp;

    return node;
}

Statement *callStatNode(Call *call) {
    Statement *node = safeAlloc(sizeof(Statement));

    node->callstat.tag = CALL_STAT;
    node->callstat.call = call;

    return node;
}

Statement *printNode(Exp *exp) {
    Statement *node = safeAlloc(sizeof(Statement));

    node->print.tag = PRINT_STAT;
    node->print.exp = exp;

    return node;
}

Exp *expNode(EXP_TAG tag, Exp* left, Exp* right) {
    Exp *node = safeAlloc(sizeof(Exp));

    node->binexp.tag = tag;
    node->binexp.left = left;
    node->binexp.right = right;

    return node;
}

Exp *unaryExpNode(EXP_TAG tag, Exp *exp) {
    Exp *node = safeAlloc(sizeof(Exp));

    node->unexp.tag = tag;
    node->unexp.exp = exp;

    return node;
}

Exp *castExpNode(Exp *exp, Type *type) {
    Exp *node = safeAlloc(sizeof(Exp));

    node->castexp.tag = EXP_CAST;
    node->castexp.type = type;
    node->castexp.exp = exp;

    return node;
}

Exp *newExpNode(Type *type, Exp *exp) {
    Exp *node = safeAlloc(sizeof(Exp));

    node->newexp.tag = EXP_NEW;
    node->newexp.size = exp;
    node->newexp.type = type;

    return node;
}

Exp *callExpNode(Call *call) {
    Exp *node = safeAlloc(sizeof(Exp));

    node->funcallexp.tag = EXP_FUNCALL;
    node->funcallexp.call = call;

    return node;
}

void *safeAlloc(int bytes) {
    void *pointer;
    pointer = malloc(bytes);
    if (!pointer) {
        perror(" Error when allocating memory.\n");
    }

    return pointer;
}