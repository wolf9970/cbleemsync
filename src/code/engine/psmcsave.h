//
// Created by mggk on 23/02/19.
//

#include "vector"
#include <string>
#include <SDL2/SDL_system.h>

#ifndef PSC_BENCH_PSMCDIRECTORY_H
#define PSC_BENCH_PSMCDIRECTORY_H

using namespace std;

class psmcsave {
public:
    psmcsave();
    string gameName;
    void setDataBuffer(vector<unsigned char> buff);
    string getGameName();
    SDL_Texture *getGameIcon(SDL_Renderer *renderer);
    void setSaveAddress(int address);

private:
    vector<unsigned char> saveBuffer;
    int SAVE_ADDRESS;

    SDL_Texture *gameIcon(SDL_Renderer * renderer);
    vector<unsigned char>::const_iterator memBegin;
    string shiftJISToUTF8(const string &input);
    string fwToHw(string input);
};


#endif //PSC_BENCH_PSMCDIRECTORY_H
