#include <string>
#include <algorithm>

using namespace std;

string convertToLowercase(string string){
    std::transform(string.begin(), string.end(), string.begin(), ::tolower);

    return string;
}
