#pragma once
#include <JuceHeader.h>

class Task0Component : public juce::Label
{
public:
  Task0Component()
  {
    setText("Hello World!", juce::NotificationType::dontSendNotification);
    setFont(juce::Font(16.0f));
    setColour(juce::Label::textColourId, juce::Colours::white);
    setJustificationType(juce::Justification::centred);
  }
};
