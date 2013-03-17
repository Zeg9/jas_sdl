#include <SDL/SDL.h>
#include <SDL/SDL_Image.h>
#include <string>
#ifndef __VIDEO_H__
#define __VIDEO_H__

class Video
{
public:
    Video();
    ~Video();
    SDL_Surface* loadImg(std::string filename);
    static void onScreen(SDL_Surface* imageToShow);
};

static SDL_Surface* screen;

#endif //__VIDEO_H__
