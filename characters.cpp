#include <iostream>
#include <string>
using namespace std;
string password;

int main()
{
  cout << "\nPlease enter the password: " ; //1. Wprowadzenie danych
  cin  >> password;
  cout << "\nYour password:  "<< password <<"  is "
       << password.size()<<" characters long\n"<< endl; //2. uzyskanie ilości elementów tablicy string
//---------------------------------------------------------------------------------------------------------------------------------------------------
  int dimension = password.size(); //rozmiar tablicy zależny od długości wprowadzonego stringa
  int element = 0;
  int tab_element[dimension];      // zliczenie wystąpień poszczególnych elementów
  string array[dimension];

  int largest = 0; //zmienna pomocnicza: największa liczba wystąpień
  string big ;   //zmienna pomocnicza: znak, który miał największą liczbę wystapień

  string tab_new[dimension];
  bool repeat = false;
  int counter = 0;

  for(int k = 0; k < dimension; k++){
    
        for(int i = 0; i < dimension; i++)
        {
            array[i] = password[i];  //przepisanie tablicy
            if (array[k] == array[i])
               {element++ ;} //zwiekszenie ilości danego elementu w przebiegu pętli
        }
        tab_element[k] = element;  //skopiowanie uzyskanej ilości danego 'k' elementu tablicy

        if (tab_element[k] > largest)
           {largest = tab_element[k];
           big = array[k];} //znalezienie najwiekszj ilości elementów

        element = 0; //wyzerowanie ilości elementów dla kolejnego 'k' przebiegu tablicy
//----------------------------------------------------------------------------------------------------------------------------------------------//
        for(int z = 0; z < dimension; z++)
        {
            if (tab_new[z] == array[k]){repeat = true;}
            //jeśli element w nowo utworzonej tablicy się powtarza oznacz go w celu pominięcia podczas wydruku i wyjdź z pętli
        }
        if(!repeat)
          //Jeśli element  nowej tablicy nie powtarza się to dodaj ka-ty element do nowej tablicy, wydrukuj go i zwiększ licznik  o 1
          {tab_new[counter] = array[k];
          cout<< "Element: "<< tab_new[counter]<<" ocurred " << tab_element[k]<<" times."<<endl;
          counter ++;}
        else {repeat = false;}
  }
  cout << "\nThe largest \'"<< big <<"\' occured: "<< largest <<" times"<<endl;
  cout << endl;
  cin  >> password;
  
return 0;
}
