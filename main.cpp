#include <iostream>

using namespace std;

//5. Una empresa de alquiler de autos cuenta con distintas agencias desde donde efectúa sus
//operaciones. Para ello cuenta con varios lotes de registros. Un primer lote contiene los datos de los
//autos, cada registro está compuesto por:

//- Código de auto (4 dígitos no correlativos).
//- Categoría del auto (1 a 10).
//- Importe del alquiler por km.
//- Número de agencia (1 a 20).

//Este lote se encuentra ordenado por código de auto y contiene 400 registros.
//Existe un segundo lote con la información de los alquileres que se realizaron durante el mes pasado.
//Cada registro contiene:

//- Código de auto (4 dígitos no correlativos).
//- Número de cliente que efectúo el alquiler (1 a 200).
//- Total de días del alquiler.
//- Kms. Recorridos.

//Este lote finaliza con un registro con número de cliente igual a cero. Puede haber más de un registro
//para el mismo auto y para el mismo cliente.
//Por último, un tercer lote contiene los datos de las agencias de esta empresa.

//- Número de agencia (1 a 20).
//- Ubicación de la agencia (1=Aeropuerto Ezeiza, 2=Aeroparque, 3=Centro Ciudad).

//A partir de estos lotes se pide determinar e informar:

//a) Un listado con el siguiente formato:
//Número de Cliente Total de pesos abonados en alquiler
//      999                            999

//b) La recaudación total acumulada para cada una de las tres ubicaciones.

//c) La cantidad total de autos para cada una de las veinte agencias.

//d) La categoría de auto más veces alquilada por los clientes.

//e) Los números de las agencias, si las hubiera, que hayan efectuado en el mes menos de diez
//alquileres en total. Para calcular el importe del alquiler de un auto se debe multiplicar el
//importe en pesos por kilómetro por la cantidad de kilómetros recorridos.

//FUNCIONES----------------------------------------------------------------------------------------------------
void carga(int autos,int vcAuto[],int vcatAuto[],int vnumAgencia[],float vimportePorKM[]);
void carga2(int vAgencias[20],int vubiAgencia[20],int vtotalAutos[20]);
void carga3(int vnumCliente[200],int vdiasAlquiler[200],int vKMrecorridos[200],float vimporteAbonar[200],int vUbiClientes[200]);
void carga4(int vUbicacion[3],float vUbiTotal[3]);
void carga5(int vCategoria[10],int vcatTotal[10]);
void proceso(int autos,int vcAuto[],int vcatAuto[],int vnumAgencia[],float vimportePorKM[],int cAuto,int catAuto,
             int numAgencia,float importePorKM,int vAgencias[20],int vubiAgencia[20],int vnumCliente[200],int vdiasAlquiler[200]
             ,int vKMrecorridos[200],int numCliente,int diasAlquiler,int KMrecorridos,float vimporteAbonar[200],int vUbicacion[3],
             float vUbiTotal[3],int vUbiClientes[200],int vtotalAutos[20],int vCategoria[10],int vcatTotal[10]);


//MAIN---------------------------------------------------------------------------------------------------------

int main()
{int autos;
    cout<<"Ingrese la cantidad de autos(400 p/el ejercicio): ";
    cin>>autos;

 //carga(autos)
    int vcAuto[autos],vcatAuto[autos],vnumAgencia[autos],cAuto,catAuto,numAgencia;
    float vimportePorKM[autos],importePorKM;
 //carga 2(agencias)
    int vAgencias[20],vubiAgencia[20],vtotalAutos[20];
 //carga 3(clientes)
    int vnumCliente[200],vdiasAlquiler[200],vKMrecorridos[200],numCliente,diasAlquiler,KMrecorridos,vUbiClientes[200];
    float vimporteAbonar[200];
 //carga 4(ubicacion de agencias)
    int vUbicacion[3];
    float vUbiTotal[3];
 //carga 5(categoria)
    int vCategoria[10],vcatTotal[10];
 //proceso

 carga(autos,vcAuto,vcatAuto,vnumAgencia,vimportePorKM);
 carga2(vAgencias,vubiAgencia,vtotalAutos);
 carga3(vnumCliente,vdiasAlquiler,vKMrecorridos,vimporteAbonar,vUbiClientes);
 carga4(vUbicacion,vUbiTotal);
 carga5(vCategoria,vcatTotal);
 proceso(autos,vcAuto,vcatAuto,vnumAgencia,vimportePorKM,cAuto,catAuto,numAgencia,importePorKM,vAgencias,vubiAgencia,
         vnumCliente,vdiasAlquiler,vKMrecorridos,numCliente,diasAlquiler,KMrecorridos,vimporteAbonar,vUbicacion,vUbiTotal,
         vUbiClientes,vtotalAutos,vCategoria,vcatTotal);

    return 0;
}



