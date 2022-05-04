#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,dni,np,npm,dnim;

    for(x=1;x<=10;x++)
    {
        printf("Ingrese el dni del alumno %d: ",x);
        scanf("%d",&dni);
        fflush(stdin);
        printf("Ingrese la nota promedio numero %d: ",x);
        scanf("%d",&np);
        fflush(stdin);
        printf("\n");
        if(x==1||np>npm)
        {
            dnim=dni;
            npm=np;
        }
    }
    printf("El DNI del alumno con mayor nota es: %d; con nota de: %d",dnim,npm);
    return 0;
}
