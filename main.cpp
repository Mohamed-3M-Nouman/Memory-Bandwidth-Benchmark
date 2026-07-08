#include <iostream>
#include <vector>
#include <chrono>
#include <cstring>

int main() {
    const size_t SIZE = 1024ULL * 1024ULL * 1024ULL;

    std::vector<char> source(SIZE, 'A');
    std::vector<char> destination(SIZE, 'B');

    auto start_time = std::chrono::high_resolution_clock::now();

    std::memcpy(destination.data(), source.data(), SIZE);

    auto end_time = std::chrono::high_resolution_clock::now();
    
    std::chrono::duration<double> elapsed_seconds = end_time - start_time;

    double bandwidth = 1.0 / elapsed_seconds.count();

    std::cout << "> " << static_cast<int>(bandwidth) << " G/B\n";

    return 0;
}