#include "Train.h"
#include <string.h>

Train::Train() : number(0), time(0) {
    station[0] = '\0';
}

Train::Train(char* st, int num, int t) : number(num), time(t) {
    strcpy_s(this->station, 10, st);
}

Train::Train(const char* st, int num, int t) : number(num), time(t) {
    strcpy_s(this->station, 10, st);
}
