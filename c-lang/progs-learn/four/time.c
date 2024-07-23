#include <stdio.h>
#include <time.h>
#include <string.h>

int main() {
    time_t tictoc;
    struct tm *today;
    char morning[2] = "AM";
    char day[3];
    
    char arr[7][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    
    time(&tictoc);
    today = localtime(&tictoc);
    if ((*today).tm_hour > 13)
    {
        morning[0] = 'P';
        (*today).tm_hour -= 12;
    }
    printf(" %02d:%02d:%02d %s %s\n",
            (*today).tm_hour,
            (*today).tm_min,
            (*today).tm_sec,
            morning,
            arr[ (*today).tm_wday ]);
    return 0;
}
