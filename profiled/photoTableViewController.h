//
//  photoTableViewController.h
//  profiled
//
//  Created by Abd Al on 31/07/2013.
//  Copyright (c) 2013 Abd Al. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Photo.h"
#import "selPhotoViewController.h"
#import "customImage.h"


@interface photoTableViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, UIPickerViewDelegate, UINavigationControllerDelegate>
{
    UIImagePickerController *camPic;
    UIImagePickerController *galPic;
    UIImage *photo;
    //UIImageView *selectedImage;
}
@property (strong, nonatomic) IBOutlet UIImageView *selectedPhoto;
@property (weak, nonatomic) IBOutlet UILabel *photoName;

@property (strong, nonatomic) IBOutlet UILabel  *photoDateAndTime;




- (IBAction)takePhoto:(UIBarButtonItem *)sender;
- (IBAction)galleryPhoto:(UIBarButtonItem *)sender;



@end
