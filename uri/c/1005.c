#include <iostream>

using namespace std;

int main()
{

    float A, B, media;

    scanf("%f", &A);
    scanf("%f", &B);

    media = ((3.5 * A) + (7.5 * B)) / 11.0;

    printf("MEDIA = %.5f\n", media);

    return 0;
}