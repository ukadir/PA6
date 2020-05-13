#include <string>
#include "BWT.h"
#include <vector> 
#include <algorithm>
using namespace std;

/**
 * Implement bwt() correctly
 */
string bwt(const string & s) {
    /* YOUR CODE HERE */
    vector<string> rotations;
    string word = s;
    string result;

    for(unsigned int rotate = 0; rotate < s.length(); rotate++) {
        word = word.substr(word.size()-1) + word.substr(0, word.size()-1);
        rotations.push_back(word);
    }

    sort(rotations.begin(), rotations.end());

    vector<string>::iterator it;
    for(it = rotations.begin(); it < rotations.end(); it++) {
        result = result + (*it)[s.length() - 1];
    }

    return result;
}
