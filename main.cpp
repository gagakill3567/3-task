#include <stdio.h>
#include "Train.h"

int main()
{
    Train tr1("Тверь", 2, 14);
    Train tr2("Москва", 3, 15);
    
    tr1.number = 10;
    tr2.number = 10;

    printf("Станция: %s, Номер: %d, Время: %d\n", tr1.station, tr1.number, tr1.time);
    printf("Станция: %s, Номер: %d, Время: %d\n", tr2.station, tr2.number, tr2.time);

    return 0;
}
