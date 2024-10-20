#include <iostream>
#include <string>

using namespace std;

// Klasa "KsiazkaDostojewskiego" do modelowania książki F.M. Dostojewskiego
class KsiazkaDostojewskiego {
    // Prywatne zmienne członkowskie klasy
    // Te zmienne są ukryte przed bezpośrednim dostępem spoza klasy
private:
    string tytul;    // Tytuł książki
    int rokWydania;  // Rok wydania książki

    // Publiczne metody
    // Dostępne spoza klasy do interakcji z obiektem klasy
public:
    // Konstruktor klasy
    // Inicjalizuje obiekt podczas tworzenia
    KsiazkaDostojewskiego(string t, int rok) {
        tytul = t;               // Przypisujemy wartość zmiennej tytul
        rokWydania = rok;         // Przypisujemy wartość zmiennej rokWydania
    }

    // Getter do uzyskania tytułu książki
    // Metoda zwraca wartość zmiennej tytul
    string getTytul() {
        return tytul;
    }

    // Setter do zmiany tytułu książki
    // Metoda przyjmuje nową wartość i zmienia zmienną tytul
    void setTytul(string t) {
        tytul = t;
    }

    // Getter do uzyskania roku wydania
    // Metoda zwraca wartość zmiennej rokWydania
    int getRokWydania() {
        return rokWydania;
    }

    // Setter do zmiany roku wydania
    // Metoda przyjmuje nową wartość i zmienia zmienną rokWydania
    void setRokWydania(int rok) {
        rokWydania = rok;
    }

    // Metoda do wyświetlenia informacji o książce
    void przedstawKsiazke() {
        cout << "Tytuł: " << tytul << ", Rok wydania: " << rokWydania << endl;
    }
};

int main() {
    // Tworzenie obiektu klasy KsiazkaDostojewskiego z początkową wartością
    KsiazkaDostojewskiego ksiazka("Zbrodnia i kara", 1866);

    // Wyświetlanie początkowej informacji o książce
    ksiazka.przedstawKsiazke();

    // Zmiana tytułu książki za pomocą settera
    ksiazka.setTytul("Bracia Karamazow");

    // Zmiana roku wydania za pomocą settera
    ksiazka.setRokWydania(1880);

    // Wyświetlanie zaktualizowanej informacji o książce
    ksiazka.przedstawKsiazke();

    return 0;
}
