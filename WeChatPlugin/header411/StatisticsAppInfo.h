//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface StatisticsAppInfo : PBGeneratedMessage
{
    unsigned int hasSourceAppId:1;
    NSString *sourceAppId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetSourceAppId:) NSString *sourceAppId; // @synthesize sourceAppId;
@property(readonly, nonatomic) BOOL hasSourceAppId; // @synthesize hasSourceAppId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

