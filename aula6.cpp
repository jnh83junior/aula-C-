#include <iostream>
using namespace std;

int n1,n2; //variáveis globais pode ser acessadas de qlq lugar

int main(){
	
	
	// oeradores matematicos = - / * %(resto)
	int n3,n4; //variáves locais
	int res1,res2;
	
	n1=11;
	n2=3;
	n3=5;
	n4=2;
	
	res1 = n1/n2;
	res2 = n1%n2;
	
	cout << "divisao: " << res1 << "\n";
	cout << "resto: " << res2 << "\n";
	
	
	return 0;
}
