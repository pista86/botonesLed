#include <stdint.h>
 

typedef enum{
    BUTTON_DOWN,
    BUTTON_UP
}status_t;

typedef struct{
    uint8_t button;
    status_t status;
}button_status_t;

button_status_t pushEvent(button_status_t buttonStatus);
