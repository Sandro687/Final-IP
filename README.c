//# Final-IP
//Resolucao da final da prova de Introducao a Programacao, 2015.2.
//Galera, essa e a minha primeira vez usando github. O usaremos para facilitar a criacao do codigo. Todos podem ve-lo e altera-lo, apos a
//vizualizaçao de erros e relacionados.
//Irei separar o codigo por passos. Ao final criaremos outro codigo, a uniao de todos os passos enviados pelo git. Tentem o maximo que pu-
//derem. Farei o mesmo!
//Apenas lembrem-se de "Create Pull Request", ou o codigo nao ira mudar.

//Passo 1 - Codigo fonte:

        typedef struct //A struct "Registro" sera global.
                { 
                char descricaoRegistro [450];
                int RegistrosX [15];
                int RegistrosY [15];
                int RegistroCadastrX [15];
                int RegistroCadastrY[15]
                int indice [30];
                } Registro; 
        int arr[30];    //O "arr[30]" sera global.
        
//Passo 2 - Codigo fonte:

        double PontosProximos (double raio){
                int i, j;
                for (i = 0; i < 14; i++){
                        for (j = 0; j < 14; j++){
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
    int i = 0;
    char descricaoRegistroTemp[30]
    while (1){
            printf("Insira as coordenadas (x,y), respectivamente.\n");
            scanf("%d%d, &Registro.RegistrosX[i], &Registro.RegistrosY[i]);
            if ((Registro.RegistrosX[i] == 0) && (Registro.RegistrosY [i] == 0))
                    break;
            printf("Insira a descricao das coordenadas (%d, %d) inseridas\n.", Registro.RegistrosX[i], Registro.RegistrosY[i]);
            fgets(descricaoRegistroTemp, sizeof(descricaoRegistroTemp), stdin);
            arr[i] = strlen(descricaoRegistroTemp);     //"arr[i]" sera usado para delimitar as strings salvas na variavel string global.
            strcat(descricaoRegistro, descricaoRegistroTemp);
            i++;
}

//Passo 5 - Codigo fonte:












//Passo 6 - Codigo fonte:












//Passo 7 - Codigo fonte:












//Passo 8 - Codigo fonte:









