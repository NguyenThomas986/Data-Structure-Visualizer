# Data Structure Visualizer

A C++ project to **visualize common data structures** such as linked lists, stacks, queues, and trees using **SFML** for graphics. This tool helps students and developers understand how data structures work internally with live visualizations.

---

## Features

- Visualizes operations on data structures: insertion, deletion, traversal, etc.
- Supports common data structures: `LinkedList`, `Stack`, `Queue`, etc.
- Built using **C++17** and **SFML 3.0**.
- Unit tests for all core data structures using a simple test framework.
- Cross-platform thanks to **CMake**.

---

## Quick Start

### Command Line

1. Install [Git](https://git-scm.com/downloads) and [CMake](https://cmake.org/download/).  
2. Clone your repository:

```bash
git clone <your-repo-url>
cd Data-Structure-Visualizer
```
3. Configure and build with CMake:
```bash
cmake -B build
cmake --build build
```
4. Run the Visualizer
```bash
.\build\bin\Debug\main.exe  # Windows
# or
./build/bin/main            # Linux/macOS
```
5. Run the unit tests with CTest
```bash
ctest --test-dir build -C Debug --output-on-failure
```

### Visual Studios / IDEs

- Open the project folder directly in Visual Studio, CLion, VS Code, or Qt Creator.
- The project is configured as a CMake project, so IDEs will detect targets automatically.
- Build and run like a normal project.
- Visual Studio will auto-configure the CMake project when opening the folder.

### Project Structure
```
Data-Structure-Visualizer/
├─ src/
│  ├─ main.cpp             # Entry point for the visualizer
│  ├─ Structures/          # Data structure implementations
│  │  ├─ LinkedList.hpp
│  │  ├─ Node.hpp
│  │  └─ ...
│  └─ tests/               # Unit tests
│     └─ TestList.cpp
├─ CMakeLists.txt          # CMake build configuration
├─ README.md
```

