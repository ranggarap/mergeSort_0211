#include <iostream>
using namespace std;

//craete main array &temporary
int arr [20], b[20];
//n is size of array
int n;

// n is array input size
int n;

 void input ()
 {
while (true)
    { 
        cout << "masukkan panjang elemen array :";
        cin >> n;

        if (n< + 20)
        {
            break;
        }
        else
        {
            cout << " \nMaksimal panjang array adalah 20";

        }
    }
    cout << " \n -----------"<< endl ;
    cout << "\ninputkan isi element array" << endl;
    cout << " \n---------------"<< endl;

    for (int i=0; i< n; i++)
    {
        cout << "array index ke -"<< i<< ":";
        cin >> arr [i];
    }




 }
