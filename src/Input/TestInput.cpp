#include "TestInput.h"

TestInput::TestInput(Screen* context)
{
    this->context = (TestScreen*)context;
}

void TestInput::keyDown(int keycode)
{
    if(keycode == SDLK_DOWN)
       context->camera.y += context->camMoveY;

    if(keycode == SDLK_UP)
       context->camera.y -= context->camMoveY;

    if(keycode == SDLK_RIGHT)
       context->camera.x += context->camMoveX;

    if(keycode == SDLK_LEFT)
       context->camera.x -= context->camMoveX;

    context->cachedPlayerX = context->playerMO->x;
    context->cachedPlayerY = context->playerMO->y;

    if(keycode == SDLK_w)
       { context->playerMO->y -= context->playerSpeed; context->dir = UP; context->play = true; }

    if(keycode == SDLK_a)
       { context->playerMO->x -= context->playerSpeed; context->dir = LEFT; context->play = true; }

    if(keycode == SDLK_s)
       { context->playerMO->y += context->playerSpeed; context->dir = DOWN; context->play = true; }

    if(keycode == SDLK_d)
       { context->playerMO->x += context->playerSpeed; context->dir = RIGHT; context->play = true; }
}

void TestInput::keyUp(int keycode)
{
    if(keycode == SDLK_w || keycode == SDLK_a || keycode == SDLK_s || keycode == SDLK_d)
       context->play = false;
}

void TestInput::keyTyped(char character)
{
}

void TestInput::mouseMove(int x, int y, int xrel, int yrel)
{
}

void TestInput::mouseButtonDown(int x, int y, int clicks, int button)
{
}

void TestInput::mouseButtonUp(int x, int y, int clicks, int button)
{
}
