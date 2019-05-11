struct Personagem preencheA()
{
    struct Personagem personagem;
    int aux;

    printf("digite o valor para força do personagem A  \n");
    scanf("%d", &aux);
    personagem.forca = aux;

    printf("digite o valor para energia do personagem A \n");
    scanf("%d", &aux);
    personagem.energia = aux;

    printf("digite o valor para experiencia do personagem A \n");
    scanf("%d", &aux);
    personagem.experiencia = aux;

    return personagem;
}