#pragma once
#include <JuceHeader.h>

namespace sevenguis
{

class HelloWorld : public juce::Label
{
public:
  HelloWorld(juce::String message = "Hello, World!");

  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(HelloWorld)
};

class Counter : public juce::Component
{
public:
  Counter();

  // juce::Component
  void resized() override;

protected:
  size_t value = 0;
  juce::TextButton button;
  juce::Label label;

  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(Counter)
};

} // namespace sevenguis
