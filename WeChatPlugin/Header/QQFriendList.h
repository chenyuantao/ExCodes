//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface QQFriendList : PBGeneratedMessage
{
    unsigned int hasGroupId:1;
    unsigned int hasCount:1;
    unsigned int groupId;
    unsigned int count;
    NSMutableArray *mutableQqfriendsList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableQqfriendsList; // @synthesize mutableQqfriendsList;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(nonatomic, setter=SetGroupId:) unsigned int groupId; // @synthesize groupId;
@property(readonly, nonatomic) BOOL hasGroupId; // @synthesize hasGroupId;
- (void).cxx_destruct;
- (void)addQqfriends:(id)arg1;
- (void)addQqfriendsFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *qqfriends; // @dynamic qqfriends;
- (id)qqfriendsList;
- (id)init;

@end

