#include "include/raylib.h"

int main()
{

    InitWindow(400, 800, "tetris");

    SetTargetFPS(60);

    Color m_blue = {70, 77, 119, 255};
    while (!WindowShouldClose())
    {

        BeginDrawing();
        ClearBackground(m_blue);

        EndDrawing();
    }

    CloseWindow();
}