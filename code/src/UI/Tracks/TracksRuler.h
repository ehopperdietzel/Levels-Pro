#ifndef TRACKSRULER_H
#define TRACKSRULER_H

#include <QScrollArea>
#include <QVBoxLayout>
#include <Widgets/Ruler.h>

class TracksRuler : public QScrollArea
{
    Q_OBJECT
public:
    explicit TracksRuler();

    // Scroll content widget
    QWidget *scrollWidget = new QWidget();
    QVBoxLayout *rulersLayout = new QVBoxLayout(scrollWidget);

    // Rulers
    Ruler *topRuler = new Ruler(Ruler::RulerType::NumberRuler);
    Ruler *bottomRuler = new Ruler(Ruler::RulerType::MarksRuler);

signals:

};

#endif // TRACKSRULER_H