#include <stdio.h>

int main() {
    int rollNo, phyMarks, mathMarks, chemMarks;
    char name[50];

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]s", name);

    printf("Enter Marks in Physics: ");
    scanf("%d", &phyMarks);

    printf("Enter Marks in Math: ");
    scanf("%d", &mathMarks);

    printf("Enter Marks in Chemistry: ");
    scanf("%d", &chemMarks);

    int totalMarks = phyMarks + mathMarks + chemMarks;
    float percentage = (float) totalMarks / 3;

    printf("\n**********  Summary **********\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %d\n", phyMarks);
    printf("Math Marks: %d\n", mathMarks);
    printf("Chemistry Marks: %d\n", chemMarks);
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
