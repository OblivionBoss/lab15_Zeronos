#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
    T i, j, c, f; 
    for (i = 1; i < N; i++)
    { 
        c = d[i]; 
        j = i - 1; 
        while (j >= 0 && d[j] <= c)
        { 
            d[j + 1] = d[j]; 
            j = j - 1; 
        } 
        d[j + 1] = c;
		cout << "Pass " << i << ":";
		for(f = 0; f < N; f++){
			cout << d[f] << " ";
		}
		cout << "\n";
    }
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
