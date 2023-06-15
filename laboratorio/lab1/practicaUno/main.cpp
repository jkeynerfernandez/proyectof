#include<iostream>
using namespace std;

int main(){



   int opcion;
   cout<<"MENU"<<endl;
   cout<<"Elija una opcion para el ejericio correspondiente: "<<endl;

   //menú_____________________________________________
   short int problemas=1;
   for(short int p=1;p<=17;p++){
       cout<<"oprima "<<problemas<< " para problema " << problemas<< endl;
       problemas++;

   }

   //_________________________________________________________________
   cin>>opcion;
   switch(opcion){
    case 1:
        char C;
        cout<<"Ingrese una letra: ";
        cin>>C;
        if(C=='a' || C=='e'|| C=='i'|| C=='o'|| C=='u'){
            cout<<C<<" es una vocal"<<endl;
        }else if (C=='A'||C=='E'||C=='I'||C=='O'||C=='O'){
            cout<<C<<" es una vocal"<<endl;

        }else if ((C >= 65&&C <= 90) || (C >= 97&&C <= 122)){
            cout<<C<<" es una consonante"<<endl;

        }else{
            cout<<C<<" no es una letra"<<endl;
        }
       break;
    case 2:
       int c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;
       int N;
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

   case 3:
       int m,d;
       cout<<"Ingrese mes: "<<endl;
       cin>>m;
       cout<<"Ingrese dia: "<<endl;
       cin>>d;
       if(m>12){
           cout<<m<<" es un mes invalido"<<endl;
       }
       else{
           if(m == 11 || m == 4 || m == 6 || m == 7){
               if(d>30){
                   cout<<d<<"/"<<m<<" es una fecha invalida"<<endl;
               }
               else{
                   cout<<d<<"/"<<m<<" es una fecha valida"<<endl;
               }
           }
               else{
                  if(m == 2){
                     if(d==29){
                         cout<<d<<"/"<<m<<" es valido en bisiesto"<<endl;
                       }
                       else{
                           if(d>29){
                              cout<<d<<"/"<<m<<" es una fecha invalida"<<endl;
                           }
                         else{
                            cout<<d<<"/"<<m<<" es una fecha valida"<<endl;
                           }
                   }

               }
                  else{
                     if(d>31){
                       cout<<d<<"/"<<m<<" es una fecha invalida"<<endl;
                      }
                   else{
                       cout<<d<<"/"<<m<<" es una fecha valida"<<endl;
                   }
                 }

               }
           }
       break;
   case 4:


       break;

   case 5:


       int nu ;
       cout << "Ingrese un numero : " ;
       cin >> nu ;
           for (int j = 1,k=1; j >= 0 ; j+=k) {
               for (int i = 0; i < nu-j; ++i)
                   cout << " ";
               for (int i = 0; i < 2*j+1; ++i)
                    cout << "*" ;
               cout << endl ;
               if(nu==j-1) k=-1;
           }

       break;

   case 6:
       int ene;
           cout<<"Ingresa el numero de elementos: ";
           cin>>ene;
           float ee;
           ee = 0;

           for (int i = 0; i <= ene-1; i+=1){
               float p = 1;
               for (int var = 1; var <= i-1; var+=1){
                   p += var*p;
               }
               ee += 1/p;
           }
           cout<<"e es aproximadamente: "<<ee<<endl;
       break;

   case 7:
       int n;
       cout<<"Escribe un numero: "<<endl;
       cin>>n;
       int count, su;
       count = 1;
       su = 0;
       int v;
       v = 0;
       for(int i=1;i<=n;i++){
           count += su;
           su = count- su;
           if(su%2==0 && su<n){
                  v += su;
           }
       }
       cout<<"El resultado de la suma es: "<<v<<endl;
       break;

   case 8:
       int y,b,c,sumaa;
       sumaa = 0;
       cout<<"Ingresa a: ";
       cin>>y;
       cout<<"Ingresa b: ";
       cin>>b;
       cout<<"Ingresa c: ";
       cin>>c;

       for (int i=1;i<=c;i++){
           if (y*i < c){
               cout << y*i<<" + ";
               sumaa+=y*i;
           }
           else {
               break;
           }
       }
       cout<<"....";
       for (int i=1;i<=c;i++){
           if (b*i<c and b*i != b*y){
               cout << " + "<<b*i;
               sumaa+=b*i;
           }
           else if (b*i > c){
               break;
           }
       }

       cout<<" = "<<sumaa<<endl;
       break;

   case 9:

     break;

   case 10:
       bool calcular_primo(int numero);
       int numero,def;
           cout<<"ingrese un numero: "<<endl;
           cin>>numero;
           int cont;
           cont = 0;
           int pos;
           pos = 0;
           int indice;
           indice = 2;
           while (cont<numero){
               def = calcular_primo(indice);
               if (def==1){
                  cont = cont+1;
                  pos = indice;
                  indice = indice+1;
              }else{
                indice = indice+1;
               }

           }
              cout<<"El primo en la posicion "<<numero<<" es "<<pos<<endl;
       break;

   case 11:
           int nume;
           cout<<"Ingresa un numero: ";
           cin>>nume;

           int mc;
           mc = 2;
           bool conf;

           while(true){
               for (int i=2; i<=nume; i++)
                   if (mc%i==0){
                       conf = true;
                   }
                   else {
                       conf = false;
                       break;
                   }
               if (conf == true){
                   cout<<"El minimo comun multiplo es: "<<mc<<endl;
                   break;
               }
               else {
                   mc+=1;
               }
           }
       break;

   case 12:
       /* Un factor que es un número primo. Uno de los números primos que, cuando se lo multiplica, resulta en el número original.

Ejemplo: Los factores primos de 15 son 3 y 5 (3x5=15, y 3 y 5 son números primos).
*/
       int k;
       int j;
       cout<<"Ingrese numero a evaluar: "<<endl;
       cin>>k;
       j = k;
       k --;
       int h;
       h = 1;
       while (h == 1){
       if (calcular_primo(k)==1 && j%k == 0){
           cout<<"El mayor factor primo de "<<j<<" es "<<k<<endl;
           h = 0;
        }else{
           k -= 1;
       }
       }

       break;

   case 13:
       int suma;
       suma = 0;
       int num;
       cout<<"Ingrese un valor: "<<endl;
       cin>>num;
       for (int x=0; x<=num;x++){
           if (calcular_primo(x)==1){
               suma = suma + x;
           }
       }
       cout<<"La suma de los primos menores "<<num<<" es "<<suma<<endl;
       break;

   case 14:
       break;

   case 15:



       break;

   case 16:
       int en,ex;// en continen el numero de la serie
       int coun;
       coun = 1;
       cout<<"ingrese un numero: "<<endl;
       cin>>en;
       ex = en;
           while(en!=1){
               if(en%2==0){
                   en = en/2;
                   coun++;
               } else{
                   en = 3*en+1;
                   coun++;
               }

               cout<<en<<endl;

           }

       cout<<"La serie mas larga es con la semilla "<<ex<<", teniendo "<<coun<<" terminos."<<endl;
       break;

   case 17:
       break;

   default: cout<<opcion<<" No es una opcion correcta."<<endl;
}
}


bool calcular_primo(int numero){
int divisiones=1, res=0;
do{
    if(numero%divisiones == 0){
        res ++;
    }
    divisiones ++;

}while(divisiones <= numero);

if (res == 2){
    return 1;
}else{
    return 0;
}
}
