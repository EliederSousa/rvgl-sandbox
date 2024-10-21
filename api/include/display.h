#ifndef _SANDBOX_DISPLAY_H_
#define _SANDBOX_DISPLAY_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

namespace Display {
    EXPORT void drawText( float x, float y, float width, float height, unsigned int color, const char* text );
    EXPORT unsigned int createColor(unsigned char red, unsigned char green,
                         unsigned char blue, unsigned char alpha);
}

#endif