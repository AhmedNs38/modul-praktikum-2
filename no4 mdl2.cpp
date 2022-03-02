#include <iostream>
using namespace std;
void cetakMatrixA(int mA[2][2]){
	for(int i=0; i<2; i++){
		for(int j=0; j<2;j++){
			cout<<mA[i][j]<<"";
		}
		cout<<endl;
	}
}
void cetakMatrixB(int mB[2][2]){
	for(int i=0; i<2 ;i++){
		for(int j=0; j<2; j++){
			cout<<mB[i][j]<<"";
		}
		cout<<endl;
	}
}
void perkalian(int mA[2][2], int mB[2][2], int mHasil[2][2]){
	int jmlh = 0;
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			for (int k = 0; k < 2; k++){
				jmlh = jmlh + (mA[i][k] * mB[k][j]);
			}
			mHasil[i][j]=jmlh;
			jmlh =0;
		}
	}
}
void cetakPerkalian(int mHasil[2][2]){
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			cout << mHasil[i][j] <<"";
		}
		cout<<endl;
	}
}
int main(){
	int matrixA[2][2];
	int matrixB[2][2];
	int matrixHasil[2][2];
	
	matrixA[0][0] = 4;
	matrixA[0][1] = 8;
	matrixA[1][0] = 2;
	matrixA[1][1] = 10;
	
	matrixB[0][0] = -5;
	matrixB[0][1] = 4;
	matrixB[1][0] = 8;
	matrixB[1][1] = -12;
	
	cout <<"Matriks A : "<< endl;
	cetakMatrixA(matrixA);
	cout << endl;
	cout <<"Matriks B : "<< endl;
	cetakMatrixB(matrixB);
	cout << endl;
	cout <<"Hasil Perkalian Matriks A & B : "<< endl;
	perkalian(matrixA, matrixB, matrixHasil);
	cetakPerkalian(matrixHasil);
	return 0;
}
