#include <iostream>
#include <math.h>

using namespace std;

int main(){

float liczba1;
float liczba2;

float wynik;

int dzialanie;



cout << "Podaj pierwsza liczbe: ";
cin >> liczba1;
cout << "Podaj druga liczbe: ";
cin >> liczba2;
cout << "Wybierz dzialanie" << endl;
cout << "1 Dodawanie" << endl;
cout << "2 Odejmowanie" << endl;
cout << "3 Mnozenie" << endl;
cout << "4 Dzielenie";
cin >> dzialanie;

switch (dzialanie)
{
case 1:
    wynik = liczba1 + liczba2;
    cout << "Wynik dodawania wynosi : " << wynik; 
    break;

case 2:
    wynik = liczba1 - liczba2;
    cout << "Wynik odejmowania wynosi : " << wynik; 
    break;
case 3:
    wynik = liczba1 * liczba2;
    cout << "Wynik mnozenia wynosi : " << wynik; 
    break;
case 4:
    wynik = liczba1 / liczba2;
    cout << "Wynik dzielenia wynosi : " << wynik; 
    break;
}

} 