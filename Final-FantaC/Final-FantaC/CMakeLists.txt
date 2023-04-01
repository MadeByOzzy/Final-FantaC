# CMakeList.txt : CMake project for Final-FantaC, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Final-FantaC 
	"Final-FantaC.c" "Final-FantaC.h" 
	"test/RunUnitTests.h" "test/RunUnitTests.c"

	"Character.h" "Character.c"
	"InitCharacters.h" "InitCharacter.c"

	"BattleSystem.h" "BattleSystem.c" 
	"test/test_BattleSystem.h" "test/test_BattleSystem.c")

# TODO: Add tests and install targets if needed.
