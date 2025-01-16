#!/bin/bash

# Compile the program
make

# Define colors
CYAN="\033[1;36m"
RESET="\033[0m"

# Test cases
echo -e "${CYAN}1: NO ARGUMENTS${RESET}"
echo "Command: ./files"
./files

echo -e "\n${CYAN}2: 2 ARGUMENTS${RESET}"
echo "Command: ./files tests/infile cat"
./files tests/infile cat

echo -e "\n${CYAN}3: 4 ARGUMENTS${RESET}"
echo "Command: ./files tests/infile cat cat dog"
./files tests/infile cat cat dog

echo -e "\n${CYAN}4: EMPTY STRINGS FOR ARGS${RESET}"
echo "Command: ./files \"\" \"\" \"\""
./files "" "" ""

echo -e "\n${CYAN}5: LAST ARG EMPTY${RESET}"
echo "Command: ./files tests/infile cat \"\""
./files tests/infile cat ""
echo "Original file content:"
cat tests/infile
echo "File with replacements:"
cat tests/infile.replace

echo -e "\n${CYAN}6: SECOND ARG EMPTY${RESET}"
echo "Command: ./files tests/infile \"\" dog"
./files tests/infile "" dog

echo -e "\n${CYAN}7: INVALID FILENAME${RESET}"
echo "Command: ./files infile1 cat dog"
./files infile1 cat dog

echo -e "\n${CYAN}8: VALID ARGUMENTS${RESET}"
echo "Command: ./files tests/infile cat GIRAFFE"
./files tests/infile cat GIRAFFE
echo "Original file content:"
cat tests/infile
echo "File with replacements:"
cat tests/infile.replace

echo -e "\n${CYAN}9: EMPTY INFILE${RESET}"
echo "Command: ./files tests/infile_empty cat dog"
./files tests/infile_empty cat dog
echo "Original file content:"
cat tests/infile_empty
echo "File with replacements:"
cat tests/infile_empty.replace

echo -e "\n${CYAN}10: EXISTING OUTFILE CLOSED FOR EDITING${RESET}"
echo "Command: chmod tests/infile.replace 000 && ./files tests/infile cat dog"
chmod 000 tests/infile.replace
./files tests/infile cat dog
chmod 644 tests/infile.replace  # Restore permissions for cleanup

echo -e "\n${CYAN}11: BIG INFILE${RESET}"
echo "Command: ./files \"tests/Cat - Wikipedia.html\" cat dog"
./files "tests/Cat - Wikipedia.html" cat dog

echo -e "\n${CYAN}12: REPLACE A SENTENCE WITH A SENTENCE${RESET}"
echo "Command: ./files tests/infile_sentence \"cat chases dog\" \"giraffe caught an elephant\""
./files tests/infile_sentence "cat chases dog" "giraffe caught an elephant"
echo "Original file content:"
cat tests/infile_sentence
echo "File with replacements:"
cat tests/infile_sentence.replace
