//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class DisturbSetting, GmailList, NSData, NSString, SKBuiltinString_t;

__attribute__((visibility("hidden")))
@interface ModUserInfo : PBGeneratedMessage
{
    unsigned int hasBitFlag:1;
    unsigned int hasUserName:1;
    unsigned int hasNickName:1;
    unsigned int hasBindUin:1;
    unsigned int hasBindEmail:1;
    unsigned int hasBindMobile:1;
    unsigned int hasStatus:1;
    unsigned int hasImgLen:1;
    unsigned int hasImgBuf:1;
    unsigned int hasSex:1;
    unsigned int hasProvince:1;
    unsigned int hasCity:1;
    unsigned int hasSignature:1;
    unsigned int hasPersonalCard:1;
    unsigned int hasDisturbSetting:1;
    unsigned int hasPluginFlag:1;
    unsigned int hasVerifyFlag:1;
    unsigned int hasVerifyInfo:1;
    unsigned int hasPoint:1;
    unsigned int hasExperience:1;
    unsigned int hasLevel:1;
    unsigned int hasLevelLowExp:1;
    unsigned int hasLevelHighExp:1;
    unsigned int hasWeibo:1;
    unsigned int hasPluginSwitch:1;
    unsigned int hasGmailList:1;
    unsigned int hasAlias:1;
    unsigned int hasWeiboNickname:1;
    unsigned int hasWeiboFlag:1;
    unsigned int hasFaceBookFlag:1;
    unsigned int hasFbuserId:1;
    unsigned int hasFbuserName:1;
    unsigned int hasAlbumStyle:1;
    unsigned int hasAlbumFlag:1;
    unsigned int hasAlbumBgimgId:1;
    unsigned int hasTxnewsCategory:1;
    unsigned int hasFbtoken:1;
    unsigned int hasCountry:1;
    unsigned int bitFlag;
    unsigned int bindUin;
    unsigned int status;
    unsigned int imgLen;
    int sex;
    unsigned int personalCard;
    unsigned int pluginFlag;
    unsigned int verifyFlag;
    int point;
    int experience;
    int level;
    int levelLowExp;
    int levelHighExp;
    unsigned int pluginSwitch;
    unsigned int weiboFlag;
    unsigned int faceBookFlag;
    int albumStyle;
    int albumFlag;
    unsigned int txnewsCategory;
    SKBuiltinString_t *userName;
    SKBuiltinString_t *nickName;
    SKBuiltinString_t *bindEmail;
    SKBuiltinString_t *bindMobile;
    NSData *imgBuf;
    NSString *province;
    NSString *city;
    NSString *signature;
    DisturbSetting *disturbSetting;
    NSString *verifyInfo;
    NSString *weibo;
    GmailList *gmailList;
    NSString *alias;
    NSString *weiboNickname;
    unsigned long long fbuserId;
    NSString *fbuserName;
    NSString *albumBgimgId;
    NSString *fbtoken;
    NSString *country;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetCountry:) NSString *country; // @synthesize country;
