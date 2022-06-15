# PythonAppLauncher

This is a cool application launch my friend and I made for fun.

# Using

To scroll through the icons just us the scroll wheel up and down.
Click on the desired application to launch it.
Press escape to exit.

# Customization

For any of the assets besides the application icon can be changed out. The background to be transparent any empty spaces must be filled with RGB value (1, 1, 1). If there are multiple "ring" assets in the folder it will choose randomly between one on launch, this also applies for fonts as well, though if you want the text to be rendered in a different color that white you'll have to modify the code and rebuild the launcher.

There is an example shortcut already in the assets folder for MS Paint.

# Building the executable file

Build cmd:
	pyinstaller --onefile -w --icon=./assets/application_icon/ring.ico main.py
