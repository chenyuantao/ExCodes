//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString, OpenAppInfo;

__attribute__((visibility("hidden")))
@interface GetAppInfoResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasAppInfo:1;
    unsigned int hasNoUse:1;
    unsigned int hasDevInfo:1;
    unsigned int hasAppType:1;
    unsigned int noUse;
    BaseResponse *baseResponse;
    OpenAppInfo *appInfo;
    NSString *devInfo;
    NSString *appType;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetAppType:) NSString *appType; // @synthesize appType;
@property(readonly, nonatomic) BOOL hasAppType; // @synthesize hasAppType;
@property(retain, nonatomic, setter=SetDevInfo:) NSString *devInfo; // @synthesize devInfo;
@property(readonly, nonatomic) BOOL hasDevInfo; // @synthesize hasDevInfo;
@property(nonatomic, setter=SetNoUse:) unsigned int noUse; // @synthesize noUse;
@property(readonly, nonatomic) BOOL hasNoUse; // @synthesize hasNoUse;
@property(retain, nonatomic, setter=SetAppInfo:) OpenAppInfo *appInfo; // @synthesize appInfo;
@property(readonly, nonatomic) BOOL hasAppInfo; // @synthesize hasAppInfo;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

