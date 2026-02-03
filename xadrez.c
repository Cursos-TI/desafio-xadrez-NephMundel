#include <stdio.h>

//Recursividade
 void movetorre(int tor)
{
    if (tor > 0)
    {
        printf("Torre Move: Direita\n");
        movetorre(tor - 1);
    }
}

void movebispo()
{
    // Laço for duplo desnecessario e sem sentido que pediram nessa atividade
    for (int i = 0; i < 5; i++){
     for (int j = 0; j < 1 ;j++)
     {
        printf("Bispo Move: Cima\n");
     }
      printf("Bispo Move: Esquerda\n");
    }
    
    
}
// a tal da recursividade que não foi explicada direito
void moverainha(int rai)
{
    if (rai > 0)
    {
        printf("Rainha Move: Esquerda\n");
        moverainha(rai -1);

    }
    

}
    
void movecavalo()
{
    //laço for complexo que eu achei desnecessariamente inutil nessa atividade
    for(int i = 0, j = 2;i <= j; i++)
    {
        if(i < 2)
        {
           printf ("Cavalo Move: Cima\n");
        }
        else
        {
            printf("Cavalo Move: Direita\n");
        }
    }
}

int main() {

    // chama as funçoes
    movetorre(5);
    movebispo();
    moverainha(8);
    movecavalo();
    return 0;
}
