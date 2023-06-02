#include<bits/stdc++.h>
using namespace std;

int calcularLetras(string f);

int main(){
	
	string f;
	
	cout<<"Ingresar una frase: ";
	getline(cin, f);
	
	cout<<calcularLetras(f)<<endl;
	
	return 0;
}

int calcularLetras(string f){
	
	int aux = 0;
	
	for(int i = 0 ; i < f.size() ; i++){
		if(f[i] == 'a' || f[i] == 'e'){
			aux += 1;
		}
		if(f[i] == 'o' || f[i] == 's'){
			aux += 2;
		}
		if(f[i] == 'n' || f[i] == 'i' ||f[i] == 'r' || f[i] == 'd'){
			aux += 3;
		}
		if(f[i] == 'c' || f[i] == 'l' ||f[i] == 't' || f[i] == 'u'){
			aux += 4;
		}
		if(f[i] == 'p' || f[i] == 'm'){
			aux += 5;
		}
		if(f[i] == 'b' || f[i] == 'f' ||f[i] == 'g' || f[i] == 'h'||f[i] == 'j' || f[i] == 'q' ||f[i] == 'v' || f[i] == 'x'||f[i] == 'y' || f[i] == 'z'){
			aux += 6;
		}
		if(f[i] == 'k' || f[i] == 'w'){
			aux += 7;
		}
		
	}
	
	
	return aux;
}
