#ifndef BASICTOOLSPLUGIN_H
#define BASICTOOLSPLUGIN_H

#include <interfaces.h>

#include <QRect>
#include <QObject>
#include <QtPlugin>
#include <QStringList>
#include <QPainterPath>
#include <QImage>

class BasicToolsPlugin : public QObject,
                         public BrushInterface,
                         public ShapeInterface,
                         public FilterInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.Examples.PlugAndPaint.BrushInterface")
    Q_INTERFACES(BrushInterface ShapeInterface FilterInterface)

public:
    // BrushInterface
    QStringList brushes() const Q_DECL_OVERRIDE;
    QRect mousePress(const QString &brush, QPainter &painter,
                     const QPoint &pos) Q_DECL_OVERRIDE;
    QRect mouseMove(const QString &brush, QPainter &painter,
                    const QPoint &oldPos, const QPoint &newPos) Q_DECL_OVERRIDE;
    QRect mouseRelease(const QString &brush, QPainter &painter,
                       const QPoint &pos) Q_DECL_OVERRIDE;

    // ShapeInterface
    QStringList shapes() const Q_DECL_OVERRIDE;
    QPainterPath generateShape(const QString &shape, QWidget *parent) Q_DECL_OVERRIDE;

    // FilterInterface
    QStringList filters() const Q_DECL_OVERRIDE;
    QImage filterImage(const QString &filter, const QImage &image,
                       QWidget *parent) Q_DECL_OVERRIDE;
};

#endif
