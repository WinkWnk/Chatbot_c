#include <stdio.h>

int main (){

    int key;
    char nome[50];
    char cpf[50];
    char d_nascimento[30];

//Menu principal de opções de consultas
    printf("Ola!!!\nQue bom ter voce aqui conosco. Somos a clinica Mais Saude, e estamos\naqui para lhe servir da melhor forma possivel.\nComece digitando seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite seu CPF: ");
    scanf("%s", cpf);

    printf("Digite sua data de nascimento (DD/MM/AAAA): ");
    scanf("%s", d_nascimento);

    printf("\nCadastro realizado com sucesso!\n");
    printf("Nome: %s", nome);
    printf("CPF: %s\n", cpf);
    printf("Data de nascimento: %s\n", d_nascimento);

// Condição com while para que esse bloco execute enquanto for verdadeiro
    while (key != 1 && key != 2 && key != 3)
    {
        printf("\nComo podemos lhe ajudar %s?", nome);
        printf("\n~~~~~~~~~~~~~~~~~~~~*~~~~~~~~~~~~~~~~~~\nSelecioane uma das opcoes abaixo para que \npossamos proseguir com seu atendimento.\n~~~~~~~~~~~~~~~~~~~~*~~~~~~~~~~~~~~~~~~\n");

        printf("1 - Marcar Consulta\n");
        printf("2 - Consultas Agendadas\n");
        printf("3 - Cancelamento de Consultas\n");

        printf("Digite sua opcao desejada: ");    
        scanf("%d", &key);

        if (key != 1 && key != 2 && key != 3) {
            printf("\nOpcao invalida! Tente novamente.\n");
    }
    }
     
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
    }

    if(key == 2){
        printf("Voce nao tem consultas agendadas no momento. No menu principal selecione a opcao desejada.\n");
        return 0;
    }else if (key == 3)
    {
        printf("Nao ha consulta a serem canceladas.\n");
        return 0;
    }

//Escolha de especialidade - Marcação de consulta
    int specialty;

while (!(specialty == 1 || specialty == 2 || specialty == 3 || specialty == 4))
{
    if(key == 1){
        printf("\nSelecione a especialidade:\n");
        printf("1 - Cardiologista\n");
        printf("2 - Ortopedista\n");
        printf("3 - Otorrinoraligologista\n");
        printf("4 - Ginecologista\n");
    }

    printf("A especialidade desejada e: ");
    scanf("%d", &specialty);

    if (!(specialty == 1 || specialty == 2 || specialty == 3 || specialty == 4))
    {
        printf("\nOpcao invalida! Tente novamente!\n");
    }
    
}

    switch (specialty)
    {
    case 1:
        printf("Cardiologista\n");
    break;
    case 2:
        printf("Ortopedista\n");
    break;
    case 3:
        printf("Otorrinoraligologista\n");
    break;
    case 4:
        printf("Ginecologista\n");
    break;
    }
    
//Data e Hora
    char data[10]; 
    char hora[10];

    printf("\nPara qual data voce quer marcar sua consulta (DD/MM)?\n");
    scanf("%s", data);

    printf("Para que horas voce quer marcar sua consulta? \n");
    scanf("%s", hora);

    if (specialty == 1)
    {
        printf("\nParabens!!! Sua consulta foi marcada com sucesso!\nSera no dia %s as %sh, com o Dr. Alencar\n", data,hora);
    }else if(specialty == 2){
        printf("\nParabens!!! Sua consulta foi marcada com sucesso!\nSera no dia %s as %sh, com o Dra. Lorena\n", data,hora);
    }else if(specialty == 3){
        printf("\nParabens!!! Sua consulta foi marcada com sucesso!\nSera no dia %s as %sh, com o Dr. Miranda\n", data,hora);
    }else if (specialty == 4){
        printf("\nParabens!!! Sua consulta foi marcada com sucesso!\nSera no dia %s as %sh, com o Dra. Beatriz\n", data,hora);
    }

//Visualização, Cancelamento ou Finalização
    int decisao_3;
    int cancel;

while (!(decisao_3 == 1 || decisao_3 == 2 || decisao_3 == 3))
{
    printf("\nPronto!\nSua consulta foi marcada! Posso ajudar em mais alguma coisa?\n");
    printf("1 - Finalizar atendimento\n");
    printf("2 - Visualizar consulta agendada\n");
    printf("3 - Cancelar consulta\n");
    scanf("%d", &decisao_3);

    if(!(decisao_3 == 1 || decisao_3 == 2 || decisao_3 == 3)){
        printf("\nOpcao invalida! Tente novamente!\n");
    }
}
    switch (decisao_3)
    {
    case 1:
        printf("\nFinalizar atendimento\n");
    break;
    case 2:
        printf("\nVisualizar consulta agendada\n");
    break;
    case 3:
        printf("\nCancelar consulta\n");
    break;
    }

    if(decisao_3 == 1){
        printf("Muito Obrigado! Foi um prazer lhe atender, aguardamos ansiosamente pelo seu retorno.\nAte mais!!!");
        return 0;
    }else if(decisao_3 == 2){
        printf("\nOla Sr/Sra %sgostaria de informar que voce tem uma\nconsulta marcada para o dia %s as %sh, por favor\nchegar com 30 minutos de antercedencia!", nome, data, hora);
    }else if(decisao_3 == 3){
        do{    
        printf("Deseja realmente cancelar sua consulta?\n");
        printf("1 - Sim\n");
        printf("2 - Nao\n");
        scanf("%d", &cancel);
        }
        while (!(cancel == 1 || cancel == 2));

        if(!(cancel == 1 || cancel == 2)){
            printf("Opcao invalida! Tente novamente!\n");
        }
        switch (cancel)
        {
        case 1:
            printf("1 - Sim\n");
        break;
        case 2:
            printf("2 - Nao\n");
        break;
        }
        if (cancel == 1)
        {
            printf("\nConsulta cancelada com sucesso. Ate a proxima!");
        }else if(cancel == 2)
        {
            printf("Muito Obrigado! Foi um prazer lhe atender, aguardamos ansiosamente pelo seu retorno.\nAte mais!!!");
        }         
    }else{
        printf("Nao pude identificar sua escolha.\n");
    }
    
    return 0;
}

