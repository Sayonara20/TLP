#include<iostream>

#include<string>

#include<locale.h>



void main()

{

	setlocale(LC_ALL, "Portuguese");

	std::string frase;

	int i, contara = 0, contare = 0, contari = 0, contaro = 0, contaru = 0, p;

	do

	{

		std::cout << "\n ________MENU_______ \n";

		std::cout << "Escolhe uma opção \n";

		std::cout << "1-Contar vogais na frase \n";

		std::cout << "0- Para sair \n";

		std::cin >> p;

		switch (p)

		{

		case 1:

			std::cout << "me diz uma frase \n";

			std::cin.ignore();

			getline(std::cin, frase);

			for (i = 0; i < frase.size(); i++)

			{

				switch (frase[i])

				{

				case 'A':

				case 'a':

				{

					contara = contara + 1;

					break;

				}

				case 'E':

				case 'e':

				{

					contare = contare + 1;

					break;

				}

				case 'I':

				case 'i':

				{

					contari = contari + 1;

					break;

				}

				case 'O':

				case 'o':

				{

					contaro = contaro + 1;

					break;

				}

				case 'U':

				case 'u':

				{

					contaru = contaru + 1;

					break;

				}

				}

			}

			std::cout << "\n Escreveste \n" << contara << "A(s)\n" << contare << "E(s)\n" << contari << "I(s)\n" << contaro << "O(s)\n" << contaru << "U(s)\n";

		default:

			break;

		}

	} while (p != 0);

}