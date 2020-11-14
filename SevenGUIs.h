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

class TemperatureConverter : public juce::Component
{
public:
  TemperatureConverter();

  // juce::Component
  void resized() override;

protected:
  juce::TextEditor celsiusInput;
  juce::Label celsiusLabel;
  juce::TextEditor fahrenheitInput;
  juce::Label fahrenheitLabel;

  static double celsiusToFahrenheit(double);
  static double fahrenheitToCelsius(double);

  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(TemperatureConverter)
};

} // namespace sevenguis
