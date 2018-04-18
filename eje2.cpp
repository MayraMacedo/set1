#include<iostream>
using namespace std;
int sumArr(int a[],int len)
{
		int suma;
		for(int i =0; i<len;i++)
		{
			suma+=a[i];
		}
		return suma;
}
int sumArrR(int a[],int len)
{
	if (len==0)
		return 0;
	else
		return a[0]+ sumArrR((a+1),len-1)	;
}
int main()
{
	int a[2]={1,3};
	cout<<sumArr(a,2)<<endl;
	cout<<sumArrR(a,2)<<endl;
	return 0;
}
