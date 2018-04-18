#include <iostream>

using namespace std;

int tam(char cad[]){
    int i=0;
    while (cad[i]!='\0'){
        ++i;
    }
    return i+1;     // TOMAR EN CUENTA LA EXISTENCIA DE UN
}                   // ESPACIO PARA EL FIN DE CADENA

void concat0(char e1[], char e2[]){
    int h=tam(e1), j=tam(e2);
    char cad[h+j];
    for (int m=0; m<h-1; m++){
        cad[m]=e1[m];
    }
    for (int n=0; n<j-1; n++){
        cad[h-1+n]=e2[n];
    }
    cad[h+j-1]='\0';
    cout << cad << endl;

}

char *concat(char pal1[], char pal2[]){
    int h=tam(pal1), j=tam(pal2); cout << h+j << endl;
    char *d1=pal1; char *d2=pal2;
    char comp[h+j]; char *puntc=comp;
    while (*d1!='\0'){
        puntc[0]=d1[0]; puntc++; d1++;
    }
    while (*d2!='\0'){
        puntc[0]=d2[0]; puntc++; d2++;
    }
    puntc[0]='\0';
	char *puntc2=comp;
	cout << comp << endl;
    return puntc2;
}

int main()
{
    char pal1[]="ama";
    char pal2[]="pola";
    char *dd=concat(pal1,pal2);
    cout << dd << endl;
    //concat0(pal1, pal2);
    return 0;
}