@property(readonly, nonatomic) BOOL hasCountry; // @synthesize hasCountry;
@property(retain, nonatomic, setter=SetFbtoken:) NSString *fbtoken; // @synthesize fbtoken;
@property(readonly, nonatomic) BOOL hasFbtoken; // @synthesize hasFbtoken;
@property(nonatomic, setter=SetTxnewsCategory:) unsigned int txnewsCategory; // @synthesize txnewsCategory;
@property(readonly, nonatomic) BOOL hasTxnewsCategory; // @synthesize hasTxnewsCategory;
@property(retain, nonatomic, setter=SetAlbumBgimgId:) NSString *albumBgimgId; // @synthesize albumBgimgId;
@property(readonly, nonatomic) BOOL hasAlbumBgimgId; // @synthesize hasAlbumBgimgId;
@property(nonatomic, setter=SetAlbumFlag:) int albumFlag; // @synthesize albumFlag;
@property(readonly, nonatomic) BOOL hasAlbumFlag; // @synthesize hasAlbumFlag;
@property(nonatomic, setter=SetAlbumStyle:) int albumStyle; // @synthesize albumStyle;
@property(readonly, nonatomic) BOOL hasAlbumStyle; // @synthesize hasAlbumStyle;
@property(retain, nonatomic, setter=SetFbuserName:) NSString *fbuserName; // @synthesize fbuserName;
@property(readonly, nonatomic) BOOL hasFbuserName; // @synthesize hasFbuserName;
@property(nonatomic, setter=SetFbuserId:) unsigned long long fbuserId; // @synthesize fbuserId;
@property(readonly, nonatomic) BOOL hasFbuserId; // @synthesize hasFbuserId;
@property(nonatomic, setter=SetFaceBookFlag:) unsigned int faceBookFlag; // @synthesize faceBookFlag;
@property(readonly, nonatomic) BOOL hasFaceBookFlag; // @synthesize hasFaceBookFlag;
@property(nonatomic, setter=SetWeiboFlag:) unsigned int weiboFlag; // @synthesize weiboFlag;
@property(readonly, nonatomic) BOOL hasWeiboFlag; // @synthesize hasWeiboFlag;
@property(retain, nonatomic, setter=SetWeiboNickname:) NSString *weiboNickname; // @synthesize weiboNickname;
@property(readonly, nonatomic) BOOL hasWeiboNickname; // @synthesize hasWeiboNickname;
@property(retain, nonatomic, setter=SetAlias:) NSString *alias; // @synthesize alias;
@property(readonly, nonatomic) BOOL hasAlias; // @synthesize hasAlias;
@property(retain, nonatomic, setter=SetGmailList:) GmailList *gmailList; // @synthesize gmailList;
@property(readonly, nonatomic) BOOL hasGmailList; // @synthesize hasGmailList;
@property(nonatomic, setter=SetPluginSwitch:) unsigned int pluginSwitch; // @synthesize pluginSwitch;
@property(readonly, nonatomic) BOOL hasPluginSwitch; // @synthesize hasPluginSwitch;
@property(retain, nonatomic, setter=SetWeibo:) NSString *weibo; // @synthesize weibo;
@property(readonly, nonatomic) BOOL hasWeibo; // @synthesize hasWeibo;
@property(nonatomic, setter=SetLevelHighExp:) int levelHighExp; // @synthesize levelHighExp;
@property(readonly, nonatomic) BOOL hasLevelHighExp; // @synthesize hasLevelHighExp;
@property(nonatomic, setter=SetLevelLowExp:) int levelLowExp; // @synthesize levelLowExp;
@property(readonly, nonatomic) BOOL hasLevelLowExp; // @synthesize hasLevelLowExp;
@property(nonatomic, setter=SetLevel:) int level; // @synthesize level;
@property(readonly, nonatomic) BOOL hasLevel; // @synthesize hasLevel;
@property(nonatomic, setter=SetExperience:) int experience; // @synthesize experience;
@property(readonly, nonatomic) BOOL hasExperience; // @synthesize hasExperience;
@property(nonatomic, setter=SetPoint:) int point; // @synthesize point;
@property(readonly, nonatomic) BOOL hasPoint; // @synthesize hasPoint;
@property(retain, nonatomic, setter=SetVerifyInfo:) NSString *verifyInfo; // @synthesize verifyInfo;
@property(readonly, nonatomic) BOOL hasVerifyInfo; // @synthesize hasVerifyInfo;
@property(nonatomic, setter=SetVerifyFlag:) unsigned int verifyFlag; // @synthesize verifyFlag;
@property(readonly, nonatomic) BOOL hasVerifyFlag; // @synthesize hasVerifyFlag;
@property(nonatomic, setter=SetPluginFlag:) unsigned int pluginFlag; // @synthesize pluginFlag;
@property(readonly, nonatomic) BOOL hasPluginFlag; // @synthesize hasPluginFlag;
@property(retain, nonatomic, setter=SetDisturbSetting:) DisturbSetting *disturbSetting; // @synthesize disturbSetting;
@property(readonly, nonatomic) BOOL hasDisturbSetting; // @synthesize hasDisturbSetting;
@property(nonatomic, setter=SetPersonalCard:) unsigned int personalCard; // @synthesize personalCard;
@property(readonly, nonatomic) BOOL hasPersonalCard; // @synthesize hasPersonalCard;
@property(retain, nonatomic, setter=SetSignature:) NSString *signature; // @synthesize signature;
@property(readonly, nonatomic) BOOL hasSignature; // @synthesize hasSignature;
@property(retain, nonatomic, setter=SetCity:) NSString *city; // @synthesize city;
@property(readonly, nonatomic) BOOL hasCity; // @synthesize hasCity;
@property(retain, nonatomic, setter=SetProvince:) NSString *province; // @synthesize province;
@property(readonly, nonatomic) BOOL hasProvince; // @synthesize hasProvince;
@property(nonatomic, setter=SetSex:) int sex; // @synthesize sex;
@property(readonly, nonatomic) BOOL hasSex; // @synthesize hasSex;
@property(retain, nonatomic, setter=SetImgBuf:) NSData *imgBuf; // @synthesize imgBuf;
@property(readonly, nonatomic) BOOL hasImgBuf; // @synthesize hasImgBuf;
@property(nonatomic, setter=SetImgLen:) unsigned int imgLen; // @synthesize imgLen;
@property(readonly, nonatomic) BOOL hasImgLen; // @synthesize hasImgLen;
@property(nonatomic, setter=SetStatus:) unsigned int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
@property(retain, nonatomic, setter=SetBindMobile:) SKBuiltinString_t *bindMobile; // @synthesize bindMobile;
@property(readonly, nonatomic) BOOL hasBindMobile; // @synthesize hasBindMobile;
@property(retain, nonatomic, setter=SetBindEmail:) SKBuiltinString_t *bindEmail; // @synthesize bindEmail;
@property(readonly, nonatomic) BOOL hasBindEmail; // @synthesize hasBindEmail;
@property(nonatomic, setter=SetBindUin:) unsigned int bindUin; // @synthesize bindUin;
@property(readonly, nonatomic) BOOL hasBindUin; // @synthesize hasBindUin;
@property(retain, nonatomic, setter=SetNickName:) SKBuiltinString_t *nickName; // @synthesize nickName;
@property(readonly, nonatomic) BOOL hasNickName; // @synthesize hasNickName;
@property(retain, nonatomic, setter=SetUserName:) SKBuiltinString_t *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(nonatomic, setter=SetBitFlag:) unsigned int bitFlag; // @synthesize bitFlag;
@property(readonly, nonatomic) BOOL hasBitFlag; // @synthesize hasBitFlag;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

