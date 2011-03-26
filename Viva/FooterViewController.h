//
//  FooterViewController.h
//  Viva
//
//  Created by Daniel Kennett on 3/22/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "SPBackgroundColorView.h"

@interface FooterViewController : NSViewController {
@private
    NSView *leftView;
	NSView *playbackControlsView;
	NSButton *trackIsStarredButton;
	NSButton *playbackIsRepeatingButton;
	NSButton *playbackIsShuffledButton;
	
	BOOL playbackRepeats;
	BOOL playbackIsShuffled;
	BOOL currentTrackIsStarred;
}

@property (assign) IBOutlet NSButton *trackIsStarredButton;
@property (assign) IBOutlet NSButton *playbackIsRepeatingButton;
@property (assign) IBOutlet NSButton *playbackIsShuffledButton;

@property (assign) IBOutlet NSView *leftView;
@property (assign) IBOutlet NSView *playbackControlsView;


- (IBAction)starredButtonWasClicked:(id)sender;
- (IBAction)repeatButtonWasClicked:(id)sender;
- (IBAction)shuffleButtonWasClicked:(id)sender;


@property (readwrite, nonatomic) BOOL playbackRepeats;
@property (readwrite, nonatomic) BOOL playbackIsShuffled;
@property (readwrite, nonatomic) BOOL currentTrackIsStarred;

@end