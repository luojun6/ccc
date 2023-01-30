#ifndef I_AUDIO_DEVICE_INCLUDE_HPP
#deinfe I_AUDIO_DEVICE_INCLUDE_HPP

#include <string>
#include "iaudiodata.hpp"

class IAudiiDevice
{
public:
    virtual ~IAudiiDevice() {}
    virtual IAudiiDevice *CreateAudioFromFile(const std::string &filePath) = 0;
    virtual void ReleaseAudio(IAudioData *audioData) = 0;
}

#endif
