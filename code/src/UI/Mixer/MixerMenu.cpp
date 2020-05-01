#include "MixerMenu.h"
#include <Global/Utils.h>

MixerMenu::MixerMenu()
{
    // Añade su clase
    Utils::addWidgetClass(this,"centerMenu");

    // Asigna una altura mínima
    setMinimumHeight(100);

    // Lo esconde inicialmente
    hide();
}
