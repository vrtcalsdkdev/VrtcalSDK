Pod::Spec.new do |s|
    s.name         = "VrtcalSDK"
    s.version      = "2.1.7.16"
    s.summary      = "Monetize your iOS apps with VrtcalSDK"
    s.homepage     = "http://vrtcal.com"
    s.license = { :type => 'Copyright', :text => <<-LICENSE
                   Copyright 2020 Vrtcal Markets, Inc.
                  LICENSE
                }
    s.author       = { "Scott McCoy" => "scott.mccoy@vrtcal.com" }
    s.source       = { :git => "https://github.com/vrtcalsdkdev/VrtcalSDK.git", :tag => "#{s.version}" }
    s.vendored_frameworks = ["VrtcalSDK.xcframework", "OMSDK_Vrtcal.xcframework"]
    s.platform = :ios
    s.ios.deployment_target  = '11.0'
end
