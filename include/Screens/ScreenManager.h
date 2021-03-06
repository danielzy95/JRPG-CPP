#ifndef SCREENMANAGER_H
#define SCREENMANAGER_H

#include "Screen.h"
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>

using namespace std;

class ScreenManager
{
    public:
        ScreenManager(string windowTitle, int w, int h);

        SDL_Window* window;
        SDL_Renderer* renderer;

        void run();

        void exit();

        void setCurrentScreen(Screen* screen);

        void setWindowTitle(string title);
        void setWindowWidth(int w);
        void setWindowHeight(int h);

        string getWindowTitle();
        int getWindowWidth();
        int getWindowHeight();

        private:
        Screen* currentScreen;

        string windowTitle;
        int windowWidth, windowHeight;

        bool done;

        void handleInput();
        void update();
        void render();
        void dispose();

};

#endif // SCREENMANAGER_H
