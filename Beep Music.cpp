#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <string>
#include <ctime>
#include <algorithm>
#include <windows.h>

using namespace std;
int main()
{
Beep(587,400); // D5 Quarter 1st Note
Beep(494,200); // B4 Eighth
Beep(392,200); // G4 Eighth
Beep(330,200); // E4 Eighth
Beep(587,200); // D5 Eighth
Beep(494,200); // B4 Eighth
Beep(392,200); // G4 Eighth 7th Note

Beep(494,400); // B4 Quarter 8th Note
Beep(330,400); // G4 Quarter
Beep(494,600); // B4 Quarter + 1/2 of Half
Beep(440,200); // A4 Eighth 11th Note

Beep(392,200); // G4 Eighth (Long) 12th Note
Beep(392,100); // G4 Sixteenth (Short)
Beep(440,100); // A4 Sixteenth (Short)
Beep(392,400); // G4 Quarter (Alone)
Beep(349,200); // F4 Eighth (Long)
Beep(392,400); // G4 Quarter
Beep(349,200); // F4 Eighth 18th Note

Beep(392,200); // G4 Eighth (Long) 19th Note
Beep(392,100); // G4 Sixteenth (Short)
Beep(494,100); // B4 Sixteenth (Short)
Beep(587,400); // D5 Quarter (Alone)
Beep(659,200); // E5 Eighth (Long)
Beep(698,200); // F5 Eighth 24th Note
Sleep(600);

Beep(587,400); // D5 Quarter 25th Note
Beep(494,200); // B4 Eighth
Beep(392,200); // G4 Eighth
Beep(330,200); // E4 Eighth
Beep(587,200); // D5 Eighth
Beep(494,200); // B4 Eighth
Beep(392,200); // G4 Eighth 31st Note

// ----------

Beep(494,400); // B4 Quarter
Beep(330,400); // G4 Quarter
Beep(494,600); // B4 Quarter + 1/2 of Half
Beep(440,200); // A4 Eighth

Beep(392,200); // G4 Eighth (Long)
Beep(392,100); // G4 Sixteenth (Short)
Beep(440,100); // A4 Sixteenth (Short)
Beep(392,400); // G4 Quarter (Alone)
Beep(349,200); // F4 Eighth (Long)
Beep(392,400); // G4 Quarter
Beep(349,200); // F4 Eighth

Beep(392,200); // G4 Eighth (Long)
Beep(392,100); // G4 Sixteenth (Short)
Beep(494,100); // B4 Sixteenth (Short)
Beep(587,400); // D5 Quarter (Alone)
Beep(659,200); // E5 Eighth (Long)
Beep(698,200); // F5 Eighth
Sleep(600);

Beep(659,400); // E5 Quarter
Beep(523,200); // C5 Eighth
Beep(440,200); // A4 Eighth
Beep(349,200); // F4 Eighth
Beep(440,200); // A4 Eighth
Beep(523,200); // C5 Eighth
Beep(659,200); // E5 Eighth

Beep(587,200); // D5 Eighth
Beep(784,200); // G5 Eighth
Beep(587,600); // D5 Quarter + 1/2 of Half
Beep(494,200); // B4 Eighth

// -----------------------------------------------------

Beep(659,400); // E5 Quarter
Beep(523,200); // C5 Eighth
Beep(440,200); // A4 Eighth
Beep(349,200); // F4 Eighth
Beep(440,200); // A4 Eighth
Beep(523,200); // C5 Eighth
Beep(659,200); // E5 Eighth

Beep(392,200); // G4 Eighth
Beep(392,100); // G4 Sixteenth
Beep(494,100); // B4 Sixteenth
Beep(587,400); // D5 Quarter
Beep(659,200); // E5 Eighth
Beep(494,800); // B4 Quarter + 1/2 of Half

Beep(659,400); // E5 Quarter
Beep(523,200); // C5 Eighth
Beep(440,200); // A4 Eighth
Beep(349,200); // F4 Eighth
Beep(440,200); // A4 Eighth
Beep(523,200); // C5 Eighth
Beep(659,200); // E5 Eighth

Beep(587,200); // D5 Eighth
Beep(784,200); // G5 Eighth
Beep(587,600); // D5 Quarter + 1/2 of Half
Beep(494,200); // B4 Eighth

Beep(392,200); // G4 Eighth (Long) 12th Note
Beep(392,100); // G4 Sixteenth (Short)
Beep(440,100); // A4 Sixteenth (Short)
Beep(392,400); // G4 Quarter (Alone)
Beep(392,200); // G4 Eighth (Long)
Beep(440,400); // A4 Quarter
Beep(392,400); // G4 Quarter

Beep(440,200); // A4 Eighth
Beep(440,100); // A4 Sixteenth
Beep(494,100); // B4 Sixteenth
Beep(523,400); // C5 Quarter
Beep(587,200); // D5 Eighth
Beep(659,200); // E5 Quarter
Beep(698,400); // F5 Quarter

return 0;
}

