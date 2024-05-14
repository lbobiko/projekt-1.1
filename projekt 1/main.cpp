// Lukasz Bobinski numer indeksu 159651

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char wybor;
    double a, b, c, delta, x, x1, x2;
    cout << "Witaj w programie obliczajacym pierwiastki rowniania kwadratowego.\n";
    wybor = 't';
    do {
    cout << endl;
    cout << "Wykonamy obliczenia dla rownania ax^2 + bx + c = 0\n";
    cout << "Podaj wartosci parametrow a, b i c:\n";
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    cout << "c :";
    cin >> c;
    if (a == 0) {
        if (b == 0) {  //dodaje zabezpieczenie przed dzieleniem przez 0 w przypadku a i b =0 a c !=0
            if (c != 0 ) {
                cout << "Rownanie jest bledne, a i b nie moga jednoczesnie wynosic 0.\n";
            }
            else {
                cout << "Rownanie jest zawsze spelnione, gdyz wszystkie parametry wynosza 0.\n";
            }
        }
        else{
            cout << "Jest to rownanie liniowe, ktorego pierwiastek wynosi : " << (-1.0*c)/b << endl;
        }
    } else {
        delta = (b*b) - (4*a*c);
        if ( delta < 0) {
            cout << "Rownanie nie posiada rozwiazan.\n";
        }
        if ( delta == 0) {
            x = (-1.0*b)/(2*a);
            cout << "Rownanie posiada jeden pierwisatek w punkcie x = "<< x << endl;
        }
        if ( delta > 0) {
            x1 = ((-1.0 * b) - sqrt(delta)) / (2.0 * a);
            x2 = ((-1.0 * b) + sqrt(delta)) / (2.0 * a);
            cout << "Rownanie posiada dwa pierwiastki :\n";
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }
    cout << "Powtarzamy obliczenia? (t/n) :";
    cin >> wybor;
    } while ( wybor !=  'n' );
    cout << "Koncze program, do widzenia!\n";

    return 0;
}

