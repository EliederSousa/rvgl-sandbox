/**
 * @file display.h
 * @author Elieder Sousa (eliedersousa@gmail.com)
 * @brief This file expose functions to get screen information and draw things.
 * @version 0.0.1
 * @date 21/10/24
 * 
 * @copyright Copyright (c) 2024
 * Distributed under the MIT license.
 * See <license.txt> file for details.
 * 
 */
#ifndef _SANDBOX_DISPLAY_H_
#define _SANDBOX_DISPLAY_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

/**
 * @brief This namespace expose functions to get screen information and draw things.
 */
namespace Display {
    /**
     * @brief Draws a text in the game screen, at the specific position, size and color. This uses the internal text draw method, and it's very fast.
     * 
     * @param x Horizontal coordinate to draw the text. The text will be draw from this point to the right.
     * @param y Vertical coordinate to draw the text. The text will be draw from this point to the bottom.
     * @param width Horizontal size of the text.
     * @param height Vertical size of the text.
     * @param color Text will be draw with this color. Use the return of Display::createColor() here.
     * @param text Text to be draw in the screen.
     * @return void 
     * 
     * @example Display::drawText(100, 100, 8, 16, Display::createColor(255, 255, 255, 255), )
     */
    EXPORT void drawText( float x, float y, float width, float height, unsigned int color, const char* text );

    /**
     * @brief Create a color using rgba values to be used in drawing functions.
     * 
     * @param red Red component. A value from 0 to 255. 
     * @param green Green component. A value from 0 to 255.
     * @param blue Blue component. A value from 0 to 255.
     * @param alpha The alpha component, aka transparency. A value from 0 to 255.
     * @return unsigned int A number that represents the color.
     * 
     * @example unsigned int yellow = Display::createColor(255, 255, 0, 255);
     */
    EXPORT unsigned int createColor(unsigned char red, unsigned char green,
                         unsigned char blue, unsigned char alpha);
}

#endif