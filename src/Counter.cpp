#include <SevenGUIs.h>

namespace sevenguis
{

Counter::Counter()
  : button("Count")
{
  setName("Counter");
  setSize(128, 64);

  button.onClick = [&]() { label.setText(juce::String(++value), juce::NotificationType::dontSendNotification); };
  addAndMakeVisible(button);

  label.setText(juce::String(value), juce::NotificationType::dontSendNotification);
  label.setColour(juce::Label::backgroundColourId, juce::Colours::lightslategrey);
  label.setColour(juce::Label::outlineColourId, juce::Colours::darkgrey);
  label.setJustificationType(juce::Justification::centred);
  addAndMakeVisible(label);
}

void Counter::resized()
{
  auto area = getLocalBounds();
  button.changeWidthToFitText(22);
  button.setBoundsToFit(area.removeFromRight(button.getWidth()).reduced(4, 0), juce::Justification::centred, false);
  label.setSize(area.getWidth() - 8, button.getHeight());
  label.setCentrePosition(area.getCentre());
}

} // namespace sevenguis

