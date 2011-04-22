//
//  PlaylistViewController.h
//  Viva
//
//  Created by Daniel Kennett on 3/14/11.
//  Copyright 2011 Spotify. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "VivaSortableTrackListController.h"

@interface PlaylistViewController : VivaSortableTrackListController <SPSpotifyPlaylistDelegate> {
@private

	SPSpotifyPlaylist *playlist;
	NSMutableArray *trackContainers;
}

@property (nonatomic, readonly, retain) SPSpotifyPlaylist *playlist;
@property (nonatomic, readonly, retain) NSMutableArray *trackContainers;

-(IBAction)playTrack:(id)sender;

@end
