#include <string>
#include <vector>
#include "SuffixArray.h"
#include <algorithm>

using namespace std;

/**
 * Implement suffix_array() correctly
 */
vector<unsigned int> suffix_array(const string & s) {
    /* YOUR CODE HERE */
    vector<string> suffixes;
    vector<unsigned int> suffix_array;
    for(unsigned int index = 0; index < s.length(); index++) {
        string suffix = s.substr(index);
        suffixes.push_back(suffix);
    }
    sort(suffixes.begin(), suffixes.end());

    for(unsigned int si = 0; si < suffixes.size(); si++) {
        for(unsigned int index = 0; index < s.length(); index++) {
            if(s.substr(index) == suffixes[si]) {
                suffix_array.push_back(index);
            }
        }
    }

    return suffix_array;
}
