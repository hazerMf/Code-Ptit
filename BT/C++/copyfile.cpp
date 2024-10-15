#include <fstream>
#include <iostream>
using namespace std;
 
int main() {
   ifstream inputFile("PTIT.in");
   ofstream outputFile("PTIT.out");
    
   outputFile << inputFile.rdbuf();
    
   inputFile.close();
   outputFile.close();
    
}