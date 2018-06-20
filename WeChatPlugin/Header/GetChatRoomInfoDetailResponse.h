//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

__attribute__((visibility("hidden")))
@interface GetChatRoomInfoDetailResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasAnnouncement:1;
    unsigned int hasChatRoomInfoVersion:1;
    unsigned int hasAnnouncementEditor:1;
    unsigned int hasAnnouncementPublishTime:1;
    unsigned int chatRoomInfoVersion;
    unsigned int announcementPublishTime;
    BaseResponse *baseResponse;
    NSString *announcement;
    NSString *announcementEditor;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetAnnouncementPublishTime:) unsigned int announcementPublishTime; // @synthesize announcementPublishTime;
@property(readonly, nonatomic) BOOL hasAnnouncementPublishTime; // @synthesize hasAnnouncementPublishTime;
@property(retain, nonatomic, setter=SetAnnouncementEditor:) NSString *announcementEditor; // @synthesize announcementEditor;
@property(readonly, nonatomic) BOOL hasAnnouncementEditor; // @synthesize hasAnnouncementEditor;
@property(nonatomic, setter=SetChatRoomInfoVersion:) unsigned int chatRoomInfoVersion; // @synthesize chatRoomInfoVersion;
@property(readonly, nonatomic) BOOL hasChatRoomInfoVersion; // @synthesize hasChatRoomInfoVersion;
@property(retain, nonatomic, setter=SetAnnouncement:) NSString *announcement; // @synthesize announcement;
@property(readonly, nonatomic) BOOL hasAnnouncement; // @synthesize hasAnnouncement;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

