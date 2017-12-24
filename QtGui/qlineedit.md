<!-- qlineedit.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 10:51:48 2017 (+0800)
;; Last-Updated: 日 12月 24 10:55:26 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qlineedit


```cpp
// QLineEdit : public QWidget


public:
    explicit QLineEdit(QWidget* parent=0);
    explicit QLineEdit(const QString &, QWidget* parent=0);
#ifdef QT3_SUPPORT
    QT3_SUPPORT_CONSTRUCTOR QLineEdit(QWidget* parent, const char* name);
    QT3_SUPPORT_CONSTRUCTOR QLineEdit(const QString &, QWidget* parent, const char* name);
    QT3_SUPPORT_CONSTRUCTOR QLineEdit(const QString &, const QString &, QWidget* parent=0, const char* name=0);
#endif
    ~QLineEdit();

    QString text() const;

    QString displayText() const;

    QString placeholderText() const;
    void setPlaceholderText(const QString &);

    int maxLength() const;
    void setMaxLength(int);

    void setFrame(bool);
    bool hasFrame() const;

    enum EchoMode { Normal, NoEcho, Password, PasswordEchoOnEdit };
    EchoMode echoMode() const;
    void setEchoMode(EchoMode);

    bool isReadOnly() const;
    void setReadOnly(bool);

#ifndef QT_NO_VALIDATOR
    void setValidator(const QValidator *);
    const QValidator * validator() const;
#endif

#ifndef QT_NO_COMPLETER
    void setCompleter(QCompleter *completer);
    QCompleter *completer() const;
#endif

    QSize sizeHint() const;
    QSize minimumSizeHint() const;

    int cursorPosition() const;
    void setCursorPosition(int);
    int cursorPositionAt(const QPoint &pos);

    void setAlignment(Qt::Alignment flag);
    Qt::Alignment alignment() const;

    void cursorForward(bool mark, int steps = 1);
    void cursorBackward(bool mark, int steps = 1);
    void cursorWordForward(bool mark);
    void cursorWordBackward(bool mark);
    void backspace();
    void del();
    void home(bool mark);
    void end(bool mark);

    bool isModified() const;
    void setModified(bool);

    void setSelection(int, int);
    bool hasSelectedText() const;
    QString selectedText() const;
    int selectionStart() const;

    bool isUndoAvailable() const;
    bool isRedoAvailable() const;

    void setDragEnabled(bool b);
    bool dragEnabled() const;

    void setCursorMoveStyle(Qt::CursorMoveStyle style);
    Qt::CursorMoveStyle cursorMoveStyle() const;

    QString inputMask() const;
    void setInputMask(const QString &inputMask);
    bool hasAcceptableInput() const;

    void setTextMargins(int left, int top, int right, int bottom);
    void setTextMargins(const QMargins &margins);
    void getTextMargins(int *left, int *top, int *right, int *bottom) const;
    QMargins textMargins() const;

public Q_SLOTS:
    void setText(const QString &);
    void clear();
    void selectAll();
    void undo();
    void redo();
#ifndef QT_NO_CLIPBOARD
    void cut();
    void copy() const;
    void paste();
#endif

public:
    void deselect();
    void insert(const QString &);
#ifndef QT_NO_CONTEXTMENU
    QMenu *createStandardContextMenu();
#endif

Q_SIGNALS:
    void textChanged(const QString &);
    void textEdited(const QString &);
    void cursorPositionChanged(int, int);
    void returnPressed();
    void editingFinished();
    void selectionChanged();



public:
    QVariant inputMethodQuery(Qt::InputMethodQuery) const;
    bool event(QEvent *);


public:
#ifdef QT3_SUPPORT
    inline QT3_SUPPORT void clearModified() { setModified(false); }
    inline QT3_SUPPORT void cursorLeft(bool mark, int steps = 1) { cursorForward(mark, -steps); }
    inline QT3_SUPPORT void cursorRight(bool mark, int steps = 1) { cursorForward(mark, steps); }
    QT3_SUPPORT bool validateAndSet(const QString &, int, int, int);
    inline QT3_SUPPORT bool frame() const { return hasFrame(); }
#ifndef QT_NO_VALIDATOR
    inline QT3_SUPPORT void clearValidator() { setValidator(0); }
#endif
    inline QT3_SUPPORT bool hasMarkedText() const { return hasSelectedText(); }
    inline QT3_SUPPORT QString markedText() const { return selectedText(); }
    QT3_SUPPORT bool edited() const;
    QT3_SUPPORT void setEdited(bool);
    QT3_SUPPORT int characterAt(int, QChar*) const;
    QT3_SUPPORT bool getSelection(int *, int *);

    QT3_SUPPORT void setFrameRect(QRect) {}
    QT3_SUPPORT QRect frameRect() const { return QRect(); }
    enum DummyFrame { Box, Sunken, Plain, Raised, MShadow, NoFrame, Panel, StyledPanel,
                      HLine, VLine, GroupBoxPanel, WinPanel, ToolBarPanel, MenuBarPanel,
                      PopupPanel, LineEditPanel, TabWidgetPanel, MShape };
    QT3_SUPPORT void setFrameShadow(DummyFrame) {}
    QT3_SUPPORT DummyFrame frameShadow() const { return Plain; }
    QT3_SUPPORT void setFrameShape(DummyFrame) {}
    QT3_SUPPORT DummyFrame frameShape() const { return NoFrame; }
    QT3_SUPPORT void setFrameStyle(int) {}
    QT3_SUPPORT int frameStyle() const  { return 0; }
    QT3_SUPPORT int frameWidth() const { return 0; }
    QT3_SUPPORT void setLineWidth(int) {}
    QT3_SUPPORT int lineWidth() const { return 0; }
    QT3_SUPPORT void setMargin(int margin) { setContentsMargins(margin, margin, margin, margin); }
    QT3_SUPPORT int margin() const
    { int margin; int dummy; getContentsMargins(&margin, &dummy, &dummy, &dummy);  return margin; }
    QT3_SUPPORT void setMidLineWidth(int) {}
    QT3_SUPPORT int midLineWidth() const { return 0; }

Q_SIGNALS:
    QT_MOC_COMPAT void lostFocus();
#endif



```

<!-- qlineedit.md ends here -->
