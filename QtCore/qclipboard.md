<!-- qclipboard.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 1月  7 21:50:24 2018 (+0800)
;; Last-Updated: 日 1月  7 21:50:57 2018 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qclipboard

```cpp
// QClipboard : public QObject


public:
    enum Mode { Clipboard, Selection, FindBuffer, LastMode = FindBuffer };

    void clear(Mode mode = Clipboard);

    bool supportsSelection() const;
    bool supportsFindBuffer() const;

    bool ownsSelection() const;
    bool ownsClipboard() const;
    bool ownsFindBuffer() const;

    QString text(Mode mode = Clipboard) const;
    QString text(QString& subtype, Mode mode = Clipboard) const;
    void setText(const QString &, Mode mode = Clipboard);

#ifdef QT3_SUPPORT
    QT3_SUPPORT QMimeSource *data(Mode mode = Clipboard) const;
    QT3_SUPPORT void setData(QMimeSource*, Mode mode = Clipboard);
#endif
    const QMimeData *mimeData(Mode mode = Clipboard ) const;
    void setMimeData(QMimeData *data, Mode mode = Clipboard);

    QImage image(Mode mode = Clipboard) const;
    QPixmap pixmap(Mode mode = Clipboard) const;
    void setImage(const QImage &, Mode mode  = Clipboard);
    void setPixmap(const QPixmap &, Mode mode  = Clipboard);

Q_SIGNALS:
    void changed(QClipboard::Mode mode);
    void selectionChanged();
    void findBufferChanged();
    void dataChanged();
private Q_SLOTS:
    void ownerDestroyed();

```

<!-- qclipboard.md ends here -->
