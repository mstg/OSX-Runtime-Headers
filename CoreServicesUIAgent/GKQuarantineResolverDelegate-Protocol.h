//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKQuarantineResolver, NSArray, NSURL;

@protocol GKQuarantineResolverDelegate <NSObject>

@optional
- (void)resolver:(GKQuarantineResolver *)arg1 didChangeFractionCompleted:(double)arg2 forURL:(NSURL *)arg3;
- (void)resolver:(GKQuarantineResolver *)arg1 prepareToPresentResultsOfQuarantineResolutionForURLs:(NSArray *)arg2 completionHandler:(void (^)(void))arg3;
- (void)resolver:(GKQuarantineResolver *)arg1 willResolveQuarantineForURLs:(NSArray *)arg2;
- (void)resolverDidChangeState:(GKQuarantineResolver *)arg1;
@end

