typedef enum { NUMBER, BOOL, CHAR_LITERAL, STRING, EMPTYLIST, ERROR } object_type;

typedef struct object {

    object_type type;

    union{
        
        struct {
            int value;
        } number;
    
        struct {
            char value;
        }boolean;
    
        struct {    
            char value;
        } character_literal;

        struct {
            char *value;
        } string_val;

    } data;

} object;

