#ifndef INTERFACES_H
#define INTERFACES_H

#include <QtPlugin>

class QImage;
class QPainter;
class QWidget;
class QPainterPath;
class QPoint;
class QRect;
class QString;
class QStringList;

class BrushInterface
{
public:
    virtual ~BrushInterface() {}

    virtual QStringList brushes() const = 0;
    virtual QRect mousePress(const QString &brush, QPainter &painter,
                             const QPoint &pos) = 0;
    virtual QRect mouseMove(const QString &brush, QPainter &painter,
                            const QPoint &oldPos, const QPoint &newPos) = 0;
    virtual QRect mouseRelease(const QString &brush, QPainter &painter,
                               const QPoint &pos) = 0;
};

class ShapeInterface
{
public:
    virtual ~ShapeInterface() {}

    virtual QStringList shapes() const = 0;
    virtual QPainterPath generateShape(const QString &shape,
                                       QWidget *parent) = 0;
};

class FilterInterface
{
public:
    virtual ~FilterInterface() {}

    virtual QStringList filters() const = 0;
    virtual QImage filterImage(const QString &filter, const QImage &image,
                               QWidget *parent) = 0;
};

#define BrushInterface_iid "org.qt-project.Qt.Examples.PlugAndPaint.BrushInterface"

Q_DECLARE_INTERFACE(BrushInterface, BrushInterface_iid)

#define ShapeInterface_iid  "org.qt-project.Qt.Examples.PlugAndPaint.ShapeInterface"

Q_DECLARE_INTERFACE(ShapeInterface, ShapeInterface_iid)
#define FilterInterface_iid "org.qt-project.Qt.Examples.PlugAndPaint.FilterInterface"

Q_DECLARE_INTERFACE(FilterInterface, FilterInterface_iid)

#endif
