#include <iostream>
#include <math.h>
#include <string>
#include <fstream>
using namespace std;

void forzarString(string &string)
{
    getline(cin, string);
}

int main ( )
{
    string code;
    string description;
    string name;
    float price;
    string code2;
    string name2;

    string information;

    fstream archivo;

    archivo.open("prueba.txt", ios::in);
    getline(archivo, information);
    archivo.close();

    cout << information;

    //cin >> information;
    //cout << information.size();

    //cout << string::npos;
    //size_t position = information.find("x");
    //cout << endl << position;

    

        /*cout << "Enter the name of the product: ";
        forzarString(name);
        cout << name;
        cout << "Indicates the product code: ";
        cin >> code;
        cout << code;
        cout << "Indicates the product price: ";
        cin >> price;
        cout << price;
        cout << "Make a short description of the product: ";
        forzarString(description);
        cout << description;
        cout << "Indicates the product category: ";
        //forzarString(name2);
        cout << name2;
        cout << "Indicates the category code: ";
        cin >> code2;
        cout << code2;*/

    /*cout << "Enter the information about product with the following structure: Name/Code/Price/Description/CategoryName/CategoryCode" << endl;
    getline(cin, information);
    cout << endl;
    cout << information;*/

    


    

    /*struct random
    {
        int code;
        string verga;
    };

    random ay;

    cin >> ay.verga;

    cout << ay.code << " " << ay.verga;*/






    return 0;
}