#include<iostream>
#include<vector>
#include<locale.h>

int SomarUnsSeguidos(const std::vector<int>& sequencia)
{
	int count = 0;
	int total = 0;
	for (int num : sequencia)
	{
		if (num == 1)
		{
			count++;
		}
		else
		{
			total += count;
			count = 0;
		}
	}
	total += count;
	return total;
}

int VerificarTentativa(int tentativas, const std::vector<int>& rj)
{
	int TotaldePontos = 0;

	for (int tentativa = 1; tentativa <= tentativas; ++tentativa)
	{
		for (size_t i = 0; i < rj.size(); i++)
		{
			if (tentativa < i + 1)
			{
				TotaldePontos += rj[i];
			}
		}
	}
	return TotaldePontos;
}
int main()
{
	

	std::vector<int> sequencia = { 1,1,0,1,0,1,1,1 };
	int tentativas = 3;
	std::vector<int> rj = { 2,3,1,4,2,0,1,2 };

	

	int TotalUnsSeguidos = SomarUnsSeguidos(sequencia);
	int PontosEncontrados = VerificarTentativa(tentativas, rj);

	

	std::cout << "Total de uns seguidos na sequencia: " << TotalUnsSeguidos << std::endl;
	std::cout << "Pontos encontrados: " << PontosEncontrados << std::endl;
}
