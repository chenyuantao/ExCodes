//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JTCaptureRequest, NSData, NSError, NSString;

@protocol JTCaptureRequestDelegate <NSObject>
- (void)captureRequest:(JTCaptureRequest *)arg1 didFinishWithImageData:(NSData *)arg2 saveToPath:(NSString *)arg3 error:(NSError *)arg4;
- (void)captureRequestDidCancel:(JTCaptureRequest *)arg1;
- (void)captureRequestDidChange:(JTCaptureRequest *)arg1;
@end

