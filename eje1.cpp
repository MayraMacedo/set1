#include<iostream>
using namespace std;
int sumaValor(int a , int b)
	{
		return a+b;
}
int sumaReferencia(int &a , int &b)
	{
		return a+b;
	}
int main()
{
	int x=5, y=6;
	cout<<sumaValor(x,y)<<endl;
	cout<<sumaReferencia(x,y)<<endl;

	return 0;
}
