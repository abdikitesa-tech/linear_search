#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int searchValue)
{
    for(int i = 0; i < size; i++){
        if(searchValue == array[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int a[] = {15, 23, 7, 45, 87, 16};
    int userValue;

    cout << "Enter an integer: " << endl;
    cin >> userValue;

    int result = linearSearch(a, 6, userValue);

    if(result >= 0)
    {
        cout << "the number " << a[result] << " was found at index "<< result << endl;
    }
    else{
        cout << "the number " << userValue << " was not found. " << endl;
    }
}