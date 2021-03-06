//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileWatcherObservations, NSMutableDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface NSFileWatcher : NSObject
{
    struct dispatch_queue_s *_queue;
    NSURL *_url;
    CDUnknownBlockType _observer;
    BOOL _isWatching;
    struct dispatch_source_s *_eventSource;
    unsigned long long _lastObservedEventID;
    struct __FSEventStream *_eventStream;
    BOOL _eventsAreAboutDirectory;
    BOOL _isUnsettled;
    NSFileWatcherObservations *_itemObservations;
    NSMutableDictionary *_subitemObservationsByEventPath;
    NSURL *_fileReferenceURL;
    NSString *_formerPath;
    NSURL *_formerURL;
}

- (void)stop;
- (void)settle;
- (void)_coalesceSubitemObservations;
- (void)unsettle;
- (void)start;
- (void)setObserver:(CDUnknownBlockType)arg1;
- (void)setLastObservedEventID:(unsigned long long)arg1;
- (void)setURL:(id)arg1;
- (void)watchItem;
- (void)handleFSEventPath:(id)arg1 flags:(unsigned int)arg2 id:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1;

@end

