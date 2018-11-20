#include <iostream>
#include <string>

using namespace std;
string password;



int main()
{
  cout << "\nPlease enter the password: " ; //1. Wprowadzenie danych
  cin  >> password;
  cout << "\nYour password:  "<<password<<"  is "
       <<password.size()<<" characters long\n"<<endl; //2. uzyskanie ilości elementów tablicy string
//---------------------------------------------------------------------------------------------------------------------------------------------------
  int rozmiar = password.size(); //rozmiar tablicy zależny od długości wprowadzonego stringa
  int element=0;
  int tab_element[rozmiar];      // zliczenie wystąpień poszczególnych elementów
  string tablica[rozmiar];

  int largest=0; //zmienna pomocnicza: największa liczba wystąpień
  string big ;   //zmienna pomocnicza: znak, który miał największą liczbę wystapień

  string tab_new[rozmiar];
  bool powtorzenie=false;
  int licznik=0;

  for(int k=0; k < rozmiar; k++){

        for(int i = 0; i< rozmiar; i++)
        {
            tablica[i] = password[i];  //przepisanie tablicy
            if (tablica[k] == tablica[i])
               {element++ ;} //zwiekszenie ilości danego elementu w przebiegu pętli

        }
        tab_element[k]=element;  //skopiowanie uzyskanej ilości danego 'k' elementu tablicy

        if (tab_element[k] > largest)
           {largest=tab_element[k];
           big = tablica[k];} //znalezienie najwiekszj ilości elementów

        element=0; //wyzerowanie ilości elementów dla kolejnego 'k' przebiegu tablicy

//----------------------------------------------------------------------------------------------------------------------------------------------//
        for(int z=0; z < rozmiar; z++)
        {
            if (tab_new[z] == tablica[k]){powtorzenie = true;}
            //jeśli element w nowo utworzonej tablicy się powtarza oznacz go w celu pominięcia podczas wydruku i wyjdź z pętli
        }
        if(!powtorzenie)
          //Jeśli element  nowej tablicy nie powtarza się to dodaj ka-ty element do nowej tablicy, wydrukuj go i zwiększ licznik  o 1
          {tab_new[licznik] = tablica[k];
          cout<< "Element: "<< tab_new[licznik]<<" ocurred " <<tab_element[k]<<" times."<<endl;
          licznik++;}

        else {powtorzenie=false;}
  }

  cout<<"\nThe largest \'"<< big <<"\' occured: "<<largest<<" times"<<endl;
  cout<<endl;
  cin>> password;

return 0;
}

