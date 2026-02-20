#include "raylib.h"

int main() {
    InitWindow(1280, 720, "raylib template");
    SetTargetFPS(60);


    while(WindowShouldClose() == false) {

        BeginDrawing();
        ClearBackground(DARKBLUE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
