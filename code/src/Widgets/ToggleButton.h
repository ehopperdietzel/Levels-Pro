#ifndef TOGGLEBUTTON_H
#define TOGGLEBUTTON_H

#include <Widgets/Icon.h>
#include <QHBoxLayout>
#include <Global/Color.h>


class ToggleButton : public QWidget
{
    Q_OBJECT
public:
    ToggleButton(
            Icon *icon,
            unsigned int layoutMargin=11,
            const QSize &fixedSize = QSize(38,38),
            const QColor activeBackgroundColor = Color::theme.get("ToggleButtonDefaultActiveBackground"),
            const QColor inactiveBackgroundColor = Color::theme.get("ToggleButtonDefaultInactiveBackground"),
            const QColor activeIconColor = Color::theme.get("ToggleButtonDefaultActiveIcon"),
            const QColor inactiveIconColor = Color::theme.get("ToggleButtonDefaultInactiveIcon")
            );
    ToggleButton(
            unsigned int verticalMargin,
            Icon *icon,
            const QColor activeBackgroundColor = Color::theme.get("ToggleButtonDefaultActiveBackground"),
            const QColor inactiveBackgroundColor = Color::theme.get("ToggleButtonDefaultInactiveBackground"),
            const QColor activeIconColor = Color::theme.get("ToggleButtonDefaultActiveIcon"),
            const QColor inactiveIconColor = Color::theme.get("ToggleButtonDefaultInactiveIcon"));
    void setActive(bool mode);
    bool isActive();
    void setActiveIconColor(const QColor &color);
    void setActiveBackgroundColor(const QColor &color);
    void setInactiveIconColor(const QColor &color);
    void setInactiveBackgroundColor(const QColor &color);
signals:
    void changed(bool state);


private:
    QHBoxLayout *layout = new QHBoxLayout(this);
    Icon *_icon;
    bool _active = false;
    QColor _inactiveBackgroundColor;
    QColor _activeBackgroundColor;
    QColor _inactiveIconColor;
    QColor _activeIconColor;

    void setBackgroundColor(const QColor &color);

    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;


};

#endif // TOGGLEBUTTON_H
