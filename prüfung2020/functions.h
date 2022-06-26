#define LEN 10
#define MAX_NAME_LEN  20
#define MAX_GRADES    20

typedef enum { FALSE, TRUE } BOOL;

typedef struct Number_s
{
    long number;
    BOOL prime;

} Number_t;

typedef struct Grade_s
{
  long points;
  char name[MAX_NAME_LEN];

} Grade_t;

void initNumbers(Number_t numbers[], long len);
void find_prime(Number_t numbers[], long len);

long count_words(char *input);

void printGrades(Grade_t *grades, long len);
long readGrades(char *filename, Grade_t *grades, long len);
void sortGrades(Grade_t *grades, long len);
