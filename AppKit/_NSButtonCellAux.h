//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _NSAcceleratorButtonHelper, _NSButtonAnimationView;

__attribute__((visibility("hidden")))
@interface _NSButtonCellAux : NSObject
{
    _NSButtonAnimationView *_animator;
    _NSAcceleratorButtonHelper *acceleratorHelper;
    double _doubleValue;
    long long _maxAcceleratorLevel;
    double _acceleratorClickTimestamp;
    unsigned char _buttonType;
    BOOL _exceededInitialValue;
    BOOL _springLoaded;
    BOOL _springLoadingEmphasized;
    BOOL _animationsAllowed;
}

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

