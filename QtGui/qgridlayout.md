<!-- qgridlayout.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 六 12月 23 23:52:21 2017 (+0800)
;; Last-Updated: 六 12月 23 23:54:36 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qgridlayout

```cpp
// QGridLayout : public QLayout

public:
    explicit QGridLayout(QWidget *parent);
    QGridLayout();

#ifdef QT3_SUPPORT
    QT3_SUPPORT_CONSTRUCTOR QGridLayout(QWidget *parent, int nRows , int nCols = 1, int border = 0,
                                      int spacing = -1, const char *name = 0);
    QT3_SUPPORT_CONSTRUCTOR QGridLayout(int nRows , int nCols = 1, int spacing = -1, const char *name = 0);
    QT3_SUPPORT_CONSTRUCTOR QGridLayout(QLayout *parentLayout, int nRows = 1, int nCols = 1, int spacing = -1,
                                      const char *name = 0);
#endif
    ~QGridLayout();

    QSize sizeHint() const;
    QSize minimumSize() const;
    QSize maximumSize() const;

    void setHorizontalSpacing(int spacing);
    int horizontalSpacing() const;
    void setVerticalSpacing(int spacing);
    int verticalSpacing() const;
    void setSpacing(int spacing);
    int spacing() const;

    void setRowStretch(int row, int stretch);
    void setColumnStretch(int column, int stretch);
    int rowStretch(int row) const;
    int columnStretch(int column) const;

    void setRowMinimumHeight(int row, int minSize);
    void setColumnMinimumWidth(int column, int minSize);
    int rowMinimumHeight(int row) const;
    int columnMinimumWidth(int column) const;

    int columnCount() const;
    int rowCount() const;

    QRect cellRect(int row, int column) const;
#ifdef QT3_SUPPORT
    inline QT3_SUPPORT QRect cellGeometry(int row, int column) const {return cellRect(row, column);}
#endif

    bool hasHeightForWidth() const;
    int heightForWidth(int) const;
    int minimumHeightForWidth(int) const;

    Qt::Orientations expandingDirections() const;
    void invalidate();

    inline void addWidget(QWidget *w) { QLayout::addWidget(w); }
    void addWidget(QWidget *, int row, int column, Qt::Alignment = 0);
    void addWidget(QWidget *, int row, int column, int rowSpan, int columnSpan, Qt::Alignment = 0);
    void addLayout(QLayout *, int row, int column, Qt::Alignment = 0);
    void addLayout(QLayout *, int row, int column, int rowSpan, int columnSpan, Qt::Alignment = 0);

    void setOriginCorner(Qt::Corner);
    Qt::Corner originCorner() const;

#ifdef QT3_SUPPORT
    inline QT3_SUPPORT void setOrigin(Qt::Corner corner) { setOriginCorner(corner); }
    inline QT3_SUPPORT Qt::Corner origin() const { return originCorner(); }
#endif
    QLayoutItem *itemAt(int index) const;
    QLayoutItem *itemAtPosition(int row, int column) const;
    QLayoutItem *takeAt(int index);
    int count() const;
    void setGeometry(const QRect&);

    void addItem(QLayoutItem *item, int row, int column, int rowSpan = 1, int columnSpan = 1, Qt::Alignment = 0);

    void setDefaultPositioning(int n, Qt::Orientation orient);
    void getItemPosition(int idx, int *row, int *column, int *rowSpan, int *columnSpan);


#ifdef QT3_SUPPORT
public:
    QT3_SUPPORT void expand(int rows, int cols);
    inline QT3_SUPPORT void addRowSpacing(int row, int minsize) { addItem(new QSpacerItem(0,minsize), row, 0); }
    inline QT3_SUPPORT void addColSpacing(int col, int minsize) { addItem(new QSpacerItem(minsize,0), 0, col); }
    inline QT3_SUPPORT void addMultiCellWidget(QWidget *w, int fromRow, int toRow, int fromCol, int toCol, Qt::Alignment _align = 0)
        { addWidget(w, fromRow, fromCol, (toRow < 0) ? -1 : toRow - fromRow + 1, (toCol < 0) ? -1 : toCol - fromCol + 1, _align); }
    inline QT3_SUPPORT void addMultiCell(QLayoutItem *l, int fromRow, int toRow, int fromCol, int toCol, Qt::Alignment _align = 0)
        { addItem(l, fromRow, fromCol, (toRow < 0) ? -1 : toRow - fromRow + 1, (toCol < 0) ? -1 : toCol - fromCol + 1, _align); }
    inline QT3_SUPPORT void addMultiCellLayout(QLayout *layout, int fromRow, int toRow, int fromCol, int toCol, Qt::Alignment _align = 0)
        { addLayout(layout, fromRow, fromCol, (toRow < 0) ? -1 : toRow - fromRow + 1, (toCol < 0) ? -1 : toCol - fromCol + 1, _align); }

    inline QT3_SUPPORT int numRows() const { return rowCount(); }
    inline QT3_SUPPORT int numCols() const { return columnCount(); }
    inline QT3_SUPPORT void setColStretch(int col, int stretch) {setColumnStretch(col, stretch); }
    inline QT3_SUPPORT int colStretch(int col) const {return columnStretch(col); }
    inline QT3_SUPPORT void setColSpacing(int col, int minSize) { setColumnMinimumWidth(col, minSize); }
    inline QT3_SUPPORT int colSpacing(int col) const { return columnMinimumWidth(col); }
    inline QT3_SUPPORT void setRowSpacing(int row, int minSize) {setRowMinimumHeight(row, minSize); }
    inline QT3_SUPPORT int rowSpacing(int row) const {return rowMinimumHeight(row); }
#endif
```

<!-- qgridlayout.md ends here -->
