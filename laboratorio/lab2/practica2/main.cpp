#include <iostream>
# include <time.h>

using namespace std;

int main()
{
    int opcion;
    cout<<"MENU"<<endl;
    cout<<"Elija una opcion para el ejericio correspondiente: "<<endl;
    cout<<"1 para ejericio 1"<<endl<<"2 para ejericio 2"<<endl<<"3 para ejericio 3"<<endl<<"4 para ejericio 4"<<endl<<"5 para ejericio 5"<<endl<<"6 para ejericio 6"<<endl<<"7 para ejericio 7"<<endl<<"8 para ejericio 8"<<endl<<"9 para ejericio 9"<<endl<<"10 para ejericio 10"<<endl<<"11 para ejericio 11"<<endl<<"12 para ejericio 12"<<endl<<"13 para ejericio 13"<<endl<<"14 para ejericio 14"<<endl<<"15 para ejericio 15"<<endl<<"16 para ejericio 16"<<endl<<"17 para ejericio 17"<<endl<<"18 para ejericio 18"<<endl;
    cin>>opcion;
    switch (opcion){
    case 1:
        int N,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;
               cout<<"Ingrese cantidad: "<<endl;
               cin>>N;
               if(N>=50000){
                   c1 = N / 50000;
                   cout<<endl<<"50000: "<<c1<<endl;
                   N = N%50000;
               }
               else{
                   cout<<"50000: 0"<<endl;
               }
               if(N>=20000){
                   c2 = N / 20000;
                   cout<<"20000: "<<c2<<endl;
                   N = N%20000;
               }
               else{
                   cout<<"20000: 0"<<endl;
               }
               if(N>=10000){
                   c3 = N / 10000;
                   cout<<"10000: "<<c3<<endl;
                   N = N%10000;
               }
               else{
                   cout<<"10000: 0"<<endl;
               }
               if(N>=5000){
                   c4 = N / 5000;
                   cout<<"5000: "<<c4<<endl;
                   N = N%5000;
               }
               else{
                   cout<<"5000: 0"<<endl;
               }

               if(N>=2000){
                   c5 = N / 2000;
                   cout<<"2000: "<<c5<<endl;
                   N = N%2000;
               }
               else{
                   cout<<"2000: 0"<<endl;
               }
               if(N>=1000){
                   c6 = N / 1000;
                   cout<<"1000: "<<c6<<endl;
                   N = N%1000;
               }
               else{
                   cout<<"1000: 0"<<endl;
               }
               if(N>=500){
                   c7 = N / 500;
                   cout<<"500: "<<c7<<endl;
                   N = N%500;
               }
               else{
                   cout<<"500: 0"<<endl;
               }

               if(N>=200){
                   c8 = N / 200;
                   cout<<"200: "<<c8<<endl;
                   N = N%200;
                   }
               else{
                   cout<<"200: 0"<<endl;
               }
               if(N>=100){
                   c9 = N / 100;
                   cout<<"100: "<<c9<<endl;
                   N = N%100;
               }
               else{
                   cout<<"100: 0"<<endl;
               }
               if(N>=50){
                   c10 = N / 50;
                   cout<<"50: "<<c10<<endl;
                   N = N%50;
               }
               else{
                   cout<<"50: 0"<<endl;
               }
               cout<<"Faltante: "<<N<<endl;
        break;

    case 2:{

        char a[200];
        int valor,cont;
        srand(time(NULL));
        for(int i=0;i<200;i++){//iterador de posisión en la lista
            valor = 65 + rand() % 26;
            a[i] = valor;
        }
        for(int k = 0;k<200;k++){
        cout<<a[k]<<" ";}cout<<endl;

       for(int i=65;i<=90;i++){// contador de letras repetidas
           cont = 0;
         for(int j=0;j<200;j++){
             if(char(i)==a[j]){
                 cont++;
                   }
            }cout<<char(i)<<" = "<<cont<<endl;
       }
    }break;

    case 3:{
    bool f_ToCompare(char cad1[],char cad2[]);
    char cad1[20],cad2[20];
    cout<<"ingrese una cadena: ";
    cin>>cad1;
    cout<<"ingrese otra cadena: ";
    cin>>cad2;
    bool f = f_ToCompare(cad1,cad2);
    if (f==1){
        cout<<"Las cadenas son iguales."<<endl;
    }else{
        cout<<"Las cadenas no son iguales."<<endl;
    }
        }break;

    case 4:{
        int Convertir_Ent(char array[]);
        char cad[20];
        cout<<"Ingrese una cadena de caracteres: ";cin>>(cad);
        cout<<"Numero entero: "<<Convertir_Ent(cad)<<endl;
    }break;

    case 5:{
    char *Convertir_Cad(int num,char array[]),array[20];
    int num;
    cout<<"Ingrese un numero entero cualquiera: ";cin>>num;
    char *ptr=Convertir_Cad(num,array);
    cout<<ptr<<endl;

    }
        break;

    case 6:{
    char r[20];
    int l;
    cout<<"Ingrese una cadena: ";
    cin>>r;
    cout<<"Original: "<<r<<endl;
    for(int i=0;i<20;i++){
        l=r[i];
        if(l==0){
            l=i;
            break;
        }

    }
    for (int i = 0; i<=l; i++){
        if(r[i]>=97 && r[i]<=122){
            r[i] -= 32;
        }
    }
    cout<<"En mayuscula: "<<r<<endl;}
        break;

    case 7:{
    int l,con=0;
    bool c = false;
    char x[20];
    char y[20];
    cout<<"Ingrese una palabra: ";
    cin>>x;
    for(int i=0;i<20;i++){
        l=x[i];
        if(l==0){
            l=i;
            break;
        }
    }
    char aux[l];
    for (int i=0; i<=l; i++){
      for(int j=i+1 ; j<l; j++){
          if (x[i] == x[j]){
              c = true;}
    } if(c==false){
      aux[con]=x[i];
      con++;}c=false;
    }

    cout<<"original: "<<x<<endl;
    for(int t=0;t<=l;t++){
        y[t]=aux[t];}cout<<"sin repetidos: "<<y<<endl;}break;

    case 8:{
        int c1=0,c2=0,tam;
        char a2[10],a1[10];
        char ap[20];
        cout<<"Ingrese una cadena de caracteres: ";cin>>ap;
        for(int i=0;i<20;i++){
            tam=ap[i];
            if(tam==0){
                tam=i;
                break;
            }
        }
        for(int i=0;i<=tam;i++){
            if(ap[i]>=48 && ap[i]<=57){//miramos si es numero
                a1[c1]=ap[i];
                c1++;
            }else{
                a2[c2]=ap[i];
                c2++;
            }

        }
        cout<<"Original: "<<ap<<"."<<endl;
        cout<<"Texto: ";
        for(int t=0;t<=c2;t++){
            cout<<a2[t];}
        //cout<<".";
        cout<<" Numero: ";
        for(int t=0;t<=c1;t++){
            cout<<a1[t];}
        //cout<<".";

    }break;

    case 9:{
        int n,s,aux,cont=10,c=0,sum=0,sumt=0;
        char arr[20];
        cout<<"Ingresa un numero: ";cin>>n;
        cout<<"Ingresa una cadena de caracteres numerica: ";cin>>arr;
        for(int i=0;i<20;i++){
            s=arr[i];
            if(s==0){
                s=i;
                break;
            }
        }
        for(int i=s-1;i!=0-1;i--){
              aux=arr[i]-48;
              c++;
              aux*=(cont/10);
              sum+=aux;
              cont*=10;
              if(c==n){
                 sumt+=sum;
                 c=0;
                 cont=10;
                 sum=0;
                  }
}sumt+=sum;
cout<<"Original: "<<arr<<"."<<" Suma: "<<sumt<<endl;
   }break;


    case 10:{
        int valor,r=0;
        char cad[20];
        cout<<"Ingrese un numero en romano: ";cin>>cad;
        for(int i=0;i<20;i++){
            switch(cad[i]){
                case 'M':valor=1000;break;
                case 'D':valor=500;break;
                case 'C':valor=100;break;
                case 'L':valor=50;break;
                case 'X':valor=10;break;
                case 'V':valor=5;break;
                case 'I':valor=1;break;
            default: break;

             }
//Si un carácter está seguido por uno de igual o menor valor, su valor se suma al total.
              if(cad[i]>=cad[i+1]){
                  r+=valor;
              }else{
                 r-=valor;
              }
//CLXXIV/171-5=166Si un carácter está seguido por uno de mayor valor, su valor se resta del total

        }cout<<r<<endl;
    }break;

     case 11:{
        char A[15][20];
        bool df=0;
        char fila;
        int puesto;
        char array[15]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O'};
        int fila_num = 0,ocup;

        //inicializo en disponibles
        for(int i=0;i<=15;i++){
            for(int j =0;j<=20;j++){

                A[i][j]='-';
           }
        }
        //_____________


        cout<<endl;
        cout<<"+ indica asiento reservado"<<endl;
        cout<<"- indica asiento disponible"<<endl;


        do {

//___imprimo la matriz
        for(int k =0;k<=60;k++){
        cout<<"-";}

        for(int i=0;i<15;i++){
            cout<<endl;
            for(int j=0;j<20;j++){
              cout<<"|"<<A[i][j]<<" ";}
            cout<<"|";}
            cout<<endl;
            for(int k =0;k<=60;k++){
            cout<<"-";}
            cout<<endl;

//Ingresamos la fila y puesto que queremos preguntar
       bool roc;
       cout<<"Para reservar 1"<<endl;cout<<"Para cancelar 0"<<endl;cin>>roc;
       if(roc==1){
       cout<<"Ingrese la fila de asiento (letras A-O): "<<endl;cin>>fila;
       cout<<"ingrese el puesto en la fila(numeros 1-20): "<<endl;cin>>puesto;

       for(int k=0;k<15;k++){
            if(array[k]==fila){
                fila_num=k;
            }
        }ocup=A[fila_num][puesto-1];//marcar como ocupado

//Ahora para canceelar reserva:
             int d;
             cout<<"Esta disponible, desea confirmar reserva?(si:1/no:0): ";cin>>d;
             if(d==1){
           A[fila_num][puesto-1]='+';
           cout<<"El puesto se reservo con exito"<<endl;
           for(int k =0;k<=60;k++){
           cout<<"-";}

           for(int i=0;i<15;i++){
               cout<<endl;
               for(int j=0;j<20;j++){
                 cout<<"|"<<A[i][j]<<" ";}
               cout<<"|";}
               cout<<endl;
               for(int k =0;k<=60;k++){
               cout<<"-";}
               cout<<endl;

       }else{cout<<"El puesto no fue reservado."<<endl;}
           cout<<"Desea hacer otra reserva o cancelacion?(si:1/no:0): "<<endl;
            cout<<"Ingrese 0 para salir ";cin>>df;}
       else{
           cout<<"Ingrese la fila de asiento (letras A-O): "<<endl;cin>>fila;
           cout<<"ingrese el puesto en la fila(numeros 1-20): "<<endl;cin>>puesto;
           for(int k=0;k<15;k++){
                if(array[k]==fila){
                    fila_num=k;
                }
            }ocup=A[fila_num][puesto-1];

           int d;
           cout<<"Desea confirmar cancelacion?(si:1/no:0): ";cin>>d;
           if(d==1){
         A[fila_num][puesto-1]='-';
         cout<<endl<<"El puesto se libro con exito."<<endl;
         for(int k =0;k<=60;k++){
         cout<<"-";}

         for(int i=0;i<15;i++){
             cout<<endl;
             for(int j=0;j<20;j++){
               cout<<"|"<<A[i][j]<<" ";}
             cout<<"|";}
             cout<<endl;
             for(int k =0;k<=60;k++){
             cout<<"-";}
             cout<<endl;
       }cout<<"Desea hacer otra reserva o cancelacion?(si:1/no:0): "<<endl;
        cout<<"Ingrese 0 para salir ";cin>>df;
        }
       }while(df==1);

    }break;

     case 12:{
       int valor;
       int M[3][3];
       for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
            cout<<"ingrese el numero de la posicion: "<<i+1<<j+1<<": ";
            cin>>valor;
            M[i][j]=valor;
          }
       }

       for(int i=0;i<3;i++){
           cout<<endl;
           for(int j=0;j<3;j++){
               cout<<M[i][j]<<"|";
           }
       }

       cout<<endl;
       int suma1=M[0][0]+M[0][1]+M[0][2];
       int suma2=M[1][0]+M[1][1]+M[1][2];
       int suma3=M[2][0]+M[2][1]+M[2][2];
       int suma4=M[0][0]+M[1][0]+M[2][0];
       int suma5=M[0][1]+M[1][1]+M[2][1];
       int suma6=M[0][2]+M[1][2]+M[2][2];
       int suma7=M[0][0]+M[1][1]+M[2][2];
       int suma8=M[2][0]+M[1][1]+M[0][2];

       if (suma1==suma2 && suma2==suma3 && suma3==suma4 && suma4==suma5 && suma5==suma6 && suma6==suma7 && suma7==suma8){
           cout<<"La matriz es un cuadrado magico"<<endl;
       }else{
           cout<<"La matriz No es un cuadrado magico"<<endl;}


    }break;

     case 13:
        break;

     case 14:{
        int m[5][5],c=0;
        //genera la matriz:
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                c++;
                m[i][j]=c;
            }
        }cout<<endl;

        cout<<"matriz original:";
        for(int i=0;i<5;i++){
            cout<<endl;
            for(int j=0;j<5;j++){
                cout<<m[i][j]<<" ";
            }
        }cout<<endl;

        cout<<endl<<"Matriz rotada 90 grados:";
        for(int i=0;i<5;i++){
            cout<<endl;
            for(int j=4;j>=0;j--){
                cout<<m[j][i]<<" ";}}

        cout<<endl<<endl<<"Matriz rotada 180 grados:";
        for(int i=4;i>=0;i--){
            cout<<endl;
            for(int j=4;j>=0;j--){
                cout<<m[i][j]<<" ";}}

        cout<<endl<<endl<<"Matriz rotada 270 grados:";
        for(int i=4;i>=0;i--){
            cout<<endl;
            for(int j=0;j<5;j++){
                cout<<m[j][i]<<" ";}}cout<<endl;

    }break;

     case 15:
        break;

     case 16:{
        float fun_factorial(int n);
        float total;
        int n;
        cout<<"Igrese el numero para la cuadricula: ";cin>>n;
        for(int x=0;x<n;x++){
            total = fun_factorial(2*n)/(fun_factorial(n)*fun_factorial(n));
        }
        cout<<"Para una malla de "<<n<<" x "<<n<<" puntos hay "<<total<<" caminos"<<endl;
    }break;

     case 17:break;

     case 18:
        break;

      default: cout<<opcion<<" No es una opcion correcta."<<endl;}
