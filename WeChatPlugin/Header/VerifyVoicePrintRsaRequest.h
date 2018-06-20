//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, SKBuiltinBuffer_t, VoicePieceCtx;

__attribute__((visibility("hidden")))
@interface VerifyVoicePrintRsaRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasPiece:1;
    unsigned int hasVoiceTicket:1;
    unsigned int hasResId:1;
    unsigned int hasVerifyTicket:1;
    unsigned int hasRandomEncryKey:1;
    unsigned int voiceTicket;
    unsigned int resId;
    BaseRequest *baseRequest;
    VoicePieceCtx *piece;
    NSString *verifyTicket;
    SKBuiltinBuffer_t *randomEncryKey;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetRandomEncryKey:) SKBuiltinBuffer_t *randomEncryKey; // @synthesize randomEncryKey;
@property(readonly, nonatomic) BOOL hasRandomEncryKey; // @synthesize hasRandomEncryKey;
@property(retain, nonatomic, setter=SetVerifyTicket:) NSString *verifyTicket; // @synthesize verifyTicket;
@property(readonly, nonatomic) BOOL hasVerifyTicket; // @synthesize hasVerifyTicket;
@property(nonatomic, setter=SetResId:) unsigned int resId; // @synthesize resId;
@property(readonly, nonatomic) BOOL hasResId; // @synthesize hasResId;
@property(nonatomic, setter=SetVoiceTicket:) unsigned int voiceTicket; // @synthesize voiceTicket;
@property(readonly, nonatomic) BOOL hasVoiceTicket; // @synthesize hasVoiceTicket;
@property(retain, nonatomic, setter=SetPiece:) VoicePieceCtx *piece; // @synthesize piece;
@property(readonly, nonatomic) BOOL hasPiece; // @synthesize hasPiece;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

