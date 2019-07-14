#include <stdio.h>

int main() {
    int entries;

    while(scanf("%d", &entries) != EOF) {
        int fallPosition = 0, measure, last;

        scanf("%d", &last);

        for(int i = 2; i <= entries; i++) {
            scanf("%d", &measure);
            
            if((measure < last) && (fallPosition == 0)) {
                fallPosition = i;
            }
            else {
                last = measure;
            }
        }

        printf("%d\n", fallPosition);
    }
    return (0);
}