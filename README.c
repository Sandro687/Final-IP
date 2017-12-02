//# Final-IP
//Resolucao da final da prova de Introducao a Programacao, 2015.2.
//Galera, essa e a minha primeira vez usando github. O usaremos para facilitar a criacao do codigo. Todos podem ve-lo e altera-lo, apos a
//vizualizaçao de erros e relacionados.
//Irei separar o codigo por passos. Ao final criaremos outro codigo, a uniao de todos os passos enviados pelo git. Tentem o maximo que pu-
//derem. Farei o mesmo!
//Apenas lembrem-se de "Create Pull Request", ou o codigo nao ira mudar.

//Passo 1 - Codigo fonte:

typedef struct 
        { 
        char descricaoRegistro1 [30];
        char descricaoRegistro2 [30];
        char descricaoRegistro3 [30];
        char descricaoRegistro4 [30];
        char descricaoRegistro5 [30];
        char descricaoRegistro6 [30];
        char descricaoRegistro7 [30];
        char descricaoRegistro8 [30];
        char descricaoRegistro9 [30];
        char descricaoRegistro10 [30];
        char descricaoRegistro11 [30];
        char descricaoRegistro12 [30];
        char descricaoRegistro13 [30];
        char descricaoRegistro14 [30];
        char descricaoRegistro15 [30];
        int RegistrosX [15];
        int RegistrosY [15];
        int RegistroCadastrX [15];
        int RegistroCadastrY[15]
        int indice [30];
        } Registro; 

