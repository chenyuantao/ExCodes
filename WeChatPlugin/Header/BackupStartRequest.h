//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BackupStartGeneralInfo, NSString;

__attribute__((visibility("hidden")))
@interface BackupStartRequest : PBGeneratedMessage
{
    unsigned int hasId:1;
    NSString *id_;
    unsigned int hasBigDataSize:1;
    unsigned int hasSessionCount:1;
    unsigned int hasMsgCount:1;
    unsigned int hasGeneralInfo:1;
    unsigned int hasDataSize:1;
    unsigned int hasTransferType:1;
    int transferType;
    unsigned long long bigDataSize;
    unsigned long long sessionCount;
    unsigned long long msgCount;
    BackupStartGeneralInfo *generalInfo;
    unsigned long long dataSize;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetTransferType:) int transferType; // @synthesize transferType;
@property(readonly, nonatomic) BOOL hasTransferType; // @synthesize hasTransferType;
@property(nonatomic, setter=SetDataSize:) unsigned long long dataSize; // @synthesize dataSize;
@property(readonly, nonatomic) BOOL hasDataSize; // @synthesize hasDataSize;
@property(retain, nonatomic, setter=SetGeneralInfo:) BackupStartGeneralInfo *generalInfo; // @synthesize generalInfo;
@property(readonly, nonatomic) BOOL hasGeneralInfo; // @synthesize hasGeneralInfo;
@property(nonatomic, setter=SetMsgCount:) unsigned long long msgCount; // @synthesize msgCount;
@property(readonly, nonatomic) BOOL hasMsgCount; // @synthesize hasMsgCount;
@property(nonatomic, setter=SetSessionCount:) unsigned long long sessionCount; // @synthesize sessionCount;
@property(readonly, nonatomic) BOOL hasSessionCount; // @synthesize hasSessionCount;
@property(nonatomic, setter=SetBigDataSize:) unsigned long long bigDataSize; // @synthesize bigDataSize;
@property(readonly, nonatomic) BOOL hasBigDataSize; // @synthesize hasBigDataSize;
@property(retain, nonatomic, setter=SetId:) NSString *id; // @synthesize id=id_;
@property(readonly, nonatomic) BOOL hasId; // @synthesize hasId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

