//Aqui sera posto o codigo final, isto e, a juncao de todos os passos. Sintam-se livres para edita-lo como quiserem, apenas lembrem-se
//de clicar no "Create Pull Request", ou o codigo aparecera editado para voce, mas nao para os outros.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define RAIO 5

    typedef struct{
        char descricaoRegistro [15][30];
        int RegistrosX [15];
        int RegistrosY [15];
    } Registro;

    double PontosProximos (double RAIO){
        int i, j;
        for (i = 0; i < 14; i++){
            for (j = 0; j < 14; j++){
                if (1 <= RAIO){
                    printf("As coordenadas (%lf, %lf) e (%lf, %lf) estao proximas ao raio inserido!", Registro.RegistrosX [j], Registro.RegistrosY [j], Registro.RegistrosX[i], Registro.RegistrosY[i]);
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
            fgets(descricaoRegistro[i], sizeof(descricaoRegistro[i]), stdin);
            i++;
     }
}
int main (void){

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
                break;

            case 4;
                break;

            case 0:
                sair();
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
}
  return 0;
}
