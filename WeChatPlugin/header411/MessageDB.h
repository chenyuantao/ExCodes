//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, NSString, WCTDatabase;

@interface MessageDB : NSObject
{
    WCTDatabase *m_db;
    NSString *m_nsIdentifier;
    NSRecursiveLock *m_oLock;
    NSMutableDictionary *m_dictCreateTable;
    NSMutableDictionary *m_dictMsgDeletionTable;
}

+ (void)RemoveMsgDBFile:(id)arg1;
@property(retain, nonatomic) NSString *dbIdentifier; // @synthesize dbIdentifier=m_nsIdentifier;
- (void).cxx_destruct;
- (id)getMsgDeletion:(id)arg1 mesSvrId:(long long)arg2;
- (id)getLastMsgDeletion:(id)arg1;
- (BOOL)deleteAllMMsgDeletion:(id)arg1;
- (unsigned int)addNewMsgDeletionToDB:(id)arg1 chatName:(id)arg2;
- (BOOL)createMsgDeletionTable:(id)arg1;
- (id)getMsgDeletionTableName:(id)arg1;
- (id)searchWithKeyword:(id)arg1 chatName:(id)arg2 minMesLocalID:(unsigned int)arg3 limitCount:(unsigned int)arg4;
- (unsigned int)getMsgMaxMsgSeqInTable:(id)arg1;
- (unsigned int)getMsgMaxCreateTimeInTable:(id)arg1;
- (void)handleLoadedMsg:(id)arg1 chatName:(id)arg2;
- (void)handleMsgListFromDB:(id)arg1 chatName:(id)arg2;
- (id)getUnReadInChat:(id)arg1 Limit:(unsigned int)arg2 FromID:(unsigned int)arg3 ToID:(unsigned int)arg4;
- (id)getUnReadInChat:(id)arg1 Limit:(unsigned int)arg2;
- (BOOL)createMsgTable:(id)arg1;
- (id)getMsgTableName:(id)arg1;
- (void)initMsgDB:(BOOL)arg1;
- (BOOL)clearUnRead:(unsigned int)arg1 ToID:(unsigned int)arg2 chatName:(id)arg3;
- (BOOL)clearUnReadForSync:(unsigned int)arg1 chatName:(id)arg2;
- (unsigned int)getUnReadCount:(id)arg1;
- (void)UpdateVideoMessage:(id)arg1 msgData:(id)arg2;
- (BOOL)deleteAllMsgInChat:(id)arg1;
- (BOOL)deleteRowInChatFromLocalId:(unsigned int)arg1 chatName:(id)arg2;
- (BOOL)deleteRowInChatWithLocalId:(unsigned int)arg1 svrId:(unsigned long long)arg2 chatName:(id)arg3;
- (BOOL)updateImageSizeWithMessage:(id)arg1 chatName:(id)arg2;
- (BOOL)updateUploadAndDownloadStatusInDBWithMessage:(id)arg1 chatName:(id)arg2;
- (BOOL)updateTranslateStatusInDBWithMessage:(id)arg1 chatName:(id)arg2;
- (BOOL)updateVoiceTextInDBWithMessage:(id)arg1 chatName:(id)arg2;
- (BOOL)updateVideoInformationInDBWithMessage:(id)arg1 chatName:(id)arg2;
- (BOOL)updateFileInformationInDBWithMessage:(id)arg1 chatName:(id)arg2;
- (BOOL)modifyMsgInDB:(id)arg1 chatName:(id)arg2;
- (BOOL)modifyMsgFieldInDB:(id)arg1 chatName:(id)arg2 bitSet:(unsigned int)arg3;
- (unsigned int)innerAddNewMsgToDB:(id)arg1 chatName:(id)arg2 isAutoIncrement:(BOOL)arg3;
- (unsigned int)addNewMsgToDB:(id)arg1 chatName:(id)arg2 shouldAutoIncreaseLocalID:(BOOL)arg3;
- (unsigned int)addNewMsgToDB:(id)arg1 chatName:(id)arg2;
- (id)GetMsgList:(id)arg1 mesLocalIDs:(vector_a9c0768e)arg2;
- (id)getAllMessageWithChatName:(id)arg1 messageType:(unsigned int)arg2 limit:(unsigned int)arg3;
- (unsigned int)geMsgCountWithChatName:(id)arg1 messageType:(unsigned int)arg2;
- (id)getMsgListStartWithLocalId:(unsigned int)arg1 limitCnt:(unsigned int)arg2 chatName:(id)arg3;
- (id)getMsgListStartWithMsgSeq:(unsigned int)arg1 limitCnt:(unsigned int)arg2 chatName:(id)arg3;
- (id)getMsgList:(unsigned int)arg1 limitCnt:(unsigned int)arg2 chatName:(id)arg3 messageTypes:(vector_a9c0768e)arg4;
- (id)getMostRecentMsgLaterThan:(unsigned int)arg1 chatName:(id)arg2;
- (id)getLastReadMsg:(id)arg1;
- (id)getFirstUnreadMsg:(id)arg1;
- (id)getLastMsg:(id)arg1;
- (id)getMsgDataFromDB:(unsigned int)arg1 msgSeq:(unsigned int)arg2 chatName:(id)arg3;
- (id)getMsgDataFromDB:(unsigned int)arg1 svrId:(unsigned long long)arg2 chatName:(id)arg3 isSysMsg:(BOOL)arg4;
- (id)getMsgDataFromDB:(unsigned int)arg1 svrId:(unsigned long long)arg2 chatName:(id)arg3;
- (unsigned int)convertToLocalCreateTime:(id)arg1 createTime:(unsigned int)arg2;
- (BOOL)hasMsgWithChat:(id)arg1;
- (BOOL)isTableExist:(id)arg1;
- (BOOL)RollBackTransation;
- (BOOL)CommitTransation;
- (BOOL)BeginTransation;
- (id)initWithIdentifier:(id)arg1 saveToDisk:(BOOL)arg2;
- (id)GetImgOrAppLastMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 CreateTime:(unsigned int)arg4;
- (id)GetImgOrAppNextMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 CreateTime:(unsigned int)arg4;
- (const list_02de7622 *)orderOfDescCreateTimeAndMsgLocalId;
- (const list_02de7622 *)orderOfAscCreateTimeAndMsgLocalId;
- (id)GetImgOrAppLastMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 CreateTime:(unsigned int)arg4;
- (id)GetImgOrAppNextMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 CreateTime:(unsigned int)arg4;
- (const list_02de7622 *)orderOfDescCreateTimeAndMsgLocalId;
- (const list_02de7622 *)orderOfAscCreateTimeAndMsgLocalId;

@end

