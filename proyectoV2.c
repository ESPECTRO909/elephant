#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{

	//declaracion de<vareables
char x1[486][10];
char y1[486][10];
char x2[486][10];
char y2[486][10];
//escaneo de 486 lineas
for(int escaneo=0; escaneo<=486; escaneo++){

	scanf("%s %s %s %s",x1[escaneo],y1[escaneo],x2[escaneo],y2[escaneo]);

}


printf("<svg width=\"1000\" height=\"1000\">\n");

for(int linea=0; linea<486; linea++){

        printf("<line x1=\"%s\" y1=\"%s\" x2=\"%s\" y2=\"%s\" stroke=\"black\" stroke-width=\"3\" />\n",x1[linea],y1[linea],x2[linea],y2[linea]);

}
        printf("</svg>\n");


return 0;
}
