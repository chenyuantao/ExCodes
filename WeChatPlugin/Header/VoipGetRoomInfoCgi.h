//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VoipMonoMsg;

__attribute__((visibility("hidden")))
@interface VoipGetRoomInfoCgi : NSObject
{
    VoipMonoMsg *m_voipMonoMsg;
    id <VoipGetRoomInfoCgiDelegate> _m_delegate;
}

@property(nonatomic) __weak id <VoipGetRoomInfoCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) VoipMonoMsg *m_voipMonoMsg; // @synthesize m_voipMonoMsg;
- (void).cxx_destruct;
- (void)HandleGetRoomInfoResp:(id)arg1;
- (void)startRequest;
- (id)init;

@end

