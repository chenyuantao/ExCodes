//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

__attribute__((visibility("hidden")))
@interface SetChatRoomAnnouncementRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasChatRoomName:1;
    unsigned int hasAnnouncement:1;
    unsigned int hasSetAnnouncementFlag:1;
    unsigned int setAnnouncementFlag;
    BaseRequest *baseRequest;
    NSString *chatRoomName;
    NSString *announcement;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetSetAnnouncementFlag:) unsigned int setAnnouncementFlag; // @synthesize setAnnouncementFlag;
@property(readonly, nonatomic) BOOL hasSetAnnouncementFlag; // @synthesize hasSetAnnouncementFlag;
@property(retain, nonatomic, setter=SetAnnouncement:) NSString *announcement; // @synthesize announcement;
@property(readonly, nonatomic) BOOL hasAnnouncement; // @synthesize hasAnnouncement;
@property(retain, nonatomic, setter=SetChatRoomName:) NSString *chatRoomName; // @synthesize chatRoomName;
@property(readonly, nonatomic) BOOL hasChatRoomName; // @synthesize hasChatRoomName;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

