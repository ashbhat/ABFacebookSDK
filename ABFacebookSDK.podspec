Pod::Spec.new do |s|

    s.name              = 'ABFacebookSDK'
    s.version           = '1.0'
    s.summary           = 'A easy to use wrapper around Facebook SDK. Making permissions / fields constants, easy login, you name it - its here'
    s.homepage          = 'https://github.com/ashbhat/ABFacebookSDK'
    s.license      = { :type => 'MIT', :text => 'Copyright 2016. Ash Bhat. This library is distributed under the terms of the MIT/X11.' }
    s.author            = {
        'Ash Bhat' => 'me@ashbhat.com'
    }
    s.source            = {
        :git => 'https://github.com/ashbhat/ABFacebookSDK.git',
        :tag => s.version.to_s
    }
    s.source_files      = 'source/*.{m,h}'
    s.requires_arc      = true
    s.dependency 'FBSDKCoreKit'
    s.dependency 'FBSDKShareKit'
    s.dependency 'FBSDKLoginKit'

end
