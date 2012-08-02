/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import "PLToolbar.h"


@interface PLPhotoToolbar : PLToolbar {
	int _photosCurrentButtonGroup;
}
-(void)setFrame:(CGRect)frame;
-(float)originXDeltaForButtonTag:(int)buttonTag;
-(void)positionButtons:(id)buttons tags:(int*)tags count:(int)count group:(int)group;
-(void)showButtonGroup:(int)group withDuration:(double)duration;
@end

