// typedefs
typedef union def Def;
typedef struct var Var;
typedef struct defblock DefBlock;
typedef struct call Call;
typedef union statement Statement;
typedef union type Type;
typedef union varRef VarRef;
typedef union exp Exp;


// enums
typedef enum {
    VAR_DEF,
    FUNC_DEF,
    SEQ_DEF
} DEF_TAG;

typedef enum { 
    SEQ_STAT,
    BLOCK_STAT,
    IF_STAT,
    WHILE_STAT,
    PRINT_STAT,
    CALL_STAT,
    RETURN_STAT,
    ATTRIB_STAT
} STAT_TAG;

typedef enum { 
    CHAR,
    INT,
    FLOAT,
    BOOL
} TYPE_TAG;

typedef enum {
    ATOMIC,
    MULTIPLE
} MULTYPE_TAG;

typedef enum {
    EXP_OR,
    EXP_AND,
    EXP_EQUALS,
    EXP_NOTEQUALS,
    EXP_LEQUALS,
    EXP_GEQUALS,
    EXP_LESSER,
    EXP_GREATER,
    EXP_MINUS,
    EXP_PLUS,
    EXP_MULTIPLY,
    EXP_DIVISION,
    EXP_NOT,
    EXP_UNMINUS,
    EXP_CAST,
    EXP_NEW,
    EXP_MULTIPLE,
    EXP_VAR,
    EXP_FUNCALL,
    EXP_INT,
    EXP_FLOAT,
    EXP_STRING,
} EXP_TAG;

typedef enum {
    REF_VAR,
    REF_ARRAY
} REF_TAG;

// structs & unions
struct var {
    char* id;
    Type *type;
};

struct defblock {
   Def *def;
   Statement *block;
};

union varRef {
    REF_TAG tag;
    struct {
        REF_TAG tag;
        Var *var;
    } var;
    struct {
        REF_TAG tag;
        Var *var;
        Exp *index;
    } array;
};

struct call {
    Var *var;
    Exp *exp;
};

union def { 
    struct {
        DEF_TAG tag;
        Def *left;
        Def *right;
    } sequencedef;
    struct {
        DEF_TAG tag;
        Var *var;
    } vardef;
    struct {
        DEF_TAG tag;
        Var *var;
        Def *params;
        Statement *block;
    } funcdef;
};

union exp {
    EXP_TAG tag;
    struct {
        EXP_TAG tag;
        Exp *left;
        Exp *right;
    } binexp;
    struct {
        EXP_TAG tag;
        Exp *left;
        Exp *right;
    } multexp;
    struct {
        EXP_TAG tag;
        int num;
        VarRef *ref;
    } varexp;
    struct {
        EXP_TAG tag;
        Call *call;
    } funcallexp;
    struct {
        EXP_TAG tag;
        Exp *exp;
    } unexp;
    struct {
        EXP_TAG tag;
        int num;
        int val;
    } intexp;
    struct {
        EXP_TAG tag;
        int len;
        int num;
        char *string;
    } stringexp;
    struct {
        EXP_TAG tag;
        int num;
        float val;
    } floatexp;
    struct {
        EXP_TAG tag;
        Exp *size;
        Type *type;
    } newexp;
    struct {
        EXP_TAG tag;
        int num;
        Exp *exp;
        Type *type;
    } castexp;
};

union statement {
    struct {
        STAT_TAG tag;
        DefBlock *block; 
    } defblock;
    struct {
        STAT_TAG tag;
        Statement *left;
        Statement *right;
    } multiple;
    struct {
        STAT_TAG tag;
        Exp *exp;
        Statement *ifblock;
        Statement *elseblock;
    } ifelse;
    struct {
        STAT_TAG tag;
        Exp *exp;
        Statement *block;
    } whilestat;
    struct {
        STAT_TAG tag;
        VarRef *varRef;
        Exp *exp;
    } attr;
    struct {
        STAT_TAG tag;
        Exp *exp;
    } returnstat;
    struct {
        STAT_TAG tag;
        Call *call;
    } callstat;
    struct {
        STAT_TAG tag;
        Exp* exp;
    } print;
};

union type { 
    MULTYPE_TAG tag;
    struct { 
        MULTYPE_TAG tag;
        TYPE_TAG typeTag;
    } atomictype;
    struct {
        MULTYPE_TAG tag;
        Type *left;
        Type *right;
    } typesequence;
};

// functions
Def *definitionsNode(Def *leftDefs, Def *rightDefs);
Def *varDefinitionNode(char *id, Type* type);
Var *variableNode(char *id, Type* type);
Type *sequenceTypeNode(MULTYPE_TAG tag, Type *type);
Type *typeNode(TYPE_TAG typeTag);
void *safeAlloc(int bytes);
