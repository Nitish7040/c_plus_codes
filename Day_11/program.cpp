/* 
create a array using vector and the elements how many times it repeat

*/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 3, 5, 1, 2};

    unordered_map<int, int> frequencyMap;

    for (int num : arr) {
        frequencyMap[num]++;
    }

    for (const auto& element : frequencyMap) {
        cout << "Element " << element.first << " repeats " << element.second << " times" << endl;
    }

    return 0;
}
