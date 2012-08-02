/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@class UIImage, UITextLabel, UIImageView;

@interface MPVideoBackgroundView : UIView {
	int _interfaceOrientation;
	UIImageView* _imageView;
	UIImageView* _iconView;
	UIImageView* _customBackgroundImageView;
	UIImageView* _backgroundPlaceholderView;
	UIImageView* _backgroundPlaceholderImageView;
	UITextLabel* _infoTitle;
	UITextLabel* _infoSubTitle;
}
@property(assign, nonatomic) int interfaceOrientation;
@property(readonly, assign, nonatomic) UIView* backgroundPlaceholderView;
@property(retain, nonatomic) UIImage* backgroundPlaceholderImage;
-(void)dealloc;
-(void)layoutSubviews;
-(void)layoutForCurrentOrientation;
-(void)setShowQTAudioOnlyUI:(BOOL)ui;
-(void)_createInformationalTitleView:(id*)view systemFont:(id)font lineBreakMode:(int)mode;
-(void)setInformationalTextShown:(BOOL)shown;
-(BOOL)shouldShowInformationalTextForInterfaceOrientation:(int)interfaceOrientation;
-(void)setInformationalTitle:(id)title infoSubTitle:(id)title2;
-(void)setCustomBackgroundImage:(id)image;
@end

