#include <stdio.h>

int main() {
    double balance = 5000.00;
    double annualInterestRate = 0.18;
    double monthlyPaymentRate = 0.02;
    double totalPaid = 0.0;

    for (int month = 1; month <= 12; month++) {
        double minimumPayment = monthlyPaymentRate * balance;
        double unpaidBalance = balance - minimumPayment;
        double interest = (annualInterestRate / 12.0) * unpaidBalance;
        balance = unpaidBalance + interest;
        totalPaid += minimumPayment;

        printf("Month: %d\n", month);
        printf("Minimum monthly payment: %.2f\n", minimumPayment);
        printf("Remaining balance: %.2f\n", balance);
    }

    printf("Total paid: %.2f\n", totalPaid);
    printf("Remaining balance: %.2f\n", balance);

    return 0;
}
