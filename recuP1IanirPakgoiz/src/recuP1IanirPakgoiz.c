/*
RPP Programación I 1G Ianir Pakgoiz

 */

#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
}ePais;
void invertirCadena(char cadena[]);
void ordenarCaracteres(char cadena[]);
int main(void) {
	setbuf(stdout, NULL);
	//ejercicio 1
	/*ePais miPais[1] = {1, "Argentina", 100, 100, 40};
	    int recuperadosAct = 60;

	    actualizarRecuperados(miPais, recuperadosAct);

	    printf("Total recuperados: %d \nTotal Infectados: %d \n\n",miPais->recuperados, miPais->infectados);
*/
	//ejercicio 2
    /* char utn[30]="UTN-FRA";
     invertirCadena(utn);
   */

	//ejercicio 3
	 char palabra[30] = "algoritmo";
	    ordenarCaracteres(palabra);

	return 0;
}
void actualizarRecuperados(ePais* pais, int recuperadosAct)
{
	if(pais != NULL && recuperadosAct > -1)
	    {
	        pais->recuperados = pais->recuperados + recuperadosAct;
	        pais->infectados = pais->infectados - recuperadosAct;
	    }


}
void invertirCadena(char cadena[])
{
	char aux;
	    int tam = strlen(cadena);

	    for(int i = 0; i < tam-1; i++)
	    {
	        for(int j = i + 1; j < tam; j++)
	        {
	            aux = cadena[i];
	            cadena[i] = cadena[j];
	            cadena[j] = aux;
	        }
	    }
	    printf("%s \n\n", cadena);

}
void ordenarCaracteres(char cadena[])
{
    int tam = strlen(cadena);
    char aux;

    for(int i = 0; i < tam-1; i++)
    {
        for(int j = i + 1; j < tam; j++)
        {

            if(cadena[i] > cadena[j])
            {
                aux = cadena[i];
                cadena[i] = cadena[j];
                cadena[j] = aux;
            }

        }
    }
    printf("%s \n\n", cadena);
}
