#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define RAIO 5

    typedef struct{
        char descricaoRegistro [15][30];
        int RegistrosX [15];
        int RegistrosY [15];
    } registroD;
    registroD Registro;

  void ConsultOcorr(){
        int i = 0, j;
        printf("Digite as coordenadas (x,y) desejadas.\n")/
        scanf("%d%d", &Registro.RegistrosX[i], &Registro.RegistrosY[i]);
        for (i = 0; i < 14; i++){
            for (j = 0; j < 14; j++){
                if (sqrt(pow((Registro.RegistrosX [j] - Registro.RegistrosX [i]), 2) + (pow((Registro.RegistrosY [j] - Registro.RegistrosY [i]), 2)) <= RAIO)){
                    printf("\nAs coordenadas (%d, %d) e (%d, %d) estao proximas ao raio inserido!\n", Registro.RegistrosX [j], Registro.RegistrosY [j], Registro.RegistrosX[i], Registro.RegistrosY[i]);
                }
            }
        }
    }

int CadstrOcorr()
{
    int i = 0;
    while(1){
            printf("Insira as coordenadas (x,y), respectivamente.\n");
            scanf("%d%d", &Registro.RegistrosX[i], &Registro.RegistrosY[i]);
            if ((Registro.RegistrosX[i] == 0) && (Registro.RegistrosY [i] == 0))
                    break;
            printf("Insira a descricao das coordenadas (%d, %d) inseridas\n.", Registro.RegistrosX[i], Registro.RegistrosY[i]);
            getchar();
            fgets(Registro.descricaoRegistro[i], sizeof(Registro.descricaoRegistro[i]), stdin);
            i++;
     }
}
int main (void){

int ListrOcorr()
{
    int i, j;
        for (i = 0; i < 14; i++){
                printf("Coordenadas: (%d, %d)\n", Registro.RegistrosX[i], Registro.RegistrosY[i]);
                printf("%s", Registro.descricaoRegistro[i]);
            }
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

            case 4:
                break;

            case 0:
                sair();
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);

  return 0;
}
