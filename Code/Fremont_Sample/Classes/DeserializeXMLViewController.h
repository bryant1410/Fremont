//
//  DeserializeXMLViewController.h
//  Fremont
//
//  Created by Bradley O'Hearne on 3/8/09.
//  Copyright 2009 Big Hill Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Company.h"

@interface DeserializeXMLViewController : UIViewController {
	IBOutlet UIImageView *imageView;
	IBOutlet UITextView *textView;
}

@property (nonatomic, retain) IBOutlet UIImageView *imageView;
@property (nonatomic, retain) IBOutlet UITextView *textView;

@end
