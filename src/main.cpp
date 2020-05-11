#include "Editor.h"

int main(int, char**) {
    auto* editor = new Editor;

    editor->initialized();

    // Main loop
    while ( !editor->isRunning() ) {
        editor->update();
        editor->render();
    }

    editor->destory();

    return 0;
}