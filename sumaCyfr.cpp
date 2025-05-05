#include <iostream>
#include <vector>

using namespace std;

int obliczSumeCyfr(int liczba){
    int suma = 0;
    int cyfra = 0;

    while(liczba != 0){
        cyfra = liczba % 10;
        suma += cyfra;
        liczba /= 10;
    }

    return suma;
}

int NWD(int a, int b){
    while(b != 0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int obliczNieparzystySkrot(int liczba){
    int cyfra = 0;
    int wynik = 0;
    int mnoznik = 1;

    while(liczba != 0){
        cyfra = liczba % 10;
        if(cyfra % 2 != 0){
            wynik += cyfra*mnoznik;
            mnoznik *= 10;
        }
        liczba/=10;
    }

    return wynik;

}

int main()
{
    cout<<"Suma cyfr: "<<obliczSumeCyfr(2456)<<endl;
    cout<<"NWD: "<<NWD(24,30)<<endl;
    cout<<obliczNieparzystySkrot(123456);
    return 0;
}
