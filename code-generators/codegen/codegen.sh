mkdir -p generated/c
touch generated/c/${1}.h
touch generated/c/${1}.cpp

echo "int get_number_${1}(void);" > generated/c/${1}.h
echo "int get_number_${1}(void) { return 3; };" > generated/c/${1}.cpp
