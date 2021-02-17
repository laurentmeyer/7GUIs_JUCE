#include <SevenGUIs.h>

namespace sevenguis
{

HelloWorld::HelloWorld(juce::String message/* = "Hello, World!"*/)
{
  setName("Hello, World!");
  setSize(256, 256);

  setText(message, juce::NotificationType::dontSendNotification);
  setFont(juce::Font(16.0f));
  setColour(juce::Label::textColourId, juce::Colours::white);
  setJustificationType(juce::Justification::centred);
}

} // namespace sevenguis
