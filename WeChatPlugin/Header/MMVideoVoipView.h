//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, CALayer, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface MMVideoVoipView : NSView <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureSession *captureSession;
    AVCaptureVideoPreviewLayer *previewLayer;
    AVCaptureVideoDataOutput *videoDataOutput;
    NSObject<OS_dispatch_queue> *videoDataOutputQueue;
    CALayer *testLayer;
}

- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)startCapture;
- (void)setupCaptureSetting;
- (void)drawRect:(struct CGRect)arg1;
- (void)setupVideoOutputForSession:(id)arg1;
- (id)setupAVCaptureSession;
- (void)setupTestLayer;
- (void)setupPreviewLayerForSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

