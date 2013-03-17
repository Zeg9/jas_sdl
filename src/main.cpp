#include <cstdlib>
#include <iostream>
#include <SDL/SDL.h>
#include <SDL/SDL_Image.h>
#include "Video.h"

using namespace std;

int main(int argc, char *argv[])
{
    bool mainmenu=1;
    int level=1;
    int maxlevel=1;
    
    Video d;
    while(mainmenu==true)
    {    
        SDL_Surface* start;
        start = d.loadImg("../data/start.png");
        d.onScreen(start);
        
        
        
        
    }
    SDL_Quit();
    return 0;
}
