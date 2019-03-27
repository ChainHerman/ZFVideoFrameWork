

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
typedef void (^taskRun)(void);
@interface FFmpegManager : NSObject

+ (FFmpegManager *)sharedManager;

/**
 转换视频

 @param inputPath 输入视频路径
 @param outpath 输出视频路径
 @param processBlock 进度回调
 @param completionBlock 结束回调
 */
- (void)converWithInputPath:(NSString *)inputPath
                 outputPath:(NSString *)outpath
               processBlock:(void (^)(float process))processBlock
            completionBlock:(void (^)(NSError *error))completionBlock;
- (void)mergVideoPath:(NSString *)inputPath
                 outputPath:(NSString *)outpath
               processBlock:(void (^)(float process))processBlock
            completionBlock:(void (^)(NSError *error))completionBlock;
- (void)cutVideoPath:(NSString *)inputPath
           outputPath:(NSString *)outpath
          startTimer:(CGFloat)startTimer
            sumTimer:(CGFloat)sumTimer
         processBlock:(void (^)(float process))processBlock
      completionBlock:(void (^)(NSError *error))completionBlock;
-(void)rotateVideo:(NSString *)inputPath
        outputPath:(NSString *)outpath
            rotate:(NSString *)rotate
        processBlock:(void (^)(float process))processBlock
   completionBlock:(void (^)(NSError *error))completionBlock;
-(void)changeVideo:(NSString *)inputPath
        outputPath:(NSString *)outpath
         alertSize:(NSString *)size
      processBlock:(void (^)(float process))processBlock
   completionBlock:(void (^)(NSError *error))completionBlock;
/**
 *txtPath:  file '/Users/wangshuainan/Desktop/aa/imga.jpg'
            duration 5
            file '/Users/wangshuainan/Desktop/aa/imgb.jpg'
            duration 1
            file '/Users/wangshuainan/Desktop/aa/imgc.jpg'
            duration 3
            file '/Users/wangshuainan/Desktop/aa/imgc.jpg'
 *
 *
 **/
-(void)meargImage:(NSString *)txtPath
        audioPath:(NSString *)audioPath
       outputPath:(NSString *)outpath
     processBlock:(void (^)(float process))processBlock
  completionBlock:(void (^)(NSError *error))completionBlock;

-(void)addTast:(taskRun)runCompletion;
// 设置总时长
+ (void)setDuration:(long long)time;

// 设置当前时间
+ (void)setCurrentTime:(long long)time;

// 转换停止
+ (void)stopRuning:(int)code;

+ (BOOL)isRuning;
@end
