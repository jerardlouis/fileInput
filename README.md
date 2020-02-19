Write a C++ program that is given a file name as a command line argument.

Open the file and read it. At the end of the file, print out:

LINES: lc
WORDS: wc
CHARS: cc
DIGITS: dc

Where lc is the number of lines, wc is the number of words, cc is the number of characters, and dc is the number of digit characters, 0-9.

If no file name is provided, the program should use the standard input instead of a file.

If the file cannot be opened, print "CANNOT OPEN " followed by a space and the filename, and stop.

The program should ignore any extra command line arguments that are provided after the file name.
