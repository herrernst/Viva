//
//  SPTableCorner.m
//  Viva
//
//  Created by Daniel Kennett on 3/22/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "SPTableCorner.h"


@implementation SPTableCorner

- (id)initWithFrame:(NSRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code here.
    }
    
    return self;
}

- (void)dealloc
{
    [super dealloc];
}

- (void)drawRect:(NSRect)dirtyRect
{
    // Drawing code here.
	NSImage *image = [NSImage imageNamed:@"sortbar"];
	[image setFlipped:[self isFlipped]];
	
	[image drawInRect:self.bounds
			 fromRect:NSZeroRect
			operation:NSCompositeCopy
			 fraction:1.0];

}

@end
