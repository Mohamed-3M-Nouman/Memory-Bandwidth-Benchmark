#include <iostream>
#include <vector>
#include <chrono>
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
    const size_t SIZE = 1024ULL * 1024ULL * 1024ULL;

    vector<char> source(SIZE, 'A');
    vector<char> destination(SIZE, 'B');

    auto start_time = chrono::high_resolution_clock::now();

    memcpy(destination.data(), source.data(), SIZE);

    auto end_time = chrono::high_resolution_clock::now();
    
    chrono::duration<double> elapsed_seconds = end_time - start_time;

    double bandwidth = (SIZE / 1e9) / elapsed_seconds.count();

    cout << "> " << fixed << setprecision(2) << bandwidth << " G/B\n";

    return 0;
}