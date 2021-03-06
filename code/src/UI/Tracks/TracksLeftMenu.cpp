#include "TracksLeftMenu.h"
#include <QVariant>
#include <QScrollBar>

/*!
    \class TracksLeftMenu
    \brief The TracksLeftMenu class...

    \inheaderfile UI/Tracks/TracksLeftMenu.h
    \ingroup UI
    \inmodule UI

    \inherits QFrame
*/


TracksLeftMenu::TracksLeftMenu(TracksMenu *tracksMenu)
{
    // Stores the tracks menu reference
    menu = tracksMenu;

    // Allows background color
    setAttribute(Qt::WA_StyledBackground, true);
    setProperty("class","tracksLeftMenu");
    setMaximumWidth(300);

    // Configure vertical layout
    verticalLayout->setMargin(0);
    verticalLayout->setSpacing(0);

    // Adds the buttons to the topbar
    topBar->horizontalLayout->addWidget(addTrackBtn);
    topBar->horizontalLayout->addWidget(duplicateTrackBtn);
    topBar->horizontalLayout->addStretch(1);
    topBar->horizontalLayout->addWidget(globalTracksBtn);
    globalTracksBtn->setActiveIconColor(Qt::white);

    // Configure topbar
    topBar->setFixedHeight(36);
    topBar->horizontalLayout->setContentsMargins(6,0,6,0);
    topBar->horizontalLayout->setSpacing(6);

    // Configure scroll area
    tracksScrollArea->setWidget(tracksWidget);
    tracksScrollArea->setWidgetResizable(true);
    tracksScrollArea->setProperty("class","scrollArea");
    tracksScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    tracksScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    tracksScrollArea->verticalScrollBar()->setSingleStep(3);


    // Configure tracks vertical layout
    tracksLayout->setMargin(0);
    tracksLayout->setSpacing(0);
    tracksLayout->addSpacing(60);
    tracksLayout->addStretch(1);

    // Adds the topbar and the scroll area to the layout
    verticalLayout->addWidget(topBar);
    verticalLayout->addWidget(tracksScrollArea);

}

void TracksLeftMenu::addTrack(TrackController *newTrackController)
{
    tracksLayout->insertWidget(0,newTrackController);
}
