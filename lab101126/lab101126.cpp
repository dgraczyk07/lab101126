#include <iostream>
using namespace std;

int main()
{
    /*zad.1.
    *
    int a = 7;
    int b = 2;

    cout << a / b << endl;
    cout << static_cast<double>(a) / b << endl;
    cout << static_cast<double>(a / b) << endl;
    */

    /*zad.2.

    double a = -3.99;
    int b = a;

    cout << b << endl;
    cout << static_cast<int>(a) << endl;
    // czêœæ u³amkowa zostaje usuniêta
    */

    //zad.3.

    /*char a = 'A';
    int b = a;

    cout << b << endl;   //wyœwietla siê 65
    */

    /*int c = 66;
    char d = c;

    cout << d << endl; //wyœwietla siê B
    */

    /*zad.4.

    int liczba, suma;

    cout << "Podaj sume elementow: " << endl;
    cin >> suma;
    cout << "Podaj liczbe elementow: " << endl;
    cin >> liczba;

    cout << "Srednia arytmetyczna wynosi: " << static_cast<double>(suma)/liczba << endl;
    */

    /*zad.5.

    int wykonane, calosc;

    cout << "Podaj liczbe wykonanych zadan: " << endl;
    cin >> wykonane;
    cout << "Podaj liczbe wszystkich zadan: " << endl;
    cin >> calosc;
    if (calosc == 0) {
        cout << "Nie mozna dzielic przez zero!!!" << endl;
    }
    else {
        cout << "Procent wykonanych zadan wynosi: " << static_cast<double>(wykonane) / calosc * 100 << " %" << endl;

    }
    */

    /*zad.6.

    string tekst;
    cout << "Podaj tekst: " << endl;
    cin >> tekst;
    getline(cin, tekst);
    cout << "Dlugosc tekstu wynosi: " << tekst.length() << endl;
    */

    /*zad.7.

    string tekst;
    int i, d;

    cout << "Podaj tekst: " << endl;
    cin >> tekst;
    cout << "Podaj indeks poczatkowy i dlugosc fragmentu: " << endl;
    cin >> i >> d;

    cout << "Fragment tekstu wynosi: " << tekst.substr(i, d) << endl;
    */

    string tekst = '2026-11-10";
        int rok, miesiac, dzien;

    find(rok, miesiac, dzien);
    tekst.substr (2026)


    cout << "Wprowadz rok, miesiac i dzien: " << endl;
    cin >> rok >> miesiac >> dzien;



    } //.

	




