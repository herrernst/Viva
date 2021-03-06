//
//  SPAccountButtonCell.m
//  Viva
//
//  Created by Daniel Kennett on 3/27/11.
//  For license information, see LICENSE.markdown
//

#import "SPAccountButtonCell.h"


@implementation SPAccountButtonCell

- (void)drawBezelWithFrame:(NSRect)frame inView:(NSView *)controlView {
	
	NSImage *imageToDraw = nil;
	
	if ([self isHighlighted]) {
		imageToDraw = [NSImage imageNamed:@"account-pushed"];
	} else {
		imageToDraw = [NSImage imageNamed:@"account"];
	}
	
	[imageToDraw setFlipped:[controlView isFlipped]];
	
	[imageToDraw drawInRect:frame
				   fromRect:NSZeroRect
				  operation:NSCompositeSourceOver
				   fraction:1.0];
	
}


@end
