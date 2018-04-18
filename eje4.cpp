#include <iostream>

using namespace std;

void mulmat(int mat1[][3], int mat2[][4], int o, int p, int q){
	int mat3[o][q];
	for (int i=0; i<o; i++){
		for (int j=0; j<q; j++){
			mat3[i][j]=0;
			for (int k=0; k<p; k++){
				mat3[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
	for (int m=0; m<o; m++){
		for (int n=0; n<q; n++)
			cout << mat3[m][n] << "\t";
		cout << '\n' << endl;
	}
	return ;
}

int main(){
	int vec1[2][3]={{2,5,8},{5,5,1}};
	int vec2[3][4]={{1,1,2,0},{2,6,6,1},{0,8,11,5}};
	mulmat(vec1, vec2, 2, 3, 4);
	return 0;
}
