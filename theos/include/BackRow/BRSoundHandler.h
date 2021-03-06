/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"


@interface BRSoundHandler : BRSingleton {
@private
	BOOL _isSoundEnabled;	// 4 = 0x4
	unsigned _soundIDs[23];	// 8 = 0x8
}
+ (void)playSound:(int)sound;	// 0x3164ab89
+ (void)reloadSoundPreference;	// 0x3164ab65
+ (void)setSingleton:(id)singleton;	// 0x3164aa81
+ (id)singleton;	// 0x3164aa75
- (id)init;	// 0x3164ab11
- (unsigned long)_actionIDForAlertSound:(int)alertSound;	// 0x3164ac9d
- (BOOL)_isSoundEnabled;	// 0x3164aa8d
- (void)_playSound:(int)sound;	// 0x3164ad29
- (void)_reloadSoundPreference;	// 0x3164aa9d
- (void)dealloc;	// 0x3164abb5
@end

