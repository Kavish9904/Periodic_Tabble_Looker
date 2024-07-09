#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int option;
    char search[20];

    printf("Welcome to Modern Periodic Table\n\n");

    while (1) {
        printf("> Enter 1 to know about an element\n");
        printf("> Enter 2 to close the periodic table\n");

        printf("ENTER: ");
        scanf("%d", &n);

        if (n == 1)
        {
            printf("How would you like to search?\n");
            printf("> Press 1 to search by Atomic Number\n");
            printf("> Press 2 to search by Name\n");
            printf("> Press 3 to search by Symbol\n");

            printf("ENTER: ");
            scanf("%d", &option);

            if (option == 1)
            {
                int a;
                printf("Enter the atomic number of the element to be searched: ");
                scanf("%d", &a);

                if (a == 1)
                {
                    printf("\n\n");
                    printf("Name: Hydrogen\n");
                    printf("Symbol: H\n");
                    printf("Atomic number: 1\n");
                    printf("Atomic Mass: 1.008\n"); 
                    printf("Electronic configuration: 1s^1\n");
                    printf("Discoverer: Henry Cavendish\n");
                    printf("Charge: +1\n");
                    printf("\n \n");
                }
                 if (a == 2)
            {
                printf("\n\n");
                printf("Name :Helium\n");
                printf("Symbol: He\n");
                printf("Atomic number :2\n");
                printf("Atomic Mass:4.0026  \n");
                printf("Electronic configuration:1s^2\n");
                printf("Discover by:william romosay\n");
                printf("Dharge:0\n");
                printf("\n \n");
            }
            if (a == 3)
            {
                printf("\n\n");
                printf("Name :Lithium \n");
                printf("Symbol:Li \n");
                printf("Atomic Number :3 \n");
                printf("Atomic Mass: 6.94 \n");
                printf("Electronic Configuration:1s^2 2s^1 \n");
                printf("Discover By:Johan August \n");
                printf("Charge:+1 \n");
                printf("\n \n");
            }
            if (a == 4)
            {
                printf("\n\n");
                printf("Name :Berylium \n");
                printf("Symbol:Be \n");
                printf("Atomic Number :4 \n");
                printf("Atomic Mass: 9.0122  \n");
                printf("Electronic Configuration:1s^2 2s^2 \n");
                printf("Discover By:Louis Nicolas \n");
                printf("Charge:+2 \n");
                printf("\n \n");
            }
            if (a == 5)
            {
                printf("\n\n");
                printf("Name :Boron \n");
                printf("Symbol:B \n");
                printf("Atomic Number :05 \n");
                printf("Atomic Mass: 10.81 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^1 \n");
                printf("Discover By:Gay Lussac \n");
                printf("Charge:+3 \n");
                printf("\n \n");
            }
            if (a == 6)
            {
                printf("\n\n");
                printf("Name :Carbon \n");
                printf("Symbol:C \n");
                printf("Atomic Number :06 \n");
                printf("Atomic Mass: 12.011 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^2 \n");
                printf("Discover By:A.L. Lavoiser \n");
                printf("Charge:+4 \n");
                printf("\n \n");
            }
            if (a == 7)
            {
                printf("\n\n");
                printf("Name :Nitrogen \n");
                printf("Symbol:N \n");
                printf("Atomic Number :07 \n");
                printf("Atomic Mass: 14.007 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^3 \n");
                printf("Discover By:Danial RathurFord \n");
                printf("Charge:-3 \n");
                printf("\n \n");
            }
            if (a == 8)
            {
                printf("\n\n");
                printf("Name :Oxygen \n");
                printf("Symbol:O \n");
                printf("Atomic Number :08 \n");
                printf("Atomic Mass: 15.999 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^4 \n");
                printf("Discover By:Joseph Priostly \n");
                printf("Charge:-2 \n");
                printf("\n \n");
            }
            if (a == 9)
            {
                printf("\n\n");
                printf("Name :Fluorine \n");
                printf("Symbol:F \n");
                printf("Atomic Number :09 \n");
                printf("Atomic Mass: 18.998 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^5 \n");
                printf("Discover By:Henry Moissan \n");
                printf("Charge:-1 \n");
                printf("\n \n");
            }
            if (a == 10)
            {
                printf("\n\n");
                printf("Name :Neon \n");
                printf("Symbol:Ne \n");
                printf("Atomic Number :10 \n");
                printf("Atomic Mass: 20.180 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 \n");
                printf("Discover By:William Ramsey \n");
                printf("Charge:0 \n");
                printf("\n \n");
            }
            if (a == 11)
            {
                printf("\n\n");
                printf("Name :Sodium \n");
                printf("Symbol:Na \n");
                printf("Atomic Number :11 \n");
                printf("Atomic Mass: 22.990 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^1 \n");
                printf("Discover By: Humpry \n");
                printf("Charge:+1 \n");
                printf("\n \n");
            }
            if (a == 12)
            {
                printf("\n\n");
                printf("Name :Magnesium \n");
                printf("Symbol:Mg \n");
                printf("Atomic Number :12 \n");
                printf("Atomic Mass: 24.305 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 \n");
                printf("Discover By: Humpry \n");
                printf("Charge:+2 \n");
                printf("\n \n");
            }
            if (a == 13)
            {
                printf("\n\n");
                printf("Name :Aluminium \n");
                printf("Symbol:Al \n");
                printf("Atomic Number :13 \n");
                printf("Atomic Mass: 26.982 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^1 \n");
                printf("Discover By: Hans Christion \n");
                printf("Charge:+3 \n");
                printf("\n \n");
            }
            if (a == 14)
            {
                printf("\n\n");
                printf("Name :Silicon \n");
                printf("Symbol:Si \n");
                printf("Atomic Number :14 \n");
                printf("Atomic Mass:28.085  \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^2 \n");
                printf("Discover By:Anboine Lavoiser  \n");
                printf("Charge:+4 -4 \n");
                printf("\n \n");
            }
            if (a == 15)
            {
                printf("\n\n");
                printf("Name :Phosphorous \n");
                printf("Symbol:P \n");
                printf("Atomic Number :15 \n");
                printf("Atomic Mass: 30.974 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^3 \n");
                printf("Discover By:Henning Brand  \n");
                printf("Charge:+5 +3 -3 \n");
                printf("\n \n");
            }
            if (a == 16)
            {
                printf("\n\n");
                printf("Name :Sulphur \n");
                printf("Symbol:S \n");
                printf("Atomic Number :16 \n");
                printf("Atomic Mass: 32.06 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^4 \n");
                printf("Discover By:Anting Lavoiser\n");
                printf("Charge: -2 +2 +4 +6\n");
                printf("\n \n");
            }
            if (a == 17)
            {
                printf("\n\n");
                printf("Name :Chlorine \n");
                printf("Symbol:Cl \n");
                printf("Atomic Number :17 \n");
                printf("Atomic Mass: 35.45 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^5 \n");
                printf("Discover By:Carl Wilholm\n");
                printf("Charge: -1\n");
                printf("\n \n");
            }
            if (a == 18)
            {
                printf("\n\n");
                printf("Name :Argon \n");
                printf("Symbol:Ar \n");
                printf("Atomic Number :18 \n");
                printf("Atomic Mass: 39.948 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^6 \n");
                printf("Discover By:Humphry Davy\n");
                printf("Charge: +1\n");
                printf("\n \n");
            }
            if (a == 19)
            {
                printf("\n\n");
                printf("Name :Potassium\n");
                printf("Symbol:K \n");
                printf("Atomic Number :19 \n");
                printf("Atomic Mass: 39.098 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^6 4s^1 \n");
                printf("Discover By:Humphry Davy\n");
                printf("Charge: +1\n");
                printf("\n \n");
            }
            if (a == 20)
            {
                printf("\n\n");
                printf("Name :Calcium\n");
                printf("Symbol:Ca \n");
                printf("Atomic Number :20 \n");
                printf("Atomic Mass: 40.078 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 \n");
                printf("Discover By:Humpry Davy\n");
                printf("Charge: +2\n");
                printf("\n \n");
            }
            if (a == 21)
            {
                printf("\n\n");
                printf("Name :Scandium\n");
                printf("Symbol:Sc \n");
                printf("Atomic Number :21 \n");
                printf("Atomic Mass: 44.956 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^1 \n");
                printf("Discover By:Lars Fredrik Nilson\n");
                printf("Charge: +3\n");
                printf("\n \n");
            }
            if (a == 22)
            {
                printf("\n\n");
                printf("Name :Titanium\n");
                printf("Symbol:Ti \n");
                printf("Atomic Number :22 \n");
                printf("Atomic Mass: 47.867 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^2 \n");
                printf("Discover By:William Gregor\n");
                printf("Charge: +3 +4\n");
                printf("\n \n");
            }
            if (a == 23)
            {
                printf("\n\n");
                printf("Name : Vanadium\n");
                printf("Symbol: V\n");
                printf("Atomic Number: 23\n");
                printf("Atomic Mass: 50.942 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^3 \n");
                printf("Discover By: Andres Manual Del Rio\n");
                printf("Charge: +2 +3 +4 +5\n");
                printf("\n \n");
            }
            if (a == 24)
            {
                printf("\n\n");
                printf("Name : Chromium\n");
                printf("Symbol: Cr\n");
                printf("Atomic Number: 24\n");
                printf("Atomic Mass: 51.996 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^5 \n");
                printf("Discover By: Louis Nicolas Vauquelin\n");
                printf("Charge: +2 +3 +6\n");
                printf("\n \n");
            }
            if (a == 25)
            {
                printf("\n\n");
                printf("Name : Manganese\n");
                printf("Symbol: Mn\n");
                printf("Atomic Number: 25\n");
                printf("Atomic Mass: 54.938 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^5 \n");
                printf("Discover By: Carl Wilholm Schoole\n");
                printf("Charge: +2 +4 +7\n");
                printf("\n \n");
            }
            if (a == 26)
            {
                printf("\n\n");
                printf("Name : Iron\n");
                printf("Symbol: Fe\n");
                printf("Atomic Number: 26\n");
                printf("Atomic Mass: 55.845 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^6 \n");
                printf("Discover By: Rene Antoine\n");
                printf("Charge: +2 +3\n");
                printf("\n \n");
            }
            if (a == 27)
            {
                printf("\n\n");
                printf("Name : Cobalt\n");
                printf("Symbol: Co\n");
                printf("Atomic Number: 27\n");
                printf("Atomic Mass: 58.933 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^7 \n");
                printf("Discover By: Georg Brondt\n");
                printf("Charge: +2 +3\n");
                printf("\n \n");
            }
            if (a == 28)
            {
                printf("\n\n");
                printf("Name : Nickel\n");
                printf("Symbol: Ni\n");
                printf("Atomic Number: 28\n");
                printf("Atomic Mass: 58.693 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^8 \n");
                printf("Discover By: Arol Fredrik \n");
                printf("Charge: +2 \n");
                printf("\n \n");
            }
            if (a == 29)
            {
                printf("\n\n");
                printf("Name : Copper\n");
                printf("Symbol: Cu\n");
                printf("Atomic Number: 29\n");
                printf("Atomic Mass: 63.546 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 \n");
                printf("Discover By: Early Mesoptamians\n");
                printf("Charge: +1 +2 \n");
                printf("\n \n");
            }
            if (a == 30)
            {
                printf("\n\n");
                printf("Name : Zinc\n");
                printf("Symbol: Zn\n");
                printf("Atomic Number: 30\n");
                printf("Atomic Mass: 65.38 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 \n");
                printf("Discover By: Andreds Sigismund Marggraf\n");
                printf("Charge:  +2 \n");
                printf("\n \n");
            }
            if (a == 31)
            {
                printf("\n\n");
                printf("Name : Gallium\n");
                printf("Symbol: Ge\n");
                printf("Atomic Number: 31\n");
                printf("Atomic Mass: 69.72 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 \n");
                printf("Discover By: Paul-Emi lo Lecoq De Baisba\n");
                printf("Charge:  +3 \n");
                printf("\n \n");
            }
            if (a == 32)
            {
                printf("\n\n");
                printf("Name : Germanium\n");
                printf("Symbol: Ge\n");
                printf("Atomic Number: 32\n");
                printf("Atomic Mass: 72.59 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^2 \n");
                printf("Discover By: Clomens Winkler\n");
                printf("Charge: -4 +2 +4 \n");
                printf("\n \n");
            }
            if (a == 33)
            {
                printf("\n\n");
                printf("Name : Arsenic\n");
                printf("Symbol: As\n");
                printf("Atomic Number: 33\n");
                printf("Atomic Mass: 74.9216 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^3 \n");
                printf("Discover By: Albertus Magnus\n");
                printf("Charge: -3 +3 +5 \n");
                printf("\n \n");
            }
            if (a == 34)
            {
                printf("\n\n");
                printf("Name : Selonium\n");
                printf("Symbol: Se\n");
                printf("Atomic Number: 34\n");
                printf("Atomic Mass: 78.96 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^4 \n");
                printf("Discover By: Johan Gottieb Gahn\n");
                printf("Charge: -2 +4 +6 \n");
                printf("\n \n");
            }
            if (a == 35)
            {
                printf("\n\n");
                printf("Name : Bromine\n");
                printf("Symbol: Br\n");
                printf("Atomic Number: 35\n");
                printf("Atomic Mass: 79.904 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^5 \n");
                printf("Discover By: CArl Jacob Lowig\n");
                printf("Charge: -1 +1 +5 \n");
                printf("\n \n");
            }
            if (a == 36)
            {
                printf("\n\n");
                printf("Name : Krypron\n");
                printf("Symbol: Kr\n");
                printf("Atomic Number: 36\n");
                printf("Atomic Mass: 83.80 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 \n");
                printf("Discover By: Marrfs Travers\n");
                printf("Charge: 0 \n");
                printf("\n \n");
            }
            if (a == 37)
            {
                printf("\n\n");
                printf("Name : Rubidium\n");
                printf("Symbol: Rb\n");
                printf("Atomic Number: 37\n");
                printf("Atomic Mass: 85.4678 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^1 \n");
                printf("Discover By: Robert Bunsen\n");
                printf("Charge: +1 \n");
                printf("\n \n");
            }
            if (a == 38)
            {
                printf("\n\n");
                printf("Name : Strontium\n");
                printf("Symbol: Sr\n");
                printf("Atomic Number: 38\n");
                printf("Atomic Mass: 87.62 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^2 \n");
                printf("Discover By: Humpry Davy\n");
                printf("Charge: +2 \n");
                printf("\n \n");
            }
            if (a == 39)
            {
                printf("\n\n");
                printf("Name : Yttrium\n");
                printf("Symbol: Y\n");
                printf("Atomic Number: 39\n");
                printf("Atomic Mass: 88.9059 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^3 \n");
                printf("Discover By: Johan Gadolin\n");
                printf("Charge: +3 \n");
                printf("\n \n");
            }
            if (a == 40)
            {
                printf("\n\n");
                printf("Name : Zirconium\n");
                printf("Symbol: Zr\n");
                printf("Atomic Number: 40\n");
                printf("Atomic Mass: 91.22 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^3 \n");
                printf("Discover By: Martin Heinrih Klaproth\n");
                printf("Charge: +4 \n");
                printf("\n \n");
            }
            if (a == 41)
            {
                printf("\n\n");
                printf("Name : Niobium\n");
                printf("Symbol: Nb\n");
                printf("Atomic Number: 41\n");
                printf("Atomic Mass: 92.9064 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^1 \n");
                printf("Discover By: Charlos Hatchett\n");
                printf("Charge: +3 +5 \n");
                printf("\n \n");
            }
            if (a == 42)
            {
                printf("\n\n");
                printf("Name : Mdybdenum\n");
                printf("Symbol: Mo\n");
                printf("Atomic Number: 42\n");
                printf("Atomic Mass: 95.94 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^1 \n");
                printf("Discover By: Carl Wilhalm\n");
                printf("Charge: +3 +6 \n");
                printf("\n \n");
            }
            if (a == 43)
            {
                printf("\n\n");
                printf("Name : Technetium\n");
                printf("Symbol: Tc\n");
                printf("Atomic Number: 43\n");
                printf("Atomic Mass: 98 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^5 5s^2 \n");
                printf("Discover By: Emilio Segre\n");
                printf("Charge: +6 \n");
                printf("\n \n");
            }
            if (a == 44)
            {
                printf("\n\n");
                printf("Name : Ruthenium\n");
                printf("Symbol: Ru\n");
                printf("Atomic Number: 44\n");
                printf("Atomic Mass: 101.07 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^7 5s^1 \n");
                printf("Discover By: Karl Claus\n");
                printf("Charge: +3 +4 +8 \n");
                printf("\n \n");
            }
            if (a == 45)
            {
                printf("\n\n");
                printf("Name : Rhodium\n");
                printf("Symbol: Rh\n");
                printf("Atomic Number: 45\n");
                printf("Atomic Mass: 102.9055 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^8 5s^1 \n");
                printf("Discover By: William Hyde Wallaston\n");
                printf("Charge:  +4 \n");
                printf("\n \n");
            }
            if (a == 46)
            {
                printf("\n\n");
                printf("Name : Polladium\n");
                printf("Symbol: Pd\n");
                printf("Atomic Number: 46\n");
                printf("Atomic Mass: 106.4 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10  \n");
                printf("Discover By: William Hyde Wallaston\n");
                printf("Charge: +2 +4 \n");
                printf("\n \n");
            }
            if (a == 47)
            {
                printf("\n\n");
                printf("Name : Silver\n");
                printf("Symbol: Ag\n");
                printf("Atomic Number: 47\n");
                printf("Atomic Mass: 107.868 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^1 \n");
                printf("Discover By: Ancient Greeks\n");
                printf("Charge: +1 \n");
                printf("\n \n");
            }
            if (a == 48)
            {
                printf("\n\n");
                printf("Name : Cadmium\n");
                printf("Symbol: Cd\n");
                printf("Atomic Number: 48\n");
                printf("Atomic Mass: 112.41 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 \n");
                printf("Discover By: Friedrich Sbromoyer\n");
                printf("Charge: +2 \n");
                printf("\n \n");
            }
            if (a == 49)
            {
                printf("\n\n");
                printf("Name : Indium\n");
                printf("Symbol: In\n");
                printf("Atomic Number: 49\n");
                printf("Atomic Mass: 114.82 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^1\n");
                printf("Discover By: Ferdinond Reich\n");
                printf("Charge: +3 \n");
                printf("\n \n");
            }
            if (a == 50)
            {
                printf("\n\n");
                printf("Name : Tin \n");
                printf("Symbol: Sn\n");
                printf("Atomic Number: 50\n");
                printf("Atomic Mass: 118.69 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^2\n");
                printf("Discover By: James Smith\n");
                printf("Charge: +2 +4 \n");
                printf("\n \n");
            }
            if (a == 51)
            {
                printf("\n\n");
                printf("Name : Antimony \n");
                printf("Symbol: Sb\n");
                printf("Atomic Number: 51\n");
                printf("Atomic Mass: 121.75 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^3\n");
                printf("Discover By: Nicolas Lemery\n");
                printf("Charge: -3 +3 +5 \n");
                printf("\n \n");
            }
            if (a == 52)
            {
                printf("\n\n");
                printf("Name : Tellurium \n");
                printf("Symbol: Te\n");
                printf("Atomic Number: 52\n");
                printf("Atomic Mass: 127.60 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^4\n");
                printf("Discover By: Frazn-Joseph\n");
                printf("Charge: -2 +3 +5 +6\n");
                printf("\n \n");
            }
            if (a == 53)
            {
                printf("\n\n");
                printf("Name : Iodine \n");
                printf("Symbol: I\n");
                printf("Atomic Number: 53\n");
                printf("Atomic Mass: 126.9045 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^5\n");
                printf("Discover By: Bernard Courtois\n");
                printf("Charge: -1\n");
                printf("\n \n");
            }
            if (a == 54)
            {
                printf("\n\n");
                printf("Name : Xenon \n");
                printf("Symbol: Xe\n");
                printf("Atomic Number: 54\n");
                printf("Atomic Mass: 131.30 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^6\n");
                printf("Discover By: William Ramsay\n");
                printf("Charge: 0 \n");
                printf("\n \n");
            }
            if (a == 55)
            {
                printf("\n\n");
                printf("Name : Cesium \n");
                printf("Symbol: Cs\n");
                printf("Atomic Number: 55\n");
                printf("Atomic Mass: 132.9054 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^6 6s^1\n");
                printf("Discover By:Gustav Kirchhoff \n");
                printf("Charge: +1 \n");
                printf("\n \n");
            }
            if (a == 56)
            {
                printf("\n\n");
                printf("Name : Barium \n");
                printf("Symbol: Ba\n");
                printf("Atomic Number: 56\n");
                printf("Atomic Mass: 137.327 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^6 6s^2\n");
                printf("Discover By:Carl Wilholm Schoole \n");
                printf("Charge: +2 \n");
                printf("\n \n");
            }
            if (a == 57)
            {
                printf("\n\n");
                printf("Name : Lanthanum \n");
                printf("Symbol: La\n");
                printf("Atomic Number: 57\n");
                printf("Atomic Mass: 138.906 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^6 6s^3\n");
                printf("Discover By:Carl Gustaf Mosander \n");
                printf("Charge: +3 \n");
                printf("\n \n");
            }
            if (a == 58)
            {
                printf("\n\n");
                printf("Name : Cerium \n");
                printf("Symbol: Ce\n");
                printf("Atomic Number: 58\n");
                printf("Atomic Mass: 140.116 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^1 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:John Jacob Berzolius \n");
                printf("Charge: +3 +4 \n");
                printf("\n \n");
            }
            if (a == 59)
            {
                printf("\n\n");
                printf("Name : Praseodymium \n");
                printf("Symbol: Pr\n");
                printf("Atomic Number: 59\n");
                printf("Atomic Mass: 140.116 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^3 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:Carl  Auer Van \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (a == 60)
            {
                printf("\n\n");
                printf("Name : Neodymium \n");
                printf("Symbol: Nd\n");
                printf("Atomic Number: 60\n");
                printf("Atomic Mass: 144.240 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^4 5s^2 5p^6 5d^1 6s^3\n");
                printf("Discover By:Carl  Auer Van \n");
                printf("Charge: +3 +4 \n");
                printf("\n \n");
            }
            if (a == 61)
            {
                printf("\n\n");
                printf("Name : Promethium \n");
                printf("Symbol: Pm\n");
                printf("Atomic Number: 61\n");
                printf("Atomic Mass: 145.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^ 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:Jacob A.Marinsky \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (a == 62)
            {
                printf("\n\n");
                printf("Name : Samarium \n");
                printf("Symbol: Sm\n");
                printf("Atomic Number: 62\n");
                printf("Atomic Mass: 150.360 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^6 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:Paul Emilie \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (a == 63)
            {
                printf("\n\n");
                printf("Name : Europium \n");
                printf("Symbol: Eu\n");
                printf("Atomic Number: 63\n");
                printf("Atomic Mass: 151.946 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^7 5s^2 5p^6 6s^2\n");
                printf("Discover By:Paul Emilie Lecoq De Boisbaudran \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (a == 64)
            {
                printf("\n\n");
                printf("Name : Dadolinium \n");
                printf("Symbol: Gd\n");
                printf("Atomic Number: 64\n");
                printf("Atomic Mass: 157.250 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^7 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:Paul Emilie Lecoq De Boisbaudran \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (a == 65)
            {
                printf("\n\n");
                printf("Name : Terbium \n");
                printf("Symbol: Tb\n");
                printf("Atomic Number: 65\n");
                printf("Atomic Mass: 158.925 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^9 5s^2 5p^6 6s^2\n");
                printf("Discover By:Carl Gustaf Mosander \n");
                printf("Charge: +3 +4 \n");
                printf("\n \n");
            }
            if (a == 66)
            {
                printf("\n\n");
                printf("Name : Dysprosium \n");
                printf("Symbol: Dy\n");
                printf("Atomic Number: 66\n");
                printf("Atomic Mass: 162.930 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^10 5s^2 5p^6 6s^2\n");
                printf("Discover By:Paul Emilie \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (a == 67)
            {
                printf("\n\n");
                printf("Name : Holmium \n");
                printf("Symbol: Ho\n");
                printf("Atomic Number: 67\n");
                printf("Atomic Mass: 162.932 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^10 5s^2 5p^6 6s^2\n");
                printf("Discover By:Por Teodor Cleve \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (a == 68)
            {
                printf("\n\n");
                printf("Name : Erbium \n");
                printf("Symbol: Er\n");
                printf("Atomic Number: 68\n");
                printf("Atomic Mass: 167.259 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^12 5s^2 5p^6 6s^2\n");
                printf("Discover By:Carl Gustaf Mosander \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (a == 69)
            {
                printf("\n\n");
                printf("Name : Thulium \n");
                printf("Symbol: Tm\n");
                printf("Atomic Number: 69\n");
                printf("Atomic Mass: 168.934 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^13 5s^2 5p^6 6s^2\n");
                printf("Discover By:Per Teodor \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (a == 70)
            {
                printf("\n\n");
                printf("Name : Ytterbium \n");
                printf("Symbol: Yb\n");
                printf("Atomic Number: 70\n");
                printf("Atomic Mass: 173.040 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 6s^2\n");
                printf("Discover By:Jean Charlos \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (a == 71)
            {
                printf("\n\n");
                printf("Name : Lutetium \n");
                printf("Symbol: Lu\n");
                printf("Atomic Number: 71\n");
                printf("Atomic Mass: 174.967 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:Carl Auor Von Wolsbach \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (a == 72)
            {
                printf("\n\n");
                printf("Name : Halfnium \n");
                printf("Symbol: Lf\n");
                printf("Atomic Number: 72\n");
                printf("Atomic Mass: 178.490 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^2 6s^2\n");
                printf("Discover By:George De Hevesy \n");
                printf("Charge: +4  \n");
                printf("\n \n");
            }
            if (a == 73)
            {
                printf("\n\n");
                printf("Name : Tantalum \n");
                printf("Symbol: Ta\n");
                printf("Atomic Number: 73\n");
                printf("Atomic Mass: 180.984 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^3 6s^2\n");
                printf("Discover By:Andero Gustaf \n");
                printf("Charge: +5  \n");
                printf("\n \n");
            }
            if (a == 74)
            {
                printf("\n\n");
                printf("Name : Tungsten \n");
                printf("Symbol: W\n");
                printf("Atomic Number: 74\n");
                printf("Atomic Mass: 183.840 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^4 6s^2\n");
                printf("Discover By:Fausto Eluyar \n");
                printf("Charge: +6  \n");
                printf("\n \n");
            }
            if (a == 75)
            {
                printf("\n\n");
                printf("Name : Rhenium \n");
                printf("Symbol: Re\n");
                printf("Atomic Number: 75\n");
                printf("Atomic Mass: 183.840 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^5 6s^2\n");
                printf("Discover By:Waltor Noddack \n");
                printf("Charge:+2 +4 +6 +7 \n");
                printf("\n \n");
            }
            if (a == 76)
            {
                printf("\n\n");
                printf("Name : Omium \n");
                printf("Symbol: Os\n");
                printf("Atomic Number: 76\n");
                printf("Atomic Mass: 190.230 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^f 6s^2\n");
                printf("Discover By:Smithson Tennant \n");
                printf("Charge:+3 +4 +6 +8 \n");
                printf("\n \n");
            }
            if (a == 77)
            {
                printf("\n\n");
                printf("Name : Iridium \n");
                printf("Symbol: Ir\n");
                printf("Atomic Number: 77\n");
                printf("Atomic Mass: 192.217 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^f 6s^2\n");
                printf("Discover By:Smithson Tennant \n");
                printf("Charge:+3 +4 +6 \n");
                printf("\n \n");
            }
            if (a == 78)
            {
                printf("\n\n");
                printf("Name : Platinum \n");
                printf("Symbol: Pt\n");
                printf("Atomic Number: 78\n");
                printf("Atomic Mass: 195.078 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^9 6s^1\n");
                printf("Discover By:Antanio De Ulloa \n");
                printf("Charge:+2 +4 +6 \n");
                printf("\n \n");
            }
            if (a == 79)
            {
                printf("\n\n");
                printf("Name : Gold \n");
                printf("Symbol: Au\n");
                printf("Atomic Number: 79\n");
                printf("Atomic Mass: 196.967 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^1\n");
                printf("Discover By:Johan A.Sutter \n");
                printf("Charge: +1 +2 +3 \n");
                printf("\n \n");
            }
            if (a == 80)
            {
                printf("\n\n");
                printf("Name : Mercury \n");
                printf("Symbol: Hg\n");
                printf("Atomic Number: 80\n");
                printf("Atomic Mass: 200.590 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2\n");
                printf("Discover By:Galileo \n");
                printf("Charge: +1 +2 \n");
                printf("\n \n");
            }
            if (a == 81)
            {
                printf("\n\n");
                printf("Name : Thallium \n");
                printf("Symbol: Tl\n");
                printf("Atomic Number: 81\n");
                printf("Atomic Mass: 204.383 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^1\n");
                printf("Discover By: William Crookos \n");
                printf("Charge: +1 +3 \n");
                printf("\n \n");
            }
            if (a == 82)
            {
                printf("\n\n");
                printf("Name : Lead \n");
                printf("Symbol: Pb \n");
                printf("Atomic Number: 82\n");
                printf("Atomic Mass: 207.200 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^2\n");
                printf("Discover By: Unknown \n");
                printf("Charge: +2 +4 \n");
                printf("\n \n");
            }
            if (a == 83)
            {
                printf("\n\n");
                printf("Name : Bismuth \n");
                printf("Symbol: Bi \n");
                printf("Atomic Number: 83\n");
                printf("Atomic Mass: 208.980 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^3\n");
                printf("Discover By: Claude Francois  \n");
                printf("Charge: +3 \n");
                printf("\n \n");
            }
            if (a == 84)
            {
                printf("\n\n");
                printf("Name : Polonium \n");
                printf("Symbol: Po \n");
                printf("Atomic Number: 84\n");
                printf("Atomic Mass: 209.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^4\n");
                printf("Discover By: Marie Curie  \n");
                printf("Charge: +2 +4 \n");
                printf("\n \n");
            }
            if (a == 85)
            {
                printf("\n\n");
                printf("Name : Astatine \n");
                printf("Symbol: At \n");
                printf("Atomic Number: 85\n");
                printf("Atomic Mass: 210.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^5\n");
                printf("Discover By: Emilio Segre  \n");
                printf("Charge: +5 \n");
                printf("\n \n");
            }
            if (a == 86)
            {
                printf("\n\n");
                printf("Name : Radon \n");
                printf("Symbol: Rn \n");
                printf("Atomic Number: 86\n");
                printf("Atomic Mass: 222.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6\n");
                printf("Discover By: Friedrish Ernst Dorn  \n");
                printf("Charge: 0 \n");
                printf("\n \n");
            }
            if (a == 87)
            {
                printf("\n\n");
                printf("Name : Francium \n");
                printf("Symbol: Fr \n");
                printf("Atomic Number: 87\n");
                printf("Atomic Mass: 223.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 7s^1\n");
                printf("Discover By: Marguerite perey  \n");
                printf("Charge: +1 \n");
                printf("\n \n");
            }
            if (a == 88)
            {
                printf("\n\n");
                printf("Name : Radium \n");
                printf("Symbol: Ra \n");
                printf("Atomic Number: 88\n");
                printf("Atomic Mass: 226.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 7s^2\n");
                printf("Discover By: Marie Curie \n");
                printf("Charge: +2 \n");
                printf("\n \n");
            }
            if (a == 89)
            {
                printf("\n\n");
                printf("Name : Actinium \n");
                printf("Symbol: Ac \n");
                printf("Atomic Number: 89\n");
                printf("Atomic Mass: 227.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 7s^3\n");
                printf("Discover By: Andrie Louis \n");
                printf("Charge: +3 \n");
                printf("\n \n");
            }
            if (a == 90)
            {
                printf("\n\n");
                printf("Name : Thorium \n");
                printf("Symbol: Th \n");
                printf("Atomic Number: 90\n");
                printf("Atomic Mass: 232.038 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^2 7s^2\n");
                printf("Discover By: Jons Jacob Berzolius \n");
                printf("Charge: +4 \n");
                printf("\n \n");
            }
            if (a == 91)
            {
                printf("\n\n");
                printf("Name : Protactinium \n");
                printf("Symbol: Pa \n");
                printf("Atomic Number: 91\n");
                printf("Atomic Mass: 231.036 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: Kazimiery Frajans \n");
                printf("Charge: +5 \n");
                printf("\n \n");
            }
            if (a == 92)
            {
                printf("\n\n");
                printf("Name : Uranium \n");
                printf("Symbol: U \n");
                printf("Atomic Number: 92\n");
                printf("Atomic Mass: 238.029 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: Martin Heinrich Klaproth \n");
                printf("Charge: +3 +4 +6 \n");
                printf("\n \n");
            }
            if (a == 93)
            {
                printf("\n\n");
                printf("Name : Neptunium \n");
                printf("Symbol: Np \n");
                printf("Atomic Number: 93\n");
                printf("Atomic Mass: 237.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: Edwin McMillan \n");
                printf("Charge: +3 +4 +5 +6 +7\n");
                printf("\n \n");
            }
            if (a == 94)
            {
                printf("\n\n");
                printf("Name : Plutonium \n");
                printf("Symbol: Pu \n");
                printf("Atomic Number: 94\n");
                printf("Atomic Mass: 244.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: EdwinGlenn T.Sedbory \n");
                printf("Charge: +3  +5 +6 \n");
                printf("\n \n");
            }
            if (a == 95)
            {
                printf("\n\n");
                printf("Name : Amoricium \n");
                printf("Symbol: Am \n");
                printf("Atomic Number: 95\n");
                printf("Atomic Mass: 243.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: Glenn T.Sedbory \n");
                printf("Charge:+2 +3 +4 +5 +6 +7\n");
                printf("\n \n");
            }
            if (a == 96)
            {
                printf("\n\n");
                printf("Name : Curium \n");
                printf("Symbol: Cm \n");
                printf("Atomic Number: 96\n");
                printf("Atomic Mass: 247.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: Glenn T.Sedbory \n");
                printf("Charge:+3 \n");
                printf("\n \n");
            }
            if (a == 97)
            {
                printf("\n\n");
                printf("Name : Borkolium \n");
                printf("Symbol: Bk \n");
                printf("Atomic Number: 97\n");
                printf("Atomic Mass: 247.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^9 6s^2 6p^6 7s^2\n");
                printf("Discover By: Glenn T.Sedbory \n");
                printf("Charge:+3 +4\n");
                printf("\n \n");
            }
            if (a == 98)
            {
                printf("\n\n");
                printf("Name : Californium \n");
                printf("Symbol: Cf \n");
                printf("Atomic Number: 98\n");
                printf("Atomic Mass: 251.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^10 6s^2 6p^6 7s^2\n");
                printf("Discover By: Albert Ghiorso \n");
                printf("Charge:+3 \n");
                printf("\n \n");
            }
            if (a == 99)
            {
                printf("\n\n");
                printf("Name : Einsteinium \n");
                printf("Symbol: Es \n");
                printf("Atomic Number: 99\n");
                printf("Atomic Mass: 252.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^11 6s^2 6p^6 7s^2\n");
                printf("Discover By: Albert Ghiorso \n");
                printf("Charge: +2 +3 \n");
                printf("\n \n");
            }
            if (a == 100)
            {
                printf("\n\n");
                printf("Name : Fermium \n");
                printf("Symbol: Fm \n");
                printf("Atomic Number: 100\n");
                printf("Atomic Mass: 257.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^12 6s^2 6p^6 7s^2\n");
                printf("Discover By: Glenn T.Sedbory \n");
                printf("Charge:  +3 \n");
                printf("\n \n");
            }
            if (a == 101)
            {
                printf("\n\n");
                printf("Name : Mendelevium \n");
                printf("Symbol: Md \n");
                printf("Atomic Number: 101\n");
                printf("Atomic Mass: 258.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^13 6s^2 6p^6 7s^2\n");
                printf("Discover By: Glenn T.Sedbory \n");
                printf("Charge: +2 +3 \n");
                printf("\n \n");
            }
            if (a == 102)
            {
                printf("\n\n");
                printf("Name : Nobelium \n");
                printf("Symbol: No \n");
                printf("Atomic Number: 102\n");
                printf("Atomic Mass: 259.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 7s^2\n");
                printf("Discover By: Joint Institute For Nudear Research \n");
                printf("Charge: +2 +3 \n");
                printf("\n \n");
            }
            if (a == 103)
            {
                printf("\n\n");
                printf("Name : Lawrencium \n");
                printf("Symbol: Lr \n");
                printf("Atomic Number: 103\n");
                printf("Atomic Mass: 262.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 7s^2 7p^1\n");
                printf("Discover By: Joint Institute For Nuclear Research \n");
                printf("Charge:  +3 \n");
                printf("\n \n");
            }
            if (a == 104)
            {
                printf("\n\n");
                printf("Name : RutherFordium \n");
                printf("Symbol: Rf \n");
                printf("Atomic Number: 104\n");
                printf("Atomic Mass: 262.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^2 7s^2\n");
                printf("Discover By: Albert Ghiorso \n");
                printf("Charge:  +3 +4\n");
                printf("\n \n");
            }
            if (a == 105)
            {
                printf("\n\n");
                printf("Name : Ubnium \n");
                printf("Symbol: Db \n");
                printf("Atomic Number: 105\n");
                printf("Atomic Mass: 262.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^3 7s^2\n");
                printf("Discover By: Albert Ghiorso \n");
                printf("Charge:  +3 +4 +5\n");
                printf("\n \n");
            }
            if (a == 106)
            {
                printf("\n\n");
                printf("Name : Seaborgium \n");
                printf("Symbol: Sg \n");
                printf("Atomic Number: 106\n");
                printf("Atomic Mass: 266.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^3 7s^2\n");
                printf("Discover By: Albert Ghiorso \n");
                printf("Charge: 0 +3 +4 +5 +6\n");
                printf("\n \n");
            }
            if (a == 107)
            {
                printf("\n\n");
                printf("Name : Bohrium \n");
                printf("Symbol: Bh \n");
                printf("Atomic Number: 107\n");
                printf("Atomic Mass: 264.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^5 7s^2\n");
                printf("Discover By: Peter Armbruster \n");
                printf("Charge:  +3 +4 +5 +7\n");
                printf("\n \n");
            }
            if (a == 108)
            {
                printf("\n\n");
                printf("Name : Hassium \n");
                printf("Symbol: Hs \n");
                printf("Atomic Number: 108\n");
                printf("Atomic Mass: 277.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^6 7s^2\n");
                printf("Discover By: Peter Armbruster \n");
                printf("Charge: +2 +3 +4 +5 +6 +8\n");
                printf("\n \n");
            }
            if (a == 109)
            {
                printf("\n\n");
                printf("Name : Meitnerium \n");
                printf("Symbol: Mt \n");
                printf("Atomic Number: 109\n");
                printf("Atomic Mass: 268.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^7 7s^2\n");
                printf("Discover By: Peter Armbruster \n");
                printf("Charge: +1 +3  +6 \n");
                printf("\n \n");
            }
            if (a == 110)
            {
                printf("\n\n");
                printf("Name : Darmstadtium \n");
                printf("Symbol: Ds \n");
                printf("Atomic Number: 110\n");
                printf("Atomic Mass: 281.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^8 7s^2\n");
                printf("Discover By: Sigurd Hofmann \n");
                printf("Charge: 0 +2 +4  +6 +8\n");
                printf("\n \n");
            }
            if (a == 111)
            {
                printf("\n\n");
                printf("Name : Roentgenium \n");
                printf("Symbol: Rg \n");
                printf("Atomic Number: 111\n");
                printf("Atomic Mass: 282.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^9 7s^2\n");
                printf("Discover By: Siguard Hofmann \n");
                printf("Charge:  +9\n");
                printf("\n \n");
            }
            if (a == 112)
            {
                printf("\n\n");
                printf("Name : Copernicium \n");
                printf("Symbol: Cn \n");
                printf("Atomic Number: 112\n");
                printf("Atomic Mass: 285.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2\n");
                printf("Discover By: Victor Ninov \n");
                printf("Charge:  0\n");
                printf("\n \n");
            }
            if (a == 113)
            {
                printf("\n\n");
                printf("Name : Nihonium \n");
                printf("Symbol: Nh \n");
                printf("Atomic Number: 113\n");
                printf("Atomic Mass: 285.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^1\n");
                printf("Discover By: Rikon \n");
                printf("Charge:  +1 +3\n");
                printf("\n \n");
            }
            if (a == 114)
            {
                printf("\n\n");
                printf("Name : Florovium \n");
                printf("Symbol: Fl \n");
                printf("Atomic Number: 114\n");
                printf("Atomic Mass: 289.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^2\n");
                printf("Discover By: Siguard Hafmann \n");
                printf("Charge: 0 +1 +2 +4 +6\n");
                printf("\n \n");
            }
            if (a == 115)
            {
                printf("\n\n");
                printf("Name : Mascovium \n");
                printf("Symbol: Mc \n");
                printf("Atomic Number: 115\n");
                printf("Atomic Mass: 289.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^3\n");
                printf("Discover By: joint institute For Nuclear Research \n");
                printf("Charge:  +1 \n");
                printf("\n \n");
            }
            if (a == 116)
            {
                printf("\n\n");
                printf("Name : Livermorium \n");
                printf("Symbol: Lv \n");
                printf("Atomic Number: 116\n");
                printf("Atomic Mass: 293.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^4\n");
                printf("Discover By: joint Institute For Nuclear Research \n");
                printf("Charge:  +2 +4 \n");
                printf("\n \n");
            }
            if (a == 117)
            {
                printf("\n\n");
                printf("Name : Tennessine \n");
                printf("Symbol: Ts \n");
                printf("Atomic Number: 117\n");
                printf("Atomic Mass: 293.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^5\n");
                printf("Discover By: Yuri Oganessian \n");
                printf("Charge: +1 +3 +5 -1 \n");
                printf("\n \n");
            }
            if (a == 118)
            {
                printf("\n\n");
                printf("Name : Oganesson \n");
                printf("Symbol: Og \n");
                printf("Atomic Number: 118\n");
                printf("Atomic Mass: 294.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^6\n");
                printf("Discover By: Yuri Oganessian \n");
                printf("Charge:0 +1 +2 +4 +6 -1 \n");
                printf("\n \n");
            }
                else
                {
                    printf("Element information for atomic number %d not available.\n", a);
                }
            }
            else if (option == 2)
            {
                printf("Enter the name of the element to be searched: ");
                scanf("%s", search);

                if (strcmp(search, "Hydrogen") == 0)
                {
                    printf("\n\n");
                    printf("Name: Hydrogen\n");
                    printf("Symbol: H\n");
                    printf("Atomic number: 1\n");
                    printf("Atomic Mass: 1.008\n"); 
                    printf("Electronic configuration: 1s^1\n");
                    printf("Discoverer: Henry Cavendish\n");
                    printf("Charge: +1\n");
                    printf("\n \n");
                }
                 if (strcasecmp(search, "Helium") == 0)
            {
                printf("\n\n");
                printf("Name :Helium\n");
                printf("Symbol: He\n");
                printf("Atomic number :2\n");
                printf("Atomic Mass:4.0026  \n");
                printf("Electronic configuration:1s^2\n");
                printf("Discover by:william romosay\n");
                printf("Dharge:0\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Lithium") == 0)
            {
                printf("\n\n");
                printf("Name :Lithium \n");
                printf("Symbol:Li \n");
                printf("Atomic Number :3 \n");
                printf("Atomic Mass: 6.94 \n");
                printf("Electronic Configuration:1s^2 2s^1 \n");
                printf("Discover By:Johan August \n");
                printf("Charge:+1 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Berylium") == 0)
            {
                printf("\n\n");
                printf("Name :Berylium \n");
                printf("Symbol:Be \n");
                printf("Atomic Number :4 \n");
                printf("Atomic Mass: 9.0122  \n");
                printf("Electronic Configuration:1s^2 2s^2 \n");
                printf("Discover By:Louis Nicolas \n");
                printf("Charge:+2 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Boron") == 0)
            {
                printf("\n\n");
                printf("Name :Boron \n");
                printf("Symbol:B \n");
                printf("Atomic Number :05 \n");
                printf("Atomic Mass: 10.81 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^1 \n");
                printf("Discover By:Gay Lussac \n");
                printf("Charge:+3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Carbon") == 0)
            {
                printf("\n\n");
                printf("Name :Carbon \n");
                printf("Symbol:C \n");
                printf("Atomic Number :06 \n");
                printf("Atomic Mass: 12.011 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^2 \n");
                printf("Discover By:A.L. Lavoiser \n");
                printf("Charge:+4 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Nitrogen") == 0)
            {
                printf("\n\n");
                printf("Name :Nitrogen \n");
                printf("Symbol:N \n");
                printf("Atomic Number :07 \n");
                printf("Atomic Mass: 14.007 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^3 \n");
                printf("Discover By:Danial RathurFord \n");
                printf("Charge:-3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Oxygen") == 0)
            {
                printf("\n\n");
                printf("Name :Oxygen \n");
                printf("Symbol:O \n");
                printf("Atomic Number :08 \n");
                printf("Atomic Mass: 15.999 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^4 \n");
                printf("Discover By:Joseph Priostly \n");
                printf("Charge:-2 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Flourine") == 0)
            {
                printf("\n\n");
                printf("Name :Fluorine \n");
                printf("Symbol:F \n");
                printf("Atomic Number :09 \n");
                printf("Atomic Mass: 18.998 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^5 \n");
                printf("Discover By:Henry Moissan \n");
                printf("Charge:-1 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Neon") == 0)
            {
                printf("\n\n");
                printf("Name :Neon \n");
                printf("Symbol:Ne \n");
                printf("Atomic Number :10 \n");
                printf("Atomic Mass: 20.180 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 \n");
                printf("Discover By:William Ramsey \n");
                printf("Charge:0 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Sodium") == 0)
            {
                printf("\n\n");
                printf("Name :Sodium \n");
                printf("Symbol:Na \n");
                printf("Atomic Number :11 \n");
                printf("Atomic Mass: 22.990 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^1 \n");
                printf("Discover By: Humpry \n");
                printf("Charge:+1 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Magnesium") == 0)
            {
                printf("\n\n");
                printf("Name :Magnesium \n");
                printf("Symbol:Mg \n");
                printf("Atomic Number :12 \n");
                printf("Atomic Mass: 24.305 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 \n");
                printf("Discover By: Humpry \n");
                printf("Charge:+2 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Aluminium") == 0)
            {
                printf("\n\n");
                printf("Name :Aluminium \n");
                printf("Symbol:Al \n");
                printf("Atomic Number :13 \n");
                printf("Atomic Mass: 26.982 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^1 \n");
                printf("Discover By: Hans Christion \n");
                printf("Charge:+3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Silicon") == 0)
            {
                printf("\n\n");
                printf("Name :Silicon \n");
                printf("Symbol:Si \n");
                printf("Atomic Number :14 \n");
                printf("Atomic Mass:28.085  \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^2 \n");
                printf("Discover By:Anboine Lavoiser  \n");
                printf("Charge:+4 -4 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Phosphorous") == 0)
            {
                printf("\n\n");
                printf("Name :Phosphorous \n");
                printf("Symbol:P \n");
                printf("Atomic Number :15 \n");
                printf("Atomic Mass: 30.974 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^3 \n");
                printf("Discover By:Henning Brand  \n");
                printf("Charge:+5 +3 -3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Sulphur") == 0)
            {
                printf("\n\n");
                printf("Name :Sulphur \n");
                printf("Symbol:S \n");
                printf("Atomic Number :16 \n");
                printf("Atomic Mass: 32.06 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^4 \n");
                printf("Discover By:Anting Lavoiser\n");
                printf("Charge: -2 +2 +4 +6\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Chlorine") == 0)
            {
                printf("\n\n");
                printf("Name :Chlorine \n");
                printf("Symbol:Cl \n");
                printf("Atomic Number :17 \n");
                printf("Atomic Mass: 35.45 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^5 \n");
                printf("Discover By:Carl Wilholm\n");
                printf("Charge: -1\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Argon") == 0)
            {
                printf("\n\n");
                printf("Name :Argon \n");
                printf("Symbol:Ar \n");
                printf("Atomic Number :18 \n");
                printf("Atomic Mass: 39.948 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^6 \n");
                printf("Discover By:Humphry Davy\n");
                printf("Charge: +1\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Potassium") == 0)
            {
                printf("\n\n");
                printf("Name :Potassium\n");
                printf("Symbol:K \n");
                printf("Atomic Number :19 \n");
                printf("Atomic Mass: 39.098 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^6 4s^1 \n");
                printf("Discover By:Humphry Davy\n");
                printf("Charge: +1\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Calcium") == 0)
            {
                printf("\n\n");
                printf("Name :Calcium\n");
                printf("Symbol:Ca \n");
                printf("Atomic Number :20 \n");
                printf("Atomic Mass: 40.078 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 \n");
                printf("Discover By:Humpry Davy\n");
                printf("Charge: +2\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Scandium") == 0)
            {
                printf("\n\n");
                printf("Name :Scandium\n");
                printf("Symbol:Sc \n");
                printf("Atomic Number :21 \n");
                printf("Atomic Mass: 44.956 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^1 \n");
                printf("Discover By:Lars Fredrik Nilson\n");
                printf("Charge: +3\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Titanium") == 0)
            {
                printf("\n\n");
                printf("Name :Titanium\n");
                printf("Symbol:Ti \n");
                printf("Atomic Number :22 \n");
                printf("Atomic Mass: 47.867 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^2 \n");
                printf("Discover By:William Gregor\n");
                printf("Charge: +3 +4\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Vanadium") == 0)
            {
                printf("\n\n");
                printf("Name : Vanadium\n");
                printf("Symbol: V\n");
                printf("Atomic Number: 23\n");
                printf("Atomic Mass: 50.942 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^3 \n");
                printf("Discover By: Andres Manual Del Rio\n");
                printf("Charge: +2 +3 +4 +5\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Chromium") == 0)
            {
                printf("\n\n");
                printf("Name : Chromium\n");
                printf("Symbol: Cr\n");
                printf("Atomic Number: 24\n");
                printf("Atomic Mass: 51.996 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^5 \n");
                printf("Discover By: Louis Nicolas Vauquelin\n");
                printf("Charge: +2 +3 +6\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Manganese") == 0)
            {
                printf("\n\n");
                printf("Name : Manganese\n");
                printf("Symbol: Mn\n");
                printf("Atomic Number: 25\n");
                printf("Atomic Mass: 54.938 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^5 \n");
                printf("Discover By: Carl Wilholm Schoole\n");
                printf("Charge: +2 +4 +7\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Iron") == 0)
            {
                printf("\n\n");
                printf("Name : Iron\n");
                printf("Symbol: Fe\n");
                printf("Atomic Number: 26\n");
                printf("Atomic Mass: 55.845 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^6 \n");
                printf("Discover By: Rene Antoine\n");
                printf("Charge: +2 +3\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Cobalt") == 0)
            {
                printf("\n\n");
                printf("Name : Cobalt\n");
                printf("Symbol: Co\n");
                printf("Atomic Number: 27\n");
                printf("Atomic Mass: 58.933 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^7 \n");
                printf("Discover By: Georg Brondt\n");
                printf("Charge: +2 +3\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Nickel") == 0)
            {
                printf("\n\n");
                printf("Name : Nickel\n");
                printf("Symbol: Ni\n");
                printf("Atomic Number: 28\n");
                printf("Atomic Mass: 58.693 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^8 \n");
                printf("Discover By: Arol Fredrik \n");
                printf("Charge: +2 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Copper") == 0)
            {
                printf("\n\n");
                printf("Name : Copper\n");
                printf("Symbol: Cu\n");
                printf("Atomic Number: 29\n");
                printf("Atomic Mass: 63.546 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 \n");
                printf("Discover By: Early Mesoptamians\n");
                printf("Charge: +1 +2 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Zinc") == 0)
            {
                printf("\n\n");
                printf("Name : Zinc\n");
                printf("Symbol: Zn\n");
                printf("Atomic Number: 30\n");
                printf("Atomic Mass: 65.38 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 \n");
                printf("Discover By: Andreds Sigismund Marggraf\n");
                printf("Charge:  +2 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Gallium") == 0)
            {
                printf("\n\n");
                printf("Name : Gallium\n");
                printf("Symbol: Ge\n");
                printf("Atomic Number: 31\n");
                printf("Atomic Mass: 69.72 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 \n");
                printf("Discover By: Paul-Emi lo Lecoq De Baisba\n");
                printf("Charge:  +3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Germanium") == 0)
            {
                printf("\n\n");
                printf("Name : Germanium\n");
                printf("Symbol: Ge\n");
                printf("Atomic Number: 32\n");
                printf("Atomic Mass: 72.59 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^2 \n");
                printf("Discover By: Clomens Winkler\n");
                printf("Charge: -4 +2 +4 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Arsenic") == 0)
            {
                printf("\n\n");
                printf("Name : Arsenic\n");
                printf("Symbol: As\n");
                printf("Atomic Number: 33\n");
                printf("Atomic Mass: 74.9216 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^3 \n");
                printf("Discover By: Albertus Magnus\n");
                printf("Charge: -3 +3 +5 \n");
                printf("\n \n");
            }
            if(strcasecmp(search, "Selonium") == 0)
            {
                printf("\n\n");
                printf("Name : Selonium\n");
                printf("Symbol: Se\n");
                printf("Atomic Number: 34\n");
                printf("Atomic Mass: 78.96 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^4 \n");
                printf("Discover By: Johan Gottieb Gahn\n");
                printf("Charge: -2 +4 +6 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Bromine") == 0)
            {
                printf("\n\n");
                printf("Name : Bromine\n");
                printf("Symbol: Br\n");
                printf("Atomic Number: 35\n");
                printf("Atomic Mass: 79.904 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^5 \n");
                printf("Discover By: CArl Jacob Lowig\n");
                printf("Charge: -1 +1 +5 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Krypron") == 0)
            {
                printf("\n\n");
                printf("Name : Krypron\n");
                printf("Symbol: Kr\n");
                printf("Atomic Number: 36\n");
                printf("Atomic Mass: 83.80 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 \n");
                printf("Discover By: Marrfs Travers\n");
                printf("Charge: 0 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Rubidium") == 0)
            {
                printf("\n\n");
                printf("Name : Rubidium\n");
                printf("Symbol: Rb\n");
                printf("Atomic Number: 37\n");
                printf("Atomic Mass: 85.4678 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^1 \n");
                printf("Discover By: Robert Bunsen\n");
                printf("Charge: +1 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Strontium") == 0)
            {
                printf("\n\n");
                printf("Name : Strontium\n");
                printf("Symbol: Sr\n");
                printf("Atomic Number: 38\n");
                printf("Atomic Mass: 87.62 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^2 \n");
                printf("Discover By: Humpry Davy\n");
                printf("Charge: +2 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Yttrium") == 0)
            {
                printf("\n\n");
                printf("Name : Yttrium\n");
                printf("Symbol: Y\n");
                printf("Atomic Number: 39\n");
                printf("Atomic Mass: 88.9059 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^3 \n");
                printf("Discover By: Johan Gadolin\n");
                printf("Charge: +3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Zirconium") == 0)
            {
                printf("\n\n");
                printf("Name : Zirconium\n");
                printf("Symbol: Zr\n");
                printf("Atomic Number: 40\n");
                printf("Atomic Mass: 91.22 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^3 \n");
                printf("Discover By: Martin Heinrih Klaproth\n");
                printf("Charge: +4 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Niobium") == 0)
            {
                printf("\n\n");
                printf("Name : Niobium\n");
                printf("Symbol: Nb\n");
                printf("Atomic Number: 41\n");
                printf("Atomic Mass: 92.9064 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^1 \n");
                printf("Discover By: Charlos Hatchett\n");
                printf("Charge: +3 +5 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Mdybdenum") == 0)
            {
                printf("\n\n");
                printf("Name : Mdybdenum\n");
                printf("Symbol: Mo\n");
                printf("Atomic Number: 42\n");
                printf("Atomic Mass: 95.94 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^1 \n");
                printf("Discover By: Carl Wilhalm\n");
                printf("Charge: +3 +6 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Technetium") == 0)
            {
                printf("\n\n");
                printf("Name : Technetium\n");
                printf("Symbol: Tc\n");
                printf("Atomic Number: 43\n");
                printf("Atomic Mass: 98 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^5 5s^2 \n");
                printf("Discover By: Emilio Segre\n");
                printf("Charge: +6 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Ruthenium") == 0)
            {
                printf("\n\n");
                printf("Name : Ruthenium\n");
                printf("Symbol: Ru\n");
                printf("Atomic Number: 44\n");
                printf("Atomic Mass: 101.07 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^7 5s^1 \n");
                printf("Discover By: Karl Claus\n");
                printf("Charge: +3 +4 +8 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Rhodium") == 0)
            {
                printf("\n\n");
                printf("Name : Rhodium\n");
                printf("Symbol: Rh\n");
                printf("Atomic Number: 45\n");
                printf("Atomic Mass: 102.9055 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^8 5s^1 \n");
                printf("Discover By: William Hyde Wallaston\n");
                printf("Charge:  +4 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Polladium") == 0)
            {
                printf("\n\n");
                printf("Name : Polladium\n");
                printf("Symbol: Pd\n");
                printf("Atomic Number: 46\n");
                printf("Atomic Mass: 106.4 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10  \n");
                printf("Discover By: William Hyde Wallaston\n");
                printf("Charge: +2 +4 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Silver") == 0)
            {
                printf("\n\n");
                printf("Name : Silver\n");
                printf("Symbol: Ag\n");
                printf("Atomic Number: 47\n");
                printf("Atomic Mass: 107.868 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^1 \n");
                printf("Discover By: Ancient Greeks\n");
                printf("Charge: +1 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Cadmium") == 0)
            {
                printf("\n\n");
                printf("Name : Cadmium\n");
                printf("Symbol: Cd\n");
                printf("Atomic Number: 48\n");
                printf("Atomic Mass: 112.41 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 \n");
                printf("Discover By: Friedrich Sbromoyer\n");
                printf("Charge: +2 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Indium") == 0)
            {
                printf("\n\n");
                printf("Name : Indium\n");
                printf("Symbol: In\n");
                printf("Atomic Number: 49\n");
                printf("Atomic Mass: 114.82 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^1\n");
                printf("Discover By: Ferdinond Reich\n");
                printf("Charge: +3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Tin") == 0)
            {
                printf("\n\n");
                printf("Name : Tin \n");
                printf("Symbol: Sn\n");
                printf("Atomic Number: 50\n");
                printf("Atomic Mass: 118.69 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^2\n");
                printf("Discover By: James Smith\n");
                printf("Charge: +2 +4 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Antimony") == 0)
            {
                printf("\n\n");
                printf("Name : Antimony \n");
                printf("Symbol: Sb\n");
                printf("Atomic Number: 51\n");
                printf("Atomic Mass: 121.75 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^3\n");
                printf("Discover By: Nicolas Lemery\n");
                printf("Charge: -3 +3 +5 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Tellurium") == 0)
            {
                printf("\n\n");
                printf("Name : Tellurium \n");
                printf("Symbol: Te\n");
                printf("Atomic Number: 52\n");
                printf("Atomic Mass: 127.60 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^4\n");
                printf("Discover By: Frazn-Joseph\n");
                printf("Charge: -2 +3 +5 +6\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Iodine") == 0)
            {
                printf("\n\n");
                printf("Name : Iodine \n");
                printf("Symbol: I\n");
                printf("Atomic Number: 53\n");
                printf("Atomic Mass: 126.9045 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^5\n");
                printf("Discover By: Bernard Courtois\n");
                printf("Charge: -1\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Xenon") == 0)
            {
                printf("\n\n");
                printf("Name : Xenon \n");
                printf("Symbol: Xe\n");
                printf("Atomic Number: 54\n");
                printf("Atomic Mass: 131.30 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^6\n");
                printf("Discover By: William Ramsay\n");
                printf("Charge: 0 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Cesium") == 0)
            {
                printf("\n\n");
                printf("Name : Cesium \n");
                printf("Symbol: Cs\n");
                printf("Atomic Number: 55\n");
                printf("Atomic Mass: 132.9054 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^6 6s^1\n");
                printf("Discover By:Gustav Kirchhoff \n");
                printf("Charge: +1 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Barium") == 0)
            {
                printf("\n\n");
                printf("Name : Barium \n");
                printf("Symbol: Ba\n");
                printf("Atomic Number: 56\n");
                printf("Atomic Mass: 137.327 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^6 6s^2\n");
                printf("Discover By:Carl Wilholm Schoole \n");
                printf("Charge: +2 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Lanthanum") == 0)
            {
                printf("\n\n");
                printf("Name : Lanthanum \n");
                printf("Symbol: La\n");
                printf("Atomic Number: 57\n");
                printf("Atomic Mass: 138.906 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^6 6s^3\n");
                printf("Discover By:Carl Gustaf Mosander \n");
                printf("Charge: +3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Cerium") == 0)
            {
                printf("\n\n");
                printf("Name : Cerium \n");
                printf("Symbol: Ce\n");
                printf("Atomic Number: 58\n");
                printf("Atomic Mass: 140.116 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^1 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:John Jacob Berzolius \n");
                printf("Charge: +3 +4 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Praseodymium") == 0)
            {
                printf("\n\n");
                printf("Name : Praseodymium \n");
                printf("Symbol: Pr\n");
                printf("Atomic Number: 59\n");
                printf("Atomic Mass: 140.116 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^3 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:Carl  Auer Van \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Neodymium") == 0)
            {
                printf("\n\n");
                printf("Name : Neodymium \n");
                printf("Symbol: Nd\n");
                printf("Atomic Number: 60\n");
                printf("Atomic Mass: 144.240 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^4 5s^2 5p^6 5d^1 6s^3\n");
                printf("Discover By:Carl  Auer Van \n");
                printf("Charge: +3 +4 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Promethium") == 0)
            {
                printf("\n\n");
                printf("Name : Promethium \n");
                printf("Symbol: Pm\n");
                printf("Atomic Number: 61\n");
                printf("Atomic Mass: 145.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^ 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:Jacob A.Marinsky \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Samarium") == 0)
            {
                printf("\n\n");
                printf("Name : Samarium \n");
                printf("Symbol: Sm\n");
                printf("Atomic Number: 62\n");
                printf("Atomic Mass: 150.360 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^6 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:Paul Emilie \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Europium") == 0)
            {
                printf("\n\n");
                printf("Name : Europium \n");
                printf("Symbol: Eu\n");
                printf("Atomic Number: 63\n");
                printf("Atomic Mass: 151.946 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^7 5s^2 5p^6 6s^2\n");
                printf("Discover By:Paul Emilie Lecoq De Boisbaudran \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Dadolinium") == 0)
            {
                printf("\n\n");
                printf("Name : Dadolinium \n");
                printf("Symbol: Gd\n");
                printf("Atomic Number: 64\n");
                printf("Atomic Mass: 157.250 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^7 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:Paul Emilie Lecoq De Boisbaudran \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Terbium") == 0)
            {
                printf("\n\n");
                printf("Name : Terbium \n");
                printf("Symbol: Tb\n");
                printf("Atomic Number: 65\n");
                printf("Atomic Mass: 158.925 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^9 5s^2 5p^6 6s^2\n");
                printf("Discover By:Carl Gustaf Mosander \n");
                printf("Charge: +3 +4 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Dysprosium") == 0)
            {
                printf("\n\n");
                printf("Name : Dysprosium \n");
                printf("Symbol: Dy\n");
                printf("Atomic Number: 66\n");
                printf("Atomic Mass: 162.930 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^10 5s^2 5p^6 6s^2\n");
                printf("Discover By:Paul Emilie \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Holmium") == 0)
            {
                printf("\n\n");
                printf("Name : Holmium \n");
                printf("Symbol: Ho\n");
                printf("Atomic Number: 67\n");
                printf("Atomic Mass: 162.932 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^10 5s^2 5p^6 6s^2\n");
                printf("Discover By:Por Teodor Cleve \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Erbium") == 0)
            {
                printf("\n\n");
                printf("Name : Erbium \n");
                printf("Symbol: Er\n");
                printf("Atomic Number: 68\n");
                printf("Atomic Mass: 167.259 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^12 5s^2 5p^6 6s^2\n");
                printf("Discover By:Carl Gustaf Mosander \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Thulium") == 0)
            {
                printf("\n\n");
                printf("Name : Thulium \n");
                printf("Symbol: Tm\n");
                printf("Atomic Number: 69\n");
                printf("Atomic Mass: 168.934 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^13 5s^2 5p^6 6s^2\n");
                printf("Discover By:Per Teodor \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Ytterbium") == 0)
            {
                printf("\n\n");
                printf("Name : Ytterbium \n");
                printf("Symbol: Yb\n");
                printf("Atomic Number: 70\n");
                printf("Atomic Mass: 173.040 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 6s^2\n");
                printf("Discover By:Jean Charlos \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Lutetium") == 0)
            {
                printf("\n\n");
                printf("Name : Lutetium \n");
                printf("Symbol: Lu\n");
                printf("Atomic Number: 71\n");
                printf("Atomic Mass: 174.967 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:Carl Auor Von Wolsbach \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Halfnium") == 0)
            {
                printf("\n\n");
                printf("Name : Halfnium \n");
                printf("Symbol: Lf\n");
                printf("Atomic Number: 72\n");
                printf("Atomic Mass: 178.490 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^2 6s^2\n");
                printf("Discover By:George De Hevesy \n");
                printf("Charge: +4  \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Tantalum") == 0)
            {
                printf("\n\n");
                printf("Name : Tantalum \n");
                printf("Symbol: Ta\n");
                printf("Atomic Number: 73\n");
                printf("Atomic Mass: 180.984 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^3 6s^2\n");
                printf("Discover By:Andero Gustaf \n");
                printf("Charge: +5  \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Tungsten") == 0)
            {
                printf("\n\n");
                printf("Name : Tungsten \n");
                printf("Symbol: W\n");
                printf("Atomic Number: 74\n");
                printf("Atomic Mass: 183.840 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^4 6s^2\n");
                printf("Discover By:Fausto Eluyar \n");
                printf("Charge: +6  \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Rhenium") == 0)
            {
                printf("\n\n");
                printf("Name : Rhenium \n");
                printf("Symbol: Re\n");
                printf("Atomic Number: 75\n");
                printf("Atomic Mass: 183.840 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^5 6s^2\n");
                printf("Discover By:Waltor Noddack \n");
                printf("Charge:+2 +4 +6 +7 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Omium") == 0)
            {
                printf("\n\n");
                printf("Name : Omium \n");
                printf("Symbol: Os\n");
                printf("Atomic Number: 76\n");
                printf("Atomic Mass: 190.230 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^f 6s^2\n");
                printf("Discover By:Smithson Tennant \n");
                printf("Charge:+3 +4 +6 +8 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Iridium") == 0)
            {
                printf("\n\n");
                printf("Name : Iridium \n");
                printf("Symbol: Ir\n");
                printf("Atomic Number: 77\n");
                printf("Atomic Mass: 192.217 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^f 6s^2\n");
                printf("Discover By:Smithson Tennant \n");
                printf("Charge:+3 +4 +6 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Platinum") == 0)
            {
                printf("\n\n");
                printf("Name : Platinum \n");
                printf("Symbol: Pt\n");
                printf("Atomic Number: 78\n");
                printf("Atomic Mass: 195.078 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^9 6s^1\n");
                printf("Discover By:Antanio De Ulloa \n");
                printf("Charge:+2 +4 +6 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Gold") == 0)
            {
                printf("\n\n");
                printf("Name : Gold \n");
                printf("Symbol: Au\n");
                printf("Atomic Number: 79\n");
                printf("Atomic Mass: 196.967 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^1\n");
                printf("Discover By:Johan A.Sutter \n");
                printf("Charge: +1 +2 +3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Mercury") == 0)
            {
                printf("\n\n");
                printf("Name : Mercury \n");
                printf("Symbol: Hg\n");
                printf("Atomic Number: 80\n");
                printf("Atomic Mass: 200.590 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2\n");
                printf("Discover By:Galileo \n");
                printf("Charge: +1 +2 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Thallium") == 0)
            {
                printf("\n\n");
                printf("Name : Thallium \n");
                printf("Symbol: Tl\n");
                printf("Atomic Number: 81\n");
                printf("Atomic Mass: 204.383 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^1\n");
                printf("Discover By: William Crookos \n");
                printf("Charge: +1 +3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Lead") == 0)
            {
                printf("\n\n");
                printf("Name : Lead \n");
                printf("Symbol: Pb \n");
                printf("Atomic Number: 82\n");
                printf("Atomic Mass: 207.200 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^2\n");
                printf("Discover By: Unknown \n");
                printf("Charge: +2 +4 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Bismuth") == 0)
            {
                printf("\n\n");
                printf("Name : Bismuth \n");
                printf("Symbol: Bi \n");
                printf("Atomic Number: 83\n");
                printf("Atomic Mass: 208.980 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^3\n");
                printf("Discover By: Claude Francois  \n");
                printf("Charge: +3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Polonium") == 0)
            {
                printf("\n\n");
                printf("Name : Polonium \n");
                printf("Symbol: Po \n");
                printf("Atomic Number: 84\n");
                printf("Atomic Mass: 209.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^4\n");
                printf("Discover By: Marie Curie  \n");
                printf("Charge: +2 +4 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Astatine") == 0)
            {
                printf("\n\n");
                printf("Name : Astatine \n");
                printf("Symbol: At \n");
                printf("Atomic Number: 85\n");
                printf("Atomic Mass: 210.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^5\n");
                printf("Discover By: Emilio Segre  \n");
                printf("Charge: +5 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Radon") == 0)
            {
                printf("\n\n");
                printf("Name : Radon \n");
                printf("Symbol: Rn \n");
                printf("Atomic Number: 86\n");
                printf("Atomic Mass: 222.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6\n");
                printf("Discover By: Friedrish Ernst Dorn  \n");
                printf("Charge: 0 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Francium") == 0)
            {
                printf("\n\n");
                printf("Name : Francium \n");
                printf("Symbol: Fr \n");
                printf("Atomic Number: 87\n");
                printf("Atomic Mass: 223.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 7s^1\n");
                printf("Discover By: Marguerite perey  \n");
                printf("Charge: +1 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Radium") == 0)
            {
                printf("\n\n");
                printf("Name : Radium \n");
                printf("Symbol: Ra \n");
                printf("Atomic Number: 88\n");
                printf("Atomic Mass: 226.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 7s^2\n");
                printf("Discover By: Marie Curie \n");
                printf("Charge: +2 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Actinium") == 0)
            {
                printf("\n\n");
                printf("Name : Actinium \n");
                printf("Symbol: Ac \n");
                printf("Atomic Number: 89\n");
                printf("Atomic Mass: 227.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 7s^3\n");
                printf("Discover By: Andrie Louis \n");
                printf("Charge: +3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Thorium") == 0)
            {
                printf("\n\n");
                printf("Name : Thorium \n");
                printf("Symbol: Th \n");
                printf("Atomic Number: 90\n");
                printf("Atomic Mass: 232.038 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^2 7s^2\n");
                printf("Discover By: Jons Jacob Berzolius \n");
                printf("Charge: +4 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Protactinium") == 0)
            {
                printf("\n\n");
                printf("Name : Protactinium \n");
                printf("Symbol: Pa \n");
                printf("Atomic Number: 91\n");
                printf("Atomic Mass: 231.036 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: Kazimiery Frajans \n");
                printf("Charge: +5 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Uranium") == 0)
            {
                printf("\n\n");
                printf("Name : Uranium \n");
                printf("Symbol: U \n");
                printf("Atomic Number: 92\n");
                printf("Atomic Mass: 238.029 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: Martin Heinrich Klaproth \n");
                printf("Charge: +3 +4 +6 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Neptunium") == 0)
            {
                printf("\n\n");
                printf("Name : Neptunium \n");
                printf("Symbol: Np \n");
                printf("Atomic Number: 93\n");
                printf("Atomic Mass: 237.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: Edwin McMillan \n");
                printf("Charge: +3 +4 +5 +6 +7\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Plutonium") == 0)
            {
                printf("\n\n");
                printf("Name : Plutonium \n");
                printf("Symbol: Pu \n");
                printf("Atomic Number: 94\n");
                printf("Atomic Mass: 244.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: EdwinGlenn T.Sedbory \n");
                printf("Charge: +3  +5 +6 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Amoricium") == 0)
            {
                printf("\n\n");
                printf("Name : Amoricium \n");
                printf("Symbol: Am \n");
                printf("Atomic Number: 95\n");
                printf("Atomic Mass: 243.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: Glenn T.Sedbory \n");
                printf("Charge:+2 +3 +4 +5 +6 +7\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Curium") == 0)
            {
                printf("\n\n");
                printf("Name : Curium \n");
                printf("Symbol: Cm \n");
                printf("Atomic Number: 96\n");
                printf("Atomic Mass: 247.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: Glenn T.Sedbory \n");
                printf("Charge:+3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Borkolium") == 0)
            {
                printf("\n\n");
                printf("Name : Borkolium \n");
                printf("Symbol: Bk \n");
                printf("Atomic Number: 97\n");
                printf("Atomic Mass: 247.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^9 6s^2 6p^6 7s^2\n");
                printf("Discover By: Glenn T.Sedbory \n");
                printf("Charge:+3 +4\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Californium") == 0)
            {
                printf("\n\n");
                printf("Name : Californium \n");
                printf("Symbol: Cf \n");
                printf("Atomic Number: 98\n");
                printf("Atomic Mass: 251.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^10 6s^2 6p^6 7s^2\n");
                printf("Discover By: Albert Ghiorso \n");
                printf("Charge:+3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Einsteinium") == 0)
            {
                printf("\n\n");
                printf("Name : Einsteinium \n");
                printf("Symbol: Es \n");
                printf("Atomic Number: 99\n");
                printf("Atomic Mass: 252.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^11 6s^2 6p^6 7s^2\n");
                printf("Discover By: Albert Ghiorso \n");
                printf("Charge: +2 +3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Fermium") == 0)
            {
                printf("\n\n");
                printf("Name : Fermium \n");
                printf("Symbol: Fm \n");
                printf("Atomic Number: 100\n");
                printf("Atomic Mass: 257.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^12 6s^2 6p^6 7s^2\n");
                printf("Discover By: Glenn T.Sedbory \n");
                printf("Charge:  +3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Mendelevium") == 0)
            {
                printf("\n\n");
                printf("Name : Mendelevium \n");
                printf("Symbol: Md \n");
                printf("Atomic Number: 101\n");
                printf("Atomic Mass: 258.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^13 6s^2 6p^6 7s^2\n");
                printf("Discover By: Glenn T.Sedbory \n");
                printf("Charge: +2 +3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Nobelium") == 0)
            {
                printf("\n\n");
                printf("Name : Nobelium \n");
                printf("Symbol: No \n");
                printf("Atomic Number: 102\n");
                printf("Atomic Mass: 259.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 7s^2\n");
                printf("Discover By: Joint Institute For Nudear Research \n");
                printf("Charge: +2 +3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Lawrencium") == 0)
            {
                printf("\n\n");
                printf("Name : Lawrencium \n");
                printf("Symbol: Lr \n");
                printf("Atomic Number: 103\n");
                printf("Atomic Mass: 262.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 7s^2 7p^1\n");
                printf("Discover By: Joint Institute For Nuclear Research \n");
                printf("Charge:  +3 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "RutherFordium") == 0)
            {
                printf("\n\n");
                printf("Name : RutherFordium \n");
                printf("Symbol: Rf \n");
                printf("Atomic Number: 104\n");
                printf("Atomic Mass: 262.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^2 7s^2\n");
                printf("Discover By: Albert Ghiorso \n");
                printf("Charge:  +3 +4\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Ubnium") == 0)
            {
                printf("\n\n");
                printf("Name : Ubnium \n");
                printf("Symbol: Db \n");
                printf("Atomic Number: 105\n");
                printf("Atomic Mass: 262.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^3 7s^2\n");
                printf("Discover By: Albert Ghiorso \n");
                printf("Charge:  +3 +4 +5\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Seaborgium") == 0)
            {
                printf("\n\n");
                printf("Name : Seaborgium \n");
                printf("Symbol: Sg \n");
                printf("Atomic Number: 106\n");
                printf("Atomic Mass: 266.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^3 7s^2\n");
                printf("Discover By: Albert Ghiorso \n");
                printf("Charge: 0 +3 +4 +5 +6\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Bohrium") == 0)
            {
                printf("\n\n");
                printf("Name : Bohrium \n");
                printf("Symbol: Bh \n");
                printf("Atomic Number: 107\n");
                printf("Atomic Mass: 264.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^5 7s^2\n");
                printf("Discover By: Peter Armbruster \n");
                printf("Charge:  +3 +4 +5 +7\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Hassium") == 0)
            {
                printf("\n\n");
                printf("Name : Hassium \n");
                printf("Symbol: Hs \n");
                printf("Atomic Number: 108\n");
                printf("Atomic Mass: 277.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^6 7s^2\n");
                printf("Discover By: Peter Armbruster \n");
                printf("Charge: +2 +3 +4 +5 +6 +8\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Meitnerium") == 0)
            {
                printf("\n\n");
                printf("Name : Meitnerium \n");
                printf("Symbol: Mt \n");
                printf("Atomic Number: 109\n");
                printf("Atomic Mass: 268.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^7 7s^2\n");
                printf("Discover By: Peter Armbruster \n");
                printf("Charge: +1 +3  +6 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Darmstadtium") == 0)
            {
                printf("\n\n");
                printf("Name : Darmstadtium \n");
                printf("Symbol: Ds \n");
                printf("Atomic Number: 110\n");
                printf("Atomic Mass: 281.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^8 7s^2\n");
                printf("Discover By: Sigurd Hofmann \n");
                printf("Charge: 0 +2 +4  +6 +8\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Roentgenium") == 0)
            {
                printf("\n\n");
                printf("Name : Roentgenium \n");
                printf("Symbol: Rg \n");
                printf("Atomic Number: 111\n");
                printf("Atomic Mass: 282.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^9 7s^2\n");
                printf("Discover By: Siguard Hofmann \n");
                printf("Charge:  +9\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Copernicium") == 0)
            {
                printf("\n\n");
                printf("Name : Copernicium \n");
                printf("Symbol: Cn \n");
                printf("Atomic Number: 112\n");
                printf("Atomic Mass: 285.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2\n");
                printf("Discover By: Victor Ninov \n");
                printf("Charge:  0\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Nithonium") == 0)
            {
                printf("\n\n");
                printf("Name : Nihonium \n");
                printf("Symbol: Nh \n");
                printf("Atomic Number: 113\n");
                printf("Atomic Mass: 285.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^1\n");
                printf("Discover By: Rikon \n");
                printf("Charge:  +1 +3\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Florovium") == 0)
            {
                printf("\n\n");
                printf("Name : Florovium \n");
                printf("Symbol: Fl \n");
                printf("Atomic Number: 114\n");
                printf("Atomic Mass: 289.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^2\n");
                printf("Discover By: Siguard Hafmann \n");
                printf("Charge: 0 +1 +2 +4 +6\n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Mascovium") == 0)
            {
                printf("\n\n");
                printf("Name : Mascovium \n");
                printf("Symbol: Mc \n");
                printf("Atomic Number: 115\n");
                printf("Atomic Mass: 289.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^3\n");
                printf("Discover By: joint institute For Nuclear Research \n");
                printf("Charge:  +1 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Livermorium") == 0)
            {
                printf("\n\n");
                printf("Name : Livermorium \n");
                printf("Symbol: Lv \n");
                printf("Atomic Number: 116\n");
                printf("Atomic Mass: 293.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^4\n");
                printf("Discover By: joint Institute For Nuclear Research \n");
                printf("Charge:  +2 +4 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Tennessine") == 0)
            {
                printf("\n\n");
                printf("Name : Tennessine \n");
                printf("Symbol: Ts \n");
                printf("Atomic Number: 117\n");
                printf("Atomic Mass: 293.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^5\n");
                printf("Discover By: Yuri Oganessian \n");
                printf("Charge: +1 +3 +5 -1 \n");
                printf("\n \n");
            }
            if (strcasecmp(search, "Oganesson") == 0)
            {
                printf("\n\n");
                printf("Name : Oganesson \n");
                printf("Symbol: Og \n");
                printf("Atomic Number: 118\n");
                printf("Atomic Mass: 294.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^6\n");
                printf("Discover By: Yuri Oganessian \n");
                printf("Charge:0 +1 +2 +4 +6 -1 \n");
                printf("\n \n");
            }
                else
                {
                    printf("Element information for %s not available.\n", search);
                }
            }
            else if (option == 3)
            {
                printf("Enter the symbol of the element to be searched: ");
                scanf("%s", search);

                if (strcmp(search, "H") == 0)
                {
                    printf("\n\n");
                    printf("Name: Hydrogen\n");
                    printf("Symbol: H\n");
                    printf("Atomic number: 1\n");
                    printf("Atomic Mass: 1.008\n"); 
                    printf("Electronic configuration: 1s^1\n");
                    printf("Discoverer: Henry Cavendish\n");
                    printf("Charge: +1\n");
                    printf("\n \n");
                }
                 if (strcmp(search, "He") == 0)
            {
                printf("\n\n");
                printf("Name :Helium\n");
                printf("Symbol: He\n");
                printf("Atomic number :2\n");
                printf("Atomic Mass:4.0026  \n");
                printf("Electronic configuration:1s^2\n");
                printf("Discover by:william romosay\n");
                printf("Dharge:0\n");
                printf("\n \n");
            }
            if (strcmp(search, "Li") == 0)
            {
                printf("\n\n");
                printf("Name :Lithium \n");
                printf("Symbol:Li \n");
                printf("Atomic Number :3 \n");
                printf("Atomic Mass: 6.94 \n");
                printf("Electronic Configuration:1s^2 2s^1 \n");
                printf("Discover By:Johan August \n");
                printf("Charge:+1 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Be") == 0)
            {
                printf("\n\n");
                printf("Name :Berylium \n");
                printf("Symbol:Be \n");
                printf("Atomic Number :4 \n");
                printf("Atomic Mass: 9.0122  \n");
                printf("Electronic Configuration:1s^2 2s^2 \n");
                printf("Discover By:Louis Nicolas \n");
                printf("Charge:+2 \n");
                printf("\n \n");
            }
            if (strcmp(search, "B") == 0)
            {
                printf("\n\n");
                printf("Name :Boron \n");
                printf("Symbol:B \n");
                printf("Atomic Number :05 \n");
                printf("Atomic Mass: 10.81 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^1 \n");
                printf("Discover By:Gay Lussac \n");
                printf("Charge:+3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "C") == 0)
            {
                printf("\n\n");
                printf("Name :Carbon \n");
                printf("Symbol:C \n");
                printf("Atomic Number :06 \n");
                printf("Atomic Mass: 12.011 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^2 \n");
                printf("Discover By:A.L. Lavoiser \n");
                printf("Charge:+4 \n");
                printf("\n \n");
            }
            if (strcmp(search, "N") == 0)
            {
                printf("\n\n");
                printf("Name :Nitrogen \n");
                printf("Symbol:N \n");
                printf("Atomic Number :07 \n");
                printf("Atomic Mass: 14.007 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^3 \n");
                printf("Discover By:Danial RathurFord \n");
                printf("Charge:-3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "O") == 0)
            {
                printf("\n\n");
                printf("Name :Oxygen \n");
                printf("Symbol:O \n");
                printf("Atomic Number :08 \n");
                printf("Atomic Mass: 15.999 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^4 \n");
                printf("Discover By:Joseph Priostly \n");
                printf("Charge:-2 \n");
                printf("\n \n");
            }
            if (strcmp(search, "F") == 0)
            {
                printf("\n\n");
                printf("Name :Fluorine \n");
                printf("Symbol:F \n");
                printf("Atomic Number :09 \n");
                printf("Atomic Mass: 18.998 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^5 \n");
                printf("Discover By:Henry Moissan \n");
                printf("Charge:-1 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Ne") == 0)
            {
                printf("\n\n");
                printf("Name :Neon \n");
                printf("Symbol:Ne \n");
                printf("Atomic Number :10 \n");
                printf("Atomic Mass: 20.180 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 \n");
                printf("Discover By:William Ramsey \n");
                printf("Charge:0 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Na") == 0)
            {
                printf("\n\n");
                printf("Name :Sodium \n");
                printf("Symbol:Na \n");
                printf("Atomic Number :11 \n");
                printf("Atomic Mass: 22.990 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^1 \n");
                printf("Discover By: Humpry \n");
                printf("Charge:+1 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Mg") == 0)
            {
                printf("\n\n");
                printf("Name :Magnesium \n");
                printf("Symbol:Mg \n");
                printf("Atomic Number :12 \n");
                printf("Atomic Mass: 24.305 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 \n");
                printf("Discover By: Humpry \n");
                printf("Charge:+2 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Al") == 0)
            {
                printf("\n\n");
                printf("Name :Aluminium \n");
                printf("Symbol:Al \n");
                printf("Atomic Number :13 \n");
                printf("Atomic Mass: 26.982 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^1 \n");
                printf("Discover By: Hans Christion \n");
                printf("Charge:+3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Si") == 0)
            {
                printf("\n\n");
                printf("Name :Silicon \n");
                printf("Symbol:Si \n");
                printf("Atomic Number :14 \n");
                printf("Atomic Mass:28.085  \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^2 \n");
                printf("Discover By:Anboine Lavoiser  \n");
                printf("Charge:+4 -4 \n");
                printf("\n \n");
            }
            if (strcmp(search, "P") == 0)
            {
                printf("\n\n");
                printf("Name :Phosphorous \n");
                printf("Symbol:P \n");
                printf("Atomic Number :15 \n");
                printf("Atomic Mass: 30.974 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^3 \n");
                printf("Discover By:Henning Brand  \n");
                printf("Charge:+5 +3 -3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "S") == 0)
            {
                printf("\n\n");
                printf("Name :Sulphur \n");
                printf("Symbol:S \n");
                printf("Atomic Number :16 \n");
                printf("Atomic Mass: 32.06 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^4 \n");
                printf("Discover By:Anting Lavoiser\n");
                printf("Charge: -2 +2 +4 +6\n");
                printf("\n \n");
            }
            if (strcmp(search, "Cl") == 0)
            {
                printf("\n\n");
                printf("Name :Chlorine \n");
                printf("Symbol:Cl \n");
                printf("Atomic Number :17 \n");
                printf("Atomic Mass: 35.45 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^5 \n");
                printf("Discover By:Carl Wilholm\n");
                printf("Charge: -1\n");
                printf("\n \n");
            }
            if (strcmp(search, "Ar") == 0)
            {
                printf("\n\n");
                printf("Name :Argon \n");
                printf("Symbol:Ar \n");
                printf("Atomic Number :18 \n");
                printf("Atomic Mass: 39.948 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^6 \n");
                printf("Discover By:Humphry Davy\n");
                printf("Charge: +1\n");
                printf("\n \n");
            }
            if (strcmp(search, "K") == 0)
            {
                printf("\n\n");
                printf("Name :Potassium\n");
                printf("Symbol:K \n");
                printf("Atomic Number :19 \n");
                printf("Atomic Mass: 39.098 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^6 4s^1 \n");
                printf("Discover By:Humphry Davy\n");
                printf("Charge: +1\n");
                printf("\n \n");
            }
            if (strcmp(search, "Ca") == 0)
            {
                printf("\n\n");
                printf("Name :Calcium\n");
                printf("Symbol:Ca \n");
                printf("Atomic Number :20 \n");
                printf("Atomic Mass: 40.078 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 \n");
                printf("Discover By:Humpry Davy\n");
                printf("Charge: +2\n");
                printf("\n \n");
            }
            if (strcmp(search, "Sc") == 0)
            {
                printf("\n\n");
                printf("Name :Scandium\n");
                printf("Symbol:Sc \n");
                printf("Atomic Number :21 \n");
                printf("Atomic Mass: 44.956 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^1 \n");
                printf("Discover By:Lars Fredrik Nilson\n");
                printf("Charge: +3\n");
                printf("\n \n");
            }
            if (strcmp(search, "Ti") == 0)
            {
                printf("\n\n");
                printf("Name :Titanium\n");
                printf("Symbol:Ti \n");
                printf("Atomic Number :22 \n");
                printf("Atomic Mass: 47.867 \n");
                printf("Electronic Configuration:1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^2 \n");
                printf("Discover By:William Gregor\n");
                printf("Charge: +3 +4\n");
                printf("\n \n");
            }
            if (strcmp(search, "V") == 0)
            {
                printf("\n\n");
                printf("Name : Vanadium\n");
                printf("Symbol: V\n");
                printf("Atomic Number: 23\n");
                printf("Atomic Mass: 50.942 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^3 \n");
                printf("Discover By: Andres Manual Del Rio\n");
                printf("Charge: +2 +3 +4 +5\n");
                printf("\n \n");
            }
            if (strcmp(search, "Cr") == 0)
            {
                printf("\n\n");
                printf("Name : Chromium\n");
                printf("Symbol: Cr\n");
                printf("Atomic Number: 24\n");
                printf("Atomic Mass: 51.996 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^5 \n");
                printf("Discover By: Louis Nicolas Vauquelin\n");
                printf("Charge: +2 +3 +6\n");
                printf("\n \n");
            }
            if (strcmp(search, "Mn") == 0)
            {
                printf("\n\n");
                printf("Name : Manganese\n");
                printf("Symbol: Mn\n");
                printf("Atomic Number: 25\n");
                printf("Atomic Mass: 54.938 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^5 \n");
                printf("Discover By: Carl Wilholm Schoole\n");
                printf("Charge: +2 +4 +7\n");
                printf("\n \n");
            }
            if (strcmp(search, "Fe") == 0)
            {
                printf("\n\n");
                printf("Name : Iron\n");
                printf("Symbol: Fe\n");
                printf("Atomic Number: 26\n");
                printf("Atomic Mass: 55.845 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^6 \n");
                printf("Discover By: Rene Antoine\n");
                printf("Charge: +2 +3\n");
                printf("\n \n");
            }
            if (strcmp(search, "Co") == 0)
            {
                printf("\n\n");
                printf("Name : Cobalt\n");
                printf("Symbol: Co\n");
                printf("Atomic Number: 27\n");
                printf("Atomic Mass: 58.933 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^7 \n");
                printf("Discover By: Georg Brondt\n");
                printf("Charge: +2 +3\n");
                printf("\n \n");
            }
            if (strcmp(search, "Ni") == 0)
            {
                printf("\n\n");
                printf("Name : Nickel\n");
                printf("Symbol: Ni\n");
                printf("Atomic Number: 28\n");
                printf("Atomic Mass: 58.693 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^8 \n");
                printf("Discover By: Arol Fredrik \n");
                printf("Charge: +2 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Cu") == 0)
            {
                printf("\n\n");
                printf("Name : Copper\n");
                printf("Symbol: Cu\n");
                printf("Atomic Number: 29\n");
                printf("Atomic Mass: 63.546 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 \n");
                printf("Discover By: Early Mesoptamians\n");
                printf("Charge: +1 +2 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Zn") == 0)
            {
                printf("\n\n");
                printf("Name : Zinc\n");
                printf("Symbol: Zn\n");
                printf("Atomic Number: 30\n");
                printf("Atomic Mass: 65.38 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 \n");
                printf("Discover By: Andreds Sigismund Marggraf\n");
                printf("Charge:  +2 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Ge") == 0)
            {
                printf("\n\n");
                printf("Name : Gallium\n");
                printf("Symbol: Ge\n");
                printf("Atomic Number: 31\n");
                printf("Atomic Mass: 69.72 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 \n");
                printf("Discover By: Paul-Emi lo Lecoq De Baisba\n");
                printf("Charge:  +3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Ge") == 0)
            {
                printf("\n\n");
                printf("Name : Germanium\n");
                printf("Symbol: Ge\n");
                printf("Atomic Number: 32\n");
                printf("Atomic Mass: 72.59 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^2 \n");
                printf("Discover By: Clomens Winkler\n");
                printf("Charge: -4 +2 +4 \n");
                printf("\n \n");
            }
            if (strcmp(search, "As") == 0)
            {
                printf("\n\n");
                printf("Name : Arsenic\n");
                printf("Symbol: As\n");
                printf("Atomic Number: 33\n");
                printf("Atomic Mass: 74.9216 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^3 \n");
                printf("Discover By: Albertus Magnus\n");
                printf("Charge: -3 +3 +5 \n");
                printf("\n \n");
            }
            if(strcmp(search, "Se") == 0)
            {
                printf("\n\n");
                printf("Name : Selonium\n");
                printf("Symbol: Se\n");
                printf("Atomic Number: 34\n");
                printf("Atomic Mass: 78.96 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^4 \n");
                printf("Discover By: Johan Gottieb Gahn\n");
                printf("Charge: -2 +4 +6 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Br") == 0)
            {
                printf("\n\n");
                printf("Name : Bromine\n");
                printf("Symbol: Br\n");
                printf("Atomic Number: 35\n");
                printf("Atomic Mass: 79.904 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^5 \n");
                printf("Discover By: CArl Jacob Lowig\n");
                printf("Charge: -1 +1 +5 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Kr") == 0)
            {
                printf("\n\n");
                printf("Name : Krypron\n");
                printf("Symbol: Kr\n");
                printf("Atomic Number: 36\n");
                printf("Atomic Mass: 83.80 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 \n");
                printf("Discover By: Marrfs Travers\n");
                printf("Charge: 0 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Rb") == 0)
            {
                printf("\n\n");
                printf("Name : Rubidium\n");
                printf("Symbol: Rb\n");
                printf("Atomic Number: 37\n");
                printf("Atomic Mass: 85.4678 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^1 \n");
                printf("Discover By: Robert Bunsen\n");
                printf("Charge: +1 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Sr") == 0)
            {
                printf("\n\n");
                printf("Name : Strontium\n");
                printf("Symbol: Sr\n");
                printf("Atomic Number: 38\n");
                printf("Atomic Mass: 87.62 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^2 \n");
                printf("Discover By: Humpry Davy\n");
                printf("Charge: +2 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Y") == 0)
            {
                printf("\n\n");
                printf("Name : Yttrium\n");
                printf("Symbol: Y\n");
                printf("Atomic Number: 39\n");
                printf("Atomic Mass: 88.9059 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^3 \n");
                printf("Discover By: Johan Gadolin\n");
                printf("Charge: +3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Zr") == 0)
            {
                printf("\n\n");
                printf("Name : Zirconium\n");
                printf("Symbol: Zr\n");
                printf("Atomic Number: 40\n");
                printf("Atomic Mass: 91.22 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^3 \n");
                printf("Discover By: Martin Heinrih Klaproth\n");
                printf("Charge: +4 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Nb") == 0)
            {
                printf("\n\n");
                printf("Name : Niobium\n");
                printf("Symbol: Nb\n");
                printf("Atomic Number: 41\n");
                printf("Atomic Mass: 92.9064 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^1 \n");
                printf("Discover By: Charlos Hatchett\n");
                printf("Charge: +3 +5 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Mo") == 0)
            {
                printf("\n\n");
                printf("Name : Mdybdenum\n");
                printf("Symbol: Mo\n");
                printf("Atomic Number: 42\n");
                printf("Atomic Mass: 95.94 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 5s^1 \n");
                printf("Discover By: Carl Wilhalm\n");
                printf("Charge: +3 +6 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Tc") == 0)
            {
                printf("\n\n");
                printf("Name : Technetium\n");
                printf("Symbol: Tc\n");
                printf("Atomic Number: 43\n");
                printf("Atomic Mass: 98 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^5 5s^2 \n");
                printf("Discover By: Emilio Segre\n");
                printf("Charge: +6 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Ru") == 0)
            {
                printf("\n\n");
                printf("Name : Ruthenium\n");
                printf("Symbol: Ru\n");
                printf("Atomic Number: 44\n");
                printf("Atomic Mass: 101.07 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^7 5s^1 \n");
                printf("Discover By: Karl Claus\n");
                printf("Charge: +3 +4 +8 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Rh") == 0)
            {
                printf("\n\n");
                printf("Name : Rhodium\n");
                printf("Symbol: Rh\n");
                printf("Atomic Number: 45\n");
                printf("Atomic Mass: 102.9055 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^8 5s^1 \n");
                printf("Discover By: William Hyde Wallaston\n");
                printf("Charge:  +4 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Pd") == 0)
            {
                printf("\n\n");
                printf("Name : Polladium\n");
                printf("Symbol: Pd\n");
                printf("Atomic Number: 46\n");
                printf("Atomic Mass: 106.4 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10  \n");
                printf("Discover By: William Hyde Wallaston\n");
                printf("Charge: +2 +4 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Ag") == 0)
            {
                printf("\n\n");
                printf("Name : Silver\n");
                printf("Symbol: Ag\n");
                printf("Atomic Number: 47\n");
                printf("Atomic Mass: 107.868 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^1 \n");
                printf("Discover By: Ancient Greeks\n");
                printf("Charge: +1 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Cd") == 0)
            {
                printf("\n\n");
                printf("Name : Cadmium\n");
                printf("Symbol: Cd\n");
                printf("Atomic Number: 48\n");
                printf("Atomic Mass: 112.41 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 \n");
                printf("Discover By: Friedrich Sbromoyer\n");
                printf("Charge: +2 \n");
                printf("\n \n");
            }
            if (strcmp(search, "In") == 0)
            {
                printf("\n\n");
                printf("Name : Indium\n");
                printf("Symbol: In\n");
                printf("Atomic Number: 49\n");
                printf("Atomic Mass: 114.82 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^1\n");
                printf("Discover By: Ferdinond Reich\n");
                printf("Charge: +3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Sn") == 0)
            {
                printf("\n\n");
                printf("Name : Tin \n");
                printf("Symbol: Sn\n");
                printf("Atomic Number: 50\n");
                printf("Atomic Mass: 118.69 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^2\n");
                printf("Discover By: James Smith\n");
                printf("Charge: +2 +4 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Sb") == 0)
            {
                printf("\n\n");
                printf("Name : Antimony \n");
                printf("Symbol: Sb\n");
                printf("Atomic Number: 51\n");
                printf("Atomic Mass: 121.75 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^3\n");
                printf("Discover By: Nicolas Lemery\n");
                printf("Charge: -3 +3 +5 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Te") == 0)
            {
                printf("\n\n");
                printf("Name : Tellurium \n");
                printf("Symbol: Te\n");
                printf("Atomic Number: 52\n");
                printf("Atomic Mass: 127.60 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^4\n");
                printf("Discover By: Frazn-Joseph\n");
                printf("Charge: -2 +3 +5 +6\n");
                printf("\n \n");
            }
            if (strcmp(search, "I") == 0)
            {
                printf("\n\n");
                printf("Name : Iodine \n");
                printf("Symbol: I\n");
                printf("Atomic Number: 53\n");
                printf("Atomic Mass: 126.9045 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^5\n");
                printf("Discover By: Bernard Courtois\n");
                printf("Charge: -1\n");
                printf("\n \n");
            }
            if (strcmp(search, "Xe") == 0)
            {
                printf("\n\n");
                printf("Name : Xenon \n");
                printf("Symbol: Xe\n");
                printf("Atomic Number: 54\n");
                printf("Atomic Mass: 131.30 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^6\n");
                printf("Discover By: William Ramsay\n");
                printf("Charge: 0 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Cs") == 0)
            {
                printf("\n\n");
                printf("Name : Cesium \n");
                printf("Symbol: Cs\n");
                printf("Atomic Number: 55\n");
                printf("Atomic Mass: 132.9054 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^6 6s^1\n");
                printf("Discover By:Gustav Kirchhoff \n");
                printf("Charge: +1 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Ba") == 0)
            {
                printf("\n\n");
                printf("Name : Barium \n");
                printf("Symbol: Ba\n");
                printf("Atomic Number: 56\n");
                printf("Atomic Mass: 137.327 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^6 6s^2\n");
                printf("Discover By:Carl Wilholm Schoole \n");
                printf("Charge: +2 \n");
                printf("\n \n");
            }
            if (strcmp(search, "La") == 0)
            {
                printf("\n\n");
                printf("Name : Lanthanum \n");
                printf("Symbol: La\n");
                printf("Atomic Number: 57\n");
                printf("Atomic Mass: 138.906 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 5s^2 5p^6 6s^3\n");
                printf("Discover By:Carl Gustaf Mosander \n");
                printf("Charge: +3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Ce") == 0)
            {
                printf("\n\n");
                printf("Name : Cerium \n");
                printf("Symbol: Ce\n");
                printf("Atomic Number: 58\n");
                printf("Atomic Mass: 140.116 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^1 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:John Jacob Berzolius \n");
                printf("Charge: +3 +4 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Pr") == 0)
            {
                printf("\n\n");
                printf("Name : Praseodymium \n");
                printf("Symbol: Pr\n");
                printf("Atomic Number: 59\n");
                printf("Atomic Mass: 140.116 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^3 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:Carl  Auer Van \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcmp(search, "Nd") == 0)
            {
                printf("\n\n");
                printf("Name : Neodymium \n");
                printf("Symbol: Nd\n");
                printf("Atomic Number: 60\n");
                printf("Atomic Mass: 144.240 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^4 5s^2 5p^6 5d^1 6s^3\n");
                printf("Discover By:Carl  Auer Van \n");
                printf("Charge: +3 +4 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Pm") == 0)
            {
                printf("\n\n");
                printf("Name : Promethium \n");
                printf("Symbol: Pm\n");
                printf("Atomic Number: 61\n");
                printf("Atomic Mass: 145.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^ 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:Jacob A.Marinsky \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcmp(search, "Sm") == 0)
            {
                printf("\n\n");
                printf("Name : Samarium \n");
                printf("Symbol: Sm\n");
                printf("Atomic Number: 62\n");
                printf("Atomic Mass: 150.360 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^6 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:Paul Emilie \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcmp(search, "Eu") == 0)
            {
                printf("\n\n");
                printf("Name : Europium \n");
                printf("Symbol: Eu\n");
                printf("Atomic Number: 63\n");
                printf("Atomic Mass: 151.946 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^7 5s^2 5p^6 6s^2\n");
                printf("Discover By:Paul Emilie Lecoq De Boisbaudran \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcmp(search, "Gd") == 0)
            {
                printf("\n\n");
                printf("Name : Dadolinium \n");
                printf("Symbol: Gd\n");
                printf("Atomic Number: 64\n");
                printf("Atomic Mass: 157.250 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^7 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:Paul Emilie Lecoq De Boisbaudran \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcmp(search, "Tb") == 0)
            {
                printf("\n\n");
                printf("Name : Terbium \n");
                printf("Symbol: Tb\n");
                printf("Atomic Number: 65\n");
                printf("Atomic Mass: 158.925 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^9 5s^2 5p^6 6s^2\n");
                printf("Discover By:Carl Gustaf Mosander \n");
                printf("Charge: +3 +4 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Dy") == 0)
            {
                printf("\n\n");
                printf("Name : Dysprosium \n");
                printf("Symbol: Dy\n");
                printf("Atomic Number: 66\n");
                printf("Atomic Mass: 162.930 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^10 5s^2 5p^6 6s^2\n");
                printf("Discover By:Paul Emilie \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcmp(search, "Ho") == 0)
            {
                printf("\n\n");
                printf("Name : Holmium \n");
                printf("Symbol: Ho\n");
                printf("Atomic Number: 67\n");
                printf("Atomic Mass: 162.932 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^10 5s^2 5p^6 6s^2\n");
                printf("Discover By:Por Teodor Cleve \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcmp(search, "Er") == 0)
            {
                printf("\n\n");
                printf("Name : Erbium \n");
                printf("Symbol: Er\n");
                printf("Atomic Number: 68\n");
                printf("Atomic Mass: 167.259 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^12 5s^2 5p^6 6s^2\n");
                printf("Discover By:Carl Gustaf Mosander \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcmp(search, "Tm") == 0)
            {
                printf("\n\n");
                printf("Name : Thulium \n");
                printf("Symbol: Tm\n");
                printf("Atomic Number: 69\n");
                printf("Atomic Mass: 168.934 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^13 5s^2 5p^6 6s^2\n");
                printf("Discover By:Per Teodor \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcmp(search, "Yb") == 0)
            {
                printf("\n\n");
                printf("Name : Ytterbium \n");
                printf("Symbol: Yb\n");
                printf("Atomic Number: 70\n");
                printf("Atomic Mass: 173.040 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 6s^2\n");
                printf("Discover By:Jean Charlos \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcmp(search, "Lu") == 0)
            {
                printf("\n\n");
                printf("Name : Lutetium \n");
                printf("Symbol: Lu\n");
                printf("Atomic Number: 71\n");
                printf("Atomic Mass: 174.967 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^1 6s^2\n");
                printf("Discover By:Carl Auor Von Wolsbach \n");
                printf("Charge: +3  \n");
                printf("\n \n");
            }
            if (strcmp(search, "Lf") == 0)
            {
                printf("\n\n");
                printf("Name : Halfnium \n");
                printf("Symbol: Lf\n");
                printf("Atomic Number: 72\n");
                printf("Atomic Mass: 178.490 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^2 6s^2\n");
                printf("Discover By:George De Hevesy \n");
                printf("Charge: +4  \n");
                printf("\n \n");
            }
            if (strcmp(search, "Ta") == 0)
            {
                printf("\n\n");
                printf("Name : Tantalum \n");
                printf("Symbol: Ta\n");
                printf("Atomic Number: 73\n");
                printf("Atomic Mass: 180.984 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^3 6s^2\n");
                printf("Discover By:Andero Gustaf \n");
                printf("Charge: +5  \n");
                printf("\n \n");
            }
            if (strcmp(search, "W") == 0)
            {
                printf("\n\n");
                printf("Name : Tungsten \n");
                printf("Symbol: W\n");
                printf("Atomic Number: 74\n");
                printf("Atomic Mass: 183.840 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^4 6s^2\n");
                printf("Discover By:Fausto Eluyar \n");
                printf("Charge: +6  \n");
                printf("\n \n");
            }
            if (strcmp(search, "Re") == 0)
            {
                printf("\n\n");
                printf("Name : Rhenium \n");
                printf("Symbol: Re\n");
                printf("Atomic Number: 75\n");
                printf("Atomic Mass: 183.840 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^5 6s^2\n");
                printf("Discover By:Waltor Noddack \n");
                printf("Charge:+2 +4 +6 +7 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Os") == 0)
            {
                printf("\n\n");
                printf("Name : Omium \n");
                printf("Symbol: Os\n");
                printf("Atomic Number: 76\n");
                printf("Atomic Mass: 190.230 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^f 6s^2\n");
                printf("Discover By:Smithson Tennant \n");
                printf("Charge:+3 +4 +6 +8 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Ir") == 0)
            {
                printf("\n\n");
                printf("Name : Iridium \n");
                printf("Symbol: Ir\n");
                printf("Atomic Number: 77\n");
                printf("Atomic Mass: 192.217 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^f 6s^2\n");
                printf("Discover By:Smithson Tennant \n");
                printf("Charge:+3 +4 +6 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Pt") == 0)
            {
                printf("\n\n");
                printf("Name : Platinum \n");
                printf("Symbol: Pt\n");
                printf("Atomic Number: 78\n");
                printf("Atomic Mass: 195.078 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^9 6s^1\n");
                printf("Discover By:Antanio De Ulloa \n");
                printf("Charge:+2 +4 +6 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Au") == 0)
            {
                printf("\n\n");
                printf("Name : Gold \n");
                printf("Symbol: Au\n");
                printf("Atomic Number: 79\n");
                printf("Atomic Mass: 196.967 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^1\n");
                printf("Discover By:Johan A.Sutter \n");
                printf("Charge: +1 +2 +3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Hg") == 0)
            {
                printf("\n\n");
                printf("Name : Mercury \n");
                printf("Symbol: Hg\n");
                printf("Atomic Number: 80\n");
                printf("Atomic Mass: 200.590 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2\n");
                printf("Discover By:Galileo \n");
                printf("Charge: +1 +2 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Tl") == 0)
            {
                printf("\n\n");
                printf("Name : Thallium \n");
                printf("Symbol: Tl\n");
                printf("Atomic Number: 81\n");
                printf("Atomic Mass: 204.383 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^1\n");
                printf("Discover By: William Crookos \n");
                printf("Charge: +1 +3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Pb") == 0)
            {
                printf("\n\n");
                printf("Name : Lead \n");
                printf("Symbol: Pb \n");
                printf("Atomic Number: 82\n");
                printf("Atomic Mass: 207.200 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^2\n");
                printf("Discover By: Unknown \n");
                printf("Charge: +2 +4 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Bi") == 0)
            {
                printf("\n\n");
                printf("Name : Bismuth \n");
                printf("Symbol: Bi \n");
                printf("Atomic Number: 83\n");
                printf("Atomic Mass: 208.980 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^3\n");
                printf("Discover By: Claude Francois  \n");
                printf("Charge: +3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Po") == 0)
            {
                printf("\n\n");
                printf("Name : Polonium \n");
                printf("Symbol: Po \n");
                printf("Atomic Number: 84\n");
                printf("Atomic Mass: 209.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^4\n");
                printf("Discover By: Marie Curie  \n");
                printf("Charge: +2 +4 \n");
                printf("\n \n");
            }
            if (strcmp(search, "At") == 0)
            {
                printf("\n\n");
                printf("Name : Astatine \n");
                printf("Symbol: At \n");
                printf("Atomic Number: 85\n");
                printf("Atomic Mass: 210.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^5\n");
                printf("Discover By: Emilio Segre  \n");
                printf("Charge: +5 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Rn") == 0)
            {
                printf("\n\n");
                printf("Name : Radon \n");
                printf("Symbol: Rn \n");
                printf("Atomic Number: 86\n");
                printf("Atomic Mass: 222.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6\n");
                printf("Discover By: Friedrish Ernst Dorn  \n");
                printf("Charge: 0 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Fr") == 0)
            {
                printf("\n\n");
                printf("Name : Francium \n");
                printf("Symbol: Fr \n");
                printf("Atomic Number: 87\n");
                printf("Atomic Mass: 223.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 7s^1\n");
                printf("Discover By: Marguerite perey  \n");
                printf("Charge: +1 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Ra") == 0)
            {
                printf("\n\n");
                printf("Name : Radium \n");
                printf("Symbol: Ra \n");
                printf("Atomic Number: 88\n");
                printf("Atomic Mass: 226.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 7s^2\n");
                printf("Discover By: Marie Curie \n");
                printf("Charge: +2 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Ac") == 0)
            {
                printf("\n\n");
                printf("Name : Actinium \n");
                printf("Symbol: Ac \n");
                printf("Atomic Number: 89\n");
                printf("Atomic Mass: 227.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 7s^3\n");
                printf("Discover By: Andrie Louis \n");
                printf("Charge: +3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Th") == 0)
            {
                printf("\n\n");
                printf("Name : Thorium \n");
                printf("Symbol: Th \n");
                printf("Atomic Number: 90\n");
                printf("Atomic Mass: 232.038 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^2 7s^2\n");
                printf("Discover By: Jons Jacob Berzolius \n");
                printf("Charge: +4 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Pa") == 0)
            {
                printf("\n\n");
                printf("Name : Protactinium \n");
                printf("Symbol: Pa \n");
                printf("Atomic Number: 91\n");
                printf("Atomic Mass: 231.036 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: Kazimiery Frajans \n");
                printf("Charge: +5 \n");
                printf("\n \n");
            }
            if (strcmp(search, "U") == 0)
            {
                printf("\n\n");
                printf("Name : Uranium \n");
                printf("Symbol: U \n");
                printf("Atomic Number: 92\n");
                printf("Atomic Mass: 238.029 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: Martin Heinrich Klaproth \n");
                printf("Charge: +3 +4 +6 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Np") == 0)
            {
                printf("\n\n");
                printf("Name : Neptunium \n");
                printf("Symbol: Np \n");
                printf("Atomic Number: 93\n");
                printf("Atomic Mass: 237.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: Edwin McMillan \n");
                printf("Charge: +3 +4 +5 +6 +7\n");
                printf("\n \n");
            }
            if (strcmp(search, "Pu") == 0)
            {
                printf("\n\n");
                printf("Name : Plutonium \n");
                printf("Symbol: Pu \n");
                printf("Atomic Number: 94\n");
                printf("Atomic Mass: 244.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: EdwinGlenn T.Sedbory \n");
                printf("Charge: +3  +5 +6 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Am") == 0)
            {
                printf("\n\n");
                printf("Name : Amoricium \n");
                printf("Symbol: Am \n");
                printf("Atomic Number: 95\n");
                printf("Atomic Mass: 243.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: Glenn T.Sedbory \n");
                printf("Charge:+2 +3 +4 +5 +6 +7\n");
                printf("\n \n");
            }
            if (strcmp(search, "Cm") == 0)
            {
                printf("\n\n");
                printf("Name : Curium \n");
                printf("Symbol: Cm \n");
                printf("Atomic Number: 96\n");
                printf("Atomic Mass: 247.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 6s^2 6p^6 6d^1 7s^2\n");
                printf("Discover By: Glenn T.Sedbory \n");
                printf("Charge:+3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Bk") == 0)
            {
                printf("\n\n");
                printf("Name : Borkolium \n");
                printf("Symbol: Bk \n");
                printf("Atomic Number: 97\n");
                printf("Atomic Mass: 247.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^9 6s^2 6p^6 7s^2\n");
                printf("Discover By: Glenn T.Sedbory \n");
                printf("Charge:+3 +4\n");
                printf("\n \n");
            }
            if (strcmp(search, "Cf") == 0)
            {
                printf("\n\n");
                printf("Name : Californium \n");
                printf("Symbol: Cf \n");
                printf("Atomic Number: 98\n");
                printf("Atomic Mass: 251.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^10 6s^2 6p^6 7s^2\n");
                printf("Discover By: Albert Ghiorso \n");
                printf("Charge:+3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Es") == 0)
            {
                printf("\n\n");
                printf("Name : Einsteinium \n");
                printf("Symbol: Es \n");
                printf("Atomic Number: 99\n");
                printf("Atomic Mass: 252.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^11 6s^2 6p^6 7s^2\n");
                printf("Discover By: Albert Ghiorso \n");
                printf("Charge: +2 +3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Fm") == 0)
            {
                printf("\n\n");
                printf("Name : Fermium \n");
                printf("Symbol: Fm \n");
                printf("Atomic Number: 100\n");
                printf("Atomic Mass: 257.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^12 6s^2 6p^6 7s^2\n");
                printf("Discover By: Glenn T.Sedbory \n");
                printf("Charge:  +3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Md") == 0)
            {
                printf("\n\n");
                printf("Name : Mendelevium \n");
                printf("Symbol: Md \n");
                printf("Atomic Number: 101\n");
                printf("Atomic Mass: 258.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^13 6s^2 6p^6 7s^2\n");
                printf("Discover By: Glenn T.Sedbory \n");
                printf("Charge: +2 +3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "No") == 0)
            {
                printf("\n\n");
                printf("Name : Nobelium \n");
                printf("Symbol: No \n");
                printf("Atomic Number: 102\n");
                printf("Atomic Mass: 259.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 7s^2\n");
                printf("Discover By: Joint Institute For Nudear Research \n");
                printf("Charge: +2 +3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Lr") == 0)
            {
                printf("\n\n");
                printf("Name : Lawrencium \n");
                printf("Symbol: Lr \n");
                printf("Atomic Number: 103\n");
                printf("Atomic Mass: 262.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 7s^2 7p^1\n");
                printf("Discover By: Joint Institute For Nuclear Research \n");
                printf("Charge:  +3 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Rf") == 0)
            {
                printf("\n\n");
                printf("Name : RutherFordium \n");
                printf("Symbol: Rf \n");
                printf("Atomic Number: 104\n");
                printf("Atomic Mass: 262.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^2 7s^2\n");
                printf("Discover By: Albert Ghiorso \n");
                printf("Charge:  +3 +4\n");
                printf("\n \n");
            }
            if (strcmp(search, "Db") == 0)
            {
                printf("\n\n");
                printf("Name : Ubnium \n");
                printf("Symbol: Db \n");
                printf("Atomic Number: 105\n");
                printf("Atomic Mass: 262.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^3 7s^2\n");
                printf("Discover By: Albert Ghiorso \n");
                printf("Charge:  +3 +4 +5\n");
                printf("\n \n");
            }
            if (strcmp(search, "Sg") == 0)
            {
                printf("\n\n");
                printf("Name : Seaborgium \n");
                printf("Symbol: Sg \n");
                printf("Atomic Number: 106\n");
                printf("Atomic Mass: 266.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^3 7s^2\n");
                printf("Discover By: Albert Ghiorso \n");
                printf("Charge: 0 +3 +4 +5 +6\n");
                printf("\n \n");
            }
            if (strcmp(search, "Bh") == 0)
            {
                printf("\n\n");
                printf("Name : Bohrium \n");
                printf("Symbol: Bh \n");
                printf("Atomic Number: 107\n");
                printf("Atomic Mass: 264.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^5 7s^2\n");
                printf("Discover By: Peter Armbruster \n");
                printf("Charge:  +3 +4 +5 +7\n");
                printf("\n \n");
            }
            if (strcmp(search, "Hs") == 0)
            {
                printf("\n\n");
                printf("Name : Hassium \n");
                printf("Symbol: Hs \n");
                printf("Atomic Number: 108\n");
                printf("Atomic Mass: 277.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^6 7s^2\n");
                printf("Discover By: Peter Armbruster \n");
                printf("Charge: +2 +3 +4 +5 +6 +8\n");
                printf("\n \n");
            }
            if (strcmp(search, "Mt") == 0)
            {
                printf("\n\n");
                printf("Name : Meitnerium \n");
                printf("Symbol: Mt \n");
                printf("Atomic Number: 109\n");
                printf("Atomic Mass: 268.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^7 7s^2\n");
                printf("Discover By: Peter Armbruster \n");
                printf("Charge: +1 +3  +6 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Ds") == 0)
            {
                printf("\n\n");
                printf("Name : Darmstadtium \n");
                printf("Symbol: Ds \n");
                printf("Atomic Number: 110\n");
                printf("Atomic Mass: 281.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^8 7s^2\n");
                printf("Discover By: Sigurd Hofmann \n");
                printf("Charge: 0 +2 +4  +6 +8\n");
                printf("\n \n");
            }
            if (strcmp(search, "Rg") == 0)
            {
                printf("\n\n");
                printf("Name : Roentgenium \n");
                printf("Symbol: Rg \n");
                printf("Atomic Number: 111\n");
                printf("Atomic Mass: 282.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^9 7s^2\n");
                printf("Discover By: Siguard Hofmann \n");
                printf("Charge:  +9\n");
                printf("\n \n");
            }
            if (strcmp(search, "Cn") == 0)
            {
                printf("\n\n");
                printf("Name : Copernicium \n");
                printf("Symbol: Cn \n");
                printf("Atomic Number: 112\n");
                printf("Atomic Mass: 285.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2\n");
                printf("Discover By: Victor Ninov \n");
                printf("Charge:  0\n");
                printf("\n \n");
            }
            if (strcmp(search, "Nh") == 0)
            {
                printf("\n\n");
                printf("Name : Nihonium \n");
                printf("Symbol: Nh \n");
                printf("Atomic Number: 113\n");
                printf("Atomic Mass: 285.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^1\n");
                printf("Discover By: Rikon \n");
                printf("Charge:  +1 +3\n");
                printf("\n \n");
            }
            if (strcmp(search, "Fl") == 0)
            {
                printf("\n\n");
                printf("Name : Florovium \n");
                printf("Symbol: Fl \n");
                printf("Atomic Number: 114\n");
                printf("Atomic Mass: 289.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^2\n");
                printf("Discover By: Siguard Hafmann \n");
                printf("Charge: 0 +1 +2 +4 +6\n");
                printf("\n \n");
            }
            if (strcmp(search, "Mc") == 0)
            {
                printf("\n\n");
                printf("Name : Mascovium \n");
                printf("Symbol: Mc \n");
                printf("Atomic Number: 115\n");
                printf("Atomic Mass: 289.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^3\n");
                printf("Discover By: joint institute For Nuclear Research \n");
                printf("Charge:  +1 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Lv") == 0)
            {
                printf("\n\n");
                printf("Name : Livermorium \n");
                printf("Symbol: Lv \n");
                printf("Atomic Number: 116\n");
                printf("Atomic Mass: 293.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^4\n");
                printf("Discover By: joint Institute For Nuclear Research \n");
                printf("Charge:  +2 +4 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Ts") == 0)
            {
                printf("\n\n");
                printf("Name : Tennessine \n");
                printf("Symbol: Ts \n");
                printf("Atomic Number: 117\n");
                printf("Atomic Mass: 293.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^5\n");
                printf("Discover By: Yuri Oganessian \n");
                printf("Charge: +1 +3 +5 -1 \n");
                printf("\n \n");
            }
            if (strcmp(search, "Og") == 0)
            {
                printf("\n\n");
                printf("Name : Oganesson \n");
                printf("Symbol: Og \n");
                printf("Atomic Number: 118\n");
                printf("Atomic Mass: 294.000 \n");
                printf("Electronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4s^2 4p^6 4d^10 4f^14 5s^2 5p^6 5d^10 5f^14 6s^2 6p^6 6d^10 7s^2 7p^6\n");
                printf("Discover By: Yuri Oganessian \n");
                printf("Charge:0 +1 +2 +4 +6 -1 \n");
                printf("\n \n");
            }
                else
                {
                    printf("Element information for %s not available.\n", search);
                }
            }
            else
            {
                printf("Invalid option.\n");
            }
        }
        else if (n == 2)
        {
            printf("The periodic table has closed.\n");
            break;
        }
        else
        {
            printf("Invalid option.\n");
        }
    }

    return 0;
}
