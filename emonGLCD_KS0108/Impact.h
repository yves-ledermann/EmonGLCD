

/*
 *
 * Impact
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Impact.h
 * Date                : 24.12.2011
 * Font size in bytes  : 18560
 * Font width          : 10
 * Font height         : 22
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef IMPACT_H
#define IMPACT_H

#define IMPACT_WIDTH 10
#define IMPACT_HEIGHT 22

static uint8_t Impact[] PROGMEM = {
    0x48, 0x80, // size
    0x0A, // width
    0x16, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x04, 0x07, 0x0D, 0x0A, 0x0F, 0x0D, 0x03, 0x06, 0x06, 
    0x05, 0x0B, 0x03, 0x06, 0x03, 0x07, 0x0A, 0x07, 0x09, 0x0A, 
    0x0B, 0x0A, 0x0A, 0x09, 0x0A, 0x0A, 0x03, 0x03, 0x0A, 0x0A, 
    0x0A, 0x0B, 0x11, 0x0B, 0x0A, 0x0A, 0x0A, 0x08, 0x08, 0x0A, 
    0x0A, 0x04, 0x06, 0x0B, 0x07, 0x0E, 0x0A, 0x0A, 0x09, 0x0A, 
    0x0A, 0x09, 0x0A, 0x0A, 0x0B, 0x11, 0x0B, 0x0A, 0x09, 0x05, 
    0x09, 0x05, 0x0B, 0x0C, 0x05, 0x09, 0x09, 0x09, 0x09, 0x09, 
    0x06, 0x09, 0x0A, 0x04, 0x05, 0x0A, 0x04, 0x0F, 0x0A, 0x09, 
    0x09, 0x09, 0x07, 0x08, 0x07, 0x0A, 0x09, 0x0F, 0x09, 0x0A, 
    0x08, 0x07, 0x02, 0x07, 0x0A, 0x0B, 
    
    // font data
    0xFC, 0xFC, 0xFC, 0xFC, 0x1F, 0x7F, 0x7F, 0x1F, 0x1C, 0x1C, 0x1C, 0x1C, // 33
    0x3C, 0x7C, 0x3C, 0x00, 0x3C, 0x7C, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x00, 0x00, 0x00, 0xE0, 0xF8, 0x38, 0x00, 0x00, 0x00, 0xE0, 0xF8, 0x18, 0x00, 0x63, 0x63, 0xFF, 0xFF, 0x67, 0x63, 0x63, 0x63, 0xFB, 0xFF, 0x67, 0x63, 0x63, 0x00, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, // 35
    0xF0, 0xF8, 0xFC, 0xFC, 0x1E, 0x1E, 0x7C, 0x7C, 0x78, 0x70, 0xE0, 0xE3, 0xE3, 0xE7, 0x0F, 0x0F, 0xFE, 0xFC, 0xFC, 0xF0, 0x04, 0x0C, 0x1C, 0x1C, 0x7C, 0x7C, 0x1C, 0x1C, 0x0C, 0x04, // 36
    0xF8, 0xFC, 0x0C, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0x3C, 0x0C, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x0C, 0x0F, 0x87, 0xE0, 0x7C, 0x1F, 0x07, 0x01, 0xFC, 0xFE, 0x06, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x18, 0x1C, 0x04, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x1C, 0x18, 0x1C, 0x0C, // 37
    0x00, 0x80, 0xC0, 0xE0, 0xE0, 0x60, 0x60, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0xE0, 0xF3, 0xF7, 0xFF, 0x3F, 0x1C, 0x7C, 0xFF, 0xFF, 0xF3, 0xC0, 0xE0, 0x60, 0x04, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x0C, 0x1C, 0x1C, 0x1C, 0x18, // 38
    0x3C, 0x7C, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 39
    0xF8, 0xFC, 0xFC, 0xFC, 0x0C, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x0C, 0x1C, 0x1C, 0x1C, 0x18, 0x18, // 40
    0x0C, 0x0C, 0xFC, 0xFC, 0xFC, 0xF8, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x18, 0x18, 0x1C, 0x1C, 0x1C, 0x0C, // 41
    0x18, 0x78, 0x3C, 0x78, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x0E, 0x0E, 0x0E, 0xFF, 0xFF, 0xFF, 0x0E, 0x0E, 0x0E, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x3C, 0x3C, // 44
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, // 46
    0x00, 0x00, 0x00, 0xE0, 0xFE, 0xFE, 0x1E, 0x80, 0xF0, 0xFF, 0xFF, 0x0F, 0x01, 0x00, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, // 47
    0xF0, 0xF8, 0xFC, 0xFC, 0x1C, 0x1C, 0xFC, 0xFC, 0xF8, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x04, // 48
    0x60, 0x60, 0x70, 0xF0, 0xF8, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, // 49
    0xF0, 0xF8, 0xFC, 0x1C, 0x1C, 0xFC, 0xFC, 0xF8, 0xF0, 0x00, 0xC0, 0xF0, 0xFC, 0xFE, 0x3F, 0x1F, 0x07, 0x01, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, // 50
    0x78, 0x78, 0x7C, 0x7C, 0x1C, 0x1C, 0xFC, 0xFC, 0xF8, 0xF0, 0xF0, 0xF0, 0xF0, 0xF7, 0x07, 0x07, 0xFF, 0xFF, 0xFD, 0xFD, 0x04, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x04, // 51
    0x00, 0x00, 0xC0, 0xF0, 0xFC, 0x3C, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0xF8, 0xFE, 0xFF, 0xF7, 0xF1, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, // 52
    0xFC, 0xFC, 0xFC, 0xFC, 0x1C, 0x9C, 0x9C, 0x9C, 0x9C, 0x1C, 0xE7, 0xE7, 0xE7, 0xE7, 0x03, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x04, // 53
    0xF0, 0xF8, 0xFC, 0xFC, 0x1C, 0x1C, 0x7C, 0x7C, 0x78, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x07, 0xFF, 0xFF, 0xFE, 0xFE, 0x04, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x04, // 54
    0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xFC, 0xFC, 0xFC, 0x7C, 0x00, 0x00, 0xC0, 0xF8, 0xFF, 0xFF, 0x3F, 0x07, 0x00, 0x00, 0x18, 0x1C, 0x1C, 0x1C, 0x04, 0x00, 0x00, 0x00, // 55
    0xF0, 0xF8, 0xFC, 0xFC, 0x1C, 0x1C, 0xFC, 0xFC, 0xF8, 0xF0, 0xF9, 0xFD, 0xFF, 0xFF, 0x07, 0x07, 0xFF, 0xFF, 0xFD, 0xF9, 0x04, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x04, // 56
    0xF0, 0xF8, 0xFC, 0xFC, 0x1C, 0x1C, 0xFC, 0xFC, 0xF8, 0xF0, 0xCF, 0xCF, 0xDF, 0xDF, 0x1C, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x04, // 57
    0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x1C, 0x1C, 0x1C, // 58
    0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x5C, 0x3C, 0x3C, // 59
    0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xE0, 0x0E, 0x1F, 0x1F, 0x1F, 0x3B, 0x3B, 0x71, 0x71, 0x71, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 60
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0xE0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x71, 0x71, 0x71, 0x3B, 0x3B, 0x1F, 0x1F, 0x1F, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0xF0, 0xF8, 0xF8, 0xFC, 0x1C, 0x1C, 0x1C, 0xFC, 0xF8, 0xF8, 0xE0, 0x7C, 0x7C, 0x7C, 0x7C, 0x18, 0x38, 0x38, 0x3F, 0x3F, 0x1F, 0x0F, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 63
    0x00, 0xC0, 0xE0, 0x70, 0xB8, 0xD8, 0xEC, 0x6C, 0x6C, 0xCC, 0xEC, 0xEC, 0x18, 0x38, 0x70, 0xE0, 0x80, 0x3F, 0xFF, 0xC0, 0x3E, 0x7F, 0xE1, 0xC0, 0xC0, 0x60, 0x7F, 0xFF, 0xC1, 0xC0, 0x60, 0x70, 0x3F, 0x0F, 0x00, 0x00, 0x0C, 0x0C, 0x18, 0x18, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x18, 0x18, 0x0C, 0x0C, 0x04, // 64
    0x00, 0x80, 0xFC, 0xFC, 0xFC, 0x1C, 0xFC, 0xFC, 0xFC, 0x80, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xE7, 0xE0, 0xE7, 0xFF, 0xFF, 0xFF, 0xE0, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, // 65
    0xFC, 0xFC, 0xFC, 0xFC, 0x1C, 0x1C, 0xFC, 0xFC, 0xF8, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x07, 0xFF, 0xFF, 0xFD, 0xF9, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, // 66
    0xF0, 0xF8, 0xFC, 0xFC, 0x1C, 0x1C, 0xFC, 0xFC, 0xF8, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xF9, 0xF9, 0xF9, 0xF9, 0x04, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x0C, 0x00, // 67
    0xFC, 0xFC, 0xFC, 0xFC, 0x1C, 0x1C, 0xFC, 0xFC, 0xF8, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, // 68
    0xFC, 0xFC, 0xFC, 0xFC, 0x1C, 0x1C, 0x1C, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x0E, 0x0E, 0x0E, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, // 69
    0xFC, 0xFC, 0xFC, 0xFC, 0x1C, 0x1C, 0x1C, 0x1C, 0xFF, 0xFF, 0xFF, 0xFF, 0x0E, 0x0E, 0x0E, 0x0E, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, // 70
    0xF0, 0xF8, 0xFC, 0xFC, 0x1C, 0x1C, 0xFC, 0xFC, 0xF8, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x1C, 0xFC, 0xFC, 0xFC, 0xFC, 0x04, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x1C, 0x1C, // 71
    0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x0E, 0x0E, 0xFF, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, // 72
    0xFC, 0xFC, 0xFC, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x1C, 0x1C, // 73
    0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, // 74
    0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0xC0, 0xF0, 0xFC, 0xFC, 0x3C, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x7F, 0xFF, 0xFB, 0xE0, 0x80, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x04, 0x1C, 0x1C, 0x1C, 0x18, // 75
    0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, // 76
    0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xE0, 0x00, 0xE0, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x7F, 0xFF, 0xFC, 0x7F, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x1C, 0x1C, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, // 77
    0xFC, 0xFC, 0xFC, 0xFC, 0xF0, 0x80, 0x00, 0xFC, 0xFC, 0xFC, 0xFF, 0xFF, 0xFF, 0x07, 0x3F, 0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x04, 0x1C, 0x1C, 0x1C, 0x1C, // 78
    0xF0, 0xF8, 0xFC, 0xFC, 0x1C, 0x1C, 0xFC, 0xFC, 0xF8, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x04, // 79
    0xFC, 0xFC, 0xFC, 0xFC, 0x1C, 0x1C, 0xFC, 0xF8, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x0E, 0x0E, 0x0F, 0x0F, 0x07, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0xF0, 0xF8, 0xFC, 0xFC, 0x1C, 0x1C, 0xFC, 0xF8, 0xF8, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x0C, 0x1C, 0x1C, 0x3C, 0x7C, 0x7C, 0x64, 0x64, 0x60, // 81
    0xFC, 0xFC, 0xFC, 0xFC, 0x1C, 0x1C, 0xFC, 0xFC, 0xF8, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x07, 0xFF, 0xFF, 0xFD, 0xF9, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, // 82
    0xF0, 0xF8, 0xFC, 0xFC, 0x1C, 0x7C, 0x7C, 0x78, 0x70, 0xE1, 0xE3, 0xE7, 0xEF, 0x1F, 0xFF, 0xFE, 0xFC, 0xF8, 0x04, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x04, // 83
    0x1C, 0x1C, 0x1C, 0xFC, 0xFC, 0xFC, 0xFC, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, // 84
    0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x04, // 85
    0x3C, 0xFC, 0xFC, 0xFC, 0xC0, 0x00, 0xC0, 0xFC, 0xFC, 0xFC, 0x3C, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, // 86
    0x3C, 0xFC, 0xFC, 0xFC, 0xC0, 0x00, 0xE0, 0xFC, 0xFC, 0xFC, 0xE0, 0x00, 0xC0, 0xFC, 0xFC, 0xFC, 0x3C, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0x7F, 0x01, 0x7F, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, // 87
    0x0C, 0x3C, 0xFC, 0xFC, 0xE0, 0x00, 0xE0, 0xFC, 0xFC, 0x3C, 0x0C, 0x00, 0xC0, 0xF0, 0xFF, 0x7F, 0x0F, 0x7F, 0xFF, 0xF0, 0xC0, 0x00, 0x18, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x18, // 88
    0x0C, 0x7C, 0xFC, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0x7C, 0x0C, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, // 89
    0x1C, 0x1C, 0x1C, 0x1C, 0xDC, 0xFC, 0xFC, 0xFC, 0x3C, 0x00, 0xE0, 0xF8, 0xFF, 0xFF, 0x3F, 0x07, 0x01, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, // 90
    0xFC, 0xFC, 0xFC, 0xFC, 0x1C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, // 91
    0x06, 0x3E, 0xFE, 0xFC, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x7F, 0xFF, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x1C, 0x1C, 0x18, // 92
    0x1C, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, // 93
    0x00, 0x80, 0xE0, 0xF8, 0x7C, 0x1C, 0x7C, 0xF8, 0xE0, 0x80, 0x00, 0x02, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 95
    0x01, 0x03, 0x07, 0x06, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 96
    0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0x80, 0xE7, 0xF7, 0xF7, 0x38, 0x18, 0xFF, 0xFF, 0xFF, 0xFF, 0x0C, 0x1C, 0x1C, 0x1C, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, // 97
    0xFC, 0xFC, 0xFC, 0xFC, 0xC0, 0xE0, 0xE0, 0xE0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x1C, 0x1C, 0x1C, 0x0C, // 98
    0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xE3, 0xE3, 0xE3, 0x04, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x04, // 99
    0xC0, 0xE0, 0xE0, 0xE0, 0xC0, 0xFC, 0xFC, 0xFC, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x0C, 0x1C, 0x1C, 0x1C, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, // 100
    0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x0C, 0xEF, 0xEF, 0xEF, 0xEF, 0x04, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x04, // 101
    0x60, 0xF8, 0xFC, 0xFC, 0xEC, 0x6C, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, // 102
    0xC0, 0xE0, 0xE0, 0xE0, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0x7F, 0xFF, 0xFF, 0xFF, 0x60, 0xFF, 0xFF, 0xFF, 0xFF, 0x18, 0x38, 0x78, 0x78, 0x70, 0x7C, 0x7C, 0x3C, 0x1C, // 103
    0xFC, 0xFC, 0xFC, 0xFC, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, // 104
    0xEC, 0xEC, 0xEC, 0xEC, 0xFF, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x1C, 0x1C, // 105
    0x00, 0xEC, 0xEC, 0xEC, 0xEC, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x60, 0x7C, 0x7C, 0x7C, 0x3C, // 106
    0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x80, 0xE0, 0xE0, 0xE0, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0xFF, 0xFF, 0xFB, 0xC0, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x18, // 107
    0xFC, 0xFC, 0xFC, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x1C, 0x1C, // 108
    0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, // 109
    0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, // 110
    0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x04, // 111
    0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xE0, 0xE0, 0xE0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x7C, 0x7C, 0x7C, 0x7C, 0x0C, 0x1C, 0x1C, 0x1C, 0x0C, // 112
    0xC0, 0xE0, 0xE0, 0xE0, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x0C, 0x1C, 0x1C, 0x1C, 0x0C, 0x7C, 0x7C, 0x7C, 0x7C, // 113
    0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x01, 0x01, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, // 114
    0xC0, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0x80, 0xC7, 0xCF, 0x1F, 0x1F, 0xFC, 0xF8, 0xF3, 0xE3, 0x04, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x0C, // 115
    0x60, 0xF8, 0xF8, 0xF8, 0xF8, 0x60, 0x60, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x0C, 0x1C, 0x1C, 0x1C, 0x18, 0x18, // 116
    0xE0, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0C, 0x1C, 0x1C, 0x1C, 0x1C, // 117
    0xE0, 0xE0, 0xE0, 0xE0, 0x00, 0xE0, 0xE0, 0xE0, 0xE0, 0x01, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, // 118
    0xE0, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0xE0, 0x00, 0x3F, 0xFF, 0xFF, 0xC0, 0xFE, 0xFF, 0x07, 0xFF, 0xFE, 0xC0, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, // 119
    0x60, 0xE0, 0xE0, 0xE0, 0x00, 0xE0, 0xE0, 0xE0, 0x60, 0x00, 0xC3, 0xFF, 0xFF, 0x18, 0xFF, 0xFF, 0xC3, 0x00, 0x18, 0x1C, 0x1C, 0x1C, 0x00, 0x1C, 0x1C, 0x1C, 0x18, // 120
    0x60, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x60, 0x00, 0x07, 0x7F, 0xFF, 0xFE, 0x80, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x60, 0x60, 0x7C, 0x7C, 0x7C, 0x7C, 0x3C, 0x00, 0x00, // 121
    0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x80, 0xE0, 0xF8, 0xFE, 0x7F, 0x1F, 0x07, 0x01, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, // 122
    0x00, 0x00, 0xF8, 0xFC, 0xFC, 0x1C, 0x1C, 0x1C, 0x3E, 0xFF, 0xF7, 0xE3, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x7C, 0xFC, 0xE0, 0xE0, // 123
    0xFC, 0xFC, 0xFF, 0xFF, 0xFC, 0xFC, // 124
    0x1C, 0x1C, 0xFC, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xE3, 0xF7, 0xFF, 0x3E, 0x1C, 0xE0, 0xE0, 0xFC, 0x7C, 0x3C, 0x00, 0x00, // 125
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x07, 0x07, 0x07, 0x07, 0x0E, 0x0E, 0x0E, 0x0E, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xE0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x1C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1C // 127
    
};

#endif
