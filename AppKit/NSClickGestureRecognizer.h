//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSGestureRecognizer.h>

#import "NSCoding.h"

@interface NSClickGestureRecognizer : NSGestureRecognizer <NSCoding>
{
    long long _flags;
    struct CGPoint _location;
    unsigned long long _buttonMask;
    long long _numberOfClicksRequired;
    long long _currentButtonCount;
    long long _activeButtonCount;
    long long _currentClickCount;
    id _reserved0;
}

@property long long numberOfClicksRequired; // @synthesize numberOfClicksRequired=_numberOfClicksRequired;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)pressureChangeWithEvent:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)_desiredPressureBehavior;
- (void)_failRecognition;
- (void)_beginInteraction;
- (void)tooSlow:(id)arg1;
- (void)startClickTimer:(double)arg1;
- (void)clearClickTimer;
- (void)reset;
- (struct CGPoint)locationInView:(id)arg1;
@property unsigned long long buttonMask;
- (void)_appendSubclassDescription:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
@property(readonly) double stageTransition;
@property(readonly) double pressure;
@property(readonly) long long stage;
@property long long behavior;
@property double allowableMovement;
- (void)_setHasCustomAllowableMovement:(BOOL)arg1;
- (BOOL)_hasCustomAllowableMovement;

@end
