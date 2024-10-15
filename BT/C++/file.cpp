#include <bits/stdc++.h> 
using namespace std;

int main() {
    ifstream inputFile("data.in");
    ofstream outputFile("data.out");
    
    int in;
    inputFile >> in;
    outputFile << in;
    
    inputFile.close();
    outputFile.close();

    ifstream finalFile("data.out");
    int out;
    finalFile >> out;
    cout << out;
    finalFile.close();
}