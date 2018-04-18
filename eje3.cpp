#include <iostream>

using namespace std;

void mostrar(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<n[i];
    }
    cout<<"\n------------"<<endl;
}
void insertionsort(int vec[], int tam){
	for(int i=1; i<tam; i++){
		for(int j=0; (i-j)>0; j++){
			if(vec[i-j]<vec[i-j-1]){
				int s=vec[i-j];
				vec[i-j]=vec[i-j-1];
				vec[i-j-1]=s;
			}
		}
	}
}

void mergesort(int v[], int up, int down){
    int g=(down-up)/2;
    if (down-up>2){
        mergesort(v, up, g);
        mergesort(v, g+1, down);
    }
    for (int i=up; i<=g-up; i++){
        for (int j=0; j<=down-g-1; j++){
            if (v[up+i]>v[g+1+j]){
                int a=v[up+i];
                v[up+i]=v[g+1+j];
                v[g+1+j]=a;
            }
        }
    }
    
}


void quicksort(int A[],int izq, int der )
{
int i, j, x , aux;
i = izq;
j = der;
x = A[ (izq + der) /2 ];
    do{
        while( (A[i] < x) && (j <= der) )
        {
            i++;
        }
        while( (x < A[j]) && (j > izq) )
        {
            j--;
        }
        if( i <= j )
        {
            aux = A[i]; A[i] = A[j]; A[j] = aux;
            i++;  j--;
        }
    }while( i <= j );
    if( izq < j )
        quicksort( A, izq, j );
    if( i < der )
        quicksort( A, i, der );
}






int main(){
	int tr[5]={5,6,2,7,1};
	//quicksort(tr, 0, 4);
	//mostrar(5,tr);
	//insertionsort(tr,5);
	mostrar(5,tr);
	mergesort(tr, 0, 4);
	mostrar(5,tr);
	return 0;
}
