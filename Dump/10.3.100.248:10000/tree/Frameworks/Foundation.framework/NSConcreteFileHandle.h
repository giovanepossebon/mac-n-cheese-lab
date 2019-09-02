/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteFileHandle : NSFileHandle {
    unsigned short  _activity;
    NSObject<OS_dispatch_source> * _dsrc;
    int  _error;
    int  _fd;
    NSObject<OS_dispatch_queue> * _fhQueue;
    unsigned short  _flags;
    NSObject<OS_dispatch_queue> * _monitoringQueue;
    NSObject<OS_dispatch_io> * _readChannel;
    NSObject<OS_dispatch_source> * _readMonitoringSource;
    id /* block */  _readabilityHandler;
    NSObject<OS_dispatch_data> * _resultData;
    int  _resultSocket;
    struct __CFRunLoop { } * _rl;
    struct __CFRunLoopSource { } * _source;
    NSObject<OS_dispatch_source> * _writeMonitoringSource;
    id /* block */  _writeabilityHandler;
}

- (void)_cancelDispatchSources;
- (void)_closeOnDealloc;
- (void)_locked_clearHandler:(id /* block */*)arg1 forSource:(id*)arg2;
- (id)_monitor:(int)arg1;
- (void)acceptConnectionInBackgroundAndNotify;
- (void)acceptConnectionInBackgroundAndNotifyForModes:(id)arg1;
- (id)availableData;
- (void)closeFile;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (int)fileDescriptor;
- (id)init;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(bool)arg2;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4;
- (id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4;
- (unsigned long long)offsetInFile;
- (void)performActivity:(long long)arg1 modes:(id)arg2;
- (id)port;
- (id)readDataOfLength:(unsigned long long)arg1;
- (unsigned long long)readDataOfLength:(unsigned long long)arg1 buffer:(char *)arg2;
- (id)readDataToEndOfFile;
- (void)readInBackgroundAndNotify;
- (void)readInBackgroundAndNotifyForModes:(id)arg1;
- (void)readToEndOfFileInBackgroundAndNotify;
- (void)readToEndOfFileInBackgroundAndNotifyForModes:(id)arg1;
- (id /* block */)readabilityHandler;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (void)setPort:(id)arg1;
- (void)setReadabilityHandler:(id /* block */)arg1;
- (void)setWriteabilityHandler:(id /* block */)arg1;
- (void)synchronizeFile;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)waitForDataInBackgroundAndNotify;
- (void)waitForDataInBackgroundAndNotifyForModes:(id)arg1;
- (void)writeData:(id)arg1;
- (id /* block */)writeabilityHandler;

@end
