#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define e 2.718281828
//ejemplo #define pi 3.1316432342//esta es una macro nombre de la funcion o letra y el numero al que equivale
void poisson_probabilidad();
void distribucion_exponencial();
void pitagoras();
void factorial();
void tiempo(int v,int d,int resultado);
int bernuallivar(int n,int k)

{
      if(k==0 || k==n)
        {
            return 1;

        }else
            {
             return bernuallivar(n-1,k-1)+ bernuallivar(n-1,k);

            }
}

int distacia(int v,int t)
 {
     printf("la varible velocidad es: ");
     scanf("%i",&v);
     printf("\nla varible tiempo es: ");
     scanf("%i",&t);
     int resultado;
     resultado=v*t;
   return resultado;

 }
 int capacidad_de_los_numeros()
 {
      double b;
     b=00000000000.1231231;
     return b;
    exit(1);
 }
double districion_hipergeometrica(double c1,double c2)
    {
        //c1 es igual k y c2 es n
        if(c1==0 || c1==c2)
        {
            return 1;

        }else
            {
             return districion_hipergeometrica(c2-1,c1-1) + districion_hipergeometrica(c2-1,c1);            }
    }
void poisson_probabilidad()
    {
        int x,i,j,factorial;
        double promedio,Nelevado,resultado,divicion_resultado,resul_total,exponencial;
        factorial=1;
        printf("\nponer la x:\n");
        scanf("%i",&x);
        for(j=0;j<=x;j++)
        {
            factorial*=j;

            printf("\n el factorial es: %i",factorial);
            printf("\nel numero promedio es: ");
            scanf("%lf",&promedio);
            Nelevado=pow(promedio,j)/factorial;
            printf("resultado por cada numero es: %if",Nelevado);
        }
            printf("resultado por cada numero es: %if",Nelevado);

                 //exponencial=pow(promedio,e);
                //printf("\nel resultado elevar alcuadrado es: %lf",exponencial);
                //divicion_resultado=resultado/i;
                //printf("\nel resultado es: %0.7lf",divicion_resultado);

        }

