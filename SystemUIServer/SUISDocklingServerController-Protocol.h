//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSString, NSURL;

@protocol SUISDocklingServerController
- (unsigned int)getMenuExtraByIdentifier:(NSString *)arg1;
- (void)removeMenuExtraByIdentifier:(NSString *)arg1 fromExtra:(BOOL)arg2;
- (void)removeMenuExtraById:(unsigned int)arg1 fromExtra:(BOOL)arg2;
- (unsigned int)addMenuExtra:(NSURL *)arg1 position:(int)arg2 reserved:(unsigned int)arg3 data:(NSData *)arg4;
@end
