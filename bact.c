#include <stdio.h>

int main() {
    // Set up variables for the starting number of bacteria, the reproduction rate (in hours), and the number of hours to simulate
    int bacteria = 1;
    int reproduction_rate = 4;
    int hours = 602;

    // Simulate the population growth of the bacteria cells
    for (int i = 0; i < hours; i++) {
        if (i % reproduction_rate == 0) {
            // If it's time to reproduce, add a new cell
            bacteria++;
        }
    }

    // Print the result
    printf("After %d hours, there are %d bacteria cells\n", hours, bacteria);

    return 0;
}