//
//  nydsmView.h
//  nydsm
//
//  Created by suraj kesavan on 11/03/16.
//  Copyright © 2016 suraj kesavan. All rights reserved.
//

#import <ScreenSaver/ScreenSaver.h>
#import <OpenGL/gl.h>
#import <OpenGL/glu.h>
#import "nydsmOpenGLView.h"


@interface nydsmView : ScreenSaverView{

  NSOpenGLView *glView;
  GLfloat rotation;
}

- (void)setUpOpenGL;

@end
