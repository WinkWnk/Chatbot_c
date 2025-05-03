#include <stdio.h>

// Loop do While
// int loop(){
//     printf("Nao pude identificar sua escolhar \nSelecioane uma das opcoes abaixo para que \npossamos proseguir com seu atendimento.\n~~~~~~~~~~~~~~~~~~~~*~~~~~~~~~~~~~~~~~~\n");
//     printf("1 - Marcar Consulta\n");
//     printf("2 - Consultas Agendadas\n");
//     printf("3 - Cancelamento de Consultas\n");
// }

int main (){

    int key;
    // int consult_angen;

// Menu principal de opções de consultas
    printf("Ola!!! \nQue bom ter voce aqui conosco. Somos a clinica Mais Saude, e estamos \naqui para lhe servir da melhor forma possivel.\nComo podemos ajudar?\n~~~~~~~~~~~~~~~~~~~~*~~~~~~~~~~~~~~~~~~\nSelecioane uma das opcoes abaixo para que \npossamos proseguir com seu atendimento.\n~~~~~~~~~~~~~~~~~~~~*~~~~~~~~~~~~~~~~~~\n");

    printf("1 - Marcar Consulta\n");
    printf("2 - Consultas Agendadas\n");
    printf("3 - Cancelamento de Consultas\n");

    printf("Digite sua opcao desejada: ");    
    scanf("%d", &key);

    switch (key)
    {
    case 1:
        printf("\nMarcar Consulta\n");
    break;
    case 2: 
        printf("\nConsultas Agendadas\n");
    break;
    case 3:
        printf("\nCancelamento de Consultas\n");  
    break;    
    default:
        printf("Selecioane uma das opcoes abaixo para que possamos proseguir com seu atendimento.");
    break;
    }

//Escolha de especialidade - Marcação de consulta
    int specialty;

    if(key == 1){
        printf("\nSelecione a especialidade:\n");
        printf("1 - Cardiologista\n");
        printf("2 - Ortopedista\n");
        printf("3 - Otorrinoraligologista\n");
        printf("4 - Ginecologista\n");
    }

    printf("A especialidade desejada e: ");
    scanf("%d", &specialty);
    
    switch (specialty)
    {
    case 1:
        printf("Cardiologista\n");
        printf("Sua consulta sera com o Dr. Alencar na data 13/05 as 14 horas");
    break;
    case 2:
        printf("Ortopedista\n");
        printf("Sua consulta sera com a Dr. Lorena na data 20/06 as 09 horas\n");
    break;
    case 3:
        printf("Otorrinoraligologista\n");
        printf("Sua consulta sera com o Dr. Miranda na data 10/06 as 18 horas\n");
    break;
    case 4:
        printf("Ginecologista\n");
        printf("Sua consulta sera com a Dra. Beatriz na data 02/07 as 10 horas\n");
    break;
    
    default:
        printf("Nao pude identificar sua escolhar");
    break;
    }

    int specialty_2;

    printf("Deseja realizar a marcacao de mais uma consulta? \n");
    scanf("%d", &specialty_2);

    switch(specialty_2)
    {
    case 1:
        printf("Sim");
    break;
    case 2:
        printf("Não");
    break;
    }
 
    if(specialty_2 == 1){
        printf("\nSelecione uma nova especialidade:\n");
        printf("1 - Cardiologista\n");
        printf("2 - Ortopedista\n");
        printf("3 - Otorrinoraligologista\n");
        printf("4 - Ginecologista\n");
    }
    
    if(specialty_2 == specialty){
        printf("Voce nao pode marcar uma consulta para uma especialidade ja escolhida!");
    }
    return 0;
}