<!-- qevent.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 23:28:11 2017 (+0800)
;; Last-Updated: 一 12月 25 00:09:10 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qevent


```cpp
// QInputEvent : public QEvent

public:
    QInputEvent(Type type, Qt::KeyboardModifiers modifiers = Qt::NoModifier);
    ~QInputEvent();
    inline Qt::KeyboardModifiers modifiers() const { return modState; }
    inline void setModifiers(Qt::KeyboardModifiers amodifiers) { modState = amodifiers; }
```


```cpp
// QMouseEvent : public QInputEvent

public:
    QMouseEvent(Type type, const QPoint &pos, Qt::MouseButton button,
                Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers);
    QMouseEvent(Type type, const QPoint &pos, const QPoint &globalPos,
                Qt::MouseButton button, Qt::MouseButtons buttons,
                Qt::KeyboardModifiers modifiers);
    ~QMouseEvent();

    inline const QPoint &pos() const { return p; }
    inline const QPoint &globalPos() const { return g; }
    inline int x() const { return p.x(); }
    inline int y() const { return p.y(); }
    inline int globalX() const { return g.x(); }
    inline int globalY() const { return g.y(); }
    inline Qt::MouseButton button() const { return b; }
    inline Qt::MouseButtons buttons() const { return mouseState; }

    static QMouseEvent *createExtendedMouseEvent(Type type, const QPointF &pos,
                                                 const QPoint &globalPos, Qt::MouseButton button,
                                                 Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers);
    inline bool hasExtendedInfo() const { return reinterpret_cast<const QMouseEvent *>(d) == this; }
    QPointF posF() const;

#ifdef QT3_SUPPORT
    QT3_SUPPORT_CONSTRUCTOR QMouseEvent(Type type, const QPoint &pos, Qt::ButtonState button, int state);
    QT3_SUPPORT_CONSTRUCTOR QMouseEvent(Type type, const QPoint &pos, const QPoint &globalPos,
                                      Qt::ButtonState button, int state);
    inline QT3_SUPPORT Qt::ButtonState state() const
    { return Qt::ButtonState((mouseState^b)|int(modifiers())); }
    inline QT3_SUPPORT Qt::ButtonState stateAfter() const
    { return Qt::ButtonState(int(mouseState)|int(modifiers())); }
#endif
```


```cpp
// QHoverEvent : public QEvent

public:
    QHoverEvent(Type type, const QPoint &pos, const QPoint &oldPos);
    ~QHoverEvent();

    inline const QPoint &pos() const { return p; }
    inline const QPoint &oldPos() const { return op; }
```


```cpp
#ifndef QT_NO_WHEELEVENT
// QWheelEvent : public QInputEvent

public:
    QWheelEvent(const QPoint &pos, int delta,
                Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers,
                Qt::Orientation orient = Qt::Vertical);
    QWheelEvent(const QPoint &pos, const QPoint& globalPos, int delta,
                Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers,
                Qt::Orientation orient = Qt::Vertical);
    ~QWheelEvent();

    inline int delta() const { return d; }
    inline const QPoint &pos() const { return p; }
    inline const QPoint &globalPos()   const { return g; }
    inline int x() const { return p.x(); }
    inline int y() const { return p.y(); }
    inline int globalX() const { return g.x(); }
    inline int globalY() const { return g.y(); }

    inline Qt::MouseButtons buttons() const { return mouseState; }
    Qt::Orientation orientation() const { return o; }

#ifdef QT3_SUPPORT
    QT3_SUPPORT_CONSTRUCTOR QWheelEvent(const QPoint &pos, int delta, int state,
                                      Qt::Orientation orient = Qt::Vertical);
    QT3_SUPPORT_CONSTRUCTOR QWheelEvent(const QPoint &pos, const QPoint& globalPos, int delta, int state,
                                      Qt::Orientation orient = Qt::Vertical);
    inline QT3_SUPPORT Qt::ButtonState state() const
    { return static_cast<Qt::ButtonState>(int(buttons())|int(modifiers())); }
#endif

#endif
```


