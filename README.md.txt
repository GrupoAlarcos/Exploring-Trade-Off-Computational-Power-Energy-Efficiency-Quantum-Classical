# Exploring the Trade-Off between Computational Power and Energy Efficiency: An Analysis of the Evolution of Quantum Computing and its Relation to Classical Computing

[Elena Desdentado](https://orcid.org/0000-0001-9618-6628)  

[Coral Calero](https://orcid.org/0000-0003-0728-4176)

[Mª Ángeles Moraga](https://orcid.org/0000-0001-9165-7144)

[Manuel Serrano](https://orcid.org/0000-0003-0962-5659)

[Félix García](https://orcid.org/0000-0001-6460-0353)

## Abstract
Quantum computing is considered a revolutionary technology due to its ability to solve computational problems that are beyond the capabilities of classical computers. However, quantum computing requires great amounts of energy to run. Therefore, a factor in deciding whether to use quantum computing should be not only the complexity of the problem to be solved, but also the energy required to solve it. This paper presents an empirical study developed with the aim of comparing classical and quantum computing in terms of energy efficiency to determine whether the increased power of quantum computers is offset by their higher energy consumption. To achieve this, a variety of problems with different levels of complexity were tested on both types of computers. Specifically, we used the IBM Quantum computers with a maximum of 5 qubits and an Intel i7, as a classical computer. In addition to this we have also analyzed the evolution of the quantum computers, performing measurements on three time periods. Our empirical study showed that there is a variability of results obtained in the three time periods and that quantum computing is not recommended for low-complexity problems, given its high energy consumption, particularly when compared to traditional computing.

## What is this?
This repository contains the source code of 5 quantum algorithms and their counterpart classical implementations in C.
The repository also includes the resulting empirical results and and the previous study performed to obtain the optimal number of executions per measurement to be carried out in the classical computing scenario.

## How is structured?
This repository contains three main folders: number of executions per measurement study, problem definition and solution codes and time and consumption results.

## Number of executions per measurement study Folder
This folder contains an Excel document in which the results of the study performed before the main study of this article are shown.

## Problem definition and solution codes Folder
This folder contains 5 subfolders, one for each problem. It is structured as follows:

```

| <Problem definition and solution codes>
	| <2 taxis 3 people>
		| <classical-computing>
        		| 2taxis3people.c
        		| 2taxis3people.exe
		| <quantum-computing>
        		| Qiskit-code_2t3p.c
        		| Quantum-circuit_2t3p.png
		| Definition_EN
	| ...
	| <algorithm-i>
		| <classical-computing>
        		| algorithm-i.c
        		| algorithm-i.exe
		| <quantum-computing>
        		| Qiskit-code_algorithm-i.c
        		| Quantum-circuit_algorithm-i.png
		| Definition_EN
```

## Time and consumption results Folder
This folder contains an Excel document in which the classical and quantum computing results are both shown and compared. This folder also contains 5 subfolders, one for each problem. It is structured as follows:

```
| <Time and consumption results>
	| <2 taxis 3 people>
		| <classical-computing>
        		| 3ClassicalStudy2t3p_1800_EX.txt
        		| 3ClassicalStudy2t3p_1800_IN.txt
		| <quantum-computing>
        		| <2021 September>
                		| QComp_Lima.png
                		| QComp_Manila.png
                		| QComp_Quito.png
                		| QComp_Santiago.png
                		| TimeConsResults.xlsx
        		| <2022 April>
                		| QComp_Lima.png
                		| QComp_Manila.png
                		| QComp_Quito.png
                		| QComp_Santiago.png
                		| TimeConsResults.xlsx
        		| <2022 May>
                		| QComp_Lima.png
                		| QComp_Manila.png
                		| QComp_Quito.png
                		| QComp_Santiago.png
                		| TimeConsResults.xlsx
	| ...
	| <algorithm-i>
		| <classical-computing>
        		| 3ClassicalStudyalgorithm-i_1800_EX.txt
        		| 3ClassicalStudyalgorithm-i_1800_IN.txt
		| <quantum-computing>
        		| <2021 September>
                		| QComp_Lima.png
                		| QComp_Manila.png
                		| QComp_Quito.png
                		| QComp_Santiago.png
                		| TimeConsResults.xlsx
        		| <2022 April>
                		| QComp_Lima.png
                		| QComp_Manila.png
                		| QComp_Quito.png
                		| QComp_Santiago.png
                		| TimeConsResults.xlsx
        		| <2022 May>
                		| QComp_Lima.png
                		| QComp_Manila.png
                		| QComp_Quito.png
                		| QComp_Santiago.png
                		| TimeConsResults.xlsx
		| Classical and quantum - Time and consumption.xlsx
```
## Contacts

[Green Team Alarcos](https://greenteamalarcos.uclm.es/)