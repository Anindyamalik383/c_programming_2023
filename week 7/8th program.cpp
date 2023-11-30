#include <stdio.h>

union Student {
    char name[50];
    int marks[5];
    int rollNo;
};

int main() {
    union Student student;
    int i;
    float total = 0.0, avg;

    printf("Enter student's name: ");
    scanf("%s", student.name);
    printf("Name: %s\n", student.name);

    printf("Enter student's roll number: ");
    scanf("%d", &student.rollNo);
    printf("Roll Number: %d\n", student.rollNo);

    printf("Enter marks for 5 subjects: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &student.marks[i]);
        total += student.marks[i];
    }

    avg = total / 5;
    printf("Average Marks: %.2f\n", avg);

    return 0;
}
