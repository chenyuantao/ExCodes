//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface FavoritesSetting : NSObject <PBCoding>
{
    unsigned int maxAutoUploadSize;
    unsigned int maxAutoDownloadSize;
    unsigned int maxFavFileSize;
    unsigned long long totalCapacity;
    unsigned long long usedCapacity;
}

+ (void)initialize;
+ (void)_initPBTableOfFavoritesSetting;
@property(nonatomic) unsigned int maxFavFileSize; // @synthesize maxFavFileSize;
@property(nonatomic) unsigned int maxAutoDownloadSize; // @synthesize maxAutoDownloadSize;
@property(nonatomic) unsigned int maxAutoUploadSize; // @synthesize maxAutoUploadSize;
@property(nonatomic) unsigned long long usedCapacity; // @synthesize usedCapacity;
@property(nonatomic) unsigned long long totalCapacity; // @synthesize totalCapacity;
- (const map_24f1cf24 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

