#ifndef TOGGLEBUTTON_H
#define TOGGLEBUTTON_H

#include <Global/Includes.h>

class ToggleButton : public QWidget
{
    Q_OBJECT
public:
    ToggleButton(const QString &iconUrl, uint layoutMargin=11, const QColor &iconColor=QColor("#FFFFFF"));
    void setIconColor(QColor color);
    void setActive(bool mode);
    bool isActive();
signals:
    void changed(bool state);


private:
    QHBoxLayout *layout = new QHBoxLayout();
    QLabel *_icon = new QLabel();
    QPixmap _pixmap;
    bool _active = false;

    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;


};

#endif // TOGGLEBUTTON_H