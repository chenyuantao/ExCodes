//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface SKBuiltinChar_t : PBGeneratedMessage
{
    unsigned int hasIVal:1;
    int iVal;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetIVal:) int iVal; // @synthesize iVal;
@property(readonly, nonatomic) BOOL hasIVal; // @synthesize hasIVal;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

