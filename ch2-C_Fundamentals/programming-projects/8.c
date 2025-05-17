#include <stdio.h>

int main(void) {
    float loan, irate, m_payment, first, second, third, m_irate;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &irate);
    printf("Enter monthly payment: ");
    scanf("%f", &m_payment);

    m_irate = (irate / 100) / 12;
    first = loan + (loan * m_irate) - m_payment;
    second = first + (first * m_irate) - m_payment;
    third = second + (second * m_irate) - m_payment;

    printf("Balance remaining after first payment: %.2f\n", first);
    printf("Balance remaining after second payment: %.2f\n", second);
    printf("Balance remaining after third payment: %.2f\n", third);

    return 0;
}
