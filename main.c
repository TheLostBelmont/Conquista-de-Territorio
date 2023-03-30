#include <stdio.h>
#include <stdlib.h>
#include <time.h> // necessário para usar a srand
#include <locale.h>// necessário para a função de LC_ALL
#include <unistd.h> // necessário para usar a função sleep()
typedef struct no{
        char item;  //int value;
        struct no *next;
}No;

typedef struct{
        No *top;
        int size;
}Pilha;

void pile(Pilha *p, int x){
    No *no = malloc(sizeof(No));
    no -> item = x;
    no -> next = p->top;
    p->top = no;
}

/* operação pop
    retorna o topo da pilha ou NULL
*/

No* stacked (Pilha *p){
    No *no = NULL;
    if(p->top){
        no = p->top;
        p->top = no->next;
    }
    return no;
}
void print(No *no){
    if(no) {
        printf("%c\n", no->item);
        print(no->next);
    }
}

void jog1_wins()
{
    printf("*  ######   #####    #####    #####   ######    #####   ######               ##             ### ###  #######  ##  ###   #####   #######  ### ### *\n");
    printf("*    ###   ### ###  ###  ##  ### ###  ### ###  ### ###  ### ###             ###             ### ###  ### ###  ### ###  ### ###  ### ###  ### ### *\n");
    printf("*    ###   ### ###  ###      ### ###  ### ###  ### ###  ### ###            ####             ### ###  ###      #######  ###      ###      ### ###*\n");
    printf("*    ###   ### ###  ### ###  #######  ### ###  ### ###  ######               ##             ### ###  #####    #######  ###      #####    ### ### *\n");
    printf("*    ###   ### ###  ###  ##  ### ###  ### ###  ### ###  ### ##               ##             ### ###  ###      ### ###  ###      ###      ### ###*\n");
    printf("* ## ###   ### ###  ###  ##  ### ###  ### ###  ### ###  ### ###              ##              #####   ### ###  ### ###  ### ###  ### ###  ### ###*\n");
    printf("*  #####    #####    #####   ### ###  ######    #####   ### ###            ######             ###    #######  ### ###   #####   #######   ##### *\n");
}

