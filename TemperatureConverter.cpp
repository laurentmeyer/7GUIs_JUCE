#include "SevenGUIs.h"

namespace sevenguis
{

TemperatureConverter::TemperatureConverter()
  : celsiusLabel("", "Celsius ="), fahrenheitLabel("", "Fahrenheit")
{
  setName("TempConv");
  setSize(600, 100);

  celsiusInput.setText("0");
  celsiusInput.setTextToShowWhenEmpty("0", celsiusInput.findColour(juce::TextEditor::textColourId));
  celsiusInput.setJustification(juce::Justification::centred);
  celsiusInput.onTextChange = [&c = celsiusInput, &f = fahrenheitInput]() { f.setText(juce::String(celsiusToFahrenheit(c.getText().getDoubleValue())), false); };
  addAndMakeVisible(celsiusInput);

  celsiusLabel.setJustificationType(juce::Justification::centred);
  addAndMakeVisible(celsiusLabel);

  fahrenheitInput.setText(juce::String(celsiusToFahrenheit(0)));
  fahrenheitInput.setTextToShowWhenEmpty("0", fahrenheitInput.findColour(juce::TextEditor::textColourId));
  fahrenheitInput.setJustification(juce::Justification::centred);
  fahrenheitInput.onTextChange = [&c = celsiusInput, &f = fahrenheitInput]() { c.setText(juce::String(fahrenheitToCelsius(f.getText().getDoubleValue())), false); };
  addAndMakeVisible(fahrenheitInput);

  fahrenheitLabel.setJustificationType(juce::Justification::centred);
  addAndMakeVisible(fahrenheitLabel);
}

void TemperatureConverter::resized()
{
  const int height = 30;
  auto area = getLocalBounds().reduced(6, 0);
  area.removeFromTop((area.getHeight() - height) / 2);
  area = area.removeFromTop(height);
  celsiusInput.setBounds(area.removeFromLeft(area.getWidth() / 4));
  celsiusLabel.setBounds(area.removeFromLeft(area.getWidth() / 3));
  fahrenheitInput.setBounds(area.removeFromLeft(area.getWidth() / 2));
  fahrenheitLabel.setBounds(area);
}

double TemperatureConverter::fahrenheitToCelsius(double f)
  {return (f - 32.) * 5. / 9.;}

double TemperatureConverter::celsiusToFahrenheit(double c)
  {return (c * 9. / 5.) + 32.;}

} // namespace sevenguis

