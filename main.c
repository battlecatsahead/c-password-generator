#include <stdio.h>
#include <stdlib.h>



int caps0 = 0;
int lowercase0 = 0;
int numbers = 0;

void main() {

int i, n;
time_t t;
n = 0;
srand((unsigned) time(&t));
printf("how many characters?: ");
scanf("%d", &n);
printf("caps? 1/y or 2/n");
scanf("%d", &caps0);
printf("lowercase? 1/y or 2/n");
scanf("%d", &lowercase0);
printf("numbers? 1/y or 2/y");
scanf("%d", &numbers);

for( i = 0 ; i < n ; i++ ) {
    char caps = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 26];
    char lowercase = "abcdefghijklmnopqrstuvwxyz"[rand() % 26];
        if(numbers == 1) {
            printf("%d", rand() % 50);
        }

        if(caps0 == 1) {
            printf("%c", &caps);
        }
        if(lowercase0 == 1) {
            printf("%c", &lowercase);
        }
    }     
}