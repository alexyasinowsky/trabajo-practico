#include <stdio.h>
#include <stdlib.h>
#include"funciones.h"
#include<windows.h>
#include<string.h>

int main()
    {
SetConsoleTitle("CALCULADORA 3.0"); //nombre del titulo
int valor1,valor2,valor3,valor4;
int s,r,rt,m,fl;
int entrada;
int mues;

saludo1();          //declaracion de las variables
saludo();               //llamo ala funcion para que muestre saludos y nombres de integrantes del grupo
condiciones ();             //llamo ala funcion para que muestre conduciones de calculadora
                             while(entrada!=9)         //declare condicion para cese del bucle
{

 menu();                           //llamo ala funcion para que muestre mi menu
                  //llamo a la funcion para que me muestre el segundo valor una ves ingresado
    char numero[33];
    int n;

    do{

     nume11(valor1);               //llamo a la funcion para que me muestre el primer valor una ves ingresado
     nume12(valor2);
    gotoxy(1,29); char ingreso[33]="     ingrese opcion de menu    :";
    for(int p=0;p<33;p++){
        printf("%c",ingreso[p]);
        Sleep(25);
         }
    scanf("%s",numero);
    system("cls");
    n=validar_num(numero);
    }while(n==0);
    entrada=atoi(numero);
    system("cls");



                                                   switch(entrada)
{

case 1:   //ingresa valor a funcion y devuelve valor alterado

      do{
    nume11(valor1);
    nume12(valor2);
    gotoxy(1,29); char ingreso[33]=" introduce primer valor    :";
    for(int x=0;x<33;x++){
    printf("%c",ingreso[x]);
    Sleep(25);
         }
    scanf("%s",numero);
    system("cls");
    n=validar_num(numero);
    }while(n==0);
    valor1=atoi(numero);
    system("cls");

    break;


case 2:     //ingresa valor a funcion y devuelve valor alterado

      do{
     nume11(valor1);
     nume12(valor2);
    gotoxy(1,29); char ingreso[33]="   introduce segundo valor    :";
    for(int x=0;x<33;x++){
        printf("%c",ingreso[x]);
        Sleep(25);
         }
    scanf("%s",numero);
    system("cls");
    n=validar_num(numero);
    }while(n==0);
    valor2=atoi(numero);
    system("cls");
    break;

case 3:
 system("color 3");
 s=suma(valor1, valor2);
Sleep(150); gotoxy(27,9);printf("------------------------------------------------------------------------\n");
Sleep(150); gotoxy(27,10);printf("|*|                                                                  |*|\n");
Sleep(150); gotoxy(27,11);printf("|*|La suma de los numeros %d y %d es :%d ",valor1,valor2,s);
Sleep(150); gotoxy(27,12);printf("|*|                                                                  |*|\n");
Sleep(150);gotoxy(27,13);printf("------------------------------------------------------------------------\n");
Sleep(150); gotoxy(96,11);printf("|*|");
Sleep(20); gotoxy(1,29);system("pause");
 system("cls");
    break;


  case 4:
    system("color 3");
    r=resta(valor1, valor2);
  Sleep(150);  gotoxy(27,9);printf("------------------------------------------------------------------------\n");
  Sleep(150);  gotoxy(27,10);printf("|*|                                                                  |*|\n");
  Sleep(150);  gotoxy(27,11);printf("|*|La resta de los numeros %d y %d es :%d ",valor1,valor2,r);
  Sleep(150);  gotoxy(27,12);printf("|*|                                                                  |*|\n");
  Sleep(150);  gotoxy(27,13);printf("------------------------------------------------------------------------\n");
  Sleep(150);  gotoxy(96,11);printf("|*|");
  Sleep(20);  gotoxy(1,29);system("pause");
    system("cls");
         break;


        case 5:
           system("color 3");if (valor2==0){
                  Beep(423,600);
           Sleep(50);       gotoxy(26,8);printf("-------------------------------------------------------");
           Sleep(150);      gotoxy(26,9);printf("|*|                                                 |*|");
           Sleep(150);      gotoxy(26,10);printf("------------------------------------------------------");
           gotoxy(30,9);   char de[33]="no es posible dividir con cero";
           for(int f=0;f<33;f++){
           printf("%c",de[f]);
           Sleep(25);
                }

            Sleep(1500);
           system("cls");
           break;
           }
           else{
           rt=resto(valor1,valor2);
           divicion(valor1,valor2);
        Sleep(150);   gotoxy(27,14); printf("|*| el resto de   la divicion es :%d",rt);
        Sleep(150);   gotoxy(96,14);printf("|*|");
        Sleep(150);   gotoxy(27,15);printf("------------------------------------------------------------------------\n");
           gotoxy(1,29);system("pause");
           system("cls");

                  }
                    break;


           case 6:
             system("color 3");
             m=mult(valor1, valor2);
          Sleep(150);   gotoxy(27,9);printf("------------------------------------------------------------------------\n");
          Sleep(150);   gotoxy(27,10);printf("|*|                                                                  |*|\n");
          Sleep(150);   gotoxy(27,11);printf("|*|La multiplicacionde los numero %d y %d es :%d ",valor1,valor2,m);
          Sleep(150);   gotoxy(27,12);printf("|*|                                                                  |*|\n");
          Sleep(150);   gotoxy(27,13);printf("------------------------------------------------------------------------\n");
          Sleep(150);   gotoxy(96,11);printf("|*|");
           gotoxy(1,29);system("pause");
             system("cls");
                        break;

                 case 7:
                   system("color 3");
                    do{

                     gotoxy(1,29); char ingreso[33]=" introduce factorial    :";
                    for(int x=0;x<33;x++){
                    printf("%c",ingreso[x]);
                    Sleep(25);
                       }
                   scanf("%s",numero);
                    system("cls");
                   n=validar_num(numero);
                  }while(n==0);
                   valor3=atoi(numero);
                    system("cls");;
                   fl=factorial(valor3);
              Sleep(150);     gotoxy(27,9);printf("------------------------------------------------------------------------\n");
              Sleep(150);     gotoxy(27,10);printf("|*|                                                                  |*|\n");
              Sleep(150);     gotoxy(27,11);printf("|*|el factorial del numero %d es :%d ",valor3,fl);
              Sleep(150);     gotoxy(27,12);printf("|*|                                                                  |*|\n");
              Sleep(150);     gotoxy(27,13);printf("------------------------------------------------------------------------\n");
              Sleep(150);     gotoxy(96,11);printf("|*|");
                   gotoxy(1,29);system("pause");
                   system("cls");
                              break;

                    case 8:
                        system("color 3");
                       do{

                      gotoxy(1,29); char ingreso[33]=" introduce factorial    :";
                       for(int x=0;x<33;x++){
                       printf("%c",ingreso[x]);
                        Sleep(25);
                       }
                        scanf("%s",numero);
                        system("cls");
                        n=validar_num(numero);
                       }while(n==0);
                        valor3=atoi(numero);
                        system("cls");;
                         nume11(valor1);
                         nume12(valor2);
                        s=suma(valor1,valor2);
                        r=resta(valor1,valor2);
                        rt=resto(valor1,valor2);
                        m=mult(valor1, valor2);
                        fl=factorial(valor3);
                      Sleep(100);  gotoxy(27,4);printf("------------------------------------------------------------------------\n");
                      Sleep(100);  gotoxy(27,5);printf("|*|La suma de los numeros %d y %d es :%d ",valor1,valor2,s);
                      Sleep(100);  gotoxy(27,6);printf("------------------------------------------------------------------------\n");
                      Sleep(100); gotoxy(96,5);printf("|*|");
                      Sleep(100);gotoxy(27,7);printf("------------------------------------------------------------------------\n");
                      Sleep(100);  gotoxy(27,8);printf("|*|La resta de los numeros %d y %d es :%d ",valor1,valor2,r);
                      Sleep(100);  gotoxy(27,9);printf("------------------------------------------------------------------------\n");
                      Sleep(100);  gotoxy(96,8);printf("|*|");
                      Sleep(100);  gotoxy(1,12); divicion(valor1,valor2);
                      Sleep(100); gotoxy(27,14); printf("|*| el resto de   la divicion es :%d",rt);
                      Sleep(100);  gotoxy(96,14);printf("|*|");
                      Sleep(100);  gotoxy(27,15);printf("------------------------------------------------------------------------");
                      Sleep(100);  gotoxy(27,16);printf("|*|La multiplicacion de los numero %d y %d es :%d ",valor1,valor2,m);
                      Sleep(100);  gotoxy(96,16);printf("|*|");
                      Sleep(100);  gotoxy(27,17);printf("------------------------------------------------------------------------");
                      Sleep(100);  gotoxy(27,18);printf("|*|el factorial del numero %d es :%d ",valor3,fl);
                      Sleep(100);  gotoxy(96,18);printf("|*|");
                      Sleep(100);   gotoxy(27,19);printf("------------------------------------------------------------------------");
                      Sleep(25);   gotoxy(1,29); system("pause");
                        system("cls");
                                                                break;
                           case 9:
 gotoxy(1,8);Sleep(150);printf(" #######   ####    ##   ##           #####    #######           ######   ######   ##   ##  #######  ######     ##");
 gotoxy(1,9);Sleep(150);printf("  ##   #    ##     ###  ##            ## ##    ##   #            ##  ##   ##  ##  ##   ##   ##   #   ##  ##   ####");
 gotoxy(1,10);Sleep(150);printf("  ## #      ##     #### ##            ##  ##   ## #              ##  ##   ##  ##  ##   ##   ## #     ##  ##  ##  ##");
 gotoxy(1,11);Sleep(150);printf("  ####      ##     ## ####            ##  ##   ####              #####    #####   ##   ##   ####     #####   ##  ##");
 gotoxy(1,12);Sleep(150);printf("  ## #      ##     ##  ###            ##  ##   ## #              ##       ## ##   ##   ##   ## #     ##  ##  ######");
 gotoxy(1,13);Sleep(150);printf("  ##        ##     ##   ##            ## ##    ##   #            ##       ##  ##  ##   ##   ##   #   ##  ##  ##  ##");
 gotoxy(1,14);Sleep(150);printf(" ####      ####    ##   ##           #####    #######           ####     #### ##   #####   #######  ######   ##  ##");
                                                                           break;


                                  default:
                                         Beep(423,600);
                              Sleep(50);gotoxy(26,8);printf("-------------------------------------------------------");
                              Sleep(50);gotoxy(26,9);printf("|*|                                                 |*|");
                              Sleep(50);gotoxy(26,10);printf("------------------------------------------------------");
                              gotoxy(30,9); char def[33]="opcion erronea intente de nuevo";
                              for(int d=0;d<33;d++){
                              printf("%c",def[d]);
                              Sleep(25);}

                              Sleep(1500);
                              system("cls");



            }
}
return 0;}


