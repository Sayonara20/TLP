#include<iostream>
#include<fstream>
#include<string>
using namespace std; 
int main() {
	string nome; 
	ofstream Escrita("nomes,text");
	cout << "Qual é o nome?";
	getline(cin, nome);
	Escrita << nome;
	Escrita.close();

	ifstream Leitura("nomes,text");
	while (getline(Leitura, nome)) {
		cout << nome;
	}
	Leitura.close();
}