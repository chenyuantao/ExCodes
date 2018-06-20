//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

__attribute__((visibility("hidden")))
@interface BindEmailRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasOpCode:1;
    unsigned int hasEmail:1;
    unsigned int opCode;
    BaseRequest *baseRequest;
    NSString *email;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetEmail:) NSString *email; // @synthesize email;
@property(readonly, nonatomic) BOOL hasEmail; // @synthesize hasEmail;
@property(nonatomic, setter=SetOpCode:) unsigned int opCode; // @synthesize opCode;
@property(readonly, nonatomic) BOOL hasOpCode; // @synthesize hasOpCode;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

