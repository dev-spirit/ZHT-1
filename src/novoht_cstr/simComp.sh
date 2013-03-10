#This script is designed to compile c++ code wrote with Kyoto Cabinet
# Created by Tony 



log=$2
sourceFile=$1
fileName=$(echo $sourceFile | awk -F '.' '{print $1}')

echo $log

#export USER_INCLUDE=/home/tony/Installed/built/include:/usr/loca/include
export USER_INCLUDE=/home/tony/Installed/built/include


#export USER_LIB=$USER_LIB:/home/tony/Installed/built/lib:/usr/loca/lib
#export CPLUS_INCLUDE_PATH=/home/tony/Installed/built/include
export USER_LIB=/home/tony/Installed/built/lib

if [[ $log == "l" ]]; then
g++ -g -Xlinker -zmuldefs -I$USER_INCLUDE $sourceFile -L$USER_LIB -lstdc++ -lrt -lpthread -lm -lc -lprotobuf -lprotoc meta.pb.cc novoht.cxx net_util.cpp zht_util.cpp cpp_zhtclient.cpp -o $fileName  -DILOG=1

else 
g++ -g -Xlinker -zmuldefs -I$USER_INCLUDE $sourceFile -L$USER_LIB -lstdc++ -lrt -lpthread -lm -lc -lprotobuf -lprotoc meta.pb.cc novoht.cxx net_util.cpp zht_util.cpp cpp_zhtclient.cpp -o $fileName

fi #$log == "l"

#g++ -g -Xlinker -zmuldefs  $sourceFile  -lstdc++ -lrt -lpthread -lm -lc -lprotobuf -lprotoc meta.pb.cc novoht.cxx net_util.cpp zht_util.cpp cpp_zhtclient.cpp -o $fileName

#lru_cache.cpp 
# -zmuldefs -lz

#rm *.o
