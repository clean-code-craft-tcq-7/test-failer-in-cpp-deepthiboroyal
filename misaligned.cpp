#include <iostream>
#include <assert.h>

int index_to_pair_number(int major_index, int minor_index) {
    return major_index * 5 + minor_index + 1;
}

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
     int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << index_to_pair_number(i, j) << " | " << majorColor[i] << " | " << minorColor[j] << "\n";
        }
    }
    return i * j;
}

void testPrintColorMap() {
    std::cout << "\nPrint color map test\n"; 
    int result = printColorMap();
    assert(result == 25);
    assert(index_to_pair_number(0,0) == 1);
    assert(index_to_pair_number(0,1) == 2);
    assert(index_to_pair_number(1,0) == 6);
    assert(index_to_pair_number(4,4) == 25);
    std::cout << "All is well (maybe!)\n";
}
