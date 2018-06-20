//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface UxLifeFeedItem : PBGeneratedMessage
{
    unsigned int hasNickName:1;
    unsigned int hasFeedId:1;
    unsigned int hasFeedContent:1;
    NSString *nickName;
    unsigned long long feedId;
    NSString *feedContent;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetFeedContent:) NSString *feedContent; // @synthesize feedContent;
@property(readonly, nonatomic) BOOL hasFeedContent; // @synthesize hasFeedContent;
@property(nonatomic, setter=SetFeedId:) unsigned long long feedId; // @synthesize feedId;
@property(readonly, nonatomic) BOOL hasFeedId; // @synthesize hasFeedId;
@property(retain, nonatomic, setter=SetNickName:) NSString *nickName; // @synthesize nickName;
@property(readonly, nonatomic) BOOL hasNickName; // @synthesize hasNickName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

