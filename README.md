# Hello World

This is a demo to illustrate some tools used to download and compile code for this class:
* VS Code
* Docker
* git / GitHub
* g++
* Linux

## Directions

### Set up the dev environment

Ensure Docker Desktop is running. Open VS Code, and ensure the "Dev Containers" extension is installed.

Create a folder somewhere on your computer where you will store the files for this project.
Inside VS Code, we are going to *open that folder inside a Docker container*.
(What does that mean?)
Specifically:
1. Press the `f1` key. This should open a text field at the top of your screen with a `>` character already entered.
2. Type "Dev Containers: Open Folder in Container" and click on the matching text.
   (Tip: you can start typing "open folder" and click the correct line as soon as it appears.
   Make sure the one you click begins with "Dev Containers:")
3. Select the folder you created for this project. It will then prompt you for several options:
   * Type "c++" and select "C++ devcontainers"
   * select "debian-11 (default)"
   * select "none (default)"
   * it will ask for additional features; select none and click "OK"
4. Wait patiently while it creates and launches your *Docker container*.
5. Open a terminal in VS Code ("Terminal -> New Terminal")

Congratulations: you are now using Linux,
even if your computer has a different operating system installed.
This Linux environment has access to all the files inside
that folder you created and opened.

### Download this code

Inside the terminal, run the following command:
```
git clone https://github.com/drdr-teaching/hello-world
```

This should download this repository into your project folder. (`git` does much more than download code,
but that's the only feature we need for this.)
Inside VS Code, you should see a new folder;
you should also be able to type `ls` (that's the letter L)
in the terminal and see it display `hello-world`,
the name of the folder.

Inside the `hello-world` folder are two files:
* README.md - this file you're reading right now!
* main.cpp - this is C++ code for a "Hello World" program

### Compile and run the code

In your terminal, you will need to "change directory" /
enter the folder `git` created for you. Type
```
cd hello-world
```
Now, when you run `ls`, it should print both files.
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

Open `main.cpp` in VS Code.
The comments have instructions for changing the code
to get practice with pointers.
If you change the code, you will have to compile it again (`g++ main.cpp`) before you run the program (`./a.out`).

At any time, you can run `git status` in the terminal to see which files have changed.
Further, you can run `git diff` to see what has changed inside those files.
Neat!