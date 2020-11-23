Libcrypt Magic Word Finder PSX

A software to find the Magic word value to bypass the copy protection libcrypt for PS1 Game.

This software is for educationnal purpose only!
I'm not support piracy!

How to use:

Just put the game ID of the game in the software.
It will search on his database sectors of the game and find the value.
(Sectors files is extracted from REDUMP)

Libcrypt protection have 4 differents version: LC1, LC2, LC3 & LC4
To patch a LC2 protected game (80% of ps1 protected game) you must use CD-Mage to extract the exe file (often SLES_ID file) and patch values with hexadecimal editor:

=======================================================================

Replace this Hex value:80E1023C00388240

with this Hex value:   80E1023C00000000

=======================================================================

Replace this Hex value:080020140200E7300600E010ADFF84200400801400000000

with this Hex value:   000000000200E73000000000ADFF84200000000000000000

=======================================================================

Replace this Hex value:25308600

with this hex value:   ????C634    

???? IS THE MAGICWORD VALUE TO PATCH
  
=======================================================================

Insert the patched EXE in the game with CD-mage

Enjoy!

Red-J
