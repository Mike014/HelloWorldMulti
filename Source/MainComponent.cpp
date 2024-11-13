#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);

    label.setText("Hello World!", juce::dontSendNotification);
    label.setJustificationType(juce::Justification::centred);
    label.setFont(juce::Font(16.0f));
    label.setColour(juce::Label::textColourId, juce::Colours::white);

    addAndMakeVisible(label);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
    
    g.setFont (juce::Font (16.0f));
    g.setColour (juce::Colours::white);
    g.drawText ("Hello World!", getLocalBounds(), juce::Justification::centred, true);
}

void MainComponent::resized()
{
    auto area = getLocalBounds();
    
    // Layout specifico per macOS
    #if JUCE_MAC
        label.setBounds(area.reduced(20));  // Imposta il layout per macOS
    #endif

    // Layout specifico per iOS
    #if JUCE_IOS
        label.setBounds(area.reduced(10));  // Imposta il layout per iOS
    #endif
}
