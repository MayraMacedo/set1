#include <iostream>

using namespace std;

int tam(char cad[]){
    int i=0;
    while (cad[i]!='\0'){
        ++i;
    }
    return i;
}

char *intpunt(char ex[], int i){
    char *el=ex+i;
    cout << "Letra por la cual cambiar: ";
    char g; cin >> g;
    el[0]=g;
	return el;
}

void intarr(char h[], int i){
    cout << "Letra por la cual cambiar: ";
    char g; cin >> g;
    h[i]=g;
}

int main()
{
    char str[]="alakahim";
    cout << "Esta es su cadena: " << str << endl;
    while (true){
        cout << "Posición de la letra que desea cambiar: ";
        int i; cin >> i; --i;
        if (i>tam(str)-1 || i<0) { cout << "Posición invalida" << endl; break;}
        else {
            intpunt(str, i);
        }
        cout << "Modificación: " << str << endl;
    }
    return 0;
}
