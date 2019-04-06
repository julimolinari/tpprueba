#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "utn.h"

int isValid(float numero, float maximo, float minimo)
{
    if(numero <= maximo && numero >= minimo)
    {
        return 1;
    }
    return 0;

}

int getFloat (char *mensaje, char *mensajeError, float maximo,float minimo,int reintentos,float *resultado)
{
        float buffer;
        int retorno = -1;
        if(mensaje != NULL && mensajeError != NULL && resultado != NULL && maximo>=minimo)
        {
            while(reintentos>=0)
            {
                printf("%s",mensaje);
                scanf("%f",&buffer);
                if(isValid(buffer,maximo,minimo)==1)
                {
                    *resultado = buffer;
                    retorno = 0;
                    break;

                }else
                {
                    printf(mensajeError);
                }
                reintentos--;
            }
        }

    return retorno;
}
