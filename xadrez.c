#include <stdio.h>

//início das mudanças 

//Aqui são declaradas as vriáveis de movimento das peças (Nível mestre)
void cima(){ 
    printf("Cima\n");
}

void direita(){
    printf("Direita\n");
}
void esquerda(){
    printf("Esquerda\n");
}
int main() {

    int i = 8, j = 0;
    //utilização da estrutura "for" para descrever o movimento do bispo com funções recursivas
    printf("=======================\n");
    printf("Bispo\n");
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        cima();
        direita();
    }
    

    //utilização da estrutura "for" para descrever o movimento da torre com funções recursivas
    printf("=======================\n");
    printf("Torre\n");
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        direita();
    }
    
    
    //utilização da estrutura "while" para descrever o movimento da rainha com funções recursivas
    printf("=======================\n");
    printf("Rainha\n");
    printf("\n");
    while ( i > 0)
    {
        esquerda();
        i--;
    }
    
    //Na peça do cavalo, utiliza-se a estrutura "for"
    //Variável "j" implementada
    // utilização do "if" no último nível
    printf("=======================\n");
    printf("Cavalo\n");
    printf("\n");
    for ( j = 0, i = 0; i < 2, j = 1; i++, j++){
        cima();
        if (i < 2){
            continue;
        }
        if (j = 1)
        {
            direita();
            break;
        }
    }
    
    printf("=======================\n");
    return 0;
}
