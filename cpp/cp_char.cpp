#include <iostream>
#include <fstream>

int main() {
    std::ifstream infile("input.txt");
    std::ofstream outfile("output.txt");
    char ch;
    while (infile.get(ch)) {
        outfile.put(ch);
    }
    infile.close();
    outfile.close();
    return 0;
}
