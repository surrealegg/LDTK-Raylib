#include <LDtkLoader/World.hpp>
#include <raylib.h>

int main()
{
    InitWindow(800, 500, "LDtkLoader - Raylib");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("LDtkLoader - Raylib: Hello World!", 20, 20, 20, LIGHTGRAY);
        EndDrawing();
    }
    CloseWindow();
    return (0);
}
