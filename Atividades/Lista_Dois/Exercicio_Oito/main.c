#include <stdio.h>

int main(int argc, char const *argv[])
{
    double celcius = 0.0, fahrenheit = 0.0;

    printf("informe a temperatura em graus Celsius: ");
    scanf("%lf", &celcius);
    fflush(stdin);

    fahrenheit = (celcius * 1.8) + 32;

    printf("%.2lf Celsius equivale a %.2lf Fahrenheit", celcius, fahrenheit);
    return 0;
}
