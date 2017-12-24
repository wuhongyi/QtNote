<!-- qeventloop.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 21:19:45 2017 (+0800)
;; Last-Updated: 日 12月 24 21:20:44 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qeventloop


```cpp
// QEventLoop : public QObject


public:
    explicit QEventLoop(QObject *parent = 0);
    ~QEventLoop();

    enum ProcessEventsFlag {
        AllEvents = 0x00,
        ExcludeUserInputEvents = 0x01,
        ExcludeSocketNotifiers = 0x02,
        WaitForMoreEvents = 0x04,
#ifdef QT3_SUPPORT
        ExcludeUserInput = ExcludeUserInputEvents,
        WaitForMore = WaitForMoreEvents,
#endif
	X11ExcludeTimers = 0x08
#ifdef QT_DEPRECATED
	, DeferredDeletion = 0x10
#endif
        , EventLoopExec = 0x20
        , DialogExec = 0x40
    };
    Q_DECLARE_FLAGS(ProcessEventsFlags, ProcessEventsFlag)

    bool processEvents(ProcessEventsFlags flags = AllEvents);
    void processEvents(ProcessEventsFlags flags, int maximumTime);

    int exec(ProcessEventsFlags flags = AllEvents);
    void exit(int returnCode = 0);
    bool isRunning() const;

    void wakeUp();

public Q_SLOTS:
    void quit();
```





<!-- qeventloop.md ends here -->
