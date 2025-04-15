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
    // create function mergeSort
    void mrrgeSort ( int low ,int high)
    {
        if (low >= high )// step 1
        {
            return // step 1.a

        }
        int mid =(low+ high )/ 2; //step 2
        // step 3
        // fungsi rekursi -memanggil diri sendiri 
        mergeSort( low, mid );// step 3.a
        mergeSort(mid +1,high);// step 3.b

        // step 4
        int i= low;//step 4.a
        int j= mid +1;// step 4.b
        int k= low ; // step 4.c
        
        while( i<= mid && j ,=high )// step 4.d
        {
            b[k]= arr [j] // 
            i++ ;
        }
        else
        {b[k] + arr [j];
            j++;
        }
    while (j<+ high )// step
     {   b[k] + arr [j];
        j++;
        k=k +1;
    }
    while (i<=mid)
    {
        b[k]= arr [i];

    }



 }
