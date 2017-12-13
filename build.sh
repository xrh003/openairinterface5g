source oaienv #configure the shell
./cmake_targets/build_oai  -w USRP --eNB --UE # compile eNB
cp cmake_targets/lte_build_oai/build/lte-softmodem myworkspace/  # copy the target file to the temporary folder

