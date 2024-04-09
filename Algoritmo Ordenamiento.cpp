#include <iostream>
#include <string>
#include <vector>
using namespace std;

void ordenarN(vector<string> &nombres){
	int n = nombres.size();
	bool intercambio;
	
	for(int i=0; i < n-1; i++){
		intercambio = false;
		
		for(int j=0; j < n - i - 1; j++){
			if(nombres[j] > nombres[j+1]){
				swap(nombres[j], nombres[j+1]);
				intercambio = true;
			} // Fin del if
		} // Fin del segundo for
		
		if(!intercambio) break;
	} // Fin del primer for
}

int main(){
	vector<string> nombres = {"Alejandro", "Dylan", "Kevin", "Paola", "Daniela", "Johana"};
	
	cout << "Nombres antes de ordeenar:" << endl;
	for(const string& nombre : nombres){
		cout << nombre << " ";
	}
	cout << endl;
	
	ordenarN(nombres);
	
	cout << "\nNombres ordenados" << endl;
	for(const string& nombre : nombres){
		cout << nombre << " ";
	}
	cout << endl;
	
	return 0;
}




