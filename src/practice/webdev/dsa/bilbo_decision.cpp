// bilbo_decision.cpp - Gandalf aids Bilbo’s choice
#include <iostream>
using namespace std;

int main() {
    cout << "Bilbo’s Choice - Gandalf’s Spell" << endl;

    // Hobbit data (tweak as you wish, Bilbo!)
    string plan = "Meal or Stroll";
    int hungerLevel = 70;      // Hunger (0-100)
    int weatherScore = 60;     // Weather pleasantness (0-100)
    bool isTired = false;      // Weariness

    // Decision logic with if-else and logical operators
    if (hungerLevel >= 60 && weatherScore < 70 && !isTired) {
        cout << "Second breakfast calls, Bilbo! Feast for " << plan << "!" << endl;
        cout << "Hunger: " << hungerLevel << "%, Weather: " << weatherScore << "%, Tired: Nay" << endl;
    } else if (hungerLevel >= 60 && weatherScore >= 70) {
        cout << "Hunger " << hungerLevel << "% meets fine weather " << weatherScore << "%. Eat, then stroll!" << endl;
    } else if (hungerLevel < 60 && weatherScore >= 70 && !isTired) {
        cout << "Weather’s " << weatherScore << "%—stroll the Shire, hunger’s low at " << hungerLevel << "!" << endl;
    } else if (hungerLevel >= 60 && isTired) {
        cout << "Hunger’s " << hungerLevel << "%, but you’re weary. Rest, then eat!" << endl;
    } else {
        cout << "A quiet day—Hunger: " << hungerLevel << "%, Weather: " << weatherScore << "%, Tired: Aye. Nap, Bilbo!" << endl;
    }

    // Gandalf’s wisdom
    if (hungerLevel > 80 || weatherScore > 90) {
        cout << "Great need or fair skies—act swift, hobbit, ere the day fades!" << endl;
    }

    return 0;
}