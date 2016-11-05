#ifndef GUI_KEYCOMMANDINVOKER_H
#define GUI_KEYCOMMANDINVOKER_H

#include <QKeyEvent>
#include "gui/KeyCommandMap.h"

namespace gui
{

class KeyCommandInvoker
{
public:
    KeyCommandInvoker(KeyCommandMap& aMap);

    void onKeyPressed(const QKeyEvent* aEvent);
    void onKeyReleased(const QKeyEvent* aEvent);

private:
    KeyCommandMap& mMap;
    KeyCommandMap::KeyCommand* mLastCommand;
};

} // namespace gui

#endif // GUI_KEYCOMMANDINVOKER_H