#pragma once
#include <string.h>
#include <stdlib.h>

// The string length of name
#define LEN_NAME 50

// A structure represents the information of each student
struct student {
    // The name string
    // Parameter: name (string)
    char name[LEN_NAME];

    // The score of English
    // Parameter: english (integer)
    int english;

    // The score of Math
    // Parameter: math (integer)
    int math;

    // Pointer to next student
    // Parameter: next (pointer)
    struct student* next;
};

typedef struct student Student;

/// <summary>
/// Convert the given 2 arrays into a linked list using 'student' structure.
/// </summary>
/// <param name="names">The name list.</param>
/// <param name="scores">The score list</param>
/// <returns>The first node of the created linked list.</returns>
Student* last;
struct student* convert(char names[][50], int scores[][2]) {
    int len = 0;
    while (1) {
        if (strlen(names[len]) == 0) break;
        len++;
    }
    Student* temp = 0;
    for (int i = 0; i < len; i++) {
        temp = (Student*) malloc(sizeof(Student));
        strcpy(temp->name, names[(len-1) - i]);
        temp->english = scores[(len - 1) - i][0];
        temp->math = scores[(len - 1) - i][1];
        temp->next = (i != 0) ? last : 0;
        last = temp;
    }
    return temp;
}