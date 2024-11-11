
#include <iostream>
#include <vector>
using namespace std;
// use of advance
void adv(){
    vector<int> numbers = {10, 20, 30, 40, 50};
    
    auto it = numbers.begin();
    
    // Move iterator to the 3rd element (index 2)
    advance(it, 2);
    
    cout << *it << std::endl;  // Prints 30
    
}
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Looping from begin() to end()
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " "; // Dereference iterator to access element
    }
    adv();
    return 0;
}
