# Searching Algorithms

This repository contains a collection of different searching algorithms implemented in various programming languages. Searching algorithms are fundamental algorithms in computer science for finding a particular element in a list. They vary in efficiency, complexity, and the types of data structures they are best suited for.

## Algorithms Included

- **Linear Search**: A simple search algorithm that checks every element in the list until the desired element is found or the list ends.
- **Binary Search**: An efficient algorithm that repeatedly divides a sorted list in half, discarding the half in which the element cannot be located.
- **Jump Search**: A search algorithm for sorted arrays that jumps ahead by a fixed amount and then performs a linear search within the selected block.
- **Interpolation Search**: An improvement over binary search for instances, where the values in a sorted array are uniformly distributed. It positions the search at different locations according to the value being searched.
- **Exponential Search**: Involves two steps: finding a range where the element might be present by doubling the interval and then performing a binary search in that range.
- **Fibonacci Search**: A search technique that works on sorted arrays using Fibonacci numbers to divide the array into sections.

## Usage

To use these algorithms, simply include the relevant file in your project and call the function with the list/array and the item you are searching for as arguments.

## Contributing

Contributions are welcome! If you have an improvement or a new searching algorithm to add, please open a pull request. Make sure to follow the existing code style and add tests for new algorithms.

## License

This project is open source and available under the [MIT License](LICENSE.md).