//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WCDBBackupMsgSegmentsObject : NSObject <WCDBCoding>
{
    long long talkerId;
    long long StartTime;
    long long EndTime;
    long long OffSet;
    long long Length;
    NSString *UsrName;
    long long Status;
    long long Reserved1;
    NSString *FilePath;
    NSString *SegmentId;
    NSString *Reserved2;
    NSString *Reserved3;
    long long m___rowID;
}

+ (id)getWCDBTableHelperDictionary;
+ (void)_initPBTableOfWCDBBackupMsgSegmentsObject;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *Reserved3; // @synthesize Reserved3;
@property(retain, nonatomic) NSString *Reserved2; // @synthesize Reserved2;
@property(retain, nonatomic) NSString *SegmentId; // @synthesize SegmentId;
@property(retain, nonatomic) NSString *FilePath; // @synthesize FilePath;
@property(nonatomic) long long Reserved1; // @synthesize Reserved1;
@property(nonatomic) long long Status; // @synthesize Status;
@property(retain, nonatomic) NSString *UsrName; // @synthesize UsrName;
@property(nonatomic) long long Length; // @synthesize Length;
@property(nonatomic) long long OffSet; // @synthesize OffSet;
@property(nonatomic) long long EndTime; // @synthesize EndTime;
@property(nonatomic) long long StartTime; // @synthesize StartTime;
@property(nonatomic) long long talkerId; // @synthesize talkerId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (const map_d2afedfd *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const map_d2afedfd *)getFileValueTagIndexMap;
- (id)getFileValueTypeTable;
- (const map_d2afedfd *)getPackedValueTagIndexMap;
- (id)getPackedValueTypeTable;
- (const map_7a576766 *)getValueNameIndexMap;
- (id)getValueTable;
- (const WCDBCondition_0fe98630 *)db_Reserved3;
- (const WCDBCondition_0fe98630 *)db_Reserved2;
- (const WCDBCondition_0fe98630 *)db_SegmentId;
- (const WCDBCondition_0fe98630 *)db_FilePath;
- (const WCDBCondition_d07af32d *)db_Reserved1;
- (const WCDBCondition_d07af32d *)db_Status;
- (const WCDBCondition_0fe98630 *)db_UsrName;
- (const WCDBCondition_d07af32d *)db_Length;
- (const WCDBCondition_d07af32d *)db_OffSet;
- (const WCDBCondition_d07af32d *)db_EndTime;
- (const WCDBCondition_d07af32d *)db_StartTime;
- (const WCDBCondition_d07af32d *)db_talkerId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

