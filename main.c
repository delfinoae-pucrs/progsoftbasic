#include <stdio.h>

float tempInCelsiusFromFahrenheit(float tempFahrenheit);

int main()
{
    float tempFahrenheit, tempCelsius;

    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &tempFahrenheit);

    tempCelsius = tempInCelsiusFromFahrenheit(tempFahrenheit);

    printf("Temperatura em Celsius: %.1f C\n", tempCelsius);

    return 0;
}

float tempInCelsiusFromFahrenheit(float tempFahrenheit)
{
    float temp = ( 5.0 / 9.0 ) * (tempFahrenheit - 32);
    return temp;
}
