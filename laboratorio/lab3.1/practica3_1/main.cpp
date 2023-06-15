#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;
int escribir();

string leer();//
string cambiar(string);//
string binario(int);//
string separador(string,int);//
string separador2(string,int);//
void reescribir(string);
void reescribir2(string);//
string codificacion(int,int);//
string decodificacion(int,int);//
string cambiardec1(string,int);//
string debinaletra(string);
string cambiardec2(string,int);//
//NOTA: LAS FUNCIONES DE LECTURA Y ESCRITURA SON LEER();ESCRIBIR(); REESCRIBIR(); REESCRIBIR2();
// PDT Se que me quedo un poquito desordenado :C
int main () {


int n,caso,opc;
escribir();

cout<<"Ingrese el numero de la semilla"<<endl;
cin>>n;

bool activo =true;
while(activo){
string archivo;
cout<<"Que desea hacer?"<<endl;
cout<<"(1) Codificar el archivo "<<endl;
cout<<"(2) Decodificar el archivo"<<endl;
cout<<"(4) Salir del programa "<<endl;
cin>>caso;
switch (caso) {
case 1:{
    cout<<"(1) Codificar por metodo 1"<<endl;
    cout<<"(2) Codificar por metodo 2"<<endl;
    cin>>opc;
    //FUNCION CODIFICACION
    cout<<"---CODIFICANDO---------------------------"<<endl;
    archivo=codificacion(n,opc); //TRUE O FALSE
    cout<<"Archivo codificado: "<<endl;
    cout<<archivo<<endl;
    break;
}
case 2:{
    cout<<"---DECODIFICANDO--------------------------"<<endl;
    //FUNCION DECODIFICACION
    archivo=decodificacion(n,opc);
    cout<<"Archivo decodificado: "<<archivo<<endl;


break;
}

}
}
return 0;
}
//-------------------------------FUNCIONES-------------------------------------------------------


//FUNCIONES PRINCIPALES- CODIFICACION
string codificacion(int n,int opc){

    string archivo=leer();
    string newarch;
    archivo=cambiar(archivo); //CONVIERTE CADENA EN BINARIO

    if(opc==1){
        cout<<" Codificando con Metodo 1"<<endl;
        newarch=separador(archivo,n);
    }
    else if(opc==2){
        cout<<"Codificando con Metodo 2"<<endl;
        newarch=separador2(archivo,n);
    }
    else{
        cout<<"Ingrese una opcion valida"<<endl;

    }
    reescribir(newarch);
    return newarch;
}
//---------------------------------------------------------------------------


//FUNCIONES PRINCIPALES- DECODIFICACION
string decodificacion(int n,int opc){
    string archivo =leer();
    if (opc==1){
        cout<<"Decodificando con metodo 1"<<endl;
    archivo=cambiardec1(archivo,n);
    }
    else if(opc==2){
        cout<<"Decodificando con metodo 2"<<endl;
    archivo=cambiardec2(archivo,n);
    }
    else{
        cout<<"Ingrese un dato valido"<<endl;
    }
    reescribir2(archivo);
    return archivo;

}

//---------------------------------------------------------------------------

//Función de escritura
int escribir(){
char data[100];

ofstream outfile;

outfile.open("archivo.txt");

if (!outfile.is_open())
{
  cout << "Error abriendo el archivo" << endl;
  exit(1);
}

cout << "Escribiendo en el archivo" << endl;
cout << "Ingrese caracteres de el archivo: ";
cin.getline(data, 100);

outfile << data << endl;

outfile.close();
return 0;
}

//---------------------------------------------------------------------------

//Funcion de lectura
string leer(){
string data;

   ifstream infile ;

   infile.open("archivo.txt");

   if (!infile.is_open())
   {
     cout << "Error abriendo el archivo" << endl;
     exit(1);
   }

   cout << "Leyendo el archivo" << endl;
   infile >> data;

   cout << data << endl;



   infile.close();

   return data;
}
//---------------------------------------------------------------------------

//Funcion para convertir cadena en binario

string cambiar(string palabras){
int longitud = palabras.length();
int temp,lonc;
int p;
string cambioaux,cambiado;
for(int i = 0; i<longitud;i++){
    cambioaux="";
    temp = palabras[i];
    cambioaux = binario(temp);
    lonc = cambioaux.length();
    if(lonc < 8){
         p = lonc;
        while(p<8){
            cambiado+="0";
            p++;
        }
    }
    cambiado+=cambioaux;
}
return cambiado;
}
//---------------------------------------------------------------------------

//Funcion de string a binario :3
string binario(int temp){
string nuevobin="";
while(temp>0){
    if(temp%2 == 0){
        nuevobin = "0"+nuevobin;
    }
    else{
        nuevobin = "1"+nuevobin;
    }
    temp /=2;
}
return nuevobin;
}
//---------------------------------------------------------------------------

