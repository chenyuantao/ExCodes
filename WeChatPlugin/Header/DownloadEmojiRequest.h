//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray;

__attribute__((visibility("hidden")))
@interface DownloadEmojiRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasEmojiItemCount:1;
    int emojiItemCount;
    BaseRequest *baseRequest;
    NSMutableArray *mutableEmojiItemList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableEmojiItemList; // @synthesize mutableEmojiItemList;
@property(nonatomic, setter=SetEmojiItemCount:) int emojiItemCount; // @synthesize emojiItemCount;
@property(readonly, nonatomic) BOOL hasEmojiItemCount; // @synthesize hasEmojiItemCount;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (void)addEmojiItem:(id)arg1;
- (void)addEmojiItemFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *emojiItem; // @dynamic emojiItem;
- (id)emojiItemList;
- (id)init;

@end

