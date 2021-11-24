#include <stdio.h>
#include <stdlib.h>
#include"funciones.h"
#include<windows.h>
#include<string.h>

void saludo1(){
    system ("color 3");
   Sleep(150); gotoxy(5,8); printf(":::::::::  ::::::::::: :::::::::: ::::    ::: :::     ::: :::::::::: ::::    ::: ::::::::::: :::::::::   :::::::: ");
   Sleep(150); gotoxy(5,9); printf(":+:    :+:     :+:     :+:        :+:+:   :+: :+:     :+: :+:        :+:+:   :+:     :+:     :+:    :+: :+:    :+:");
    Sleep(150);gotoxy(5,10); printf("+:+    +:+     +:+     +:+        :+:+:+  +:+ +:+     +:+ +:+        :+:+:+  +:+     +:+     +:+    +:+ +:+    +:+");
    Sleep(150);gotoxy(5,11); printf("+#++:++#+      +#+     +#++:++#   +#+ +:+ +#+ +#+     +:+ +#++:++#   +#+ +:+ +#+     +#+     +#+    +:+ +#+    +:+");
   Sleep(150); gotoxy(5,12); printf("+#+    +#+     +#+     +#+        +#+  +#+#+#  +#+   +#+  +#+        +#+  +#+#+#     +#+     +#+    +#+ +#+    +#+");
    Sleep(150);gotoxy(5,13); printf("#+#    #+#     #+#     #+#        #+#   #+#+#   #+#+#+#   #+#        #+#   #+#+#     #+#     #+#    #+# #+#    #+#");
   Sleep(150); gotoxy(5,14); printf("#########  ########### ########## ###    ####     ###     ########## ###    #### ########### #########   ######## ");
}

void saludo(){

        system("color 6");
        gotoxy(45,19); char saludo[33]="a la calculadora de:" ;
        for(int i=0;i<33;i++){
        printf("%c",saludo[i]);
        Sleep(50);
         }


 Sleep(150); gotoxy(35,23); printf("--------------------------------------------------\n");
 Sleep(150);gotoxy(35,24); printf("|*|        #yasinowsky alexis.                  |*|\n");
 Sleep(150);gotoxy(35,25); printf("|*|        #Rios Fernando.                      |*|\n");
 Sleep(150); gotoxy(35,26); printf("|*|        #Manrique Hugo.                      |*|\n");
 Sleep(150);gotoxy(35,27); printf("|*|        #lezcano franco.                     |*|\n");
 Sleep(150);gotoxy(35,28);printf("--------------------------------------------------\n");

 Sleep(2500);
 system("cls");
}
 void condiciones (){
    gotoxy(26,9);printf("--------------------------------------------------------------");
    gotoxy(26,10);printf("|*|bien venido las condiciones de uso son las siguientes   |*|");
    gotoxy(26,11);printf("--------------------------------------------------------------");
    gotoxy(26,12); printf("|*|el usuario no de debe superar las seis sifras numericas |*|");
    gotoxy(26,13); printf("|*|para la operatoria siendo 999999 como maximo o -999999  |*|");
    gotoxy(26,14);  printf("|*|como minimo para operatoria.letras y signos ingresados  |*|");
    gotoxy(26,15);  printf("|*|se tomaran como invalidos.                              |*|");
    gotoxy(26,15);  printf("|*|el numero mayor para calcular el factoria es de 31      |*|");
    gotoxy(26,16);printf("--------------------------------------------------------------");
    gotoxy(1,29); system ("pause");
    system ("cls");
       }
