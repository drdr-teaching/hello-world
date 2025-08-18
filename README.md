# Hello World

This is a demo to illustrate some tools used to download and compile code for this class:
* VS Code
* Docker
* git / GitHub
* g++
* Linux

## Directions

### Set up the dev environment

Ensure Docker Desktop is running.

Open VS Code, and ensure the "Dev Containers" extension is installed:
- Click the gear icon in the lower left corner and then "Extensions" (or ctrl+shift+x).
- Search for "Dev Containers" and click the extension matching that name **exactly**.
- Make sure it is installed.

Create a folder somewhere on your computer where you will store your projects for this class.
Inside VS Code, we are going to *open that folder inside a Docker container*.
(What does that mean? We'll see in a little bit.)
Specifically:
1. Press the `f1` key (or ctrl+shift+p). This should open a text field at the top of your screen with a `>` character already entered.
2. Type "Dev Containers: Open Folder in Container" and click on the matching text.
   (Tip: start typing "open folder" and click the correct line as soon as it appears.
   Make sure the one you click begins with "Dev Containers:")
3. Select the folder you created for this project. It will then prompt you for several options,
   most of which will be the defaults:
   * select "add configuration to workspace"
   * type "c++" and select "C++ devcontainers"
   * select "debian-11 (default)" for the linux version
   * select "none (default)" when asked about CMake
   * for additional features, don't select any: click "OK"
   * for optional files/directions, don't select any: click "OK"
4. Wait patiently while it creates and launches your *Docker container*.
   When prompted, click to indicate you trust to authors of the files in this folder.
   Eventually, you will see in the Explorer Panel a top-level item called
   `your-folder-name [Dev Container...`.
5. Open a terminal in VS Code ("Terminal -> New Terminal"
   or ctrl+` -- that's the "backtick," the key above tab).

Congratulations: you are now using Linux,
even if your computer has a different operating system installed.
This Linux environment has access to all the files inside
that folder you created and opened.

(If you do these steps on your own personal computer,
you can store *all* of your assignments for this class
inside of that folder,
and you will not need to repeat the steps above each time.
On the lab computers, however, you *will* need to do these steps each time.)

### Download this code

Inside the terminal, run the following command:
```
git clone https://github.com/drdr-teaching/hello-world
```

This should download this repository into your project folder.
(`git` does much more than download code,
but that's the only feature we need for this.)
Inside VS Code, you should see a new folder;
you should also be able to type `ls` (that's the letter L)
in the terminal and see it display `hello-world`,
the name of the folder.

Inside the `hello-world` folder are a few files:
* README.md - this file you're reading right now!
* main.cpp - this is C++ code for a "Hello World" program we will run shortly.
* (There's other things too, but we can ignore them for now.)

There are a few more steps we will do to prepare VS Code to work on this project:
1. Now that the folder is downloaded, click File > "add folder to workspace..."
   and navigate to the folder you just made. (You'll have to click to open
   the top-level folder you made, and then you should see "hello-world").
   Select "hello-world" and then click "Add" -- and tell it to "reload window"
   if/when it gives you a popup.
2. Click File > "Save Workspace As..." and save the `something.code-workspace` file
   inside your top level folder (**not** inside the hello-world folder:
   you may need to click on `..`, which stands for "go up one folder")
3. Inside the explorer pane, you should see the top-level folder you made,
   *and* you should see the hello-world folder. Right click on the top-level folder
   and select "Remove Folder from Workspace"

(On the lab computers, you will do these 3 steps every time
you work on a new project.
On your own personal computer,
steps 2 and 3 only need to be done the *first* time:
adding additional projects only require step 1.)

### Compile and run the code

In your terminal, you will need to "change directory" /
enter the folder `git` created for you. Type
```
cd hello-world
```
Now, when you run `ls`, it should print the files inside that folder.
Compile the code by running
```
g++ main.cpp
```
It *should* complete successfully.
By default, it compiles your code into an executable named `a.out`. You should see that among the other files when you `ls`.

To run the program, put a `./` in front of it, like so:
```
./a.out
```
If you see "Hello World" then you've succeeded!

### Bonus Steps

#### Modify the Code

Open `main.cpp` in VS Code.
The comments have instructions for changing the code
to get practice with pointers.
If you change the code, you will have to
1. Save the file in VS Code
2. Compile it again in the terminal (`g++ main.cpp`)
3. Run the newly compiled program (`./a.out`)

At any time, you can run `git status` in the terminal to see which files have changed.
Further, you can run `git diff` to see what has changed inside those files.
Neat!

#### Try out the debugger

In the main.cpp file, click to the left of the line numbers to add "breakpoints" to your code.
Try putting some in your file.
With main.cpp open, Click the triangle-with-a-bug icon in the upper right,
and choose "Debug hello-world" to start the debugger.
The program will run and stop at the breakpoints:
- You can inspect the values of the variables in the program
- You can press The triangle in the top bar to "continue" to the next breakpoint
- You can press the red square to stop the program

When you're done, there will be extra terminals that were created,
shown in the list to the bottom-right.
The first "bash" terminal is the one you were using to run linux commands:
click it to go back to it.