```cpp
#ifndef QT_NO_TABLETEVENT
// QTabletEvent : public QInputEvent

public:
    enum TabletDevice { NoDevice, Puck, Stylus, Airbrush, FourDMouse,
                        XFreeEraser /*internal*/, RotationStylus };
    enum PointerType { UnknownPointer, Pen, Cursor, Eraser };
    QTabletEvent(Type t, const QPoint &pos, const QPoint &globalPos, const QPointF &hiResGlobalPos,
                 int device, int pointerType, qreal pressure, int xTilt, int yTilt,
                 qreal tangentialPressure, qreal rotation, int z,
                 Qt::KeyboardModifiers keyState, qint64 uniqueID);
    ~QTabletEvent();

    inline const QPoint &pos() const { return mPos; }
    inline const QPoint &globalPos() const { return mGPos; }
    inline const QPointF &hiResGlobalPos() const { return mHiResGlobalPos; }
    inline int x() const { return mPos.x(); }
    inline int y() const { return mPos.y(); }
    inline int globalX() const { return mGPos.x(); }
    inline int globalY() const { return mGPos.y(); }
    inline qreal hiResGlobalX() const { return mHiResGlobalPos.x(); }
    inline qreal hiResGlobalY() const { return mHiResGlobalPos.y(); }
    inline TabletDevice device() const { return TabletDevice(mDev); }
    inline PointerType pointerType() const { return PointerType(mPointerType); }
    inline qint64 uniqueId() const { return mUnique; }
    inline qreal pressure() const { return mPress; }
    inline int z() const { return mZ; }
    inline qreal tangentialPressure() const { return mTangential; }
    inline qreal rotation() const { return mRot; }
    inline int xTilt() const { return mXT; }
    inline int yTilt() const { return mYT; }

#endif // QT_NO_TABLETEVENT
```


```cpp
// QKeyEvent : public QInputEvent


public:
    QKeyEvent(Type type, int key, Qt::KeyboardModifiers modifiers, const QString& text = QString(),
              bool autorep = false, ushort count = 1);
    ~QKeyEvent();

    int key() const { return k; }
#ifndef QT_NO_SHORTCUT
    bool matches(QKeySequence::StandardKey key) const;
#endif
    Qt::KeyboardModifiers modifiers() const;
    inline QString text() const { return txt; }
    inline bool isAutoRepeat() const { return autor; }
    inline int count() const { return int(c); }

    // Functions for the extended key event information
    static QKeyEvent *createExtendedKeyEvent(Type type, int key, Qt::KeyboardModifiers modifiers,
                                             quint32 nativeScanCode, quint32 nativeVirtualKey,
                                             quint32 nativeModifiers,
                                             const QString& text = QString(), bool autorep = false,
                                             ushort count = 1);
    inline bool hasExtendedInfo() const { return reinterpret_cast<const QKeyEvent*>(d) == this; }
    quint32 nativeScanCode() const;
    quint32 nativeVirtualKey() const;
    quint32 nativeModifiers() const;

#ifdef QT3_SUPPORT
    inline QT3_SUPPORT_CONSTRUCTOR QKeyEvent(Type type, int key, int /*ascii*/,
                                           int modifiers, const QString& text = QString(),
                                           bool autorep = false, ushort count = 1)
        : QInputEvent(type, Qt::KeyboardModifiers(modifiers & (int)Qt::KeyButtonMask)), txt(text), k(key),
          c(count), autor(autorep)
    {
        if (key >= Qt::Key_Back && key <= Qt::Key_MediaLast)
            ignore();
    }
    inline QT3_SUPPORT int ascii() const
    { return (txt.length() ? txt.unicode()->toLatin1() : 0); }
    inline QT3_SUPPORT Qt::ButtonState state() const { return Qt::ButtonState(QInputEvent::modifiers()); }
    inline QT3_SUPPORT Qt::ButtonState stateAfter() const { return Qt::ButtonState(modifiers()); }
#endif
```


