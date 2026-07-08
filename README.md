# Memory Bandwidth Benchmark

A simple and efficient C++ tool designed to measure the effective memory bandwidth (RAM) of the system. This project was built to understand hardware architecture and memory transfer speeds, which is a fundamental concept for running AI inference engines.

## 🚀 How it Works
The program dynamically allocates two arrays of `1 GB` each in the memory. It then uses `std::memcpy` to transfer data from the source to the destination, timing the operation using `std::chrono` to calculate the exact bandwidth in GB/s.

## 🛠️ Prerequisites
To build and run this project, ensure you have the following installed on your Linux system:
* `g++` (C++ Compiler supporting C++17)
* `CMake` (version 3.10 or higher)
* `make`

## ⚙️ Build and Run Instructions
To compile and test the memory bandwidth, simply run the following commands in your terminal:

```bash
# 1. Clone the repository
git clone https://github.com/Mohamed-3M-Nouman/Memory-Bandwidth-Benchmark

# 2. Navigate to the project directory
cd Memory-Bandwidth-Benchmark/

# 3. Create a build directory and enter it
mkdir build && cd build

# 4. Generate the build system using CMake
cmake ..

# 5. Compile the code
make

# 6. Run the executable
./foo