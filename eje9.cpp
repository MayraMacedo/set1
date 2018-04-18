#include <iostream>
#include <string.h> 
using namespace std;

int	 palindromo(string);


int main(){
	
	string word;
	
	cout<<"\n\t\tPALINDROMO  "<<endl;
	cout<<"\nIngrese  la cadena:  "<<endl;
	cin>>word;
	
	
	if(palindromo(word)) {
		cout<<" \nEs palindromo!!\t"<<char(1)<<endl; 
	}	
	else 
	{
		cout<<"\nNo es palindromo !! "<<endl; 
	}
	
	return 0;
}

int  palindromo(string word)
{
	int tam;
	tam=word.size();
	
	for(int i=0;i<tam;i++)
	{
		if (word[i]==word[tam-i-1])
		{
			return 1;
		}	
		return 0;
	}
	
}