void menu(){
      system("color 9");
   Sleep(50);   gotoxy(26,1);printf("------------------------------------------------------------------------");
   Sleep(50);  gotoxy(26,2);printf("|*|                        MENU DE OPCIONES                          |*|");
   Sleep(50);   gotoxy(26,3);printf("------------------------------------------------------------------------\n");
   Sleep(50);   gotoxy(26,4);printf("|*|  (1) si desea agregar o cambiar el primer valor                  |*|\n");
   Sleep(50);   gotoxy(26,5);printf("|*|                                                                  |*|\n");
   Sleep(50);   gotoxy(26,6);printf("|*|  (2) si desea agregar o cambiar segundo valor                    |*|\n");
   Sleep(50);   gotoxy(26,7);printf("|*|                                                                  |*|\n");
   Sleep(50);   gotoxy(26,8);printf("|*|  (3) si desea sumar                                              |*|\n");
   Sleep(50);   gotoxy(26,9);printf("|*|                                                                  |*|\n");
   Sleep(50);   gotoxy(26,10);printf("|*|  (4) si desea restar                                             |*|\n");
   Sleep(50);   gotoxy(26,11);printf("|*|                                                                  |*|\n");
   Sleep(50);   gotoxy(26,12);printf("|*|  (5) si desea dividir                                            |*|\n");
   Sleep(50);   gotoxy(26,13);printf("|*|                                                                  |*|\n");
   Sleep(50);   gotoxy(26,14);printf("|*|  (6) si desea multiplicar                                        |*|\n");
   Sleep(50);   gotoxy(26,15);printf("|*|                                                                  |*|\n");
   Sleep(50);   gotoxy(26,16);printf("|*|  (7) si desea el factorial                                       |*|\n");
   Sleep(50);   gotoxy(26,17);printf("|*|                                                                  |*|\n");
   Sleep(50);   gotoxy(26,18);printf("|*|  (8) si desea el calcula de todas las operaciones                |*|\n");
   Sleep(50);   gotoxy(26,19);printf("|*|                                                                  |*|\n");
   Sleep(50);   gotoxy(26,20);printf("|*|  (9) si desea salir                                              |*|\n");
   Sleep(50);   gotoxy(26,21);printf("|*|                                                                  |*|\n");
   Sleep(50);   gotoxy(26,22);printf("------------------------------------------------------------------------\n");
}


            int validar_num(char numero[]){
            int i;
            for(i=0; i<strlen(numero);i++){
            if(!(isdigit(numero[i])))
            {
                   Beep(423,600);
            menu();

            gotoxy(1,27); char inv[]="       ingrese una opcion valida       ";
            for(int f=0;f<33;f++){
            printf("%c",inv[f]);
            Sleep(25);
                }
            return 0;
            }
            }
            return 1;
            }




 void nume11(x){
if(x<=999999){
gotoxy(1,23);printf("\n el primer valor ingresado es :%d",x);
    }
return 0;
       }


          void nume12(y){
          if(y<=999999){
          gotoxy(1,24);printf("\n el segundo valor ingresado es :%d",y);
          }
          return 0;
          }


                         void gotoxy(int x,int y){
                         HANDLE hcon;
                         hcon = GetStdHandle(STD_OUTPUT_HANDLE);
                         COORD dwPos;
                         dwPos.X = x;
                         dwPos.Y= y;
                         SetConsoleCursorPosition(hcon,dwPos);
                         }


                               int suma(int x, int y)//ingresan los valores ya y devuelve el calculo ya resuelto
                               {
                               int sum;
                               sum=x+y;
                               return sum;
                                 }


                                                 int resta(int x, int y)//ingresan los valores ya y devuelve el calculo ya resuelto
                                                  {
                                                 int res;
                                                 res=x-y;
                                                 return res;
                                                  }


int divicion(int x,int y ){
float div;
div=(float)x/y;
Sleep(150);gotoxy(27,9);printf("------------------------------------------------------------------------\n");
Sleep(150);gotoxy(27,10);printf("|*|                                                                  |*|\n");
Sleep(150);gotoxy(27,11);printf("|*| el resultado de la divicion es %.2f:",div);
Sleep(150);gotoxy(27,12);printf("|*|                                                                  |*|\n");
Sleep(150);gotoxy(27,13);printf("------------------------------------------------------------------------\n");
Sleep(150);gotoxy(96,11);printf("|*|");
                   return div;
                }


             int resto(int x,int y)
             {
             int rest;
             rest=x%y;
             return rest;
             }


                    int mult(int x, int y)
                    {
                    int multiplicacion;
                    multiplicacion=x*y;
                    return multiplicacion;
                    }


                            int factorial( int z)
                            {
                            int f=1;
                            for(int i=1 ;i<=z;i++){
                            f=f*i;
                            }
                            return f;
                            }


