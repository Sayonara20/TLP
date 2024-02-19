#include <iostream>
#include <math.h>

#include <iostream>
#include <math.h>

void main()
{
	int dias, grupo;
	float preco, valor, decimas;
	do {
		std::cin >> preco;
		std::cin >> dias;
		std::cin >> grupo;
	} while (preco < 100 && preco >100000);
	preco = preco / 100;
	preco = preco - preco * 0.25;
	decimas = preco - trunc(preco);
	if (decimas > 0.5)
	{
		valor = trunc(preco) + 1;
	}
	else
	{
		valor = trunc(preco) + 0.5;
	}
	preco = valor;


	if ((dias > 4) && (dias < 9))
	{
		preco = preco - preco * 0.4;
		decimas = preco - trunc(preco);
		if (decimas > 0.5)
		{
			valor = trunc(preco) + 1;
		}
		else
		{
			valor = trunc(preco) + 0.5;
		}
		preco = valor;

	}
	else if (dias > 8)
	{
		preco = preco - preco * 0.65;
		decimas = preco - trunc(preco);
		if (decimas > 0.5)
		{
			valor = trunc(preco) + 1;
		}
		else
		{
			valor = trunc(preco) + 0.5;
		}
		preco = valor;
	}


	if (grupo > 3)
	{
		preco = preco - preco * 0.5;
		decimas = preco - trunc(preco);
		if (decimas > 0.5)
		{
			valor = trunc(preco) + 1;
		}
		else
		{
			valor = trunc(preco) + 0.5;
		}
	}
	preco = valor * 100;
	std::cout << preco;

}