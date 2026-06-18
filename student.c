#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int count = 0;

// ADD STUDENT
void addStudent() {
    printf("\n===== ADD STUDENT =====\n");

    printf("Enter Roll No: ");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    scanf("%s", s[count].name);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;

    printf("\n✔ Student Added Successfully!\n");
}

// DISPLAY STUDENTS
void displayStudent() {
    printf("\n===== DISPLAY STUDENTS =====\n");

    if(count == 0) {
        printf("No records found!\n");
        return;
    }

    for(int i = 0; i < count; i++) {
        printf("\n--------------------");
        printf("\nRoll No : %d", s[i].roll);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f", s[i].marks);
        printf("\n--------------------\n");
    }
}

// SEARCH STUDENT
void searchStudent() {
    int roll, found = 0;

    printf("\n===== SEARCH STUDENT =====\n");
    printf("Enter Roll No: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++) {
        if(s[i].roll == roll) {
            printf("\n✔ STUDENT FOUND\n");
            printf("Name  : %s\n", s[i].name);
            printf("Marks : %.2f\n", s[i].marks);
            found = 1;
        }
    }

    if(!found) {
        printf("\n❌ Not Found\n");
    }
}

// MAIN MENU
int main() {
    int choice;

    while(1) {
        printf("\n\n===== STUDENT MENU =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("\nExiting Program...\n");
                exit(0);

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}