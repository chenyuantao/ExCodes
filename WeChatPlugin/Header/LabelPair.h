//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface LabelPair : PBGeneratedMessage
{
    unsigned int hasLabelName:1;
    unsigned int hasLabelId:1;
    unsigned int labelId;
    NSString *labelName;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetLabelId:) unsigned int labelId; // @synthesize labelId;
@property(readonly, nonatomic) BOOL hasLabelId; // @synthesize hasLabelId;
@property(retain, nonatomic, setter=SetLabelName:) NSString *labelName; // @synthesize labelName;
@property(readonly, nonatomic) BOOL hasLabelName; // @synthesize hasLabelName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

