#include "MainComponent.h"

MainComponent::MainComponent()
{
  setSize(600, 400);
}

void MainComponent::setTaskComponent(juce::Component* component)
{
  taskComponent.reset(component);
  if (!taskComponent)
    return;
  taskComponent->setBounds(getBounds());
  addAndMakeVisible(taskComponent.get());
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
