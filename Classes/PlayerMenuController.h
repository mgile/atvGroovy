//
//  PlayerMenuController.h
//  Groovy
//
//  Copyright (c) 2010, hackfrag <hackfrag@gmail.com , headcrap <headcrap19388@googlemail.com>
//  http://groovy.weasel-project.com
//  
//  All rights reserved.
//  
//  
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation
//  files (the "Software"), to deal in the Software without
//  restriction except as noted below, including without limitation 
//  the rights to use,copy, modify, merge, publish, distribute, 
//  and/or sublicense, and to permit persons to whom the Software is 
//  furnished to do so, subject to the following conditions:
//  
//  The Software and/or source code cannot be copied in whole and 
//  sold without meaningful modification for a profit. 
//  
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//  
//  Redistributions of source code must retain the above copyright 
//  notice, this list of conditions and the following disclaimer.
//  
//  Redistributions in binary form must reproduce the above copyright 
//  notice, this list of conditions and the following disclaimer in 
//  the documentation and/or other materials provided with 
//  the distribution.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.

#import "SongListController.h";
#import "Groovy.h";
#import "PlaylistController.h";
#import "AccountController.h";

@interface PlayerMenuController : BRMediaMenuController  {
	NSMutableArray		*_names;
	User					*user;
	BOOL					isConnected;
	NSMutableDictionary  *account;
}

@property (nonatomic, retain) User *user;
@property (nonatomic, retain) NSMutableDictionary *account;
@property BOOL isConnected;
- (float)heightForRow:(long)row;
- (long)itemCount;
- (id)itemForRow:(long)row;
- (BOOL)rowSelectable:(long)selectable;
- (id)titleForRow:(long)row;


@end