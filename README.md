# Minimal Disks Simulation Corrections

## Overview

This repository contains the corrected code to run the Minimal Disks Simulation reconstructed using the reference manual. Originally, the repository did not contain any header files at all and the c++ files had been corrupted. You can now run the program using the make file and visualise the output with either the view.py or view.ipynb files.

## Modifications (Commits):

An extensive log of the each commit can be found using the command "git log" however, for convenience, below is a description of each commit and what was changed.

[1] - Initialised the git with git init and added the .ignore file to ignore the metadata files, executable files and confs folder (I only wanted to upload the program files)

[2] - Added the header files for each corresponding cpp file. Also added this README file to keep track of updates and explain how to use the programs to create an executable file.

[3] - Added the #include statements for each file and wrote the constructors for the classes in the header files.

[4] - Wrote the uniform and distance functions, created a makefile, edited the .gitignore to ignore object files and changed r to radius in disk.cpp

[5] - Edited python files to add enhanced visualisation including blue dots and a larger box to prevent the particles clipping

[6] - Updated the README file to explain modifications to the code, the final output and how to achieve it.

## The Final visualisation (and how to achieve it)

#### To view past commits:
- Commit history: "<code>git log</code>"
- Inspect a specific commit: "<code>git show <commit_hash></code>"
- Checkout a previous version: "<code>checkout <commit_hash></code>"

#### To compile and run:
- Compile with: "<code>make</code>"
- Run the executable: "<code>./my_result</code>
- Visualise the results with: "<code>python3 view.py</code>
- Alternatively, open the notebook "<code>jupyter notebook view.ipynd</code>"


The final output displays 20 blue particles (initially aligned on the left side of a box), and how they randomly collide and move around a container with brownian motion. The simulation ensures the particles collide but do not clip into one another as in real life.

