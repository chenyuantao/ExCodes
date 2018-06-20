//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, PositionInfo;

__attribute__((visibility("hidden")))
@interface ScanStreetViewRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasUserPos:1;
    unsigned int hasScene:1;
    unsigned int hasHeading:1;
    unsigned int hasPitch:1;
    unsigned int scene;
    float heading;
    float pitch;
    BaseRequest *baseRequest;
    PositionInfo *userPos;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetPitch:) float pitch; // @synthesize pitch;
@property(readonly, nonatomic) BOOL hasPitch; // @synthesize hasPitch;
@property(nonatomic, setter=SetHeading:) float heading; // @synthesize heading;
@property(readonly, nonatomic) BOOL hasHeading; // @synthesize hasHeading;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(retain, nonatomic, setter=SetUserPos:) PositionInfo *userPos; // @synthesize userPos;
@property(readonly, nonatomic) BOOL hasUserPos; // @synthesize hasUserPos;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

