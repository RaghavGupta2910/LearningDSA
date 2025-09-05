#include<iostream>
using namespace std;

template<typename T>
int search(T arr[], int n, T key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

int main(){

    int intArr[] = {1, 2, 3, 4, 5};
    float floatArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArr[] = {'a', 'b', 'c', 'd', 'e'};

    int intKey = 3;
    float floatKey = 4.4;
    char charKey = 'c';

    cout << "Index of " << intKey << " in intArr: " << search(intArr, 5, intKey) << endl;
    cout << "Index of " << floatKey << " in floatArr: " << search(floatArr, 5, floatKey) << endl;
    cout << "Index of '" << charKey << "' in charArr: " << search(charArr, 5, charKey) << endl;

    return 0;

}