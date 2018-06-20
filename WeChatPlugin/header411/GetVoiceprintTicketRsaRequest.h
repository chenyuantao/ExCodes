//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface GetVoiceprintTicketRsaRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasUserName:1;
    unsigned int hasGetScence:1;
    unsigned int hasRandomEncryKey:1;
    unsigned int getScence;
    BaseRequest *baseRequest;
    NSString *userName;
    SKBuiltinBuffer_t *randomEncryKey;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetRandomEncryKey:) SKBuiltinBuffer_t *randomEncryKey; // @synthesize randomEncryKey;
@property(readonly, nonatomic) BOOL hasRandomEncryKey; // @synthesize hasRandomEncryKey;
@property(nonatomic, setter=SetGetScence:) unsigned int getScence; // @synthesize getScence;
@property(readonly, nonatomic) BOOL hasGetScence; // @synthesize hasGetScence;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

