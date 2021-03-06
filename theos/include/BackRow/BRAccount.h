/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */


@class NSString, NSMutableDictionary;

@interface BRAccount : NSObject <NSCoding> {
@private
	int _version;	// 4 = 0x4
	NSString *_assignedGUID;	// 8 = 0x8
	NSString *_accountName;	// 12 = 0xc
	NSString *_password;	// 16 = 0x10
	NSMutableDictionary *_metadata;	// 20 = 0x14
	BOOL _automaticAuthentication;	// 24 = 0x18
	BOOL _accountOptionsSet;	// 25 = 0x19
	BOOL _isSystemAccount;	// 26 = 0x1a
	int _currentMode;	// 28 = 0x1c
	int _challengeMode;	// 32 = 0x20
}
@property(retain) NSString *accountName;	// G=0x31599dd5; S=0x3162e635; converted property
@property(readonly, assign) BOOL accountOptionsSet;	// G=0x3162e191; converted property
@property(assign) int challengeMode;	// G=0x3162e1b1; S=0x3162e1c1; @synthesize=_challengeMode
@property(assign) int currentMode;	// G=0x3162e1d1; S=0x3162e1e1; @synthesize=_currentMode
@property(retain) NSString *password;	// G=0x31599ebd; S=0x3162e52d; converted property
+ (id)generateRequest:(id)request headers:(id)headers method:(id)method;	// 0x3162e4a9
- (id)initWithAccountName:(id)accountName;	// 0x3162e3bd
- (id)initWithCoder:(id)coder;	// 0x3158ca0d
- (id)_accountQuery;	// 0x3162e1f9
- (id)_assignedGUID;	// 0x3159aa79
- (id)_decryptPassword:(id)password;	// 0x3162e1f5
- (id)_encryptPassword:(id)password;	// 0x3162e1f1
- (BOOL)_isSystemAccount;	// 0x3158cdd9
// converted property getter: - (id)accountName;	// 0x31599dd5
// converted property getter: - (BOOL)accountOptionsSet;	// 0x3162e191
- (BOOL)allowAutomaticAuthentication;	// 0x3159aa89
- (void)authenticate;	// 0x3162e2f5
// declared property getter: - (int)challengeMode;	// 0x3162e1b1
// declared property getter: - (int)currentMode;	// 0x3162e1d1
- (void)dealloc;	// 0x3162e33d
- (void)encodeWithCoder:(id)coder;	// 0x3159d731
- (BOOL)isAuthenticated;	// 0x3162e179
- (BOOL)isPasswordRequired;	// 0x3162e17d
- (void)markAccountOptionsAsSet;	// 0x3162e1a1
- (void)markAsDirty;	// 0x3159d555
- (id)metadataValueForKey:(id)key;	// 0x31599ecd
// converted property getter: - (id)password;	// 0x31599ebd
- (void)resetAccountOptions;	// 0x3162e27d
// converted property setter: - (void)setAccountName:(id)name;	// 0x3162e635
- (void)setAutomaticAuthentication:(BOOL)authentication;	// 0x3162e181
// declared property setter: - (void)setChallengeMode:(int)mode;	// 0x3162e1c1
// declared property setter: - (void)setCurrentMode:(int)mode;	// 0x3162e1e1
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0x3159d4a9
// converted property setter: - (void)setPassword:(id)password;	// 0x3162e52d
- (BOOL)shouldAskForPassword:(int)password;	// 0x3162e2b5
- (id)type;	// 0x3162e31d
- (void)willBeDeleted;	// 0x3162e701
@end

