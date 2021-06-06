#include <iostream>
using namespace std;
//Sorting algorithms using numbers!!!!



void LetsSort(int a[])
{
    for(int i=0;i<10;i++)
    {
        for(int j=0; j<(10-i-1); j++)
        {
         if(a[j]>a[j+1])
         {
             int temp = a[j];
             a[j] =a[j+1];
             a[j+1] = temp;

         }


        }
    }

}


int main() {


    int array[10];
    cout <<"Enter any 10 integer but only int : "<<endl;
    for(int i=0;i<10;i++)
    {
        cin >> array[i];

    }
    cout <<"Before Sorting!" <<endl;
    for(int i=0;i<10;i++)
    {
        cout<<array[i] <<" ";

    }
    LetsSort(array);
    cout <<endl << "After Sorting!" <<endl;

    for(int i=0;i<10;i++)
    {
        cout <<array[i] << "  " ;

    }






    return 0;
}
