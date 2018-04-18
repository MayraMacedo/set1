#include <iostream>

using namespace std;

int tam(char cad[]){
    int i=0;
    while (cad[i]!='\0'){
        ++i;
    }
    return i+1;     // TOMAR EN CUENTA LA EXISTENCIA DE UN
}                   // ESPACIO PARA EL FIN DE CADENA

void copyarr(char e1[], char e2[]){
    if (tam(e1)<tam(e2)) {
        cout << "tamaño insuficiente en  1° cadena" << endl;
        return ;}
	int i=0;
	cout << e1 << " " << e2 << endl;
	for (; e2[i]!='\0'; i++)
		e1[i]=e2[i];
	e1[i]='\0';
	cout << e1 << endl;
}

char *copypunt(char e1[], char e2[]){
    if (tam(e1)<tam(e2)) {
        cout << "tamaño insuficiente en  1° cadena" << endl;
        return NULL;}
    char *ar1, *ar2;
    ar1=e1; ar2=e2;
    while (*ar2!='\0'){
        ar1[0]=ar2[0];
        ar1++; ar2++;
    }
    ar1[0]='\0';
    return e1;
}

int main(){
	char p1[]="stranger";
	char p2[]="sky";
	cout << copyarr(p1, p2) << endl;
	return 0;
}
