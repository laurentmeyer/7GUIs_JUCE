#pragma once
#include <JuceHeader.h>

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent : public juce::Component
{
public:
  MainComponent();

  void setTaskComponent(juce::Component*);

  // juce::Component
  void paint(juce::Graphics&) override;
  void resized() override;

private:
  std::unique_ptr<juce::Component> taskComponent;

  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainComponent)
};
