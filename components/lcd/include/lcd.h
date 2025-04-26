#ifndef LCD_H
#define LCD_H



// LCD Pin Definitions
#define LCD_RS     GPIO_NUM_4
#define LCD_EN     GPIO_NUM_5
#define LCD_D4     GPIO_NUM_18
#define LCD_D5     GPIO_NUM_19
#define LCD_D6     GPIO_NUM_21
#define LCD_D7     GPIO_NUM_22

// LCD Functions
void lcd_init(void);
void lcd_write_char(char c);
void lcd_write_string(const char* str);
void lcd_write_command(uint8_t cmd);

#endif 