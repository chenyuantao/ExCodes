//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WCDBBackupSessionObject : NSObject <WCDBCoding>
{
    NSString *talker;
    long long EndTime;
    long long TotalSize;
    NSString *NickName;
    long long Reserved0;
    long long Reserved1;
    NSString *Reserved2;
    NSString *Reserved3;
    long long StartTime;
    NSString *Reserved5;
    long long m___rowID;
}

+ (void)_initPBTableOfWCDBBackupSessionObject;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *Reserved5; // @synthesize Reserved5;
@property(nonatomic) long long StartTime; // @synthesize StartTime;
@property(retain, nonatomic) NSString *Reserved3; // @synthesize Reserved3;
@property(retain, nonatomic) NSString *Reserved2; // @synthesize Reserved2;
@property(nonatomic) long long Reserved1; // @synthesize Reserved1;
@property(nonatomic) long long Reserved0; // @synthesize Reserved0;
@property(retain, nonatomic) NSString *NickName; // @synthesize NickName;
@property(nonatomic) long long TotalSize; // @synthesize TotalSize;
@property(nonatomic) long long EndTime; // @synthesize EndTime;
@property(retain, nonatomic) NSString *talker; // @synthesize talker;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (const basic_string_805fe43b *)getWCDBPrimaryColumnName;
- (const struct WCDBIndexHelper *)getWCDBIndexArray;
- (unsigned long long)getWCDBIndexArrayCount;
- (const map_d2afedfd *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const map_d2afedfd *)getFileValueTagIndexMap;
- (id)getFileValueTypeTable;
- (const map_d2afedfd *)getPackedValueTagIndexMap;
- (id)getPackedValueTypeTable;
- (const map_7a576766 *)getValueNameIndexMap;
- (id)getValueTable;
- (const WCDBCondition_0fe98630 *)db_Reserved5;
- (const WCDBCondition_d07af32d *)db_StartTime;
- (const WCDBCondition_0fe98630 *)db_Reserved3;
- (const WCDBCondition_0fe98630 *)db_Reserved2;
- (const WCDBCondition_d07af32d *)db_Reserved1;
- (const WCDBCondition_d07af32d *)db_Reserved0;
- (const WCDBCondition_0fe98630 *)db_NickName;
- (const WCDBCondition_d07af32d *)db_TotalSize;
- (const WCDBCondition_d07af32d *)db_EndTime;
- (const WCDBCondition_0fe98630 *)db_talker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

