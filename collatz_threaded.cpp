#include <cstdlib>
#include <stdio.h>
#include <thread>

using namespace std;

/*
The problem does not run very long for even quite large inputs. 
Problems with managing large integerr arithmetic will crop up long 
before execution time becomes a problem, so more than one thread 
is not really useful and will actually hinder execution.
*/
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
