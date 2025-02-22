#ifndef NATIVEWINDOWPRIVATE_H
#define NATIVEWINDOWPRIVATE_H

#include "../NativeWindow.h"

class Q_DECL_EXPORT NativeWindowPrivate {
    Q_DECLARE_PUBLIC(NativeWindow)
public:
    NativeWindowPrivate();

    void init();

    NativeWindow *q_ptr;

    CWindowBarV2 *titleBar;
};

#endif // NATIVEWINDOWPRIVATE_H
