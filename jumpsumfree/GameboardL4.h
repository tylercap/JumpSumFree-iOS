//
//  GameboardL4.h
//  jumpsum
//
//  Created by Tyler Cap on 2/12/15.
//  Copyright (c) 2015 Tyler Cap. All rights reserved.
//

#import "Gameboard.h"

extern int values[7][5];

@interface GameboardL4 : Gameboard

@property (nonatomic, strong) NSString *arrayPath;
@property (nonatomic, strong) NSString *highScorePath;

@end
