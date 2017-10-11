#include <iostream>
#include <math.h>


using namespace std;

int parzyste(int n)
{
    int i=0;
    for(i=0; i<=n; i+=2);
    cout << i << " ";
    
}
    


int main(int argc, char **argv) {
	
    const int ROKCPP = 1983;
    const int rok = 2017;
    char imie[20] ;
    int a;
    cout << "Elo mordo jak Cię zwą?" << endl ;
    cin >> imie ;
    cout << "Ok to fajnie " << imie<< endl ;
    cout << "Ile masz lat? " << endl;
    cin >> a;
    cout << "A zatem urodziłeś się w " << rok-a << " roku" << endl ;
    if((rok-a)>ROKCPP)
        cout << "Jesteś młodszy od C++" << endl;
    else if((rok-a)<ROKCPP)
        cout << "Jesteś starszy od C++" << endl;
    else
        cout << "Jesteś w tym samym wieku co C++" << endl;
    int n;
    cout << "Podaj liczbę naturalną: ";
    cin >> n;
    cout << "Ilość parzystych " << parzyste(n);
    
    int liczba, i, j, pierwiastek, *tablica;
    cout << "Podaj maksimum: ";
    cin >> liczba;
 
    pierwiastek = (int)sqrt((double)liczba);
    tablica = new int[liczba+1];
    for (i = 0; i <= liczba; i++)
    tablica[i] = i;
 
    for (i = 2; i <= pierwiastek; i++)
    {
    if (tablica[i] != 0)
    for (j = 2*i; j <= liczba; j+= i)
        tablica[j] = 0;
    }
 
    cout << "Liczby pierwsze z przedzialu <2," << liczba << "> to:\n";
    for (i = 2; i <= liczba; i++)
    if (tablica[i] != 0)
    cout << tablica[i] << " ";
    cout << endl;
    
    return 0;
    
}

