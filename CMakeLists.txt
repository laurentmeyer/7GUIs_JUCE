cmake_minimum_required(VERSION 3.12)

project(SevenGUIs VERSION 0.0.1)

add_subdirectory(JUCE)                    # If you've put JUCE in a subdirectory called JUCE

juce_add_gui_app(SevenGUIsApp
    PRODUCT_NAME "Seven GUIs App")     # The name of the final executable, which can differ from the target name

juce_generate_juce_header(SevenGUIsApp)

target_sources(SevenGUIsApp PRIVATE
    Main.cpp
    HelloWorld.cpp
    Counter.cpp
    )

target_compile_definitions(SevenGUIsApp PRIVATE
    # JUCE_WEB_BROWSER and JUCE_USE_CURL would be on by default, but you might not need them.
    JUCE_WEB_BROWSER=0  # If you remove this, add `NEEDS_WEB_BROWSER TRUE` to the `juce_add_gui_app` call
    JUCE_USE_CURL=0     # If you remove this, add `NEEDS_CURL TRUE` to the `juce_add_gui_app` call
    JUCE_APPLICATION_NAME_STRING="$<TARGET_PROPERTY:SevenGUIsApp,JUCE_PRODUCT_NAME>"
    JUCE_APPLICATION_VERSION_STRING="$<TARGET_PROPERTY:SevenGUIsApp,JUCE_VERSION>")

target_link_libraries(SevenGUIsApp PRIVATE
    juce::juce_gui_extra)
