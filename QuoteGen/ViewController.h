//
//  ViewController.h
//  QuoteGen
//
//  Created by Eric Aguiar on 2/21/15.
//  Copyright (c) 2015 Eric Aguiar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
// nonatomic attribute increases performance at the cost of thread-safety
// strong attribute indicates that a pointer to the specified variable will stay in memory as lng as the object that holds the pointer exists
// NSArray: you cannot add or remove items to an NSArray after you create it
@property (nonatomic, strong) NSArray *myQuotes;

// NSMutableArray: you can add or remove items from NSMutableArray whenever you want
@property (nonatomic, strong) NSMutableArray *movieQuotes;

// IBOutlet and IBAction are used to connect what goes on in the interface with your code
// IBOutlet means that quote_text is an object that can be linked to an interface element on the XIB file so that the view controller can access (or change) properties of the interface element.
@property (nonatomic, strong) IBOutlet UITextView *quoteText;

@property (nonatomic, strong) IBOutlet UISegmentedControl *quoteOpt;

// - indicates you are defines an instance method
// Then you put the return value of the method. This particular method returns an IBAction, which is actually defined to void - i.e. the method returns nothing. But, IBAction also marks the method as something so you can connect to an action on a UI element. In this case, you'll be hooking things up so when the button gets tapped, this method gets called.
// Next you put the name of the method - quoteButtonTapped in this case
// Then you put a colon, and in parenthesis put the type of the first parameter. id is a special type that means "any object that derives from NSObject". Usually when you set up callbacks that buttons and other controls will call, they pass whatever button/control is sending the callback as the first parameter. Since you don't necessarily know what type it is, you put id here.
// then you put the name of the parameter - sender in this case
- (IBAction)quoteButtonTapped:(id)sender;

@end

