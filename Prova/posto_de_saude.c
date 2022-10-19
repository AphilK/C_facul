#include <stdio.h>

int main() {
    char nome1, nome2, nome3, nome4, nome5, nome6, nome7, nome8, nome9, nome10; // Nome dos pacientes
    float tempo_consulta, tempo_curativo, tempo_imunizacao, tempo_coleta, tempo_emergencia; //Tempo total de cada procedimento
    float custo_consulta, custo_curativo, custo_imunizacao, custo_coleta, custo_emergencia; //Custos de cada procedimento
    double valor1, valor2, valor3, valor4, valor5, valor6, valor7, valor8, valor9, valor10; //Valores de cada paciente
    float tempo1=0, tempo2=0, tempo3=0, tempo4=0, tempo5=0, tempo6=0, tempo7=0, tempo8=0, tempo9=0, tempo10=0; //Tempo de atendimento de cada paciente
    int escolha, repeticao;
    int p1=0, p2=0, p3=0, p4=0, p5=0; //Contagem dos procedimentos

    printf("\nBem vindo(a) ao posto de saude do SIM\n\n");
    printf("Cadastro do tempo dos procedimentos (em minutos): \n");
    printf("Consulta: ");
    scanf("%f", &tempo_consulta);
    printf("Curativo: ");
    scanf("%f", &tempo_curativo);
    printf("Imunizacao: ");
    scanf("%f", &tempo_imunizacao);
    printf("Coleta de medicamento: ");
    scanf("%f", &tempo_coleta);
    printf("Emergencia: ");
    scanf("%f", &tempo_emergencia);

    printf("\nVoce eh o primeiro paciente\n");

    printf("\nDiga-me a primeira letra de seu nome: ");
    scanf(" %c", &nome1);

    printf("\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo1+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo1+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo1+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo1+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo1+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }

    printf("Deseja realizar mais um procedimento ? [0 - sim/ 1 - nao]\n");
    scanf("%d", &repeticao);

    switch (repeticao)
    {
    case 0 :
        printf("\n\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo1+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo1+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo1+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo1+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo1+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }
        break;
    default:
        break;
    }
    valor1 = (26.75/20) * tempo1;
    printf("\nO valor total do atendimento foi de R$%.2f", valor1);
    
    printf("\n\nVoce eh o segundo paciente\n");

    printf("\nDiga-me a primeira letra de seu nome: ");
    scanf(" %c", &nome2);

    printf("\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo2+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo2+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo2+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo2+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo2+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }

    printf("Deseja realizar mais um procedimento ? [0 - sim/ 1 - nao]\n");
    scanf("%d", &repeticao);

    switch (repeticao)
    {
    case 0 :
        printf("\n\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo2+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo2+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo2+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo2+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo2+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }
        break;
    default:
        break;
    }
    valor2 = (26.75/20) * tempo2;
    printf("\nO valor total do atendimento foi de R$%.2f", valor2);

    printf("\n\nVoce eh o terceiro paciente\n");

    printf("\nDiga-me a primeira letra de seu nome: ");
    scanf(" %c", &nome3);

    printf("\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo3+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo3+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo3+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo3+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo3+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }

    printf("Deseja realizar mais um procedimento ? [0 - sim/ 1 - nao]\n");
    scanf("%d", &repeticao);

    switch (repeticao)
    {
    case 0 :
        printf("\n\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo3+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo3+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo3+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo3+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo3+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }
        break;
    default:
        break;
    }
    valor3 = (26.75/20) * tempo3;
    printf("\nO valor total do atendimento foi de R$%.2f", valor3);

    printf("\n\nVoce eh o quarto paciente\n");

    printf("\nDiga-me a primeira letra de seu nome: ");
    scanf(" %c", &nome4);

    printf("\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo4+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo4+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo4+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo4+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo4+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }

    printf("Deseja realizar mais um procedimento ? [0 - sim/ 1 - nao]\n");
    scanf("%d", &repeticao);

    switch (repeticao)
    {
    case 0 :
        printf("\n\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo4+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo4+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo4+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo4+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo4+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }
        break;
    default:
        break;
    }
    valor4 = (26.75/20) * tempo4;
    printf("\nO valor total do atendimento foi de R$%.2f", valor4);

    printf("\n\nVoce eh o quinto paciente\n");

    printf("\nDiga-me a primeira letra de seu nome: ");
    scanf(" %c", &nome5);

    printf("\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo5+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo5+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo5+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo5+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo5+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }

    printf("Deseja realizar mais um procedimento ? [0 - sim/ 1 - nao]\n");
    scanf("%d", &repeticao);

    switch (repeticao)
    {
    case 0 :
        printf("\n\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo5+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo5+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo5+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo5+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo5+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }
        break;
    default:
        break;
    }
    valor5 = (26.75/20) * tempo5;
    printf("\nO valor total do atendimento foi de R$%.2f", valor5);

    printf("\n\nVoce eh o sexto paciente\n");

    printf("\nDiga-me a primeira letra de seu nome: ");
    scanf(" %c", &nome6);

    printf("\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo6+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo6+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo6+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo6+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo6+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }

    printf("Deseja realizar mais um procedimento ? [0 - sim/ 1 - nao]\n");
    scanf("%d", &repeticao);

    switch (repeticao)
    {
    case 0 :
        printf("\n\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo6+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo6+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo6+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo6+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo6+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }
        break;
    default:
        break;
    }
    valor6 = (26.75/20) * tempo6;
    printf("\nO valor total do atendimento foi de R$%.2f", valor6);

    printf("\n\nVoce eh o setimo paciente\n");

    printf("\nDiga-me a primeira letra de seu nome: ");
    scanf(" %c", &nome7);

    printf("\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo7+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo7+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo7+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo7+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo7+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }

    printf("Deseja realizar mais um procedimento ? [0 - sim/ 1 - nao]\n");
    scanf("%d", &repeticao);

    switch (repeticao)
    {
    case 0 :
        printf("\n\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo7+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo7+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo7+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo7+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo7+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }
        break;
    default:
        break;
    }
    valor7 = (26.75/20) * tempo7;
    printf("\nO valor total do atendimento foi de R$%.2f", valor7);

    printf("\n\nVoce eh o oitavo paciente\n");

    printf("\nDiga-me a primeira letra de seu nome: ");
    scanf(" %c", &nome8);

    printf("\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo8+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo8+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo8+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo8+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo8+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }

    printf("Deseja realizar mais um procedimento ? [0 - sim/ 1 - nao]\n");
    scanf("%d", &repeticao);

    switch (repeticao)
    {
    case 0 :
        printf("\n\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo8+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo8+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo8+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo8+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo8+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }
        break;
    default:
        break;
    }
    valor8 = (26.75/20) * tempo8;
    printf("\nO valor total do atendimento foi de R$%.2f", valor8);

    printf("\n\nVoce eh o nono paciente\n");

    printf("\nDiga-me a primeira letra de seu nome: ");
    scanf(" %c", &nome9);

    printf("\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo9+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo9+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo9+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo9+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo9+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }

    printf("Deseja realizar mais um procedimento ? [0 - sim/ 1 - nao]\n");
    scanf("%d", &repeticao);

    switch (repeticao)
    {
    case 0 :
        printf("\n\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo9+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo9+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo9+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo9+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo9+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }
        break;
    default:
        break;
    }
    valor9 = (26.75/20) * tempo9;
    printf("\nO valor total do atendimento foi de R$%.2f", valor9);

    printf("\n\nVoce eh o decimo paciente\n");

    printf("\nDiga-me a primeira letra de seu nome: ");
    scanf(" %c", &nome10);

    printf("\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo10+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo10+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo10+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo10+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo10+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }

    printf("Deseja realizar mais um procedimento ? [0 - sim/ 1 - nao]\n");
    scanf("%d", &repeticao);

    switch (repeticao)
    {
    case 0 :
        printf("\n\nOferecemos os seguintes procedimentos:\n Consulta-1\n Curativo-2\n Imunizacao-3\n Coleta de Medicamentos-4\n Emergencia-5\n\nDigite o numero do procedimento desejado: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("\nProcedimento 1 - Consulta\n");
            p1++;
            tempo10+=tempo_consulta;
            break;
        case 2: 
            printf("\nProcedimento 2 - Curativo\n");
            p2++;
            tempo10+=tempo_curativo;
            break;
        case 3: 
            printf("\nProcedimento 3 - Imunizacao\n");
            p3++;
            tempo10+=tempo_imunizacao;
            break;
        case 4: 
            printf("\nProcedimento 4 - Coleta de medicamentos\n");
            p4++;
            tempo10+=tempo_coleta;
            break;
        case 5: 
            printf("\nProcedimento 5 - Emergencia\n");
            p5++;
            tempo10+=tempo_emergencia;
            break;
        default:
            printf("\nErro, selecione uma opcao valida\n");
            break;
    }
        break;
    default:
        break;
    }
    valor10 = (26.75/20) * tempo10;
    printf("\nO valor total do atendimento foi de R$%.2f\n\n", valor10);

    float tempo_total = tempo1 + tempo2 + tempo3 + tempo4 + tempo5 + tempo6 + tempo7 + tempo8 + tempo9 + tempo10;

    printf("O tempo total de atendimento dos %d pacientes foi de: %.2f minutos\n", 10, tempo_total);

    float mais_demorado = tempo1;
    if(tempo2 > mais_demorado){
        mais_demorado = tempo2;
    }
    if(tempo3 > mais_demorado){
        mais_demorado = tempo3;
    }
    if(tempo4 > mais_demorado){
        mais_demorado = tempo4;
    }
    if(tempo5 > mais_demorado){
        mais_demorado = tempo5;
    }
    if(tempo6 > mais_demorado){
        mais_demorado = tempo6;
    }
    if(tempo7 > mais_demorado){
        mais_demorado = tempo7;
    }
    if(tempo8 > mais_demorado){
        mais_demorado = tempo8;
    }
    if(tempo9 > mais_demorado){
        mais_demorado = tempo9;
    }
    if(tempo10 > mais_demorado){
        mais_demorado = tempo10;
    }

    if(mais_demorado == tempo1) {
        printf("O paciente %d foi o mais demorado\n", 1);
    } else if(mais_demorado == tempo2) {
        printf("O paciente %d foi o mais demorado\n", 2);
    } else if(mais_demorado == tempo3) {
        printf("O paciente %d foi o mais demorado\n", 3);
    } else if(mais_demorado == tempo4) {
        printf("O paciente %d foi o mais demorado\n", 4);
    } else if(mais_demorado == tempo5) {
        printf("O paciente %d foi o mais demorado\n", 5);
    } else if(mais_demorado == tempo6) {
        printf("O paciente %d foi o mais demorado\n", 6);
    } else if(mais_demorado == tempo7) {
        printf("O paciente %d foi o mais demorado\n", 7);
    } else if(mais_demorado == tempo8) {
        printf("O paciente %d foi o mais demorado\n", 8);
    } else if(mais_demorado == tempo9) {
        printf("O paciente %d foi o mais demorado\n", 9);
    } else if(mais_demorado == tempo10) {
        printf("O paciente %d foi o mais demorado\n", 10);
    }

    int mais_usado = p1;

    if(p2>mais_usado){
        mais_usado = p2;
    }
    if(p3>mais_usado){
        mais_usado = p3;
    }
    if(p4>mais_usado){
        mais_usado = p4;
    }
    if(p5>mais_usado){
        mais_usado = p5;
    }

    if (mais_usado == p1){
        printf("O procedimento mais requisitado foi a Consulta\n");
    } else if(mais_usado == p2) {
        printf("O procedimento mais requisitado foi o Curativo\n");
    } else if(mais_usado == p3) {
        printf("O procedimento mais requisitado foi a Imunizacao\n");
    } else if(mais_usado == p4) {
        printf("O procedimento mais requisitado foi a Coleta de medicamento\n");
    } else if (mais_usado == p5) {
        printf("O procedimento mais requisitado foi a Emergencia\n");
    }

    double custo_total = valor1 + valor2 + valor3 + valor4 + valor5 + valor6 + valor7 + valor8 + valor9 + valor10;

    printf("O custo total foi de R$%.2f para realizar os 10 atendimentos\n", custo_total);

    float custo_menor = valor1;

    if(valor2 < custo_menor) {
        custo_menor = valor2;
    }
    if(valor3 < custo_menor) {
        custo_menor = valor3;
    }
    if(valor4 < custo_menor) {
        custo_menor = valor4;
    }
    if(valor5 < custo_menor) {
        custo_menor = valor5;
    }
    if(valor6 < custo_menor) {
        custo_menor = valor6;
    }
    if(valor7 < custo_menor) {
        custo_menor = valor7;
    }
    if(valor8 < custo_menor) {
        custo_menor = valor8;
    }
    if(valor9 < custo_menor) {
        custo_menor = valor9;
    }
    if(valor10 < custo_menor) {
        custo_menor = valor10;
    }

    if(custo_menor == valor1) {
        printf("O paciente %d foi o qual custou menos\n", 1);
    } else if(custo_menor == valor2) {
        printf("O paciente %d foi o qual custou menos\n", 2);
    } else if(custo_menor == valor3) {
        printf("O paciente %d foi o qual custou menos\n", 3);
    } else if(custo_menor == valor4) {
        printf("O paciente %d foi o qual custou menos\n", 4);
    } else if(custo_menor == valor5) {
        printf("O paciente %d foi o qual custou menos\n", 5);
    } else if(custo_menor == valor6) {
        printf("O paciente %d foi o qual custou menos\n", 6);
    } else if(custo_menor == valor7) {
        printf("O paciente %d foi o qual custou menos\n", 7);
    } else if(custo_menor == valor8) {
        printf("O paciente %d foi o qual custou menos\n", 8);
    } else if(custo_menor == valor9) {
        printf("O paciente %d foi o qual custou menos\n", 9);
    } else if(custo_menor == valor10) {
        printf("O paciente %d foi o qual custou menos\n", 10);
    }
    
    return 0;
}