//Funcion Metodo1
string separador(string archivo,int n){
int cont0=0,cont1=0,largo;
string copia=archivo;
largo=archivo.length();
int sobras = largo%n;
for(int i = 0; i<n ;i++){ //mirar cuantos 1 y 0 hay
    if(archivo[i]==48){
        archivo[i]=49;
        cont0++;
    }
    else{
        archivo[i]=48;
        cont1++;
    }
}
for(int i = n; i<largo;i++){
//Igual cantidad de 1s y 0s
if(cont1 == cont0){
    for(int k = 0; k<n;k++){
        if(archivo[i]==48){
            archivo[i]=49;
        }
        else{
            archivo[i]=48;
        }
        i++;
    }
}
//Mayor candtidad de 1s que de 0s
if(cont1>cont0 ){
for(int h = 1; h <=n;h++){
    if(h%3==0){
        if(archivo[i]==48){
            archivo[i]=49;
        }
        else{
            archivo[i]=48;
        }
    }
    i++;
}
}
//Mayor cantidad de 0s que de 1s
else if(cont0>cont1){
for(int h = 1; h <=n;h++){
    if(h%2==0){
        if(archivo[i]==48){
            archivo[i]=49;
        }
        else{
            archivo[i]=48;
        }
    }
    i++;

}
}
cont0=0;
cont1 =0;
i-=n;
if(sobras > largo-i){
    n=sobras;
}
for(int o=0;o<n;o++){
if(copia[i]==48){
    cont0++;
}
else{
    cont1++;
}
i++;
}
i--;
}
return archivo;
}

//---------------------------------------------------------------------------

//Funcion Metodo 2 desplazamiento
string separador2(string archivo,int n){
string nuevo;
int cont = 0, copia=n;
int largo = archivo.length();
int sobras =largo%n;
for(int i =0;i<largo;i++){
cont =0;
if(largo-i < n){
    copia-=sobras;
}
for(int p = 0;p<n-1;p++){

    if(cont==0){
    nuevo+=archivo[copia-1];
    cont++;
    i--;
    p--;
    }
    else if(archivo[i] != 0){
        nuevo+=archivo[i];
    }
    i++;
}

copia+=n;
}
return nuevo;
}

//---------------------------------------------------------------------------

void reescribir(string archivo){

    ofstream outfile;
    outfile.open("archivo.txt");

    if (!outfile.is_open())
    {
      cout << "Error abriendo el archivo" << endl;
      exit(1);
    }

    cout << "Escribiendo en el archivo" << endl;
    outfile << archivo<< endl;
    outfile.close();
}

//---------------------------------------------------------------------------

string cambiardec1(string archivo,int n){
    int cont0=0,cont1=0,largo;
    string copia=archivo;
    largo=archivo.length();
    int sobras = largo%n;
    for(int i = 0; i<n ;i++){
        if(archivo[i]==48){
            archivo[i]=49;
            cont1++;
        }
        else{
            archivo[i]=48;
            cont0++;
        }
    }
    for(int i = n; i<largo;i++){
    //Igual cantidad de 1s y 0s
    if(cont1 == cont0){
        for(int k = 0; k<n;k++){
            if(archivo[i]==48){
                archivo[i]=49;
            }
            else{
                archivo[i]=48;
            }
            i++;
        }
    }
    //Mayor candtidad de 1s que de 0s
    if(cont1>cont0 ){
    for(int h = 1; h <=n;h++){
        if(h%3==0){
            if(archivo[i]==48){
                archivo[i]=49;
            }
            else{
                archivo[i]=48;
            }
        }
        i++;
    }
    }
    //Mayor cantidad de 0s que de 1s
    else if(cont0>cont1){
    for(int h = 1; h <=n;h++){
        if(h%2==0){
            if(archivo[i]==48){
                archivo[i]=49;
            }
            else{
                archivo[i]=48;
            }
        }
        i++;

    }
    }
    cont0=0;
    cont1 =0;
    i-=n;
    if(largo-i <sobras){
        n=sobras;
    }
    for(int o=0;o<n;o++){
    if(archivo[i]==48){
        cont0++;
    }
    else{
        cont1++;
    }
    i++;
    }
    i--;
    }
    cout<<"Decodificando: "<<archivo<<endl;
    copia = debinaletra(archivo);
    reescribir2(copia);
    return copia;
}

//---------------------------------------------------------------------------
string debinaletra(string archivo){
    string cop;
    int decimal=0,cota=0;
    int largo=archivo.length();
    int multiplicador = 1,bini=8;
    for(int p=0;p<largo;p++){
        decimal=0;
        for (int i = bini - 1; i >= cota; i--) {
            if (archivo[i] == '1') {
                decimal += multiplicador;
            }
            multiplicador = multiplicador * 2;
        }
        cop+=decimal;
        cota+=8;
        p+=7;
        bini+=8;
        multiplicador =1;
    }
    return cop;
}

//---------------------------------------------------------------------------

string cambiardec2(string archivo, int n){
    string nuevo,aux;
    int cont = 0, copia=n;
    int largo = archivo.length();
    int sobras =largo%n;
    for(int i =0;i<largo;i++){
    cont =0;
    if(largo-i < sobras){
        copia-=sobras;
    }
    for(int p = 0;p<n-1;p++){

        if(cont==0){
        aux=archivo[i];
        cont++;
        p--;
        }
        else if(archivo[i] != 0){
            nuevo+=archivo[i];
        }
        i++;
    }
    i--;
    nuevo+=aux;

    copia+=n;
    }
    cout<<"Decodificando: "<<nuevo<<endl;
    cout<<"-----------------------------"<<endl;
    nuevo=debinaletra(nuevo);
    return nuevo;
}

//---------------------------------------------------------------------------

void reescribir2(string archivo){
    ofstream outfile;

    outfile.open("archivo.txt");

    if (!outfile.is_open())
    {
      cout << "Error abriendo el archivo" << endl;
      exit(1);
    }

    outfile << archivo<< endl;
    outfile.close();
}


