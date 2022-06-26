#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
//  Teil I
    Number_t numbers[LEN];
    initNumbers(numbers,LEN);
    find_prime(numbers,LEN);

//  Teil II
    char *teststring="  This is a   test string. ";
    count_words(teststring);

//  Teil III

    Grade_t grades[MAX_GRADES];
    long len;
    len = readGrades("grades.txt", grades, MAX_GRADES);

    printGrades(grades, len);

    sortGrades(grades, len);
    printf(".----------------------\n");
    printGrades(grades, len);

}
