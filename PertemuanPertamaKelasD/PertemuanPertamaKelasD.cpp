

#include <iostream>
using namespace std;
int main()
{
    //begin
    //numeric nAlas, nTinggi, nLuas
    //display 'Masukan Alasanya= '
    //Accept nAlas
    //display 'Masukan Tingginya= '
    //Accept nTinggi
    //Compute nLuas = 1/2 * nAlas * nTinggi
    //Display 'Luasnya Adalah = ' = nLuas 

    int nAlas, nTinggi;
    double nLuas;
    cout << "Masukan Alasnya= ";
    cin >> nAlas;
    cout << "Masukan Tingginya=";
    cin >> nTinggi;
    nLuas = 0.5 * nAlas * nTinggi;
    cout << "Luasnya Adalah= " << nLuas << endl;

    system("pause");

    


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
