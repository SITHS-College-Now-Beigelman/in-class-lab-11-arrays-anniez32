// Annie Zhao
// Lab 11: Arrays
// November 12, 2024

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {

    // Part 1 and Part 2: 
    /*
    // Part 1:
    // Declares an array named "alpha" with 50 componnets of the type double
    const int ARRAY_SIZE = 50;
   	double alpha[ARRAY_SIZE];

    // Part 1a:
    int i=0; // Variable used for counting the array components
    for (i =0; i <25; i++) { // First 25 components

        alpha[i] = pow(i,2); // Square of the index value

    }   
    for (i=25; i <= 50; i++) { // Last 25 components

        alpha[i] = i*3;
    }
    
    // Part 2: Outputting the array
    i = 0; // Set value of i back to 0
    while (i<10) { // First 10 elements
        cout << alpha[i] << " ";
        i++;
    }
    cout << " " << endl;

    while (i >=10 && i <20) { // Next 10 elements
        cout << alpha[i] << " ";
        i++;
    }
    cout << " " << endl;

    while (i >=20 && i <30) { // Next 10
        cout << alpha[i] << " ";
        i++;
    }
    cout << " " << endl;

    while (i >=30 && i <40) { // Next 10
        cout << alpha[i] << " ";
        i++;
    }
    cout << " " << endl;

    while (i >=40 && i <50) { // Last 10
        cout << alpha[i] << " ";
        i++;
    }
    cout << " " << endl;
    */



    // Part 3, Part 4, Part 5:
    /*
    // Part 3: Array filled with random numbers between 1 and 100

    srand(time(0));

    const int ARRAY_SIZE = 50;
   	double alpha[ARRAY_SIZE];

    int i=0; // Variable used for counting the array components

    // Fill each component in the array with a random number
    for (i =0; i <50; i++) {
        alpha[i] = rand()%101;
    }
    
    // Outputting the array
    i = 0; // Set value of i back to 0
    cout << "Elements: " << endl; // Title for following list of elements
    while (i<10) { // First 10 elements
        cout << alpha[i] << " ";
        i++;
    }
    cout << " " << endl;

    while (i >=10 && i <20) { // Next 10 elements
        cout << alpha[i] << " ";
        i++;
    }
    cout << " " << endl;

    while (i >=20 && i <30) { // Next 10
        cout << alpha[i] << " ";
        i++;
    }
    cout << " " << endl;

    while (i >=30 && i <40) { // Next 10
        cout << alpha[i] << " ";
        i++;
    }
    cout << " " << endl;

    while (i >=40 && i <50) { // Last 10
        cout << alpha[i] << " ";
        i++;
    }
    cout << " " << endl;

    // Prints average of the elements:
    // Variables
    i = 0; // Set i back to 0
    int total = 0; // Sum of all the elements
    int hundred = 0; // Counter for how many times the number is 100

    // Loop to add all 50 elements
    while (i != 49) {
        total += alpha[i]; // Add element to the total
        i++;
        if (alpha[i] == 100) // Add to the counter of any of the elements are equal to 100
            hundred++; // Add to counter by one
    }
    cout << "The average of the elements is: " << total/50 << endl;
    cout << hundred << " elements are EXACTLY equal to 100. " << endl;
*/
    return 0;
}
// Outputs:
// Part 1, 2:
/*
0 1 4 9 16 25 36 49 64 81  
100 121 144 169 196 225 256 289 324 361
400 441 484 529 576 75 78 81 84 87
90 93 96 99 102 105 108 111 114 117
120 123 126 129 132 135 138 141 144 147
*/
// Part 3, 4, 5:
/*
Elements: 
10 58 86 99 67 79 4 94 18 32
90 79 71 16 99 22 43 79 41 18
31 78 45 76 100 72 81 65 9 4
99 7 60 71 12 47 10 67 15 26
93 22 58 55 12 92 83 6 63 99
The average of the elements is: 51
1 elements are EXACTLY equal to 100.
*/