//Passo 2 - Codigo fonte:

        double PontosProximos (double raio){
                int i, j;
                int *Registro.RegistrosX, *Registro.RegistrosY;
                for (i = 0; i < 15; i++){
                        for (j = 0; j < 15; j++){
                                if (sqrt(pow((Registro.RegistrosX [j] - Registro.RegistrosX [i]), 2) + (pow(Registro.RegistrosY [j] - Registro.RegistrosY [i]), 2)) <= raio){
                                        printf("As coordenadas (%lf, %lf) e (%lf, %lf) estao proximas ao raio inserido!", Registro.RegistrosX [j], Registro.RegistrosY [j], Registro.RegistrosX[i], Registro.RegistrosY[i]);
                                }

//Passo 3 - Codigo fonte:
                            
void CadstrOcorr()
{
    printf("...\n");
}

void ListrOcorr()
{
    printf("...\n");
}

void ConsultOcorr();
{
    printf("...\n");
}

void GeraRelatorio()
{
    printf("...\n");
}
void sair()
{
    printf("...\n");
}

                                
    int continuar = 1;

    do
    {
        printf("\n\tMenu\n\n");
        printf("1. Cadastrar ocorrencias\n");
        printf("2. Listar ocorrencias\n");
        printf("3. Consultar ocorrencias por regiao\n");
        printf("4. Gerar relatorios de ocorrencias por tipo\n");  
        printf("0. Sair\n");

        scanf("%d", &continuar);
        system("cls || clear"); //Limpa a tela

        switch(continuar)
        {
            case 1:
                CadstrOcorr();
                break;

            case 2:
                ListrOcorr();
                break;

            case 3:
                ConsultOcorr();
                break;

            case 4;
                GeraRelatorio()
                break;
                
            case 0:
                sair();
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
}

//Passo 4 - Codigo fonte:                       //A funcao "CadstrOcorr()" do passo anterior sera agora atualizada.

int CadstrOcorr()
{
    int *Registro.RegistrosX [15];               //Faz-se necessario o uso de ponteiros, ou a variavel sera descartada apos o uso da funcao.
    int *Registro.RegistrosY [15];
    char *descricaoRegistro1 [30];
    char *descricaoRegistro2 [30];
    char *descricaoRegistro3 [30];
    char *descricaoRegistro4 [30];
    char *descricaoRegistro5 [30];
    char *descricaoRegistro6 [30];
    char *descricaoRegistro7 [30];
    char *descricaoRegistro8 [30];
    char *descricaoRegistro9 [30];
    char *descricaoRegistro10 [30];
    char *descricaoRegistro11 [30];
    char *descricaoRegistro12 [30];
    char *descricaoRegistro13 [30];
    char *descricaoRegistro14 [30];
    char *descricaoRegistro15 [30];
    
    while (1){
            printf("Insira as coordenadas (x,y), respectivamente.\n");
            if ((RegistrosX[0] == 0) && (RegistrosY == [0]))
                    break;
            scanf("%d%d, &RegistrosX[0], &RegistrosY[0]);
            printf("Insira a descricao das coordenadas (%d, %d) inseridas\n.", RegistrosX[0], RegistrosY[0]);
            fgets(descricaoRegistro1, sizeof(descricaoRegistro1), stdin);
            printf("Insira as coordenadas (x,y), respectivamente.\n");
            if ((RegistrosX[1] == 0) && (RegistrosY[1] == 0))
                    break;
            scanf("%d%d, &RegistrosX[1], &RegistrosY[1]);
            printf("Insira a descricao das coordenadas (%d, %d) inseridas\n.", RegistrosX[1], RegistrosY[1]);
            fgets(descricaoRegistro2, sizeof(descricaoRegistro2), stdin);
            printf("Insira as coordenadas (x,y), respectivamente.\n");
            if ((Registrosx == 0) && (Registrosy == 0))
                    break;
            scanf("%d%d, &RegistrosX[2], &RegistrosY[2]);
            printf("Insira a descricao das coordenadas (%d, %d) inseridas\n.", RegistrosX[2], RegistrosY[2]);
            fgets(descricaoRegistro3, sizeof(descricaoRegistro3), stdin);
            printf("Insira as coordenadas (x,y), respectivamente.\n");
            if ((Registrosx == 0) && (Registrosy == 0))
                    break;
            scanf("%d%d, &RegistrosX[3], &RegistrosY[3]);
            printf("Insira a descricao das coordenadas (%d, %d) inseridas\n.", RegistrosX[3], RegistrosY[3]);
            fgets(descricaoRegistro4, sizeof(descricaoRegistro4), stdin);
            printf("Insira as coordenadas (x,y), respectivamente.\n");
            if ((Registrosx == 0) && (Registrosy == 0))
                    break;
            scanf("%d%d, &RegistrosX[3], &RegistrosY[3]);
            printf("Insira a descricao das coordenadas (%d, %d) inseridas\n.", RegistrosX[3], RegistrosY[3]);
            fgets(descricaoRegistro4, sizeof(descricaoRegistro4), stdin);
            printf("Insira as coordenadas (x,y), respectivamente.\n");
            scanf("%d%d, &RegistrosX[4], &RegistrosY[4]);
            if ((Registrosx == 0) && (Registrosy == 0))
                    break;
            printf("Insira a descricao das coordenadas (%d, %d) inseridas\n.", RegistrosX[4], RegistrosY[4]);
            fgets(descricaoRegistro5, sizeof(descricaoRegistro5), stdin);
            printf("Insira as coordenadas (x,y), respectivamente.\n");
            if ((Registrosx == 0) && (Registrosy == 0))
                    break;
            scanf("%d%d, &RegistrosX[5], &RegistrosY[5]);
            printf("Insira a descricao das coordenadas (%d, %d) inseridas\n.", RegistrosX[5], RegistrosY[5]);
            fgets(descricaoRegistro6, sizeof(descricaoRegistro6), stdin);
            printf("Insira as coordenadas (x,y), respectivamente.\n");
            if ((Registrosx == 0) && (Registrosy == 0))
                    break;
            scanf("%d%d, &RegistrosX[6], &RegistrosY[6])
            printf("Insira a descricao das coordenadas (%d, %d) inseridas\n.", RegistrosX[6], RegistrosY[6]);
            fgets(descricaoRegistro7, sizeof(descricaoRegistro7), stdin);
            printf("Insira as coordenadas (x,y), respectivamente.\n");
            if ((Registrosx == 0) && (Registrosy == 0))
                    break;
            scanf("%d%d, &RegistrosX[7], &RegistrosY[7])
            printf("Insira a descricao das coordenadas (%d, %d) inseridas\n.", RegistrosX[7], RegistrosY[7]);
            fgets(descricaoRegistro8, sizeof(descricaoRegistro8), stdin);
            printf("Insira as coordenadas (x,y), respectivamente.\n");
            if ((Registrosx == 0) && (Registrosy == 0))
                    break;
            scanf("%d%d, &RegistrosX[8], &RegistrosY[8])
            printf("Insira a descricao das coordenadas (%d, %d) inseridas\n.", RegistrosX[8], RegistrosY[8]);
            fgets(descricaoRegistro9, sizeof(descricaoRegistro9), stdin);
            printf("Insira as coordenadas (x,y), respectivamente.\n");
            scanf("%d%d, &RegistrosX[9], &RegistrosY[9])
            printf("Insira a descricao das coordenadas (%d, %d) inseridas\n.", RegistrosX[9], RegistrosY[9]);
            fgets(descricaoRegistro10, sizeof(descricaoRegistro10), stdin);
            printf("Insira as coordenadas (x,y), respectivamente.\n");
            scanf("%d%d, &RegistrosX[0], &RegistrosY[0])
            printf("Insira a descricao das coordenadas (%d, %d) inseridas\n.", RegistrosX[0], RegistrosY[0]);
            fgets(descricaoRegistro1, sizeof(descricaoRegistro1), stdin);
            printf("Insira as coordenadas (x,y), respectivamente.\n");
            scanf("%d%d, &RegistrosX[0], &RegistrosY[0])
            printf("Insira a descricao das coordenadas (%d, %d) inseridas\n.", RegistrosX[0], RegistrosY[0]);
            fgets(descricaoRegistro1, sizeof(descricaoRegistro1), stdin);
            printf("Insira as coordenadas (x,y), respectivamente.\n");
            scanf("%d%d, &RegistrosX[0], &RegistrosY[0])
            printf("Insira a descricao das coordenadas (%d, %d) inseridas\n.", RegistrosX[0], RegistrosY[0]);
            fgets(descricaoRegistro1, sizeof(descricaoRegistro1), stdin);
            printf("Insira as coordenadas (x,y), respectivamente.\n");
            scanf("%d%d, &RegistrosX[0], &RegistrosY[0])
            printf("Insira a descricao das coordenadas (%d, %d) inseridas\n.", RegistrosX[0], RegistrosY[0]);
            fgets(descricaoRegistro1, sizeof(descricaoRegistro1), stdin);
            
}










//Passo 5 - Codigo fonte:












//Passo 6 - Codigo fonte:












//Passo 7 - Codigo fonte:












//Passo 8 - Codigo fonte:









