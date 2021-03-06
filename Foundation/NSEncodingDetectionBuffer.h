//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSEncodingDetectionPlaceholder;

__attribute__((visibility("hidden")))
@interface NSEncodingDetectionBuffer : NSObject
{
    unsigned long long _nsEncoding;
    unsigned int _cfEncoding;
    NSEncodingDetectionPlaceholder *_placeholder;
    char *_bytes;
    BOOL _bytesAllocated;
    unsigned long long _bytesIndex;
    unsigned long long _bytesLength;
}

- (id)stringWithLossySubsitutionString:(id)arg1;
- (void)appendBytes:(const char *)arg1 count:(unsigned long long)arg2;
- (void)appendPlaceholder;
- (void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2 byte3:(unsigned char)arg3 byte4:(unsigned char)arg4;
- (void)appendUTF32Char:(unsigned int)arg1;
- (void)appendUTF16Char:(unsigned short)arg1;
- (void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2 byte3:(unsigned char)arg3;
- (void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2;
- (void)appendByte:(unsigned char)arg1;
- (BOOL)_growBufferIfNeededToAccomodateByteCount:(unsigned long long)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithNSStringEncoding:(unsigned long long)arg1 CFStringEncoding:(unsigned int)arg2 stackBuffer:(char *)arg3 bufferLength:(unsigned long long)arg4 placeholder:(id)arg5;

@end

