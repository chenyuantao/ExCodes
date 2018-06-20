//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

__attribute__((visibility("hidden")))
@interface SnsLbsRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasOpCode:1;
    unsigned int hasLongitude:1;
    unsigned int hasLatitude:1;
    unsigned int hasPrecision:1;
    unsigned int hasMacAddr:1;
    unsigned int hasCellId:1;
    unsigned int hasGpssource:1;
    unsigned int hasSbtime:1;
    unsigned int opCode;
    float longitude;
    float latitude;
    int precision;
    int gpssource;
    unsigned int sbtime;
    BaseRequest *baseRequest;
    NSString *macAddr;
    NSString *cellId;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetSbtime:) unsigned int sbtime; // @synthesize sbtime;
@property(readonly, nonatomic) BOOL hasSbtime; // @synthesize hasSbtime;
@property(nonatomic, setter=SetGpssource:) int gpssource; // @synthesize gpssource;
@property(readonly, nonatomic) BOOL hasGpssource; // @synthesize hasGpssource;
@property(retain, nonatomic, setter=SetCellId:) NSString *cellId; // @synthesize cellId;
@property(readonly, nonatomic) BOOL hasCellId; // @synthesize hasCellId;
@property(retain, nonatomic, setter=SetMacAddr:) NSString *macAddr; // @synthesize macAddr;
@property(readonly, nonatomic) BOOL hasMacAddr; // @synthesize hasMacAddr;
@property(nonatomic, setter=SetPrecision:) int precision; // @synthesize precision;
@property(readonly, nonatomic) BOOL hasPrecision; // @synthesize hasPrecision;
@property(nonatomic, setter=SetLatitude:) float latitude; // @synthesize latitude;
@property(readonly, nonatomic) BOOL hasLatitude; // @synthesize hasLatitude;
@property(nonatomic, setter=SetLongitude:) float longitude; // @synthesize longitude;
@property(readonly, nonatomic) BOOL hasLongitude; // @synthesize hasLongitude;
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

