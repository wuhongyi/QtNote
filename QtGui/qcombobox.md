<!-- qcombobox.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 22:39:04 2017 (+0800)
;; Last-Updated: 日 12月 24 22:40:43 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qcombobox


```cpp
// QComboBox : public QWidget


public:
    explicit QComboBox(QWidget *parent = 0);
    ~QComboBox();

    int maxVisibleItems() const;
    void setMaxVisibleItems(int maxItems);

    int count() const;
    void setMaxCount(int max);
    int maxCount() const;

#ifndef QT_NO_COMPLETER
    bool autoCompletion() const;
    void setAutoCompletion(bool enable);

    Qt::CaseSensitivity autoCompletionCaseSensitivity() const;
    void setAutoCompletionCaseSensitivity(Qt::CaseSensitivity sensitivity);
#endif

    bool duplicatesEnabled() const;
    void setDuplicatesEnabled(bool enable);

    void setFrame(bool);
    bool hasFrame() const;

    inline int findText(const QString &text,
                        Qt::MatchFlags flags = static_cast<Qt::MatchFlags>(Qt::MatchExactly|Qt::MatchCaseSensitive)) const
        { return findData(text, Qt::DisplayRole, flags); }
    int findData(const QVariant &data, int role = Qt::UserRole,
                 Qt::MatchFlags flags = static_cast<Qt::MatchFlags>(Qt::MatchExactly|Qt::MatchCaseSensitive)) const;

    enum InsertPolicy {
        NoInsert,
        InsertAtTop,
        InsertAtCurrent,
        InsertAtBottom,
        InsertAfterCurrent,
        InsertBeforeCurrent,
        InsertAlphabetically
#if defined(QT3_SUPPORT) && !defined(Q_MOC_RUN)
        ,
        NoInsertion = NoInsert,
        AtTop = InsertAtTop,
        AtCurrent = InsertAtCurrent,
        AtBottom = InsertAtBottom,
        AfterCurrent = InsertAfterCurrent,
        BeforeCurrent = InsertBeforeCurrent
#endif
    };
#ifdef QT3_SUPPORT
    typedef InsertPolicy Policy;
#endif

    InsertPolicy insertPolicy() const;
    void setInsertPolicy(InsertPolicy policy);

    enum SizeAdjustPolicy {
        AdjustToContents,
        AdjustToContentsOnFirstShow,
        AdjustToMinimumContentsLength, // ### Qt 5: remove
        AdjustToMinimumContentsLengthWithIcon
    };

    SizeAdjustPolicy sizeAdjustPolicy() const;
    void setSizeAdjustPolicy(SizeAdjustPolicy policy);
    int minimumContentsLength() const;
    void setMinimumContentsLength(int characters);
    QSize iconSize() const;
    void setIconSize(const QSize &size);

    bool isEditable() const;
    void setEditable(bool editable);
    void setLineEdit(QLineEdit *edit);
    QLineEdit *lineEdit() const;
#ifndef QT_NO_VALIDATOR
    void setValidator(const QValidator *v);
    const QValidator *validator() const;
#endif

#ifndef QT_NO_COMPLETER
    void setCompleter(QCompleter *c);
    QCompleter *completer() const;
#endif

    QAbstractItemDelegate *itemDelegate() const;
    void setItemDelegate(QAbstractItemDelegate *delegate);

    QAbstractItemModel *model() const;
    void setModel(QAbstractItemModel *model);

    QModelIndex rootModelIndex() const;
    void setRootModelIndex(const QModelIndex &index);

    int modelColumn() const;
    void setModelColumn(int visibleColumn);

    int currentIndex() const;

    QString currentText() const;

    QString itemText(int index) const;
    QIcon itemIcon(int index) const;
    QVariant itemData(int index, int role = Qt::UserRole) const;

    inline void addItem(const QString &text, const QVariant &userData = QVariant());
    inline void addItem(const QIcon &icon, const QString &text,
                        const QVariant &userData = QVariant());
    inline void addItems(const QStringList &texts)
        { insertItems(count(), texts); }

    inline void insertItem(int index, const QString &text, const QVariant &userData = QVariant());
    void insertItem(int index, const QIcon &icon, const QString &text,
                    const QVariant &userData = QVariant());
    void insertItems(int index, const QStringList &texts);
    void insertSeparator(int index);

    void removeItem(int index);

    void setItemText(int index, const QString &text);
    void setItemIcon(int index, const QIcon &icon);
    void setItemData(int index, const QVariant &value, int role = Qt::UserRole);

    QAbstractItemView *view() const;
    void setView(QAbstractItemView *itemView);

    QSize sizeHint() const;
    QSize minimumSizeHint() const;

    virtual void showPopup();
    virtual void hidePopup();

    bool event(QEvent *event);

public Q_SLOTS:
    void clear();
    void clearEditText();
    void setEditText(const QString &text);
    void setCurrentIndex(int index);

Q_SIGNALS:
    void editTextChanged(const QString &);
    void activated(int index);
    void activated(const QString &);
    void highlighted(int index);
    void highlighted(const QString &);
    void currentIndexChanged(int index);
    void currentIndexChanged(const QString &);



#ifdef QT3_SUPPORT
public:
    QT3_SUPPORT_CONSTRUCTOR QComboBox(QWidget *parent, const char *name);
    QT3_SUPPORT_CONSTRUCTOR QComboBox(bool rw, QWidget *parent, const char *name = 0);
    inline QT3_SUPPORT int currentItem() const { return currentIndex(); }
    inline QT3_SUPPORT void setCurrentItem(int index) { setCurrentIndex(index); }
    inline QT3_SUPPORT InsertPolicy insertionPolicy() const { return insertPolicy(); }
    inline QT3_SUPPORT void setInsertionPolicy(InsertPolicy policy) { setInsertPolicy(policy); }
    inline QT3_SUPPORT bool editable() const { return isEditable(); }
    inline QT3_SUPPORT void popup() { showPopup(); }
    inline QT3_SUPPORT void setCurrentText(const QString& text) {
        int i = findText(text);
        if (i != -1)
            setCurrentIndex(i);
        else if (isEditable())
            setEditText(text);
        else
            setItemText(currentIndex(), text);
    }
    inline QT3_SUPPORT QString text(int index) const { return itemText(index); }

    inline QT3_SUPPORT QPixmap pixmap(int index) const
    { return itemIcon(index).pixmap(iconSize(), isEnabled() ? QIcon::Normal : QIcon::Disabled); }
    inline QT3_SUPPORT void insertStringList(const QStringList &list, int index = -1)
        { insertItems((index < 0 ? count() : index), list); }
    inline QT3_SUPPORT void insertItem(const QString &text, int index = -1)
        { insertItem((index < 0 ? count() : index), text); }
    inline QT3_SUPPORT void insertItem(const QPixmap &pix, int index = -1)
        { insertItem((index < 0 ? count() : index), QIcon(pix), QString()); }
    inline QT3_SUPPORT void insertItem(const QPixmap &pix, const QString &text, int index = -1)
        { insertItem((index < 0 ? count() : index), QIcon(pix), text); }
    inline QT3_SUPPORT void changeItem(const QString &text, int index)
        { setItemText(index, text); }
    inline QT3_SUPPORT void changeItem(const QPixmap &pix, int index)
        { setItemIcon(index, QIcon(pix)); }
    inline QT3_SUPPORT void changeItem(const QPixmap &pix, const QString &text, int index)
        { setItemIcon(index, QIcon(pix)); setItemText(index, text); }
    inline QT3_SUPPORT void clearValidator() { setValidator(0); }
    inline QT3_SUPPORT void clearEdit() { clearEditText(); }

Q_SIGNALS:
    QT_MOC_COMPAT void textChanged(const QString &);
#endif
```

<!-- qcombobox.md ends here -->
