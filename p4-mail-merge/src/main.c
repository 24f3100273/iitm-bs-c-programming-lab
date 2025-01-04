#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "student.h"
#include "utils.h"


int main(int argc, char **argv) //dyn array of args
{
    if (argc < 3)
    {
        puts(
            "Usage: ./mail-merge-results students.csv output_dir\n"
            "student.csv should have three columns: name, rollno and marks.");
        return 0;
    }
    // Pointer for holding the dynamically allocated student array.
    student_t *students;
    char *filename = argv[1];
    char *output_dir = argv[2];
    int n_students;

    // Creating the directory.
    mkdir(output_dir, S_IRWXU | S_IRWXO | S_IRWXG);

    n_students = get_student_data_from_csv(filename, &students);

    // Task 4: Create the template from template.txt as a multiline c string.
    char template[] = 
"\nTo,"
"\n%s (roll no. %s)"
"\nStudent of BS-ES course, IIT Madras\n\n"
"\nDear %s,\n"
"\nYou scored %d marks in the exam, and your grade is %c.\n"

"\nSincerely,"
"\nThe Dean\n";

    // Loop over all students compute grade and write to name.txt files
    for (int i = 0; i < n_students; i++)
    {
        char filename[100];
        student_t *s = &students[i];

        // Creating the output file path
        snprintf(filename, 100, "%s/%s.txt", output_dir, s->rollno, s->name, s->marks, s->grade);

        // Task 5: Print the template to the file using the file_printf macro

        // use file_printf macro (defined in utils.h) to format the template
        // check test/test_file_printf.c for usage example

        
        file_printf(filename, template, &(s->name), &(s->rollno),&(s->name), s->marks, &(s->grade));
    }
}