//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class ECDHKey, SKBuiltinBuffer_t;

@interface SecAuthRegKeySect : PBGeneratedMessage
{
    unsigned int hasAutoAuthKey:1;
    unsigned int hasSvrPubEcdhkey:1;
    unsigned int hasSessionKey:1;
    unsigned int hasAuthResultFlag:1;
    unsigned int authResultFlag;
    SKBuiltinBuffer_t *autoAuthKey;
    ECDHKey *svrPubEcdhkey;
    SKBuiltinBuffer_t *sessionKey;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetAuthResultFlag:) unsigned int authResultFlag; // @synthesize authResultFlag;
@property(readonly, nonatomic) BOOL hasAuthResultFlag; // @synthesize hasAuthResultFlag;
@property(retain, nonatomic, setter=SetSessionKey:) SKBuiltinBuffer_t *sessionKey; // @synthesize sessionKey;
@property(readonly, nonatomic) BOOL hasSessionKey; // @synthesize hasSessionKey;
@property(retain, nonatomic, setter=SetSvrPubEcdhkey:) ECDHKey *svrPubEcdhkey; // @synthesize svrPubEcdhkey;
@property(readonly, nonatomic) BOOL hasSvrPubEcdhkey; // @synthesize hasSvrPubEcdhkey;
@property(retain, nonatomic, setter=SetAutoAuthKey:) SKBuiltinBuffer_t *autoAuthKey; // @synthesize autoAuthKey;
@property(readonly, nonatomic) BOOL hasAutoAuthKey; // @synthesize hasAutoAuthKey;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

