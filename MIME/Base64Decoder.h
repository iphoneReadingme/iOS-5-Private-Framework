/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFDataConsumer.h"
#import <Foundation/NSObject.h>

@class NSMutableData;

@interface Base64Decoder : NSObject <MFDataConsumer> {
	id<MFDataConsumer> _consumer;
	NSMutableData* _leftovers;
	unsigned _decodedBits;
	unsigned _validBytes;
	unsigned _equalCount;
	char* _table;
	BOOL _bound;
}
@property(readonly, assign, nonatomic) id<MFDataConsumer> dataConsumer;
@property(readonly, assign, nonatomic) unsigned unconverted;
@property(assign, nonatomic) BOOL isBound;
@property(assign, nonatomic) BOOL convertCommas;
+(id)decoderWithConsumer:(id)consumer;
-(id)initDecoderWithConsumer:(id)consumer;
-(unsigned long)_decodeBytes:(const char*)bytes length:(unsigned long)length into:(char*)into length:(unsigned long)length4 startingAt:(unsigned long)at outEncodedOffset:(unsigned*)offset;
// in a protocol: -(void)appendData:(id)data;
// in a protocol: -(void)done;
// inherited: -(void)dealloc;
@end

