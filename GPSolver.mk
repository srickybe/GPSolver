##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=GPSolver
ConfigurationName      :=Release
WorkspacePath          := "/home/john/Programming/C++/Test"
ProjectPath            := "/home/john/Programming/C++/GPSolver"
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=John Stanp
Date                   :=01/13/16
CodeLitePath           :="/home/john/.codelite"
LinkerName             :=/usr/bin/g++ 
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="GPSolver.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++ 
CC       := /usr/bin/gcc 
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as 


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Chromosome.cpp$(ObjectSuffix) $(IntermediateDirectory)/Util.cpp$(ObjectSuffix) $(IntermediateDirectory)/LCEBFitness.cpp$(ObjectSuffix) $(IntermediateDirectory)/LCEBEvaluation.cpp$(ObjectSuffix) $(IntermediateDirectory)/LeCompteEstBon.cpp$(ObjectSuffix) $(IntermediateDirectory)/GPSolver.cpp$(ObjectSuffix) $(IntermediateDirectory)/PopulationParameters.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@test -d ./Release || $(MakeDirCommand) ./Release

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/john/Programming/C++/GPSolver/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/Chromosome.cpp$(ObjectSuffix): Chromosome.cpp $(IntermediateDirectory)/Chromosome.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/john/Programming/C++/GPSolver/Chromosome.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Chromosome.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Chromosome.cpp$(DependSuffix): Chromosome.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Chromosome.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Chromosome.cpp$(DependSuffix) -MM "Chromosome.cpp"

$(IntermediateDirectory)/Chromosome.cpp$(PreprocessSuffix): Chromosome.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Chromosome.cpp$(PreprocessSuffix) "Chromosome.cpp"

$(IntermediateDirectory)/Util.cpp$(ObjectSuffix): Util.cpp $(IntermediateDirectory)/Util.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/john/Programming/C++/GPSolver/Util.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Util.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Util.cpp$(DependSuffix): Util.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Util.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Util.cpp$(DependSuffix) -MM "Util.cpp"

$(IntermediateDirectory)/Util.cpp$(PreprocessSuffix): Util.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Util.cpp$(PreprocessSuffix) "Util.cpp"

$(IntermediateDirectory)/LCEBFitness.cpp$(ObjectSuffix): LCEBFitness.cpp $(IntermediateDirectory)/LCEBFitness.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/john/Programming/C++/GPSolver/LCEBFitness.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LCEBFitness.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LCEBFitness.cpp$(DependSuffix): LCEBFitness.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LCEBFitness.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LCEBFitness.cpp$(DependSuffix) -MM "LCEBFitness.cpp"

$(IntermediateDirectory)/LCEBFitness.cpp$(PreprocessSuffix): LCEBFitness.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LCEBFitness.cpp$(PreprocessSuffix) "LCEBFitness.cpp"

$(IntermediateDirectory)/LCEBEvaluation.cpp$(ObjectSuffix): LCEBEvaluation.cpp $(IntermediateDirectory)/LCEBEvaluation.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/john/Programming/C++/GPSolver/LCEBEvaluation.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LCEBEvaluation.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LCEBEvaluation.cpp$(DependSuffix): LCEBEvaluation.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LCEBEvaluation.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LCEBEvaluation.cpp$(DependSuffix) -MM "LCEBEvaluation.cpp"

$(IntermediateDirectory)/LCEBEvaluation.cpp$(PreprocessSuffix): LCEBEvaluation.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LCEBEvaluation.cpp$(PreprocessSuffix) "LCEBEvaluation.cpp"

$(IntermediateDirectory)/LeCompteEstBon.cpp$(ObjectSuffix): LeCompteEstBon.cpp $(IntermediateDirectory)/LeCompteEstBon.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/john/Programming/C++/GPSolver/LeCompteEstBon.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LeCompteEstBon.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LeCompteEstBon.cpp$(DependSuffix): LeCompteEstBon.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LeCompteEstBon.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LeCompteEstBon.cpp$(DependSuffix) -MM "LeCompteEstBon.cpp"

$(IntermediateDirectory)/LeCompteEstBon.cpp$(PreprocessSuffix): LeCompteEstBon.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LeCompteEstBon.cpp$(PreprocessSuffix) "LeCompteEstBon.cpp"

$(IntermediateDirectory)/GPSolver.cpp$(ObjectSuffix): GPSolver.cpp $(IntermediateDirectory)/GPSolver.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/john/Programming/C++/GPSolver/GPSolver.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/GPSolver.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/GPSolver.cpp$(DependSuffix): GPSolver.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/GPSolver.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/GPSolver.cpp$(DependSuffix) -MM "GPSolver.cpp"

$(IntermediateDirectory)/GPSolver.cpp$(PreprocessSuffix): GPSolver.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/GPSolver.cpp$(PreprocessSuffix) "GPSolver.cpp"

$(IntermediateDirectory)/PopulationParameters.cpp$(ObjectSuffix): PopulationParameters.cpp $(IntermediateDirectory)/PopulationParameters.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/john/Programming/C++/GPSolver/PopulationParameters.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PopulationParameters.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PopulationParameters.cpp$(DependSuffix): PopulationParameters.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PopulationParameters.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PopulationParameters.cpp$(DependSuffix) -MM "PopulationParameters.cpp"

$(IntermediateDirectory)/PopulationParameters.cpp$(PreprocessSuffix): PopulationParameters.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PopulationParameters.cpp$(PreprocessSuffix) "PopulationParameters.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) ./Release/*$(ObjectSuffix)
	$(RM) ./Release/*$(DependSuffix)
	$(RM) $(OutputFile)
	$(RM) "../Test/.build-release/GPSolver"


