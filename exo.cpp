#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, discriminant, racine1, racine2, partieReelle, partieImaginaire;

    // Demander les coefficients a, b, et c
    printf("Entrez les coefficients a, b et c : ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Entrée invalide.\n");
        return 1;
    }

    // Vérifier que 'a' n'est pas zéro pour éviter la division par zéro
    if (a == 0)
    {
        printf("'a' ne doit pas être zéro.\n");
        return 1;
    }

    // Calculer le discriminant
    discriminant = b * b - 4 * a * c;

    // Cas où le discriminant est positif
    if (discriminant > 0)
    {
        racine1 = (-b + sqrt(discriminant)) / (2 * a);
        racine2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Les racines sont réelles et distinctes : %.2lf et %.2lf\n", racine1, racine2);
    }
    // Cas où le discriminant est zéro
    else if (discriminant == 0)
    {
        racine1 = -b / (2 * a);
        printf("La racine est réelle et double : %.2lf\n", racine1);
    }
    // Cas où le discriminant est négatif
    else
    {
        partieReelle = -b / (2 * a);
        partieImaginaire = sqrt(-discriminant) / (2 * a);
        printf("Les racines sont complexes : %.2lf + %.2lfi et %.2lf - %.2lfi\n", partieReelle, partieImaginaire, partieReelle, partieImaginaire);
    }

    return 0;
}
