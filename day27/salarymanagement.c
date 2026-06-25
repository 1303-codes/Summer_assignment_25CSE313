#include <stdio.h>

int main() {
    int n, i;
    float basic, hra, da, ta, pf, gross, net;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\n===== Employee %d =====\n", i + 1);

        printf("Enter Basic Salary: ");
        scanf("%f", &basic);

        
        hra = 0.20 * basic;  
        da  = 0.10 * basic;  
        ta  = 0.05 * basic;  
        pf = 0.12 * basic;   
        gross = basic + hra + da + ta;
        net = gross - pf;

        printf("\n--- Salary Details ---\n");
        printf("Basic Salary : %.2f\n", basic);
        printf("HRA (20%%)    : %.2f\n", hra);
        printf("DA (10%%)     : %.2f\n", da);
        printf("TA (5%%)      : %.2f\n", ta);
        printf("PF (12%%)     : %.2f\n", pf);
        printf("Gross Salary : %.2f\n", gross);
        printf("Net Salary   : %.2f\n", net);
    }

    return 0;
}