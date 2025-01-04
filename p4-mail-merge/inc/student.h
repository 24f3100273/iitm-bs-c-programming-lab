#ifndef STUDENT_H
#define STUDENT_H

// Task 1: Define the structure

/**
 * @brief Struct for student
 *
 * The student struct has the following members
 *
 * - name: string
 *
 * - rollno: string
 *
 * - marks: integer
 *
 * - grade: char
 *
 */
typedef struct student
{
    char name[32];
    char rollno[32];
    int marks;
    char grade;
} student_t;

// Implment the below functions in the student.c

void print_student(student_t *s);

void compute_grade(student_t *s);

int get_student_data_from_csv(char *filename, student_t **s_arr_ptr);

#endif
