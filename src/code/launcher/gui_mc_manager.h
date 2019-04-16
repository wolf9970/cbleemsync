//
// Created by screemer on 2019-03-02.
//

#ifndef AUTOBLEEM_GUI_GUI_MC_MANAGER_H
#define AUTOBLEEM_GUI_GUI_MC_MANAGER_H

#include "../gui/gui_screen.h"
#include "../engine/psmc.h"
#include "../engine/psmcsave.h"
#include <string>

using namespace std;

class GuiMcManager : public GuiScreen {
public:
    string memcardFolder;
    string sonyStuffPath;
    void render();
    void loop();
    void loadAssets();
    void loadMemoryCard();
    void destroySDLAssets();
    using GuiScreen::GuiScreen;

private:
    psmc memcard1, memcard2;
    int mc1Array[3][5];
    int mc2Array[3][5];
    int dummy;
    const int mc1XStart = 150;
    const int mc2XStart = 1010;
    const int mcYStart = 150;
    const int pencilShiftX = 80;
    const int pencilShiftY = 80;
    int poscol;
    int posline;
    int posmc;
    int oldcol;
    int oldline;
    int oldmc;
    SDL_Rect pencilPos;
    SDL_Texture *mcGrid= nullptr;
    SDL_Texture *mcPencil= nullptr;
};


#endif //AUTOBLEEM_GUI_GUI_MC_MANAGER_H
