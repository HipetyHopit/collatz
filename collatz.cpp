#include <cstdlib>
#include <stdio.h>

using namespace std;

int getCollatzSteps(long long n) {
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

    return count;
};

int main(int argc, char* argv[])
{
    long long n;
    int count;

    sscanf (argv[1], "%lld", &n);
    count = getCollatzSteps(n);
    printf("%d\n", count);

    return 0;
};