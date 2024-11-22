#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char student_id[100];
    char name[50];
    int id_sum = 0;
    int name_length = 0;
    int total_length = 0;

    printf("Enter student ID: ");
    fgets(student_id, sizeof(student_id), stdin);
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    student_id[strcspn(student_id, "\n")] = 0;
    name[strcspn(name, "\n")] = 0;

    for (int i = 0; i < strlen(student_id); i++) {
        if (isdigit(student_id[i])) {
            id_sum += student_id[i] - '0';
        }
    }

    for (int i = 0; i < strlen(name); i++) {
        if (isalpha(name[i]) || isspace(name[i])) {
            name_length++;
        }
    }

    total_length = strlen(student_id) + strlen(name);

    printf("Total length of input (including spaces): %d\n", total_length);
    printf("Sum of digits in student ID: %d\n", id_sum);
    printf("Length of name: %d\n", name_length);

    return 0;
}
