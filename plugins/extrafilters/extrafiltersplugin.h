#ifndef EXTRAFILTERSPLUGIN_H
#define EXTRAFILTERSPLUGIN_H

#include <interfaces.h>

#include <QObject>
#include <QtPlugin>
#include <QStringList>
#include <QImage>

class ExtraFiltersPlugin : public QObject, public FilterInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.Examples.PlugAndPaint.FilterInterface")
    Q_INTERFACES(FilterInterface)

public:
    QStringList filters() const Q_DECL_OVERRIDE;
    QImage filterImage(const QString &filter, const QImage &image,
                       QWidget *parent) Q_DECL_OVERRIDE;
};

#endif
