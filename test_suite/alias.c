#define CONSTANT_SINGLE 1
#define CONSTANT_MULTIPLE 1 + 9
#define CONSTANT_SINGLE_MULTILINE 1 \

#define CONSTANT_MULTIPLE_MULTILINE 1 \
    + \
    9
#define NESTED CONSTANT_MULTIPLE

CONSTANT_SINGLE;
CONSTANT_MULTIPLE;
CONSTANT_SINGLE_MULTILINE;
CONSTANT_MULTIPLE_MULTILINE;
NESTED;