```cpp
// QFocusEvent : public QEvent


public:
    QFocusEvent(Type type, Qt::FocusReason reason=Qt::OtherFocusReason);
    ~QFocusEvent();

    inline bool gotFocus() const { return type() == FocusIn; }
    inline bool lostFocus() const { return type() == FocusOut; }

#ifdef QT3_SUPPORT
    enum Reason { Mouse=Qt::MouseFocusReason, Tab=Qt::TabFocusReason,
                  Backtab=Qt::BacktabFocusReason, MenuBar=Qt::MenuBarFocusReason,
                  ActiveWindow=Qt::ActiveWindowFocusReason, Other=Qt::OtherFocusReason,
                  Popup=Qt::PopupFocusReason, Shortcut=Qt::ShortcutFocusReason };
#endif
    Qt::FocusReason reason();
    Qt::FocusReason reason() const;
```


```cpp
// QPaintEvent : public QEvent

public:
    QPaintEvent(const QRegion& paintRegion);
    QPaintEvent(const QRect &paintRect);
    ~QPaintEvent();

    inline const QRect &rect() const { return m_rect; }
    inline const QRegion &region() const { return m_region; }

#ifdef QT3_SUPPORT
    QT3_SUPPORT_CONSTRUCTOR QPaintEvent(const QRegion &paintRegion, const QRect &paintRect);
    inline QT3_SUPPORT bool erased() const { return m_erased; }
    inline QT3_SUPPORT void setErased(bool b) { m_erased = b; }
#endif
```


```cpp
// QUpdateLaterEvent : public QEvent

public:
    QUpdateLaterEvent(const QRegion& paintRegion);
    ~QUpdateLaterEvent();

    inline const QRegion &region() const { return m_region; }
```


```cpp
// QMoveEvent : public QEvent

public:
    QMoveEvent(const QPoint &pos, const QPoint &oldPos);
    ~QMoveEvent();

    inline const QPoint &pos() const { return p; }
    inline const QPoint &oldPos() const { return oldp;}
```


```cpp
// QResizeEvent : public QEvent

public:
    QResizeEvent(const QSize &size, const QSize &oldSize);
    ~QResizeEvent();

    inline const QSize &size() const { return s; }
    inline const QSize &oldSize()const { return olds;}
```


```cpp
// QCloseEvent : public QEvent

public:
    QCloseEvent();
    ~QCloseEvent();
```


```cpp
// QIconDragEvent : public QEvent

public:
    QIconDragEvent();
    ~QIconDragEvent();
```


```cpp
// QShowEvent : public QEvent

public:
    QShowEvent();
    ~QShowEvent();
```


```cpp
// QHideEvent : public QEvent

public:
    QHideEvent();
    ~QHideEvent();
```


```cpp
#ifndef QT_NO_CONTEXTMENU
// QContextMenuEvent : public QInputEvent

public:
    enum Reason { Mouse, Keyboard, Other };

    QContextMenuEvent(Reason reason, const QPoint &pos, const QPoint &globalPos,
                      Qt::KeyboardModifiers modifiers);
    QContextMenuEvent(Reason reason, const QPoint &pos, const QPoint &globalPos);
    QContextMenuEvent(Reason reason, const QPoint &pos);
    ~QContextMenuEvent();

    inline int x() const { return p.x(); }
    inline int y() const { return p.y(); }
    inline int globalX() const { return gp.x(); }
    inline int globalY() const { return gp.y(); }

    inline const QPoint& pos() const { return p; }
    inline const QPoint& globalPos() const { return gp; }

    inline Reason reason() const { return Reason(reas); }

#ifdef QT3_SUPPORT
    QT3_SUPPORT_CONSTRUCTOR QContextMenuEvent(Reason reason, const QPoint &pos, const QPoint &globalPos, int);
    QT3_SUPPORT_CONSTRUCTOR QContextMenuEvent(Reason reason, const QPoint &pos, int);

    QT3_SUPPORT Qt::ButtonState state() const;
#endif
	
#endif // QT_NO_CONTEXTMENU
```


