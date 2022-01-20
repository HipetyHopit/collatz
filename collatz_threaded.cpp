#include <cstdlib>
#include <stdio.h>
#include <thread>

using namespace std;

void getCollatzSteps(long long n, int* result) {
    int count = 0;

    for (long long i = n; i > 1; count++) {

        if (i%2 == 0) {
            i /= 2;
        }
        else {
            i *= 3;
            i += 1;
        };
    };

    *result = count;

    return;
};

int main(int argc, char* argv[])
{
    long long n;
    int count;

    sscanf (argv[1], "%lld", &n);

    thread th1(getCollatzSteps, n, &count);
    th1.join();

    printf("%d\n", count);

    return 0;
};