## Project Description:
ReadHeart is mainly a file fingerprint reliant antivirus written in C.

## Project Diagram:
![project-Diagran](https://github.com/YassineRKB/redheart/blob/main/images/project-diagram.svg)

## Project Structure:
> ./red => an executable |
> ./core/dbfile.rh => file that contains known fingerprints |
> ./{mode}-result-{date}-{time}.txt => default result file to be generated if flags dont specify a desired output. |

## TODO-List:
+ [ ] Menu.
+ [ ] Function to calculate file fingerprint.
+ [ ] Function to read db file and handle {category:fingerprint}.
+ [ ] Function to handle Updates append updates to existing db and creating backup inside core folder.
+ [ ] Handle Arguments.
+ [ ] Function to handle Specific File(s) scan mode.
+ [ ] Function to handle System Wide Scan mode.
