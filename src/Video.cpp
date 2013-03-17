#include <SDL/SDL.h>
#include <SDL/SDL_Image.h>
#include <string>
#include "Video.h"

Video::Video()
{
    SDL_Init(SDL_INIT_EVERYTHING);
    screen = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE);                      
}

Video::~Video()
{
    SDL_FreeSurface(screen);            
}
SDL_Surface* Video::loadImg(std::string filename)
{
    SDL_Surface* loadedImage = NULL;
    SDL_Surface* optimizedImage = NULL;
    loadedImage = IMG_Load( filename.c_str() ); 
    if( loadedImage != NULL ) 
    {
        optimizedImage = SDL_DisplayFormat( loadedImage );
        SDL_FreeSurface( loadedImage ); 
    } 
    return optimizedImage;
}
void onScreen(SDL_Surface* imageToShow)
{
     
    //SDL_BlitSurface(imageToShow, NULL, screen, NULL);
}