```cpp
#ifndef QT_NO_INPUTMETHOD
// QInputMethodEvent : public QEvent

public:
    enum AttributeType {
       TextFormat,
       Cursor,
       Language,
       Ruby,
       Selection
    };
    class Attribute {
    public:
        Attribute(AttributeType t, int s, int l, QVariant val) : type(t), start(s), length(l), value(val) {}
        AttributeType type;

        int start;
        int length;
        QVariant value;
    };
    QInputMethodEvent();
    QInputMethodEvent(const QString &preeditText, const QList<Attribute> &attributes);
    void setCommitString(const QString &commitString, int replaceFrom = 0, int replaceLength = 0);

    inline const QList<Attribute> &attributes() const { return attrs; }
    inline const QString &preeditString() const { return preedit; }

    inline const QString &commitString() const { return commit; }
    inline int replacementStart() const { return replace_from; }
    inline int replacementLength() const { return replace_length; }

    QInputMethodEvent(const QInputMethodEvent &other);

#endif // QT_NO_INPUTMETHOD
```



```cpp
// QDropEvent : public QEvent , public QMimeSource

public:
    QDropEvent(const QPoint& pos, Qt::DropActions actions, const QMimeData *data,
               Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Type type = Drop);
    ~QDropEvent();

    inline const QPoint &pos() const { return p; }
    inline Qt::MouseButtons mouseButtons() const { return mouseState; }
    inline Qt::KeyboardModifiers keyboardModifiers() const { return modState; }

    inline Qt::DropActions possibleActions() const { return act; }
    inline Qt::DropAction proposedAction() const { return default_action; }
    inline void acceptProposedAction() { drop_action = default_action; accept(); }

    inline Qt::DropAction dropAction() const { return drop_action; }
    void setDropAction(Qt::DropAction action);

    QWidget* source() const;
    inline const QMimeData *mimeData() const { return mdata; }

// QT3_SUPPORT
    const char* format(int n = 0) const;
    QByteArray encodedData(const char*) const;
    bool provides(const char*) const;
// END QT3_SUPPORT
#ifdef QT3_SUPPORT
    inline void accept() { QEvent::accept(); }
    inline QT3_SUPPORT void accept(bool y) { setAccepted(y); }
    inline QT3_SUPPORT QByteArray data(const char* f) const { return encodedData(f); }

    enum Action { Copy, Link, Move, Private, UserAction = Private };
    QT3_SUPPORT Action action() const;
    inline QT3_SUPPORT void acceptAction(bool y = true)  { if (y) { drop_action = default_action; accept(); } }
    inline QT3_SUPPORT void setPoint(const QPoint& np) { p = np; }
#endif

```


```cpp
// QDragMoveEvent : public QDropEvent

public:
    QDragMoveEvent(const QPoint &pos, Qt::DropActions actions, const QMimeData *data,
                   Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Type type = DragMove);
    ~QDragMoveEvent();

    inline QRect answerRect() const { return rect; }

    inline void accept() { QDropEvent::accept(); }
    inline void ignore() { QDropEvent::ignore(); }

    inline void accept(const QRect & r) { accept(); rect = r; }
    inline void ignore(const QRect & r) { ignore(); rect = r; }

#ifdef QT3_SUPPORT
    inline QT3_SUPPORT void accept(bool y) { setAccepted(y); }
#endif
```


```cpp
// QDragEnterEvent : public QDragMoveEvent

public:
    QDragEnterEvent(const QPoint &pos, Qt::DropActions actions, const QMimeData *data,
                    Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers);
    ~QDragEnterEvent();
```


```cpp
// QDragResponseEvent : public QEvent

public:
    QDragResponseEvent(bool accepted);
    ~QDragResponseEvent();

    inline bool dragAccepted() const { return a; }
```


```cpp
// QDragLeaveEvent : public QEvent

public:
    QDragLeaveEvent();
    ~QDragLeaveEvent();
```


