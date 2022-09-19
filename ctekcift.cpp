#include <stdio.h>

void tekcift(int x){
    if(x%2==0){
        printf("Cift");
    }
    else
        printf("Tek");
}

int main() {
    int sayi;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);

    tekcift(sayi);

    return 0;
}

---------

#include <stdio.h>

int main() {
    int sayi;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);

    if(sayi%2==0){
        printf("Cift");
    }
    else
        printf("Tek");
    return 0;
}
