/*
 * bitmap_symbol.hpp
 *
 *  Created on: Jul 16, 2021
 *      Author: EoH.Dai
 */

#ifndef INC_BITMAP_SYMBOL_HPP_
#define INC_BITMAP_SYMBOL_HPP_

const unsigned char DisconnectIcon [] = {
		0x19, 0x18,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xB8, 0xF0, 0xF8, 0xFC,
		0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xFE, 0xF7, 0x03, 0x00, 0x80, 0xC0, 0xEC, 0xFC, 0xF8, 0xF0,
		0xE0, 0xC0, 0x80, 0x06, 0x07, 0x03, 0x61, 0x70, 0x39, 0x1B, 0x0F, 0x0F, 0x1F, 0x3F, 0x37, 0x03,
		0x00, 0x00, 0xC0, 0xEF, 0x7F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x1F, 0x0E, 0x1C, 0x18,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char Up_Button [] = {
0x0F, 0x08,
0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFF, 0xFE, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x00
};

const unsigned char Down_Button [] = {
0x0F, 0x08,
0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00
};

const unsigned char Lock_Password [] = {
		0x19, 0x23 - 3,
		0x00, 0x00, 0x00, 0x80, 0xE0, 0xF0, 0xF8, 0xFC, 0xFC, 0x7E, 0x3E, 0x3E, 0x1E, 0x3E, 0x3E, 0x7E,
		0xFC, 0xFC, 0xF8, 0xF0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
		0xF0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x03, 0x03,
		0xC7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

#endif /* INC_BITMAP_SYMBOL_HPP_ */
