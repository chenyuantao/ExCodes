//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

__attribute__((visibility("hidden")))
@interface LockStockRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasPid:1;
    unsigned int hasSkuId:1;
    unsigned int hasCount:1;
    unsigned int hasUrl:1;
    unsigned int count;
    BaseRequest *baseRequest;
    NSString *pid;
    NSString *skuId;
    NSString *url;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetUrl:) NSString *url; // @synthesize url;
@property(readonly, nonatomic) BOOL hasUrl; // @synthesize hasUrl;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(retain, nonatomic, setter=SetSkuId:) NSString *skuId; // @synthesize skuId;
@property(readonly, nonatomic) BOOL hasSkuId; // @synthesize hasSkuId;
@property(retain, nonatomic, setter=SetPid:) NSString *pid; // @synthesize pid;
@property(readonly, nonatomic) BOOL hasPid; // @synthesize hasPid;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

