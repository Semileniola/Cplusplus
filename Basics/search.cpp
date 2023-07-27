#include <iostream>

using namespace std;

int aray[8] = {1, 2, 3, 4, 5, 6, 7, 8};

void search (int aray[], int k, int size)
{
for (int i = 0 ; i <= aray[i] ; i++)
{
    if (aray[i] = k)
    {
        cout<<"data found : "<<aray[i];
    }
}

}

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>> num;
    search(aray, 8, num);

    return 0;
}