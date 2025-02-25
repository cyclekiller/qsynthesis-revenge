#ifndef CCOUPLETABSPLITTER_H
#define CCOUPLETABSPLITTER_H

#include <QSplitter>

#include "qsframework_global.h"

class QSFRAMEWORK_API CCoupleTabSplitter : public QSplitter {
    Q_OBJECT
public:
    explicit CCoupleTabSplitter(QWidget *parent = nullptr);
    explicit CCoupleTabSplitter(Qt::Orientation orient, QWidget *parent = nullptr);
    ~CCoupleTabSplitter();

signals:
};

#endif // CCOUPLETABSPLITTER_H
