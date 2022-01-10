#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double A[][N]){
	for(int i = 0; i < N ; i++){
		cout << "Row " << i+1 << ": ";
	    for(int f = 0; f < N; f++){
		  cin >> A[i][f];
	    }
	}
}

void findLocalMax(const double A[][N], bool B[][N]){
	for(int j = 0; j < N ; j++){
	    for(int k = 0; k < N; k++){
		  B[j][k] = 0;
	    }
    }
	for(int p = 0; p < N ; p++){
	    for(int q = 0; q < N; q++){
		  if(p >= 1 && p <= 3 && q >= 1 && q <= 3){
			  if(A[p][q] >= A[p-1][q] && A[p][q] >= A[p+1][q]){
				  if(A[p][q] >= A[p][q-1] && A[p][q] >= A[p][q+1]) B[p][q] = 1;
			    }
		    }
	    }
    }
}

void showMatrix(const bool B[][N]){
	for(int x = 0; x < N ; x++){
	    for(int y = 0; y < N; y++){
		  cout << B[x][y] << " ";
	    }
		cout << "\n";
	}
}