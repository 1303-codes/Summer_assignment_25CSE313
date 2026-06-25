#include <stdio.h>

int main() {
    char name[50];
    int roll, m1, m2, m3, m4, m5;
    int total;
    float percentage;

    printf("===== Marksheet Generation System =====\n");

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter marks of 5 subjects (out of 100):\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    
    printf("\n========== MARKSHEET ==========\n");
    printf("Name      : %s\n", name);
    printf("Roll No   : %d\n", roll);
    printf("Marks     : %d %d %d %d %d\n", m1, m2, m3, m4, m5);
    printf("Total     : %d / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    
    if (percentage >= 90)
        printf("Grade     : A+\n");
    else if (percentage >= 75)
        printf("Grade     : A\n");
    else if (percentage >= 60)
        printf("Grade     : B\n");
    else if (percentage >= 40)
        printf("Grade     : C\n");
    else
        printf("Grade     : Fail\n");

    printf("================================\n");

    return 0;
}