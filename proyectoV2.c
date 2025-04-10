#include<stdio.h>
#include<stdlib.h>

int main()
{

	//declaracion de<vareables
float x1[486];
float y1[486];
float x2[486];
float y2[486];
int renglones;

scanf("%d",&renglones);



//escaneo de 486 lineas
for(int escaneo=0; escaneo<renglones; escaneo++){

	scanf("%f %f %f %f",&x1[escaneo],&y1[escaneo],&x2[escaneo],&y2[escaneo]);

}

//sona de imagen 
printf("<svg width=\"1000\" height=\"1000\">\n");

for(int linea=0; linea<renglones; linea++){

        printf("<line x1=\"%f\" y1=\"%f\" x2=\"%f\" y2=\"%f\" stroke=\"black\" stroke-width=\"3\" />\n",x1[linea],y1[linea],x2[linea],y2[linea]);

}
        printf("</svg>\n");


return 0;
}
