# Roomba_Assignments

## What and Why?

This repository is made to revisit a series of assignments that were given to me in an Honors programming course now that I have the fortune of knowing:
- How to use Git and GitHub
- Not having to worry about deadlines
- Not struggling on knowing the material

Additionally, I find pride in my work and look forward to make my work as efficient and pretty as I can to demonstrate my proficiency in C++.

This project was created in Visual Studio 2022. Each assignment directory were created with their respective project (.vcxproj) file. 
The solution (.sln) file lies in the root of the repository (where the .git directory is in).

As of 9/8/2024, this project is now being developed in Visual Studio Code

## How to Run in Visual Studio Code

1. Download the C/C++ extensions
2. If the .vscode directory already exists, delete it. This folder is automatically created when first running the code
3. Run the code, VS Code will prompt you to choose a compiler. Select the g++ compiler
4. You will receive an error, close it and navigate to the .vscode directory and open the tasks.json
5. Look for the `"args"` section and copy and paste this, replacing the contents of `"args"`:

```json
"-fdiagnostics-color=always",
"-g",
"${workspaceFolder}/Assignment_Directory/*.h",
"${workspaceFolder}/Assignment_Directory/*.cpp",
"-o",
"${workspaceFolder}/Assignment_Directory/Assignment_Directory_executable.exe"
```
Note that for step 5, replace `Assignment_Directory` with the correct directory you'd like to run.

#### Directory Structure in File Explorer
```
Roomba_Assignments/
  ├── .git/
  ├── Assignment_1/
  │   ├── source/header files here
  │   ├── Assignment_1.vcxproj
  │   └── Assignment_1.vcxproj.filters (optional)
  ├── Assignment_2/
  │   ├── source/header files here
  │   ├── Assignment_2.vcxproj
  │   └── Assignment_2.vcxproj.filters (optional)
  ├── Assignment_2_5/
  │   ├── source/header files here
  │   ├── Assignment_2_5.vcxproj
  │   └── Assignment_2_5.vcxproj.filters (optional)
  └── Roomba_Assignments.sln
```

## About Each Assignment
(W.I.P)
