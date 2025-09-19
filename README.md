# Assignment 2 Headers and Stubs

Good day, good people! Feel free to download these files to build your assignment. I've tested to ensure it compiles, so feel free to build from where I left off - there is no ACTUAL real implementation here (though it will get you about 10% on FitchFork - this was just to test what headers FF is using, so you can use this as "law").

I will be conducting a few free (and premium) sessions going through this entire assignment.

## Getting Started

### Option 1: Work Online with GitHub Codespaces
If you're not able to run valgrind and make locally, I've set up the environment here so you can do everything online. Just click on:

**[Open in GitHub Codespaces](https://codespaces.new/SwiftTuition/Assignment-2-Headers-and-Stubs)**

### Option 2: Work Locally
If you'd rather do everything locally, then click on the green "Code" button above and copy the clone command, or use this:

```bash
git clone https://github.com/SwiftTuition/Assignment-2-Headers-and-Stubs.git
```

Paste this into VS Code's terminal to have the repo downloaded to your local drive.

## What's Included

- Complete header files (.h) for all classes
- Stub implementations (.cpp) that compile successfully
- Makefile for building the project
- Assignment specifications document
- Sample CSV file for testing

## Building the Project

```bash
make
```

This will compile all the source files and create the executable.

## Running with Valgrind

To check for memory leaks and errors:

```bash
make
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./main
```

Or use the npm script:

```bash
npm run test
```

## Notes

- The current implementation contains only stubs - you'll need to add the actual logic
- All headers match FitchFork's expectations
- The code compiles without errors but doesn't perform real functionality yet
- Use this as your starting foundation and build upon it

Good luck with your assignment!