int main()
{
    void pitagoras();
    void factorial(int factorial);
    int bernuallivar(int n, int k);
    void tiempo(int v,int d,int resultadodistacia);
    int distacia(int v,int t);
    int capacidad_de_los_numeros();
    void distribucion_exponencial();
    double districion_hipergeometrica(double c1,double c2);
int menu=0;
double c1,c2,Ndh,ndh,probaresultado;
 int n,k;
 double subresultado,variablep,probabilidad,variableresto,presto,resultadototal;
 double suma;
int v,t;
  int i=1;
  int l;
  do{
    printf("\nmenu");
    printf("\n(1) pitagoras");
    printf("\n(2) tiempo ");
    printf("\n(3) distancia ");
    printf("\n(4) velocidad final");
    printf("\n(5) factorial");
    printf("\n(6) berdulli la variable");
    printf("\n(7) probar numeros valores");
    printf("\n(8) distribucion hipergeometrica");
    printf("\n(9) poisson");
    printf("\n(10) districbucion exponencial");
    printf("\n(11) salir");
    scanf("%d",&menu);
    printf("ha eligido la opcion %i\n",menu);
    system("pause");


    switch(menu)
    {
    case 1:
        system("cls");
        pitagoras();
        break;
    case 2:
        tiempo(0,0,0);
        break;
    case 3:

        printf("\nla distacia es: %i metros\n",distacia(v,t));

        break;
     case 4:
            printf("numero de repeticiones\n");
            scanf("%i",&l);
        while(i<=l)
            {
              suma=pow(2,i);
               // printf("el resultado es: %lf\n",suma);
            i++;
            }
              printf("el resultado sumado es: %lf\n",suma);
        break;
    case 5:
            factorial(0);
        break;
    case 6:

      printf("\n combinatoria\n");
      printf("nota: el numero mas grande es N\n");
      printf("ingresa a la variable N: \n");
      scanf("%i",&n);
      printf("ingresa a la variable K: \n");
      scanf("%i",&k);
      printf("combinacion es: %i\n",bernuallivar(n,k));
      printf("\nla variable de probabilidad es:  ");
      scanf("%lf",&variablep);
      probabilidad=pow(variablep,k);
      printf("\nla ecuacion de probabilidad es: %lf ",probabilidad);
     // printf("\nla variable de probabilidad -1 es: ");
      variableresto= 1 - variablep;
      printf("\nla varible de resto %lf",variableresto);
      //scanf("%Lf",&variableresto);
      presto=pow(variableresto,n-k);
      printf("\nla ecuacion de probabilidad -1 es: %lf",presto);
      resultadototal=bernuallivar(n,k) * probabilidad * presto;
      printf("\nel resultado total= %0.20lf",resultadototal);
      printf("\nquieres la suma de todos los numeros pon 1");
      scanf("%lf",&suma);
      //la suma para que de las probabilidades
      if(suma==1)
      {
          resultadototal=0;
        resultadototal+=resultadototal;
        printf("\nresultado de la probabilidad es: %0.10lf",resultadototal);
      }
        break;
    case 7:
        printf("el numero de variables es: %i",capacidad_de_los_numeros());
        exit(1);
        system("pause");
        break;
    case 8:
               //c1 es igual k y c2 es n
      printf("ingresa a la variable combinacion k: \n");
      scanf("%lf",&c2);
      printf("ingresa a la variable combinacion x: \n");
      scanf("%lf",&c1);
     printf("\nla variable de probabilidad es: %lf",districion_hipergeometrica(c1,c2));
     /* printf("ingresa a la variable distribucion N: \n");
      scanf("%lf",&Ndh);
      printf("ingresa a la variable distribucion n: \n");
      scanf("%lf",&ndh);
    printf("\nla variable de probabilidad es: %lf ",districion_hipergeometrica(Ndh,ndh));
    //probaresultado=districion_hipergeometrica(k,x)*districion_hipergeometrica(N-k,n-x)/districion_hipergeometrica(N,n);
      probaresultado=districion_hipergeometrica(c2,c1) * districion_hipergeometrica(Ndh-c2,ndh-c1)/districion_hipergeometrica(Ndh,ndh);
      printf("\nla variable de probabilidad es: %0.20lf ",probaresultado);*/
       break;
       case 9:
       poisson_probabilidad();
       break;
    case 10:
        distribucion_exponencial();
       break;
    case 11: printf("\nsalir\n");
    default:
        printf("error de caracter");
        break;
    }
        }while(menu!=11);

    return 0;
}

 void pitagoras()
    {
        int menu_tales,i,k,q;
        double a,b,c,sumaexponentes,restaexponentes2,restaexponentes3;

    do{

        menu_tales=0;
        printf("a entrado a la calculadora de pitagoras \n");
        printf("\nbienvenido\n");
        printf("\nponga un valor a los datos\n");
        printf("         menu           ");
        printf("\n(1) si buscas al hipotenusa:  ");
        printf("\n(2) si buscas al cateto 'a':  ");
        printf("\n(3) si buscas al cateto 'b':  ");
        printf("\n(4) saliendo");
        printf("\nelige una opcion: ");
        scanf("%i",&menu_tales);
        switch(menu_tales)
        {
        case 1:

            printf("quiere salir presione 0\n");
            scanf("%i",&q);
            while(q!=0){
            printf("quiere salir presione 0\n");
            scanf("%i",&q);
            printf("dato de cateto a es: ");
            scanf("%lf",&a);
            printf("dato de cateto b es: ");
            scanf("%lf",&b);
           sumaexponentes=pow(a,2) + pow(b,2);
             printf("exponentes %lf",sumaexponentes);
             c=sqrt(sumaexponentes);
            printf("el resultado de hipotenusa es %lf \n",c);
            system("pause");
            printf("quiere salir presione 0\n");
            scanf("%i",&q);
            if(a<=0)
            {
                printf("\n error no hay raices negativas");

            }
            system("pause");
                }
            break;
        case 2:

            printf("quiere salir presione 0 para continuar 1\n");
            scanf("%i",&i);
            while(i!=0){
            printf("dato de hipotenusa es: ");
            scanf("%lf",&c);
            printf("dato de cateto b es: ");
            scanf("%lf",&b);
            restaexponentes2=(pow(c,2) - pow(b,2));
            a=sqrt(restaexponentes2);
            printf("\nel resultado de cateto a es: %lf ",a);
            system("pause");
            printf("quiere salir presione 0\n");
            scanf("%i",&q);
            if(a<=0)
            {
                printf("\n error no hay raices negativas");

            }
            system("pause");
            system("cls");
            }
            break;
        case 3:
            printf("quiere salir presione 0 para continuar 1\n");
            scanf("%i",&k);
            while(k!=0){
            printf("dato de hipotenusa es: ");
            scanf("%lf",&c);
            printf("dato de cateto b es: ");
            scanf("%lf",&a);
            restaexponentes3=(pow(c,2) - pow(a,2));
            b=sqrt(restaexponentes3);
            printf("\nel resultado de cateto b es: %lf ",b);
            system("PAUSE");
            printf("quiere salir presione 0\n");
            scanf("%i",&q);
            if(a<=0)
            {
                printf("\n error no hay raices negativas");

            }
            system("pause");
            }
            break;
        case 4:
            printf("saliendo ");
            break;
        default:
            printf("caracter malo\n");
            break;
        }
            }while(menu_tales!=4);
            }

void factorial(int factorial)
    {
        int i,n;
        factorial=1;
        printf("\nsaca un numero\n");
        scanf("%i",&n);
        for(i=1;i<=n;i++)
        {
               factorial*=i;
        }
        printf("\n el factorial es: %i",factorial);

    }
void tiempo(int v,int d,int resultado)
    {


        int s;
        while(s!=0){
    printf("\npara salir ponga 0 y para continuar terminar\n");
    scanf("%i",&s);
     printf("\nponga un dato de distancia");
     scanf("%i, ",&d);
     printf("ponga un dato de velocidad");
     scanf("%i,",&v);
     resultado=v/d;
     printf("\nresultado de tiempo es: %i minutos",resultado);
        }
    }
    void distribucion_exponencial()
    {
     double resultado,media,tiemp;
     tiemp=1;
     printf("pon la media o beta");
     scanf("%lf",&media);
     resultado=1-pow(e,-(tiemp/media));
     printf("resultado es %.10lf",resultado);

    }
