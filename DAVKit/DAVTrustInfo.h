/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <Foundation/NSObject.h>
#import "DAVKit-Structs.h"

@class DAVSession;

@interface DAVTrustInfo : NSObject {
	SecTrust* _trust;
	DAVSession* _session;
	BOOL _allows;
}
-(id)initWithTrust:(SecTrust*)trust session:(id)session;
// inherited: -(void)dealloc;
-(SecTrust*)trust;
-(id)host;
-(id)session;
-(void)setAllowsTrust:(BOOL)trust;
-(BOOL)allowsTrust;
@end

