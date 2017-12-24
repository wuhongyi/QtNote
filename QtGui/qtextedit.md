<!-- qtextedit.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 22:10:20 2017 (+0800)
;; Last-Updated: 日 12月 24 22:12:03 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qtextedit


```cpp
// QTextEdit : public QAbstractScrollArea


public:
    enum LineWrapMode {
        NoWrap,
        WidgetWidth,
        FixedPixelWidth,
        FixedColumnWidth
    };

    enum AutoFormattingFlag {
        AutoNone = 0,
        AutoBulletList = 0x00000001,
        AutoAll = 0xffffffff
    };

    Q_DECLARE_FLAGS(AutoFormatting, AutoFormattingFlag)

#if defined(QT3_SUPPORT)
    enum CursorAction {
        MoveBackward,
        MoveForward,
        MoveWordBackward,
        MoveWordForward,
        MoveUp,
        MoveDown,
        MoveLineStart,
        MoveLineEnd,
        MoveHome,
        MoveEnd,
        MovePageUp,
        MovePageDown
#if !defined(Q_MOC_RUN)
        ,
        MovePgUp = MovePageUp,
        MovePgDown = MovePageDown
#endif
    };
#endif

    explicit QTextEdit(QWidget *parent = 0);
    explicit QTextEdit(const QString &text, QWidget *parent = 0);
    virtual ~QTextEdit();

    void setDocument(QTextDocument *document);
    QTextDocument *document() const;

    void setTextCursor(const QTextCursor &cursor);
    QTextCursor textCursor() const;

    bool isReadOnly() const;
    void setReadOnly(bool ro);

    void setTextInteractionFlags(Qt::TextInteractionFlags flags);
    Qt::TextInteractionFlags textInteractionFlags() const;

    qreal fontPointSize() const;
    QString fontFamily() const;
    int fontWeight() const;
    bool fontUnderline() const;
    bool fontItalic() const;
    QColor textColor() const;
    QColor textBackgroundColor() const;
    QFont currentFont() const;
    Qt::Alignment alignment() const;

    void mergeCurrentCharFormat(const QTextCharFormat &modifier);

    void setCurrentCharFormat(const QTextCharFormat &format);
    QTextCharFormat currentCharFormat() const;

    AutoFormatting autoFormatting() const;
    void setAutoFormatting(AutoFormatting features);

    bool tabChangesFocus() const;
    void setTabChangesFocus(bool b);

    inline void setDocumentTitle(const QString &title)
    { document()->setMetaInformation(QTextDocument::DocumentTitle, title); }
    inline QString documentTitle() const
    { return document()->metaInformation(QTextDocument::DocumentTitle); }

    inline bool isUndoRedoEnabled() const
    { return document()->isUndoRedoEnabled(); }
    inline void setUndoRedoEnabled(bool enable)
    { document()->setUndoRedoEnabled(enable); }

    LineWrapMode lineWrapMode() const;
    void setLineWrapMode(LineWrapMode mode);

    int lineWrapColumnOrWidth() const;
    void setLineWrapColumnOrWidth(int w);

    QTextOption::WrapMode wordWrapMode() const;
    void setWordWrapMode(QTextOption::WrapMode policy);

    bool find(const QString &exp, QTextDocument::FindFlags options = 0);

    inline QString toPlainText() const
    { return document()->toPlainText(); }
#ifndef QT_NO_TEXTHTMLPARSER
    inline QString toHtml() const
    { return document()->toHtml(); }
#endif

    void ensureCursorVisible();

    virtual QVariant loadResource(int type, const QUrl &name);
#ifndef QT_NO_CONTEXTMENU
    QMenu *createStandardContextMenu();
    QMenu *createStandardContextMenu(const QPoint &position);
#endif

    QTextCursor cursorForPosition(const QPoint &pos) const;
    QRect cursorRect(const QTextCursor &cursor) const;
    QRect cursorRect() const;

    QString anchorAt(const QPoint& pos) const;

    bool overwriteMode() const;
    void setOverwriteMode(bool overwrite);

    int tabStopWidth() const;
    void setTabStopWidth(int width);

    int cursorWidth() const;
    void setCursorWidth(int width);

    bool acceptRichText() const;
    void setAcceptRichText(bool accept);

    struct ExtraSelection
    {
        QTextCursor cursor;
        QTextCharFormat format;
    };
    void setExtraSelections(const QList<ExtraSelection> &selections);
    QList<ExtraSelection> extraSelections() const;

    void moveCursor(QTextCursor::MoveOperation operation, QTextCursor::MoveMode mode = QTextCursor::MoveAnchor);

    bool canPaste() const;

#ifndef QT_NO_PRINTER
    void print(QPrinter *printer) const;
#endif

public Q_SLOTS:
    void setFontPointSize(qreal s);
    void setFontFamily(const QString &fontFamily);
    void setFontWeight(int w);
    void setFontUnderline(bool b);
    void setFontItalic(bool b);
    void setTextColor(const QColor &c);
    void setTextBackgroundColor(const QColor &c);
    void setCurrentFont(const QFont &f);
    void setAlignment(Qt::Alignment a);

    void setPlainText(const QString &text);
#ifndef QT_NO_TEXTHTMLPARSER
    void setHtml(const QString &text);
#endif
    void setText(const QString &text);

#ifndef QT_NO_CLIPBOARD
    void cut();
    void copy();
    void paste();
#endif

    void undo();
    void redo();

    void clear();
    void selectAll();

    void insertPlainText(const QString &text);
#ifndef QT_NO_TEXTHTMLPARSER
    void insertHtml(const QString &text);
#endif // QT_NO_TEXTHTMLPARSER

    void append(const QString &text);

    void scrollToAnchor(const QString &name);

    void zoomIn(int range = 1);
    void zoomOut(int range = 1);

Q_SIGNALS:
    void textChanged();
    void undoAvailable(bool b);
    void redoAvailable(bool b);
    void currentCharFormatChanged(const QTextCharFormat &format);
    void copyAvailable(bool b);
    void selectionChanged();
    void cursorPositionChanged();


public:
    QT3_SUPPORT_CONSTRUCTOR QTextEdit(QWidget *parent, const char *name);
    inline QT3_SUPPORT bool find(const QString &exp, bool cs, bool wo)
    {
        QTextDocument::FindFlags flags = 0;
        if (cs)
            flags |= QTextDocument::FindCaseSensitively;
        if (wo)
            flags |= QTextDocument::FindWholeWords;
        return find(exp, flags);
    }

    inline QT3_SUPPORT void sync() {}

    QT3_SUPPORT void moveCursor(CursorAction action, QTextCursor::MoveMode mode = QTextCursor::MoveAnchor);
    QT3_SUPPORT void moveCursor(CursorAction action, bool select);

    enum KeyboardAction {
        ActionBackspace,
        ActionDelete,
        ActionReturn,
        ActionKill,
        ActionWordBackspace,
        ActionWordDelete
    };

    QT3_SUPPORT void doKeyboardAction(KeyboardAction action);

    QT3_SUPPORT QString text() const;
    QT3_SUPPORT void setTextFormat(Qt::TextFormat);
    QT3_SUPPORT Qt::TextFormat textFormat() const;

    inline QT3_SUPPORT void setBold(bool b) { setFontWeight(b ? QFont::Bold : QFont::Normal); }
    inline QT3_SUPPORT void setUnderline(bool b) { setFontUnderline(b); }
    inline QT3_SUPPORT void setItalic(bool i) { setFontItalic(i); }
    inline QT3_SUPPORT void setFamily(const QString &family) { setFontFamily(family); }
    inline QT3_SUPPORT void setPointSize(int size) { setFontPointSize(size); }

    inline QT3_SUPPORT bool italic() const { return fontItalic(); }
    inline QT3_SUPPORT bool bold() const { return fontWeight() >= QFont::Bold; }
    inline QT3_SUPPORT bool underline() const { return fontUnderline(); }
    inline QT3_SUPPORT QString family() const { return fontFamily(); }
    inline QT3_SUPPORT int pointSize() const { return (int)(fontPointSize()+0.5); }

    inline QT3_SUPPORT bool hasSelectedText() const
    { return textCursor().hasSelection(); }
    inline QT3_SUPPORT QString selectedText() const
    { return textCursor().selectedText(); }

    inline QT3_SUPPORT bool isUndoAvailable() const
    { return document()->isUndoAvailable(); }
    inline QT3_SUPPORT bool isRedoAvailable() const
    { return document()->isRedoAvailable(); }

    inline QT3_SUPPORT void insert(const QString &text)
    { insertPlainText(text); }

    inline QT3_SUPPORT bool isModified() const
    { return document()->isModified(); }

    inline QT3_SUPPORT QColor color() const
    { return textColor(); }

public Q_SLOTS:
    inline QT_MOC_COMPAT void setModified(bool m = true)
    { document()->setModified(m); }
public:
    inline QT3_SUPPORT void undo() const
    { document()->undo(); }
    inline QT3_SUPPORT void redo() const
    { document()->redo(); }

public Q_SLOTS:
    inline QT_MOC_COMPAT void setColor(const QColor &c)
    { setTextColor(c); }

#endif

```

<!-- qtextedit.md ends here -->
