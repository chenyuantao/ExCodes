//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface AudioHelper : NSObject
{
}

+ (BOOL)isSilkFile:(id)arg1;
+ (void)showRecordDenied;
+ (void)playCustomReceiveNewMessageSound;
+ (void)AVPlaySystemSound:(id)arg1 Ambient:(BOOL)arg2;
+ (void)PlaySystemSound:(id)arg1 Ambient:(BOOL)arg2;
+ (void)playSoundWithSoundID:(id)arg1;
+ (void)playCashReceive;
+ (void)playSendMsgNotify;
+ (BOOL)playNewMsgNotifyInMessageContent;
+ (BOOL)playNewMsgNotify;
+ (void)playVibration;
+ (void)AVPlaySystemSound:(id)arg1 FileType:(id)arg2 Ambient:(BOOL)arg3;
+ (void)PlaySystemSound:(id)arg1 FileType:(id)arg2 Ambient:(BOOL)arg3;
+ (void)RestartAudioTalk;
+ (BOOL)PauseAudioTalk;
+ (void)StopAudioTalk;
+ (BOOL)IsAudioTalkRecording;
+ (BOOL)IsAudioTalkPlaying;
+ (void)ForceStopMusic;
+ (void)NextMusic;
+ (void)RestartMusic;
+ (BOOL)PauseMusic;
+ (void)StopMusic;
+ (BOOL)IsMusicPaused;
+ (BOOL)IsMusicPlaying;
+ (void)StopAudio;
+ (BOOL)IsWeiXinSoundPaused;
+ (BOOL)IsWeiXinSoundPlaying;

@end

