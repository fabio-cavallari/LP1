void preencheB(struct Personagem *p)
{
    int aux;

    printf("digite o valor para força do personagem B\n");
    scanf("%d", &aux);
    (*p).forca = aux;

    printf("digite o valor para energia do personagem B\n");
    scanf("%d", &aux);
    (*p).energia = aux;

    printf("digite o valor para experiencia do personagem B\n");
    scanf("%d", &aux);
    (*p).experiencia = aux;
}