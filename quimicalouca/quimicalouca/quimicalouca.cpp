#include <iostream>
#include <string>
void main()
{
    

    int i, num = 1; 

    using namespace std;
    string frases;

    do
    {
        cin >> frases;
    } while (1 > frases.size() || frases.size() >= 1000);
   
    for (i = 0; i < frases.size(); i++)
    {
       
        if (isupper(frases[i]))
        {
            if (num == 0)
            {
                cout << " 1";
            }
            num = 0; 
            cout << "\n"; 
        }
     
        if (isdigit(frases[i]) && num == 0)
        {
            cout << " ";
            num = num + 1;
        }
      
        if (frases[i] == '.')
        {
            if (num == 0)
            {
                cout << " 1";
            }
        }
        else
        {
            cout << frases[i]; 
        }
    }
}