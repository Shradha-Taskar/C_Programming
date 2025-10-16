#include<iostream.h>
using namespace std;

int main()
{
    int length = 0;
    int *Arr = NULL;

    cout<<"Enter the elements: \n";
    cin>>length;

    //step 1: Allocate the memory
    Arr = new int[length];
    if(Arr = NULL)
    {
        cout<<"Unable to locate the memory\n";
    }
    else 
    {
        cout<<"Memory get successfully allocated";
    }

    // step 2: use the memory

    // step 3: deallocate the memory
    delete Arr;
}

        