//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSBitmapImageRep.h>

@interface NSIconRefBitmapImageRep : NSBitmapImageRep
{
    struct OpaqueIconRef *_iconRef;
    unsigned int _bitmapDataAvailable:1;
}

- (BOOL)_isValid;
- (void)setPixel:(unsigned long long *)arg1 atX:(long long)arg2 y:(long long)arg3;
- (void)getPixel:(unsigned long long *)arg1 atX:(long long)arg2 y:(long long)arg3;
- (id)colorAtX:(long long)arg1 y:(long long)arg2;
- (void)setColor:(id)arg1 atX:(long long)arg2 y:(long long)arg3;
- (void)getBitmapDataPlanes:(char **)arg1;
- (char *)bitmapData;
- (id)TIFFRepresentationUsingCompression:(unsigned long long)arg1 factor:(float)arg2;
- (id)TIFFRepresentation;
- (struct CGImage *)CGImage;
- (long long)_uncachedSize;
- (BOOL)draw;
- (BOOL)drawInRect:(struct CGRect)arg1;
- (BOOL)drawAtPoint:(struct CGPoint)arg1;
- (void)_ensureBitmapDataAvailable;
- (id)initWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct OpaqueIconRef *)iconRef;
- (id)initWithIconRef:(struct OpaqueIconRef *)arg1 size:(struct CGSize)arg2;
- (id)initWithIconRef:(struct OpaqueIconRef *)arg1 sizeIdentifier:(unsigned int)arg2 scaleIdentifier:(unsigned int)arg3;

@end