//FUNCIONES-------------------------------------------------------------------------------------------------------
//CARGA
//autos(300)
void carga(int autos,int vcAuto[],int vcatAuto[],int vnumAgencia[],float vimportePorKM[]){

       cout<<endl<<"-REGISTRO DE AUTOS----------------------------------------------------------------------------"<<endl;
       cout<<endl;

       for(int x=0;x<autos;x++){
        cout<<"Ingrese el codigo de auto: ";
        cin>>vcAuto[x];
        cout<<"Ingrese la categoria del auto(1 a 10): ";
        cin>>vcatAuto[x];
        cout<<"Ingrese el numero de agencia(1 a 20): ";
        cin>>vnumAgencia[x];
        cout<<"Ingrese el importe por KM: ";
        cin>>vimportePorKM[x];
        cout<<endl;



       }

   }

//Agencias

void carga2(int vAgencias[20],int vubiAgencia[20],int vtotalAutos[20]){

     cout<<endl<<"-REGISTRO DE AGENCIAS(20)----------------------------------------------------------------------------";
     cout<<endl<<"Ubicaciones. Ingrese: 1-Aeropuerto Ezeiza.";
     cout<<endl<<"                      2-Aeroparque.";
     cout<<endl<<"                      3-Centro Ciudad.";
     cout<<endl<<endl;


     for(int x=0;x<20;x++){
        vAgencias[x]=x+1;
        cout<<"Ingrese la ubicacion de la agencia #"<<x+1<<": ";
        cin>>vubiAgencia[x];

        vtotalAutos[x]=0;


     }
   cout<<endl;
}

//Clientes

void carga3(int vnumCliente[200],int vdiasAlquiler[200],int vKMrecorridos[200],float vimporteAbonar[200],int vUbiClientes[200]){

        for(int x=0;x<200;x++){

            vnumCliente[x]=x+1;
            vdiasAlquiler[x]=0;
            vKMrecorridos[x]=0;
            vimporteAbonar[x]=0;
            vUbiClientes[x]=0;
        }

}

//Ubicacion de agencias

void carga4(int vUbicacion[3],float vUbiTotal[3]){

     for(int x=0;x<3;x++){

        vUbicacion[x]=x+1;
        vUbiTotal[x]=0;
     }


}

//Categoria

void carga5(int vCategoria[10],int vcatTotal[10]){

        for(int x=0;x<10;x++){

            vCategoria[x]=x+1;
            vcatTotal[x]=0;
        }

}


//PROCESO-------------------------------------------------------------------------------------------------------------

