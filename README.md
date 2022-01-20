# Collatz

Author: Pieter Kok
Requirements:
- C++ 11

## Build

run
```
 $ make build
```

## Run

Two versions of the program exist, one threaded and one without. To run threaded, run
```
 $ collatz_threaded.exe [n]
```
The _n_ parameter is the number to calculate the steps to 1 for. The number of steps will be written to terminal. Note that no input checking is done.
The version without threading can be run using
```
 $ collatz.exe [n]
```