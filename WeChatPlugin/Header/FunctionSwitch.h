//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

__attribute__((visibility("hidden")))
@interface FunctionSwitch : PBGeneratedMessage
{
    unsigned int hasFunctionId:1;
    unsigned int hasSwitchValue:1;
    unsigned int functionId;
    unsigned int switchValue;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetSwitchValue:) unsigned int switchValue; // @synthesize switchValue;
@property(readonly, nonatomic) BOOL hasSwitchValue; // @synthesize hasSwitchValue;
@property(nonatomic, setter=SetFunctionId:) unsigned int functionId; // @synthesize functionId;
@property(readonly, nonatomic) BOOL hasFunctionId; // @synthesize hasFunctionId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

