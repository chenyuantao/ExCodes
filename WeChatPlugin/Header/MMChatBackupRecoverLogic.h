//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMChatBackupBasicLogic.h"

@class MMChatBackupIndexDB, MMChatBackupTransferMgr, MMChatLogProtoHandler, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MMChatBackupRecoverLogic : MMChatBackupBasicLogic
{
    MMChatLogProtoHandler *m_protoHandler;
    BOOL m_bStopService;
    MMChatBackupTransferMgr *m_transferMgr;
    MMChatBackupIndexDB *m_indexDB;
    BOOL m_bFirstTag;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    NSString *m_lastSessionName;
    NSMutableDictionary *m_sessionNickDictionary;
    unsigned int m_startBackupTime;
    NSMutableArray *m_sendingArray;
}

- (void).cxx_destruct;
- (void)sendFinishRequest;
- (void)sendNextOutputWithResponseID:(id)arg1;
- (void)processBackupDataTagResponseData:(id)arg1;
- (void)processBackupOutputForTag:(id)arg1;
- (void)sendBackupOutputToRemote:(id)arg1;
- (void)processDataPushResponseData:(id)arg1;
- (void)sendLotOfOutput;
- (void)processRequestSessionResponseData:(id)arg1;
- (void)sendRequestSession;
- (void)processStartResponseData:(id)arg1;
- (void)sendStartRequest;
- (BOOL)sendData:(id)arg1;
- (void)stopService;
- (void)startService;
- (void)dealloc;
- (id)initWithProtoHandler:(id)arg1;

@end

