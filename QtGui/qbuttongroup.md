<!-- qbuttongroup.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 二 1月  2 22:24:53 2018 (+0800)
;; Last-Updated: 二 1月  2 22:26:00 2018 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qbuttongroup


```cpp
// QButtonGroup : public QObject

public:
    explicit QButtonGroup(QObject *parent = 0);
    ~QButtonGroup();

    void setExclusive(bool);
    bool exclusive() const;

    void addButton(QAbstractButton *);
    void addButton(QAbstractButton *, int id);
    void removeButton(QAbstractButton *);

    QList<QAbstractButton*> buttons() const;

    QAbstractButton * checkedButton() const;
    // no setter on purpose!

    QAbstractButton *button(int id) const;
    void setId(QAbstractButton *button, int id);
    int id(QAbstractButton *button) const;
    int checkedId() const;

Q_SIGNALS:
    void buttonClicked(QAbstractButton *);
    void buttonClicked(int);
    void buttonPressed(QAbstractButton *);
    void buttonPressed(int);
    void buttonReleased(QAbstractButton *);
    void buttonReleased(int);

#ifdef QT3_SUPPORT
public:
    inline QT3_SUPPORT void insert(QAbstractButton *b) { addButton(b); }
    inline QT3_SUPPORT void remove(QAbstractButton *b) { removeButton(b); }
#endif
```

<!-- qbuttongroup.md ends here -->
