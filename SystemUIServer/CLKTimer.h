//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface CLKTimer : NSObject
{
    NSTimer *localTimer;
    id userInfo;
}

+ (id)scheduledMinuteTimerWithTarget:(id)arg1 selector:(SEL)arg2 userInfo:(id)arg3;
+ (id)scheduledSecondTimerWithTarget:(id)arg1 selector:(SEL)arg2 userInfo:(id)arg3;
+ (id)_scheduledClockTimerWithSeconds:(unsigned long long)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4;
@property(readonly) id userInfo; // @synthesize userInfo;
- (void)invalidate;
- (void)dealloc;
- (id)_initWithUserInfo:(id)arg1;
- (void)_stopLocalTimer;
- (void)_localTimerCallback:(id)arg1;
- (void)_startLocalTimerWithSeconds:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)_nextSecondDate;
- (id)_nextMinuteDate;

@end