```cpp
// QHelpEvent : public QEvent

public:
    QHelpEvent(Type type, const QPoint &pos, const QPoint &globalPos);
    ~QHelpEvent();

    inline int x() const { return p.x(); }
    inline int y() const { return p.y(); }
    inline int globalX() const { return gp.x(); }
    inline int globalY() const { return gp.y(); }

    inline const QPoint& pos()  const { return p; }
    inline const QPoint& globalPos() const { return gp; }
```


```cpp
#ifndef QT_NO_STATUSTIP
// QStatusTipEvent : public QEvent

public:
    QStatusTipEvent(const QString &tip);
    ~QStatusTipEvent();

    inline QString tip() const { return s; }
#endif
```


```cpp
#ifndef QT_NO_WHATSTHIS
// QWhatsThisClickedEvent : public QEvent

public:
    QWhatsThisClickedEvent(const QString &href);
    ~QWhatsThisClickedEvent();

    inline QString href() const { return s; }

#endif
```


```cpp
#ifndef QT_NO_ACTION
// QActionEvent : public QEvent

public:
    QActionEvent(int type, QAction *action, QAction *before = 0);
    ~QActionEvent();

    inline QAction *action() const { return act; }
    inline QAction *before() const { return bef; }

#endif
```


```cpp
// QFileOpenEvent : public QEvent

public:
    QFileOpenEvent(const QString &file);
    QFileOpenEvent(const QUrl &url);
#ifdef Q_OS_SYMBIAN
    QFileOpenEvent(const RFile &fileHandle);
#endif
    ~QFileOpenEvent();

    inline QString file() const { return f; }
    QUrl url() const;
    bool openFile(QFile &file, QIODevice::OpenMode flags) const;
```


```cpp
#ifndef QT_NO_TOOLBAR
// QToolBarChangeEvent : public QEvent

public:
    QToolBarChangeEvent(bool t);
    ~QToolBarChangeEvent();

    inline bool toggle() const { return tog; }

#endif
```


```cpp
#ifndef QT_NO_SHORTCUT
// QShortcutEvent : public QEvent

public:
    QShortcutEvent(const QKeySequence &key, int id, bool ambiguous = false);
    ~QShortcutEvent();

    inline const QKeySequence &key() { return sequence; }
    inline const QKeySequence &key() const { return sequence; }
    inline int shortcutId() { return sid; }
    inline int shortcutId() const { return sid; }
    inline bool isAmbiguous() { return ambig; }
    inline bool isAmbiguous() const { return ambig; }

#endif
```


```cpp
#ifndef QT_NO_CLIPBOARD
// QClipboardEvent : public QEvent

public:
    QClipboardEvent(QEventPrivate *data);
    ~QClipboardEvent();

    QEventPrivate *data() { return d; }

#endif
```


```cpp
// QWindowStateChangeEvent: public QEvent

public:
    QWindowStateChangeEvent(Qt::WindowStates aOldState);
    QWindowStateChangeEvent(Qt::WindowStates aOldState, bool isOverride);
    ~QWindowStateChangeEvent();

    inline Qt::WindowStates oldState() const { return ostate; }
    bool isOverride() const;
```


```cpp
#ifdef QT3_SUPPORT
// QMenubarUpdatedEvent: public QEvent

public:
    QMenubarUpdatedEvent(QMenuBar * const menBar);
    inline QMenuBar *menuBar() { return m_menuBar; }

#endif
```


