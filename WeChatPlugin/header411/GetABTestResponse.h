//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface GetABTestResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasInternalTime:1;
    unsigned int hasTimestamp:1;
    unsigned int internalTime;
    unsigned int timestamp;
    BaseResponse *baseResponse;
    NSMutableArray *mutableExperimentListList;
    NSMutableArray *mutableExpiredexpidList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableExpiredexpidList; // @synthesize mutableExpiredexpidList;
@property(nonatomic, setter=SetTimestamp:) unsigned int timestamp; // @synthesize timestamp;
@property(readonly, nonatomic) BOOL hasTimestamp; // @synthesize hasTimestamp;
@property(nonatomic, setter=SetInternalTime:) unsigned int internalTime; // @synthesize internalTime;
@property(readonly, nonatomic) BOOL hasInternalTime; // @synthesize hasInternalTime;
@property(retain, nonatomic) NSMutableArray *mutableExperimentListList; // @synthesize mutableExperimentListList;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addExpiredexpidFromArray:(id)arg1;
- (void)addExpiredexpid:(unsigned int)arg1;
- (void)addExperimentListFromArray:(id)arg1;
- (void)addExperimentList:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *expiredexpid; // @dynamic expiredexpid;
- (id)expiredexpidList;
@property(retain, nonatomic) NSMutableArray *experimentList; // @dynamic experimentList;
- (id)experimentListList;
- (id)init;

@end

