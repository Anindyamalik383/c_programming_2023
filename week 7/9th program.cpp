#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    int rollNo;
    struct Date dob;
};

int main() {
    struct Student student;

    printf("Enter student's name: ");
    scanf("%s", student.name);

    printf("Enter student's roll number: ");
    scanf("%d", &student.rollNo);

    printf("Enter student's date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &student.dob.day, &student.dob.month, &student.dob.year);

    printf("\nStudent's Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNo);
    printf("Date of Birth: %02d/%02d/%04d\n", student.dob.day, student.dob.month, student.dob.year);

    return 0;
}
