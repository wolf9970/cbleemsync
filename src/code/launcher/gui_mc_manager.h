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
    using GuiScreen::GuiScreen;

private:
    psmc memcard1, memcard2;
    SDL_Texture *mcGrid= nullptr;
};


#endif //AUTOBLEEM_GUI_GUI_MC_MANAGER_H
