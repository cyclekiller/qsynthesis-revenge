#ifndef BASICMANAGER_H
#define BASICMANAGER_H

#include <QObject>

class BasicManagerPrivate;

class BasicManager : public QObject {
    Q_OBJECT
    Q_DECLARE_PRIVATE(BasicManager)
public:
    BasicManager(QObject *parent = nullptr);
    ~BasicManager();

protected:
    BasicManager(BasicManagerPrivate &d, QObject *parent = nullptr);

    QScopedPointer<BasicManagerPrivate> d_ptr;
};

#endif // BASICMANAGER_H
