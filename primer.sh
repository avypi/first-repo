#!/bin/bash

# Given program explores a small concept taught in my ECE 455 Bionanotechnology course,
# converting the DNA/RNA code into it's complement form.

# reads user input whether they are giving dna or rna code
read -p "DNA/ RNA?: " ans


# Given function converts the base pairs of DNA into their complement form
# A <-> T and C <-> G, creating a new array complement with the converted code
function dna {
complement=""
for base in "${array[@]}"; do
	if [[ "$base" == "A" ]]; then
	complement+="T";
	elif [[ "$base" == "T" ]]; then
	complement+="A";
	elif [[ "$base" == "G" ]]; then
	complement+="C";
	elif [[ "$base" == "C" ]]; then
	complement+="G";
	else
	echo "invalid"
	return
	fi
done
echo "${complement[@]}"
}
dna

# Given function converts the base pairs of RNA into their complement form
# A <-> U and C <-> G , creating a new array complement with the converted code
function rna {
complement=""
for base in "${rna_array[@]}"; do
	if [[ "$base" == "A" ]]; then
	complement+="U";
	e# Given function converts the base pairs of DNA into their complement form
# A <-> T and C <-> Glif [[ "$base" == "U" ]]; then
	complement+="A";
	elif [[ "$base" == "C" ]]; then
	complement+="G";
	elif [[ "$base" == "G" ]]; then
	complement+="C";
	else
	echo "invalid"
	return
	fi
done
echo "${complement[@]}"
}
rna


##for DNA
if [[ "$ans" == "dna" ]]; then
# reads DNA code input from user
        read -p "Enter DNA: " dna
	dna="${dna^^}"
# parses dna input and maps all chars into an array
        mapfile -t array < <(echo "$dna" | grep -o .)
        dna

##for RNA
elif [[ "$ans" == "rna" ]]; then
# reads RNA code input from user
        read -p "Enter RNA: " rna
        rna="${rna^^}"
# parses rna input and maps all chars into an rna_array
	mapfile -t rna_array < <(echo "$rna" | grep -o .)
        rna
fi
