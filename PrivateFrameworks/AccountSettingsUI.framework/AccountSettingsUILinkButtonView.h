/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class UIFont, UIImageView, NSString, AccountSettingsUILinkButton, NSURL;

@interface AccountSettingsUILinkButtonView : UIView <PSHeaderFooterView> {
    AccountSettingsUILinkButton *_linkButton;
    NSURL *_helpURL;
    float _height;
    UIFont *_font;
    NSString *_text;
    UIImageView *_arrowImageView;
    BOOL _underline;
    BOOL _showArrow;
}

@property(retain) NSString * text;
@property(retain) UIFont * font;
@property(retain) NSURL * url;
@property BOOL underline;
@property BOOL showArrow;


- (float)preferredHeightForWidth:(float)arg1;
- (void)dealloc;
- (void)setUrl:(id)arg1;
- (id)url;
- (id)text;
- (id)font;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)setShowArrow:(BOOL)arg1;
- (BOOL)showArrow;
- (void)_goToAccountURL;
- (void)setUnderline:(BOOL)arg1;
- (BOOL)underline;
- (id)initWithSpecifier:(id)arg1;

@end