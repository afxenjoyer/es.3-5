#include <stdio.h>

int main(void)
{
    int numeroProdotti;
    const int euro10 = 10;
    const int euro50 = 50;
    float prezzoUnitario;
    float importoScontato;

    printf("Inserisci il numero di prodotti acquistati\n");
    scanf("%d", &numeroProdotti);
    printf("Inserisci il prezzo unitario dei prodotti (in Euro)\n");
    scanf("%f", &prezzoUnitario);

    if (prezzoUnitario >= euro10 && prezzoUnitario < euro50)
    {
        importoScontato = prezzoUnitario-((prezzoUnitario/100)*10);
        printf("L'importo totale è %.2f€\n", importoScontato);
        printf("L'importo non scontato è %.2f€\n", prezzoUnitario);
        printf("Lo sconto è del %d%%", 10);
    }
    else if (prezzoUnitario >= euro50)
    {
        importoScontato = prezzoUnitario-((prezzoUnitario/100)*20);
        printf("L'importo totale è %.2f€\n", importoScontato);
        printf("L'importo non scontato è %.2f€\n", prezzoUnitario);
        printf("Lo sconto è del %d%%", 20);
    }
    return 0;
}