void jog2_wins()
{
    printf("*  ######   #####    #####    #####   ######    #####   ######             #####            ### ###  #######  ##  ###   #####   #######  ### ### *\n");
    printf("*    ###   ### ###  ###  ##  ### ###  ### ###  ### ###  ### ###           ##   ##           ### ###  ### ###  ### ###  ### ###  ### ###  ### ### *\n");
    printf("*    ###   ### ###  ###      ### ###  ### ###  ### ###  ### ###               ###           ### ###  ###      #######  ###      ###      ### ### *\n");
    printf("*    ###   ### ###  ### ###  #######  ### ###  ### ###  ######               ###            ### ###  #####    #######  ###      #####    ### ### *\n");
    printf("*    ###   ### ###  ###  ##  ### ###  ### ###  ### ###  ### ##              ###             ### ###  ###      ### ###  ###      ###      ### ### *\n");
    printf("* ## ###   ### ###  ###  ##  ### ###  ### ###  ### ###  ### ###            ###               #####   ### ###  ### ###  ### ###  ### ###  ### ### *\n");
    printf("*  #####    #####    #####   ### ###  ######    #####   ### ###           #######             ###    #######  ### ###   #####   #######   ##### *\n");
}
void game()
{
 int number;
 int turn = 0;
 int cont_empilhadas1 = 0;
 int cont_empilhadas2 = 0;
 int random_number1, random_number2;
 char item = 'X';
 No *no; Pilha p; p.size = 0; p.top = NULL;
 while(cont_empilhadas1 !=3 && cont_empilhadas2 !=3){
   if (turn % 2 == 0)
            {
                printf("JOGADOR 1, TENTE ACERTAR UM NÚMERO ALEATÓRIO DE 1 A 5 PARA PODER AVANÇAR NA CONQUISTA \n");
                printf("\n\n\n");
                printf("PASSE DA CORDENADA 3 EM DIREÇÃO A BAIXO PARA VENCER O JOGO!\n");
                 if(cont_empilhadas1 == 0 && cont_empilhadas2 == 0){
                 printf("\n ---------3----------\n");

                 printf("\n ---------2----------\n");

                 printf("\n ---------1----------\n");

                 printf("\n ---------%c----------\n", item);

                 printf("\n ---------3----------\n");

                 printf("\n ---------2----------\n");

                 printf("\n ---------1----------\n");}

                    if(cont_empilhadas1==1)
                    {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");
                                    print(p.top);
                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");


                    }
                    if(cont_empilhadas1==2)
                    {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");
                                    print(p.top);
                        printf("\n ---------3----------\n");
                    }
                    if(cont_empilhadas1==3)
                        {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                                     print(p.top);
                        }
                    if(cont_empilhadas2==1)
                     {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");
                                    print(p.top);
                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                     }
                    if(cont_empilhadas2==2)
                     {
                        printf("\n ---------3----------\n");
                                    print(p.top);
                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                     }
                    if(cont_empilhadas2==3)
                        {
                                    print(p.top);
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");

                        }

                srand(time(NULL));
                random_number1 = rand() % 5 + 1;
                printf("DIGITE UM NÚMERO: \n");

                scanf("%d", &number);

                if (number == random_number1)
                {
                    printf("JOGADOR 1, VOCÊ ACERTOU O NÚMERO ALEATÓRIO! \n");
                    no = stacked(&p);
                    pile(&p, item);
                    cont_empilhadas1++;
                    cont_empilhadas2--;

                    if(cont_empilhadas1==1)
                    {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");
                                    print(p.top);
                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");


                    }
                    if(cont_empilhadas1==2)
                    {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");
                                    print(p.top);
                        printf("\n ---------3----------\n");
                    }
                    if(cont_empilhadas1==3)
                        {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                                     print(p.top);


                        jog1_wins();
                        break;}
                    if(cont_empilhadas2==1)
                     {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");
                                    print(p.top);
                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                     }
                    if(cont_empilhadas2==2)
                     {
                        printf("\n ---------3----------\n");
                                    print(p.top);
                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                     }
                    if(cont_empilhadas2==3)
                        {
                                    print(p.top);
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");}

                        int intervalo_tempo1 = 3; // intervalo de tempo em segundos
                        sleep(intervalo_tempo1); // pausa por um intervalo de tempo
                        system("cls");}
                else
                {
                    printf("VOCÊ ERROU O NÚMERO ALEATÓRIO,O NÚMERO CERTO ERA %d\n", random_number1);
                    printf("\n");
                    int intervalo_tempo1 = 3; // intervalo de tempo em segundos
                    sleep(intervalo_tempo1); // pausa por um intervalo de tempo
                    system("cls");

                   // if (no)
                    //{


                       // printf("|%d|\n", no->item);
                       // printf("\n---------PILHA DO PLAYER 1----------\n");
                       // print(p.top);
                       // printf("------------PILHA DO PLAYER 1-----------\n");
                   // }
                }
                turn++;
              }


    else
                {
                printf("JOGADOR 2, TENTE ACERTAR UM NÚMERO ALEATÓRIO DE 1 A 5 PARA PODER AVANÇAR NA CONQUISTA \n");
                printf("\n\n\n");
                printf("PASSE DA CORDENADA 3 EM DIREÇÃO A CIMA PARA VENCER O JOGO!\n");
                 if(cont_empilhadas1==0 && cont_empilhadas2==0){

                 printf("\n ---------3----------\n");

                 printf("\n ---------2----------\n");

                 printf("\n ---------1----------\n");

                 printf("\n ---------%c----------\n", item);

                 printf("\n ---------3----------\n");

                 printf("\n ---------2----------\n");

                 printf("\n ---------1----------\n");}

                   if(cont_empilhadas2==1)
                     {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");
                                    print(p.top);
                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                     }
                    if(cont_empilhadas2==2)
                     {
                        printf("\n ---------3----------\n");
                                    print(p.top);
                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                     }
                    if(cont_empilhadas2==3)
                        {
                                    print(p.top);
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");

                        }
                    if(cont_empilhadas1==1)
                    {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");
                                    print(p.top);
                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");


                    }
                    if(cont_empilhadas1==2)
                    {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");
                                    print(p.top);
                        printf("\n ---------3----------\n");
                    }
                    if(cont_empilhadas1==3)
                        {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                                     print(p.top);
                        }

                 srand(time(NULL));
                 random_number2 = rand () % 5 + 1;
                 printf("DIGITE UM NÚMERO: \n");
                 scanf("%d", &number);

                if (number == random_number2)
                {
                    printf("JOGADOR 2, VOCÊ ACERTOU O NÚMERO ALEATÓRIO! \n");
                    no = stacked(&p);
                    pile(&p, item);
                    cont_empilhadas2++;
                    cont_empilhadas1--;

                    if(cont_empilhadas1==1)
                        {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");
                                    print(p.top);
                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");}
                    if(cont_empilhadas1==2)
                        {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");
                                    print(p.top);
                        printf("\n ---------3----------\n");}

                    if(cont_empilhadas1==3)
                        {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                                     print(p.top);}

                    if(cont_empilhadas2==1)
                        {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");
                                    print(p.top);
                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");}

                    if(cont_empilhadas2==2)
                        {
                        printf("\n ---------3----------\n");
                                    print(p.top);
                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");}
                    if(cont_empilhadas2==3)
                        {
                                    print(p.top);
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");


                        jog2_wins();
                        break;}
                    int intervalo_tempo2 = 3; // intervalo de tempo em segundos
                    sleep(intervalo_tempo2); // pausa por um intervalo de tempo
                    system("cls");}

                else
                {
                    printf("VOCÊ ERROU O NÚMERO ALEATÓRIO,O NÚMERO CERTO ERA %d\n", random_number2);
                    printf("\n");
                    int intervalo_tempo2 = 3; // intervalo de tempo em segundos
                    sleep(intervalo_tempo2); // pausa por um intervalo de tempo
                    system("cls");

                }
             turn++;
            }
                }
        }

menu(){
printf("                 #####  ####### #     #  #####  #     # ###  #####  #######    #       ######  #######  \n");
printf("                #     # #     # ##    # #     # #     #  #  #     #    #      # #      #     # #        \n");
printf("                #       #     # # #   # #     # #     #  #  #          #     #   #     #     # #        \n");
printf("                #       #     # #  #  # #     # #     #  #   #####     #    #     #    #     # #####    \n");
printf("                #       #     # #   # # #   # # #     #  #        #    #    #######    #     # #        \n");
printf("                #     # #     # #    ## #    #  #     #  #  #     #    #    #     #    #     # #        \n");
printf("                 #####  ####### #     #  #### #  #####  ###  #####     #    #     #    ######  #######  \n");
printf("\n\n");
printf("                                                                      #                      \n");
printf("                                                                     #                       \n");
printf("                    ####### ####### ######  ######  ### ####### ####### ######  ### #######  \n");
printf("                       #    #       #     # #     #  #     #    #     # #     #  #  #     #  \n");
printf("                       #    #       #     # #     #  #     #    #     # #     #  #  #     #  \n");
printf("                       #    #####   ######  ######   #     #    #     # ######   #  #     #  \n");
printf("                       #    #       #   #   #   #    #     #    #     # #   #    #  #     #  \n");
printf("                       #    #       #    #  #    #   #     #    #     # #    #   #  #     #  \n");
printf("                       #    ####### #     # #     # ###    #    ####### #     # ### #######  \n");

int menu_tempo1 = 5; // intervalo de tempo em segundos
sleep(menu_tempo1); // pausa por um intervalo de tempo
system("cls");



printf("              #          #####     #    ### ######      #####              # #######  #####     #    ######   \n");
printf("             ##         #     #   # #    #  #     #    #     #             # #     # #     #   # #   #     #  \n");
printf("            # #         #        #   #   #  #     #          #             # #     # #        #   #  #     #  \n");
printf("              #   #####  #####  #     #  #  ######      #####  #####       # #     # #  #### #     # ######   \n");
printf("              #               # #######  #  #   #      #             #     # #     # #     # ####### #   #    \n");
printf("              #         #     # #     #  #  #    #     #             #     # #     # #     # #     # #    #   \n");
printf("            #####        #####  #     # ### #     #    #######        #####  #######  #####  #     # #     #  \n");
printf("\n\n");
printf("\n\n");
printf("             #####         #####  ####### #     # #######          # #######  #####     #    ######   \n");
printf("             #     #      #     # #     # ##   ## #     #          # #     # #     #   # #   #     #  \n");
printf("                  #       #       #     # # # # # #     #          # #     # #        #   #  #     #  \n");
printf("             #####  ##### #       #     # #  #  # #     #          # #     # #  #### #     # ######   \n");
printf("                  #       #       #     # #     # #     #    #     # #     # #     # ####### #   #     \n");
printf("             #     #      #     # #     # #     # #     #    #     # #     # #     # #     # #    #   \n");
printf("             #####         #####  ####### #     # #######     #####  #######  #####  #     # #     #  \n");
}

carregando(){

printf("                 #####     #    ######  ######  #######  #####     #    #     # ######  #######              \n");
printf("                #     #   # #   #     # #     # #       #     #   # #   ##    # #     # #     #              \n");
printf("                #        #   #  #     # #     # #       #        #   #  # #   # #     # #     #              \n");
printf("                #       #     # ######  ######  #####   #  #### #     # #  #  # #     # #     #              \n");
printf("                #       ####### #   #   #   #   #       #     # ####### #   # # #     # #     # ### ### ###  \n");
printf("                #     # #     # #    #  #    #  #       #     # #     # #    ## #     # #     # ### ### ###  \n");
printf("                 #####  #     # #     # #     # #######  #####  #     # #     # ######  ####### ### ### ###  \n");

int loading_time = 3; // intervalo de tempo em segundos
sleep(loading_time); // pausa por um intervalo de tempo
system("cls");

}

sair(){
printf(" #####     #    ### #     # ######  #######              \n");
printf("#     #   # #    #  ##    # #     # #     #              \n");
printf("#        #   #   #  # #   # #     # #     #              \n");
printf(" #####  #     #  #  #  #  # #     # #     #              \n");
printf("      # #######  #  #   # # #     # #     # ### ### ###  \n");
printf("#     # #     #  #  #    ## #     # #     # ### ### ###  \n");
printf(" #####  #     # ### #     # ######  ####### ### ### ###  \n");


}

howtoplay(){
printf("\t\t COMO JOGAR \n");
printf("\n\n");
printf(" CONQUISTA DE TERRITÓRIO É UM JOGO SIMPLES, PARA \n SE VENCER BASTA ATRAVESSAR A CORDENADA NÚMERO 3\n(BAIXO PARA JOGADOR 1 E CIMA PARA JOGADOR 2). PARA \n CHEGAR ATÉ ESSAS CORDENADAS O JOGADOR DEVE CONQUISTAR \n AS CORDENADAS ANTERIORES(1,2,3) DE SUAS RESPECTIVAS DIREÇÕES.\n\n");
printf("\n");

 char item = 'X';
                 printf("\n ---------3---------- CORDENADAS DO JOGADOR 2\n");

                 printf("\n ---------2---------- CORDENADAS DO JOGADOR 2\n");

                 printf("\n ---------1---------- CORDENADAS DO JOGADOR 2\n");

                 printf("\n ---------%c---------- ZONA NEUTRA\n", item);

                 printf("\n ---------1---------- CORDENADAS DO JOGADOR 1\n");

                 printf("\n ---------2---------- CORDENADAS DO JOGADOR 1\n");

                 printf("\n ---------3---------- CORDENADAS DO JOGADOR 1\n\n");


printf(" AS CORDENADAS SÃO CONQUISTADAS QUANDO O JOGADOR \n DA VEZ ACERTA O NÚMERO ALEATÓRIO, FAZENDO ASSIM\n COM QUE O MESMO AVANCE UMA CORDENADA E ASSIM PAS  \n SANDO A VEZ PARA O PRÓXIMO JOGADOR, O JOGADOR TAMBÉM \n PASSARÁ A VEZ CASO ERRE O NÚMERO ALEATÓRIO.\n ");
printf("QUANDO UM JOGADOR ACERTA O NÚMERO E CONQUISTA   \n UMA DETERMINADA CORDENADA O SEU ADVERSÁRIO PODE\n FAZER ELE REGREDIR DE CORDENADA CASO ACERTE O NÚ- \n MERO EM SUA VEZ. \n\n");

                 printf("\n ---------3---------- CORDENADAS DO JOGADOR 2    ---------3---------- CORDENADAS DO JOGADOR 2\n");

                 printf("\n ---------2---------- CORDENADAS DO JOGADOR 2    ---------2---------- CORDENADAS DO JOGADOR 2\n");
                 printf("X \n");

                 printf("\n ---------1---------- CORDENADAS DO JOGADOR 2    ---------1---------- CORDENADAS DO JOGADOR 2\n");

                 printf("\n ---------0---------- ZONA NEUTRA                ---------%c---------- ZONA NEUTRA\n", item);

                 printf("\n ---------1---------- CORDENADAS DO JOGADOR 1    ---------1---------- CORDENADAS DO JOGADOR 1\n");

                 printf("\n ---------2---------- CORDENADAS DO JOGADOR 1    ---------2---------- CORDENADAS DO JOGADOR 1\n");

                 printf("\n ---------3---------- CORDENADAS DO JOGADOR 1    ---------3---------- CORDENADAS DO JOGADOR 1\n\n\n");

    char res;
    printf("DESEJA VOLTAR AO MENU ? S/N ? \n");
    fflush(stdin);
    scanf("%c", &res);
    if(res == 'S' || res == 's'){
    main();
    }

    /*do {
    printf("DESEJA VOLTAR AO MENU ? S/N ? \n");
    fflush(stdin);
    scanf("%c", &res);

    switch(res){
        case 'S' :
                main();

        case 's' :
                main();

    }
   }while(res!='s' || res != 'S');*/
}

int main() {

    setlocale(LC_ALL, "portuguese");
    int op;
    int time_skip = 3;// intervalo de tempo em segundos
    menu();
    printf("\n\n");
    printf("ESCOLHA UMA DAS OPÇÕES \n");
    scanf("%d", &op);
    switch(op) {
    case 1:
        sleep(time_skip); // pausa por um intervalo de tempo
        system("cls");
        sair();
        break;
    case 2:
        sleep(time_skip); // pausa por um intervalo de tempo
        system("cls");
        carregando();
        game();
    case 3:
        system("cls");
        carregando();
        howtoplay();

    return 0;
  }

}
