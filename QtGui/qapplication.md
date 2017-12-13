<!-- qapplication.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 三 12月 13 19:51:42 2017 (+0800)
;; Last-Updated: 三 12月 13 20:26:11 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 2
;; URL: http://wuhongyi.cn -->

# qapplication


```cpp
// QApplication : public QCoreApplication

public:
    enum Type { Tty, GuiClient, GuiServer };

#ifdef Q_OS_SYMBIAN
    typedef CApaApplication * (*QS60MainApplicationFactory)();
#endif

#ifndef qdoc
    QApplication(int &argc, char **argv, int = ApplicationFlags);
    QApplication(int &argc, char **argv, bool GUIenabled, int = ApplicationFlags);
    QApplication(int &argc, char **argv, Type, int = ApplicationFlags);
#if defined(Q_WS_X11)
    QApplication(Display* dpy, Qt::HANDLE visual = 0, Qt::HANDLE cmap = 0, int = ApplicationFlags);
    QApplication(Display *dpy, int &argc, char **argv, Qt::HANDLE visual = 0, Qt::HANDLE cmap= 0, int = ApplicationFlags);
#endif
#if defined(Q_OS_SYMBIAN)
    QApplication(QApplication::QS60MainApplicationFactory factory, int &argc, char **argv, int = ApplicationFlags);
#endif
#endif
    virtual ~QApplication();

    static Type type();

    static QStyle *style();
    static void setStyle(QStyle*);
    static QStyle *setStyle(const QString&);
    enum ColorSpec { NormalColor=0, CustomColor=1, ManyColor=2 };
    static int colorSpec();
    static void setColorSpec(int);
    static void setGraphicsSystem(const QString &);

#ifndef QT_NO_CURSOR
    static QCursor *overrideCursor();
    static void setOverrideCursor(const QCursor &);
    static void changeOverrideCursor(const QCursor &);
    static void restoreOverrideCursor();
#endif
    static QPalette palette();
    static QPalette palette(const QWidget *);
    static QPalette palette(const char *className);
    static void setPalette(const QPalette &, const char* className = 0);
    static QFont font();
    static QFont font(const QWidget*);
    static QFont font(const char *className);
    static void setFont(const QFont &, const char* className = 0);
    static QFontMetrics fontMetrics();

    static void setWindowIcon(const QIcon &icon);
    static QIcon windowIcon();


#ifdef QT3_SUPPORT
    static QT3_SUPPORT QWidget *mainWidget();
    static QT3_SUPPORT void setMainWidget(QWidget *);
#endif

    static QWidgetList allWidgets();
    static QWidgetList topLevelWidgets();

    static QDesktopWidget *desktop();

    static QWidget *activePopupWidget();
    static QWidget *activeModalWidget();
#ifndef QT_NO_CLIPBOARD
    static QClipboard *clipboard();
#endif
    static QWidget *focusWidget();

    static QWidget *activeWindow();
    static void setActiveWindow(QWidget* act);

    static QWidget *widgetAt(const QPoint &p);
    static inline QWidget *widgetAt(int x, int y) { return widgetAt(QPoint(x, y)); }
    static QWidget *topLevelAt(const QPoint &p);
    static inline QWidget *topLevelAt(int x, int y)  { return topLevelAt(QPoint(x, y)); }

    static void syncX();
    static void beep();
    static void alert(QWidget *widget, int duration = 0);

    static Qt::KeyboardModifiers keyboardModifiers();
    static Qt::KeyboardModifiers queryKeyboardModifiers();
    static Qt::MouseButtons mouseButtons();

    static void setDesktopSettingsAware(bool);
    static bool desktopSettingsAware();

    static void setCursorFlashTime(int);
    static int cursorFlashTime();

    static void setDoubleClickInterval(int);
    static int doubleClickInterval();

    static void setKeyboardInputInterval(int);
    static int keyboardInputInterval();

#ifndef QT_NO_WHEELEVENT
    static void setWheelScrollLines(int);
    static int wheelScrollLines();
#endif
    static void setGlobalStrut(const QSize &);
    static QSize globalStrut();

    static void setStartDragTime(int ms);
    static int startDragTime();
    static void setStartDragDistance(int l);
    static int startDragDistance();

    static void setLayoutDirection(Qt::LayoutDirection direction);
    static Qt::LayoutDirection layoutDirection();

    static inline bool isRightToLeft() { return layoutDirection() == Qt::RightToLeft; }
    static inline bool isLeftToRight() { return layoutDirection() == Qt::LeftToRight; }

    static bool isEffectEnabled(Qt::UIEffect);
    static void setEffectEnabled(Qt::UIEffect, bool enable = true);

#if defined(Q_WS_MAC)
    virtual bool macEventFilter(EventHandlerCallRef, EventRef);
#endif
#if defined(Q_WS_X11)
    virtual bool x11EventFilter(XEvent *);
    virtual int x11ClientMessage(QWidget*, XEvent*, bool passive_only);
    int x11ProcessEvent(XEvent*);
#endif
#if defined(Q_OS_SYMBIAN)
    int symbianProcessEvent(const QSymbianEvent *event);
    virtual bool symbianEventFilter(const QSymbianEvent *event);
#endif
#if defined(Q_WS_QWS)
    virtual bool qwsEventFilter(QWSEvent *);
    int qwsProcessEvent(QWSEvent*);
    void qwsSetCustomColors(QRgb *colortable, int start, int numColors);
#ifndef QT_NO_QWS_MANAGER
    static QDecoration &qwsDecoration();
    static void qwsSetDecoration(QDecoration *);
    static QDecoration *qwsSetDecoration(const QString &decoration);
#endif
#endif

#if defined(Q_WS_QPA)
    static QPlatformNativeInterface *platformNativeInterface();
#endif


#if defined(Q_WS_WIN)
    void winFocus(QWidget *, bool);
    static void winMouseButtonUp();
#endif
#ifndef QT_NO_SESSIONMANAGER
    // session management
    bool isSessionRestored() const;
    QString sessionId() const;
    QString sessionKey() const;
    virtual void commitData(QSessionManager& sm);
    virtual void saveState(QSessionManager& sm);
#endif

#ifndef QT_NO_IM
    void setInputContext(QInputContext *);
    QInputContext *inputContext() const;
#endif

    static QLocale keyboardInputLocale();
    static Qt::LayoutDirection keyboardInputDirection();

    static int exec();
    bool notify(QObject *, QEvent *);


    static void setQuitOnLastWindowClosed(bool quit);
    static bool quitOnLastWindowClosed();

#ifdef QT_KEYPAD_NAVIGATION
    static Q_DECL_DEPRECATED void setKeypadNavigationEnabled(bool);
    static bool keypadNavigationEnabled();
    static void setNavigationMode(Qt::NavigationMode mode);
    static Qt::NavigationMode navigationMode();
#endif

Q_SIGNALS:
    void lastWindowClosed();
    void focusChanged(QWidget *old, QWidget *now);
    void fontDatabaseChanged();
#ifndef QT_NO_SESSIONMANAGER
    void commitDataRequest(QSessionManager &sessionManager);
    void saveStateRequest(QSessionManager &sessionManager);
#endif
#ifdef Q_OS_SYMBIAN
    void aboutToReleaseGpuResources();
    void aboutToUseGpuResources();
#endif

public:
    QString styleSheet() const;
public Q_SLOTS:
#ifndef QT_NO_STYLE_STYLESHEET
    void setStyleSheet(const QString& sheet);
#endif
#ifdef Q_WS_WINCE
    void setAutoMaximizeThreshold(const int threshold);
    int autoMaximizeThreshold() const;
#endif
    void setAutoSipEnabled(const bool enabled);
    bool autoSipEnabled() const;
    static void closeAllWindows();
    static void aboutQt();

```




<!-- qapplication.md ends here -->
