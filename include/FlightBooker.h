#ifndef FLIGHT_BOOKER_H_
# define FLIGHT_BOOKER_H_

# include <juce_gui_basics/juce_gui_basics.h>

namespace sevenguis
{

class FlightBooker : public juce::Component
{
public:
  FlightBooker();

  // juce::Component
  void resized() override;

private:
  juce::ComboBox comboBox;
  juce::TextEditor startDateTextEditor;
  juce::Time startDay;
  juce::TextEditor endDateTextEditor;
  juce::Time endDay;
  juce::TextButton bookButton;
};

} // namespace sevenguis


#endif // FLIGHT_BOOKER_H_