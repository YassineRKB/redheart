## Project Description:
ReadHeart is mainly a file fingerprint reliant antivirus written in C.
<p>Disclaimer: this project is only meant to augment my understanding of C and linux environment.
This Project is not meant for production or commercial use, as from its very conception it is fataly flawed, threats in the cyber space are very advanced and you need to entrust your security to other proffesional solutins, due the concept redheart is relaying on is basic and can easily be mitigated, hence no detection will happen scanning advanced threats using tactics from payloads, unknow variations, etc. </p>
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
