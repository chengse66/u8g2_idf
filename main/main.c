#include <stdio.h>
#include "u8g2.h"
#include "u8x8.h"
void app_main(void)
{

    u8g2_t u8g2;

    u8g2Init(&u8g2);

    u8g2_SetFont(&u8g2, u8g2_font_helvB08_tr); // 设置英文字体
    u8g2_DrawStr(&u8g2, 0, 13, "IP:255.255.255.255");
    u8g2_DrawStr(&u8g2, 0, 32, "FreeRTOS#2023@Miao");
    u8g2_SendBuffer(&u8g2);		// 一定要发送buffer
}
