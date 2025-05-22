# include <farm.h>
# include <iostream>
# include <vector>
# include <algorithm>
# include <fstream>
# include <string>

using namespace std;


vector<int> farm::readDataFromFile(const string& filename) {
    ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return {};
    }
    int n;
    inputFile >> n;

    vector<int> weights(n);
    for (int i = 0; i < n; ++i) {
        inputFile >> weights.at(i);
    }
    inputFile.close();
    #ifdef DEBUG    //print the vector
    cout << "Read file:" << endl;
    for (int i = 0; i < weights.size(); ++i) {
        cout << weights[i] << " ";
    }
    cout << endl;
    #endif
    return weights;
}

void farm::sortVector(vector<int>& weights) {
    sort(weights.begin(), weights.end());
    #ifdef DEBUG
    cout << "Sorted vector:" << endl;
    for (int i = 0; i < weights.size(); ++i) {
        cout << weights[i] << " ";
    }
    cout << endl;
    #endif
}

int farm::addTopFive(vector<int> weights) {
    int sum = 0;
    int n = weights.size()-1;
    for (int i = n; i > n-5 ; i--) {
        #ifdef DEBUG
        cout << "Adding " << weights.at(i) << " to sum" << endl;
        #endif
        sum += weights.at(i);
    }
    return sum;
}