#include "MainComponent.h"
#include "SevenGUIs.h"

MainComponent::MainComponent()
{
  setSize(600, 400);
  Component* component = new Task0Component();
  component->setBounds(getBounds());
  addAndMakeVisible(component);
  taskComponent.reset(component);
}

void MainComponent::paint(juce::Graphics& g)
{
  // (Our component is opaque, so we must completely fill the background with a solid colour)
  g.fillAll(getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));
}

void MainComponent::resized()
{
  if (taskComponent)
    taskComponent->setBounds(getBounds());
}