return 0;

}

//Esta funcion compara dos cadenas de caracteres, retorna 1 si son iguales y 0 si no lo son.
bool f_ToCompare(char cad1[],char cad2[]){
    int s1,s2;
    //tomando valor inicial de cada cadena
    for(int i=0;i<20;i++){
        s1=cad1[i];
        if(s1==0){
            s1=i;
            break;
        }
    }
    for(int i=0;i<20;i++){
        s2=cad1[i];
        if(s2==0){
            s2=i;
            break;
        }
    }
    //___________________________________
    bool d;
    if (s1 == s2){
        for(int i=0;i<=s1;i++){
           if(cad1[i]==cad2[i]){
              d = true;
           }else{
               return false;
           }

        }return d;
    }else{
        return false;
    }
    }
//_______________________________________
float fun_factorial(int n){
    float total=1;
for (int i = 1; i <= n; i++)
    {  total= total*i;
}return total;
}
//_________________________________________
int Convertir_Ent(char array[]){
int l,aux,cont=10,sum=0;
for(int i=0;i<20;i++){
    l=array[i];
    if(l==0){
        l=i;
        break;
    }
}

for(int i=l-1;i>=0;i--){
    aux=array[i]-48;
    aux*=(cont/10);
    sum+=aux;
    cont*=10;
}return sum;}
//_______________________________

char *Convertir_Cad(int num,char array[]){
int l,h = 1,aux,t=1,cont=1;
for(int i=0;h!=0;i++){
    h = num/t;
    t*=10;
    l=i;
}
for(int j=0;j<l;j++){
    cont*=10;
}
for(int i=0;i<l;i++){
    aux=num%cont;
    aux/=(cont/10);
    cont/=10;
    array[i]=aux+48;

   }return array;}
//___________________





//_____________________________________________________________________
//#include <fstream>
//unsigned long long tam;
//char *info;

//fstream text;//crear tipo de variable  (class)
//// crear el archivo
//text.open("ruta/nombre.txt",ios_base::out); //out lo crea en blanco
////agregar datos
//text.write("cadena de caracteres", n) //el tamaño del arreglo que quiero imprimir o text<<" cadena"

//tam= text.tellg();// tamaño del texto
//info =new char[tam];
//text.seekg(0);//devuelve el cursor
//text.read(info,tam);

//leer
//text.open("ruta/nombre.txt",ios_base::in | ios_base::ate);
//cerrar el archivo IMPORTANTE
//text.close();
