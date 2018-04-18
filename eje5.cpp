#include <iostream>

using namespace std;

int tamarr(char f[]){
    int n=0;
    for (; f[n]!='\0'; n++){ ;}
    return n;
}

int tampun(char f[]){
    char *tr=f;
    while (*tr!='\0'){
        tr++; cout << tr << endl;
    }
    return *tr;
}

int main()
{
    char main[]="teclado";
    cout << tamarr(main) << endl;
    return 0;
}

