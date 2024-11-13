#pragma once

#include <JuceHeader.h>

class MainComponent  : public juce::Component
{
public:
    MainComponent();
    ~MainComponent();

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Label label;  

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
