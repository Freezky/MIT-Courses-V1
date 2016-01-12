//
//  main.cpp
//  Test
//
//  Created by Kevyn Bele-Binda on 15-12-27.
//  Copyright © 2015 Kevyn Bele-Binda. All rights reserved.
//

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int numItems;
    cout << "how many items? ";
    cin >> numItems;
    int *arr = new int[numItems];
    for (int i = 0; i < numItems; ++i) {
        cout << "enter item " << i << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < numItems; ++i) {
        cout << arr[i] << endl;
    }
    delete[] arr;
}