#include <FlightBooker.h>

namespace sevenguis
{

FlightBooker::FlightBooker()
  : bookButton("Book")
{
  setName("Flight Booker");
  setSize(200, 400);

  comboBox.setEditableText(false);
  int itemIndex = 1;
  comboBox.addItem("one-way flight", itemIndex++);
  comboBox.addItem("return flight", itemIndex++);
  addAndMakeVisible(comboBox);

  startDay = juce::Time::getCurrentTime() + juce::RelativeTime::days(1.);
  startDateTextEditor.setText(startDay.formatted("%d.%m.%Y"));
  addAndMakeVisible(startDateTextEditor);

  endDay = startDay + juce::RelativeTime::days(1.);
  endDateTextEditor.setText(endDay.formatted("%d.%m.%Y"));
  addAndMakeVisible(endDateTextEditor);

  addAndMakeVisible(bookButton);
}

void FlightBooker::resized()
{
  juce::Rectangle<int> area = getLocalBounds();
  comboBox.setBounds(area.removeFromTop(area.getHeight() / 4));
  startDateTextEditor.setBounds(area.removeFromTop(area.getHeight() / 3));
  endDateTextEditor.setBounds(area.removeFromTop(area.getHeight() / 2));
  bookButton.setBounds(area);
}

} // namespace sevenguis