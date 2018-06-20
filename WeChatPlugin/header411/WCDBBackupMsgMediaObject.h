//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WCDBBackupMsgMediaObject : NSObject <WCTTableCoding>
{
    long long talkerId;
    long long MediaId;
    long long MsgSegmentId;
    long long SvrId;
    NSString *MD5;
    NSString *talker;
    NSString *MediaIdStr;
    long long Reserved0;
    long long Reserved1;
    NSString *Reserved2;
}

+ (const struct WCTProperty *)Reserved2;
+ (const struct WCTProperty *)Reserved1;
+ (const struct WCTProperty *)Reserved0;
+ (const struct WCTProperty *)MediaIdStr;
+ (const struct WCTProperty *)talker;
+ (const struct WCTProperty *)MD5;
+ (const struct WCTProperty *)SvrId;
+ (const struct WCTProperty *)MsgSegmentId;
+ (const struct WCTProperty *)MediaId;
+ (const struct WCTProperty *)talkerId;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *Reserved2; // @synthesize Reserved2;
@property(nonatomic) long long Reserved1; // @synthesize Reserved1;
@property(nonatomic) long long Reserved0; // @synthesize Reserved0;
@property(retain, nonatomic) NSString *MediaIdStr; // @synthesize MediaIdStr;
@property(retain, nonatomic) NSString *talker; // @synthesize talker;
@property(retain, nonatomic) NSString *MD5; // @synthesize MD5;
@property(nonatomic) long long SvrId; // @synthesize SvrId;
@property(nonatomic) long long MsgSegmentId; // @synthesize MsgSegmentId;
@property(nonatomic) long long MediaId; // @synthesize MediaId;
@property(nonatomic) long long talkerId; // @synthesize talkerId;
- (void).cxx_destruct;
- (id)description;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

