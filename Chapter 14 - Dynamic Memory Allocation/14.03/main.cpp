/*

Jumping into C++

Chapter 14
Practice Problem

3. Write a program that prints out the memory addresses of each element in a 2-dimensional
array. Check to see if the values printed out make sense to you based on the way I explained it
before.

*/


#include <iostream>

using namespace std;

int main() {

    int ** p_p_array = new int * [3];

    for (int i = 0; i < 3; ++i) {
        p_p_array[i] = new int [2];
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << &p_p_array[i][j] << "  ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; ++i) {
        delete [] p_p_array [i];
    }
    delete [] p_p_array;

}
