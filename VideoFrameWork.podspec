 Pod::Spec.new do |s|
   s.name         = "VideoFrameWork"
   s.version      = "1.0.1"
   s.summary      = "视频操作工具"
   s.description  = <<-DESC
                    视频处理
                    DESC
   s.homepage     = "https://github.com/ChainHerman/ZFVideoFrameWork.git"
   s.license      = "MIT"
   s.author             = { "ZF" => "112352492@qq.com" }
   s.source       = { :git => "https://github.com/ChainHerman/ZFVideoFrameWork.git",:tag => s.version }
 #  s.source_files  = "HQTools.framework/Headers/*.{h}"
   s.vendored_frameworks = 'VideoFrameWork.framework'
   s.frameworks = "Foundation", "UIKit","libz","libbz2","libiconv","AudioToolbox","CoreMedia","CoreGraphics","VideoToolbox"
   s.platform     = :ios, "9.0"
 ###  s.exclude_files = "Classes/Exclude"
 , :tag => s.version                                                         
 end
                                                                             
                                                                             