void proceso(int autos,int vcAuto[],int vcatAuto[],int vnumAgencia[],float vimportePorKM[],int cAuto,int catAuto,
             int numAgencia,float importePorKM,int vAgencias[20],int vubiAgencia[20],int vnumCliente[200],int vdiasAlquiler[200]
             ,int vKMrecorridos[200],int numCliente,int diasAlquiler,int KMrecorridos,float vimporteAbonar[200],int vUbicacion[3],
             float vUbiTotal[3],int vUbiClientes[200],int vtotalAutos[20],int vCategoria[10],int vcatTotal[10]){

      cout<<endl<<"-PROCESO DE DATOS------------------------------------------------------------------------"<<endl;

      cout<<endl<<"Ingrese el codigo de auto: ";
      cin>>cAuto;
      cout<<"Ingrese el numero de cliente(1 a 200): ";
      cin>>numCliente;
      cout<<"Ingrese el total de dias de alquiler: ";
      cin>>diasAlquiler;
      cout<<"Ingrese los KM recorridos: ";
      cin>>KMrecorridos;
      cout<<endl;

      int iAgencia,iAuto,iCliente,iCat;

    while(numCliente!=0){

        for(int x=0;x<autos;x++){

            if(cAuto==vcAuto[x]){iAuto=x;}
        }
        for(int x=0;x<20;x++){

            if(vnumAgencia[iAuto]==vAgencias[x]){iAgencia=x;}
        }
        for(int x=0;x<200;x++){

            if(numCliente==vnumCliente[x]){iCliente=x;}
        }

        for(int x=0;x<10;x++){

            if(vcatAuto[iAuto]==vCategoria[x]){iCat=x;}
        }


        vKMrecorridos[iCliente]+=KMrecorridos;
        vimporteAbonar[iCliente]=vimportePorKM[iAuto];

        vUbiClientes[iCliente]=vubiAgencia[iAgencia];

        vtotalAutos[iAgencia]++;

        vcatTotal[iCat]++;


        cout<<endl<<"Ingrese el codigo de auto: ";
      cin>>cAuto;
      cout<<"Ingrese el numero de cliente(1 a 200): ";
      cin>>numCliente;
      cout<<"Ingrese el total de dias de alquiler: ";
      cin>>diasAlquiler;
      cout<<"Ingrese los KM recorridos: ";
      cin>>KMrecorridos;
      cout<<endl;


                    }
   cout<<endl<<"-------------------------------------------------------------------------------"<<endl;

     float totalPesos;
   for(int x=0;x<200;x++){

    if(vKMrecorridos[x]==0){;continue;}
       totalPesos=vKMrecorridos[x]*vimporteAbonar[x];
    cout<<"Nro.Cliente: "<<vnumCliente[x]<<". Total abonado en alquiler: "<<totalPesos<<"."<<endl;

          for(int y=0;y<3;y++){

               if(vUbiClientes[x]==0){;break;}
               if(vUbiClientes[x]==vUbicacion[y]){vUbiTotal[y]+=totalPesos;}


          }


       }

    cout<<endl;

    for(int x=0;x<3;x++){
            if(vUbicacion[x]==1){
        cout<<"En Aeropuerto Ezeiza(Ubi."<<vUbicacion[x]<<") se recaudaron "<<vUbiTotal[x]<<" pesos."<<endl;}
        else if(vUbicacion[x]==2){
        cout<<"En Aeroparque(Ubi."<<vUbicacion[x]<<") se recaudaron "<<vUbiTotal[x]<<" pesos."<<endl;}
        else{
        cout<<"En Centro Ciudad(Ubi."<<vUbicacion[x]<<") se recaudaron "<<vUbiTotal[x]<<" pesos."<<endl;}

    }
    cout<<endl<<endl;
    cout<<"-Total de autos por agencia(Se ignoraran las agencias a las que no se les haya alquilado autos)-"<<endl;


    for(int x=0;x<20;x++){

        if(vtotalAutos[x]==0){;continue;}
        cout<<"Nro.Agencia "<<vAgencias[x]<<". Total de autos: "<<vtotalAutos[x]<<"."<<endl;
    }

    cout<<endl<<endl;

    int maxtotCat=vcatTotal[0],maxCat=vCategoria[0];
    for(int x=0;x<10;x++){

        if(vcatTotal[x]>maxtotCat){maxtotCat=vcatTotal[x],maxCat=vCategoria[x];}
    }

    cout<<"La categoria mas vendida es la #"<<maxCat<<" con un total de "<<maxtotCat<<" de alquileres."<<endl;

    cout<<endl<<endl;

    for(int x=0;x<20;x++){

        if(vtotalAutos[x]>=10){;continue;}
        else{cout<<"La agencia Nro."<<vAgencias[x]<<" ha efectuado menos de 10 alquileres."<<endl;}
    }
    }
