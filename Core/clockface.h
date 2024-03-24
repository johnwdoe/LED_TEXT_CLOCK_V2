/*
 * clockface.h
 *
 *  Created on: Mar 24, 2024
 *      Author: John William Doe
 */

#ifndef CLOCKFACE_H_
#define CLOCKFACE_H_

#include <stdint.h>
/*
 * инициализация дисплея (включая IO)
 */
void mxcontrol_init(void);

/*
 * установка яркости (скважности ШИМ)
 * 0 - минимум, 255 - максимум
 */
void mxcontrol_setbrightness (uint8_t b);

/*
 * автоматическая яркость
 * 0 - выключена
 * !0 - включена
 */
void mxcontrol_setbrightnessauto(uint8_t b);

/*
 * рисует точку цвета color с координатами x, y в буфере
 * x - слева направо
 * y - сверху вниз
 * color:	0 - выключен
 * 			!0 - включен
 */
void mxcontrol_makepoint(uint8_t x, uint8_t y, uint8_t color);

/*
 * рисует в буфере горизонтальную линию цвета color из точки (x, y) длиной lenght
 * линия рисуется слева-направо
 */
void mxcontrol_makehline(uint8_t x, uint8_t y, uint8_t lenght, uint8_t color);

/*
 * очищает буфер
 */
void mxcontrol_clear(void);

/*
 * копирует буфер в видеопамять (отображает)
 * mode задает способ копирования (эдакий спецэффект)
 */
void mxcontrol_draw(uint8_t mode);

/*
 * управение режимом мигания (blink)
 * 0 - включен
 * !0 - выключен
 */
void mxcontrol_blink(uint8_t b);

/*
 * устанавливает стартовые координаты дляпечати символа (левый верхний угол)
 */
void mxcontrol_setprintcoords(uint8_t x, uint8_t y);

/*
 * печать символа в буфер
 * c - индекс в алфавите (не код символа!!!)
 */
void mxcontrol_print(uint8_t c);

/*
 * то же самое,но с ASCII-кодом
 */
void mxcontrol_printchar (char c);

#endif /* CLOCKFACE_H_ */