```cpp
// QTouchEvent : public QInputEvent

public:
    class Q_GUI_EXPORT TouchPoint
    {
    public:
        TouchPoint(int id = -1);
        TouchPoint(const QTouchEvent::TouchPoint &other);
        ~TouchPoint();

        int id() const;

        Qt::TouchPointState state() const;
        bool isPrimary() const;

        QPointF pos() const;
        QPointF startPos() const;
        QPointF lastPos() const;

        QPointF scenePos() const;
        QPointF startScenePos() const;
        QPointF lastScenePos() const;

        QPointF screenPos() const;
        QPointF startScreenPos() const;
        QPointF lastScreenPos() const;

        QPointF normalizedPos() const;
        QPointF startNormalizedPos() const;
        QPointF lastNormalizedPos() const;

        QRectF rect() const;
        QRectF sceneRect() const;
        QRectF screenRect() const;

        qreal pressure() const;

        // internal
        void setId(int id);
        void setState(Qt::TouchPointStates state);
        void setPos(const QPointF &pos);
        void setScenePos(const QPointF &scenePos);
        void setScreenPos(const QPointF &screenPos);
        void setNormalizedPos(const QPointF &normalizedPos);
        void setStartPos(const QPointF &startPos);
        void setStartScenePos(const QPointF &startScenePos);
        void setStartScreenPos(const QPointF &startScreenPos);
        void setStartNormalizedPos(const QPointF &startNormalizedPos);
        void setLastPos(const QPointF &lastPos);
        void setLastScenePos(const QPointF &lastScenePos);
        void setLastScreenPos(const QPointF &lastScreenPos);
        void setLastNormalizedPos(const QPointF &lastNormalizedPos);
        void setRect(const QRectF &rect);
        void setSceneRect(const QRectF &sceneRect);
        void setScreenRect(const QRectF &screenRect);
        void setPressure(qreal pressure);
        QTouchEvent::TouchPoint &operator=(const QTouchEvent::TouchPoint &other);

    private:
        QTouchEventTouchPointPrivate *d;
        friend class QApplication;
        friend class QApplicationPrivate;
    };

    enum DeviceType {
        TouchScreen,
        TouchPad
    };

    QTouchEvent(QEvent::Type eventType,
                QTouchEvent::DeviceType deviceType = TouchScreen,
                Qt::KeyboardModifiers modifiers = Qt::NoModifier,
                Qt::TouchPointStates touchPointStates = 0,
                const QList<QTouchEvent::TouchPoint> &touchPoints = QList<QTouchEvent::TouchPoint>());
    ~QTouchEvent();

    inline QWidget *widget() const { return _widget; }
    inline QTouchEvent::DeviceType deviceType() const { return _deviceType; }
    inline Qt::TouchPointStates touchPointStates() const { return _touchPointStates; }
    inline const QList<QTouchEvent::TouchPoint> &touchPoints() const { return _touchPoints; }

    // internal
    inline void setWidget(QWidget *awidget) { _widget = awidget; }
    inline void setDeviceType(DeviceType adeviceType) { _deviceType = adeviceType; }
    inline void setTouchPointStates(Qt::TouchPointStates aTouchPointStates) { _touchPointStates = aTouchPointStates; }
    inline void setTouchPoints(const QList<QTouchEvent::TouchPoint> &atouchPoints) { _touchPoints = atouchPoints; }

```


```cpp
#ifndef QT_NO_GESTURES
// QGestureEvent : public QEvent

public:
    QGestureEvent(const QList<QGesture *> &gestures);
    ~QGestureEvent();

    QList<QGesture *> gestures() const;
    QGesture *gesture(Qt::GestureType type) const;

    QList<QGesture *> activeGestures() const;
    QList<QGesture *> canceledGestures() const;

#ifdef Q_NO_USING_KEYWORD
    inline void setAccepted(bool accepted) { QEvent::setAccepted(accepted); }
    inline bool isAccepted() const { return QEvent::isAccepted(); }

    inline void accept() { QEvent::accept(); }
    inline void ignore() { QEvent::ignore(); }
#else
    using QEvent::setAccepted;
    using QEvent::isAccepted;
    using QEvent::accept;
    using QEvent::ignore;
#endif

    void setAccepted(QGesture *, bool);
    void accept(QGesture *);
    void ignore(QGesture *);
    bool isAccepted(QGesture *) const;

    void setAccepted(Qt::GestureType, bool);
    void accept(Qt::GestureType);
    void ignore(Qt::GestureType);
    bool isAccepted(Qt::GestureType) const;

    void setWidget(QWidget *widget);
    QWidget *widget() const;

#ifndef QT_NO_GRAPHICSVIEW
    QPointF mapToGraphicsScene(const QPointF &gesturePoint) const;
#endif

#endif // QT_NO_GESTURES
```




<!-- qevent.md ends here -->
