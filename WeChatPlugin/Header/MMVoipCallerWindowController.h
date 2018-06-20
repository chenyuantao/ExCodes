//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMVoipBaseWindowController.h"

@class MMTimer;

__attribute__((visibility("hidden")))
@interface MMVoipCallerWindowController : MMVoipBaseWindowController
{
    MMTimer *_notOnlineTimer;
}

@property(retain, nonatomic) MMTimer *notOnlineTimer; // @synthesize notOnlineTimer=_notOnlineTimer;
- (void).cxx_destruct;
- (void)onVideoSessionStartComplete;
- (void)changeToRemoteEarModeBeforeAnswer;
- (void)OnRemoteEarModeFor2G;
- (void)OnRemoteEarMode;
- (void)OnCallOverLoad:(id)arg1 errNo:(int)arg2 errMsg:(id)arg3;
- (void)OnCallBanned:(id)arg1 errNo:(int)arg2 errMsg:(id)arg3;
- (void)OnCall:(id)arg1 ErrNo:(int)arg2;
- (void)OnAutoHangUp:(id)arg1;
- (void)OnCallInterrupt:(id)arg1;
- (void)OnInterrupt:(id)arg1;
- (void)OnSyncError:(id)arg1 ErrNo:(int)arg2;
- (void)OnError:(id)arg1 ErrNo:(int)arg2;
- (void)OnTalkBrokenError:(id)arg1 ErrNo:(int)arg2;
- (void)OnNetWorkError:(id)arg1 ErrNo:(int)arg2;
- (void)OnBeginTalk:(id)arg1;
- (void)OnBeHanguped:(id)arg1;
- (void)OnBeginConnect:(id)arg1;
- (void)OnBeRejected:(id)arg1;
- (void)OnTimeOut:(id)arg1;
- (void)OnBeAccepted:(id)arg1;
- (void)OnPreConnect:(id)arg1;
- (void)OnNoAnswer:(id)arg1;
- (void)showRemoteNotOnlineTips;
- (void)showAlertTipsAsLocalMsgAndChangStatusToCancel:(id)arg1;
- (void)showAlertTips;
- (void)updateStatusAndTipsLabel;
- (void)autoUpdateMainStatusStringAndDotViewImage;
- (void)setupTipsLabel:(id)arg1;
- (void)layoutStatusLabelWithStr:(id)arg1 andMode:(int)arg2;
- (void)switchToVoiceChat;
- (void)startCamera;
- (void)endCall;
- (void)cancelCall;
- (void)startVoipInvite;
- (void)closeWindowAnimated:(BOOL)arg1;
- (void)showWindowAnimated:(BOOL)arg1;
- (void)delayDisplayPreviewLayerAfterResize:(id)arg1;
- (void)renderOnOppsiteRenderLayer:(id)arg1 Degree:(float)arg2;
- (void)renderOnPreviewRenderLayerWith:(id)arg1;
- (void)addEffectiveViewAboveRenderView;
- (void)layoutWithVoiceMode;
- (void)layoutWithVideoMode:(BOOL)arg1;
- (void)loadContent;
- (void)windowDidLoad;
- (id)init;

@end

