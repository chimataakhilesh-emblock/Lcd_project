#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "lcd.h"

void app_main(void) {
    lcd_init();                  // Initialize LCD
    lcd_write_string("Akhilesh"); // Write "Akhilesh" to LCD

    while (1) {
        vTaskDelay(pdMS_TO_TICKS(300));  // wait 300ms
        lcd_write_command(0x18);         // Shift entire display left
    }
}