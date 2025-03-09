# Dialogue-System

My goal is to create my own dialogue system for Unreal Engine. I really want to program for narrative games since I am passionate about these kinds of games. If I make a good enough then I will be able to show my capabilities in narrative programming. 

I want to make this in Unreal Engine 5 since there are already so many systems for Unity already. So the language will be in C++, for now I don't plan on using libraries or frameworks (until I find that I need them).\

For this project I want a system where you can go through dialogue, start and stop whenever you want, keep track of variables that might change based on the narrative. The main struggles will be the fact that this is in Unreal which has a lot less documentation and I have less experience in. 

At the end of the project I'll probably do a video showcase with some technical documentation to go with it.


# Current Progress
DialogueSystem (actor component):
- Variables
  - currentDialogue : UDialogue
  - dialogueWidget : Widget 

The dialogue system is the UE5 interface for implementing dialogue onto any actor in Unreal. The dialogue system is a actor component for ease of connecting dialogue.

UDialogue (cpp file):
- Variables
  - dialogue : FString[]
  - speakerName: FString
  - dialogueIndex : int
  - nameColor : FColor
- Functions
  - getNextDialogue() : FString
  - resetDialogue() : void
  - nextDialogue() : UDialogue

UDialogue is an abstract class. This makes it easier to interact with all concrete dialogue classes.
getNextDialogue() is used to get the next dialogue in the dialogue array. dialogueIndex is incremented when called. If dialogueIndex is outside the length of the array a blank string is returned.
resetDialogue() sets dialogueIndex to zero.
nextDialogue() reterns a newDialogue to update currentDialogue in DialogueSystem.

URepeatingDialogue (child class of UDialogue):
This class overrides getNextDialogue() and calls resetDialogue() when the index is outside the array.

UBranchingDialogue (child class of UDialogue):
- Variables
  - dialogueOptions : UDialogue[]
- Functions
  - chooseDialogue(int) : UDialogue

UBranchingDialogue is used for branching dialogue options.
chooseDialogue(int) takes the index of the dialogue to select, and returns that dialogue in the array (possibly override nextDialogue()?).

USequencedDialogue (child class of UDialogue):
- Variables
  - nextDialogue : UDialogue

USequencedDialogue is used to have dialogue that dirrectly follows a previous dialogue. nextDialogue() is automatically called when dialogueIndex is outside the dialogue array.

