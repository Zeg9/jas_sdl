#include <SDL/SDL.h>
#include <SDL/SDL_Image.h>
#include <string>

#ifndef __BADGUY_H__
#define __BADGUY_H__

class Badguy
{
public:
    Badguy();
    ~Badguy();
    static void lvl1();
    static void lvl2();
    static void lvl3();
    static void lvl4();
};

#endif //__BADGUY_H__
