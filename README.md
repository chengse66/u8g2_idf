| Supported Targets | ESP32 | ESP32-C2 | ESP32-C3 | ESP32-C5 | ESP32-C6 | ESP32-H2 | ESP32-P4 | ESP32-S2 | ESP32-S3 |
| ----------------- | ----- | -------- | -------- | -------- | -------- | -------- | -------- | -------- | -------- |

参考修改链接:https://blog.csdn.net/u011493046/article/details/129132038\
只添加了一款字体用于英文以及数字显示: u8g2_font_helvB08_tr\
需要新增字体需要在 u8g2_fonts.c 里参考u8g2_font_helvB08_tr 新增定义\
需要在include/u8g2.h 中新增\
```
extern const uint8_t u8g2_font_helvB12_tr[] U8G2_FONT_SECTION("u8g2_font_helvB12_tr");
extern const uint8_t u8g2_font_helvB08_tr[] U8G2_FONT_SECTION("u8g2_font_helvB08_tr");
/* end font list */

/*==========================================*/
/* u8g font mapping, might be incomplete.... */

#define u8g_font_helvB12r   u8g2_font_helvB12_tr
#define u8g2_font_helvB08_tr u8g2_font_helvB08_tr
```
原始作者地址: https://github.com/olikraus/u8g2?tab=License-1-ov-file#readme\
