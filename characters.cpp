#include <iostream>
#include <string>
using namespace std;
string password;

int main()
{
  cout << "\nPlease enter the password: " ; // data entry
  cin  >> password;
  cout << "\nYour password:  "<< password <<"  is "
       << password.size()<<" characters long\n" << endl; // getting the string array size
//---------------------------------------------------------------------------------------------------------------------------------------------------
  int dimension = password.size(); // array size depending on the length of the string entered
  int element = 0;
  int tab_element[dimension];      // count of occurences of element
  string array[dimension];

  int largest = 0;  // auxiliary variable: the larges numbers of occurences
  string big ;      // auxiliary variable: character, which had the highest number of occurences

  string tab_new[dimension];
  bool repeat = false;
  int counter = 0;

  for(int k = 0; k < dimension; k++){

        for(int i = 0; i < dimension; i++)
        {
            array[i] = password[i];     // rewriting the array
            if (array[k] == array[i])
               {element++ ;}            // element increment

        }
        tab_element[k] = element;       // coppying the calculated amount of the given value k-element of the array

        if (tab_element[k] > largest)
           {largest = tab_element[k];
           big = array[k];}             // finding the most items

        element = 0;                    // reset the number of elements fot the k-table run

//----------------------------------------------------------------------------------------------------------------------------------------------//
        for(int z = 0; z < dimension; z++)
        {
            if (tab_new[z] == array[k]){repeat = true;}
            // if the element in the newly created array is repeated, mark it to skip the printout and exit the loop
        }
        if(!repeat)
            // if the element of the new array does not repeat, add each element to the new table, print it and increase the counter by 1
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
