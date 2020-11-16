 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\<"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# Game Inventory
 > Your author list below should include links to all members GitHub and should begin with a "\<" (remove existing author).
 
 > Authors: [Abanob Wahba](https://github.com/Abanob21),[Kirby Vong](https://github.com/Kirby-Vong), and [Nathan Lee](https://github.com/nlee096).
 
 > You will be forming a group of **THREE** students and work on an interesting project that you will propose yourself (in this `README.md` document). You can pick any project that you'd like, but it needs ot implement three design patterns. Each of the members in a group is expected to work on at least one design pattern and its test cases. You can, of course, help each other, but it needs to be clear who will be responsible for which pattern and for which general project features.
 
 > ## Expectations
 > * Incorporate **three** distinct design patterns, *two* of the design patterns need to be taught in this course:
 > * Composite, Strategy, Abstract Factory, Visitor
 > * All three design patterns need to be linked together (it can't be three distinct projects)
 > * Your project should be implemented in C/C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.

## Project Description
 > Your project description should summarize the project you are proposing. Be sure to include
 > * Why is it important or interesting to you?\
 > Game inventory to add and sort items based on their attack and defense power to help players with full inventory items.
 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 > * [toolname](link) - Short description\
 > For this project we will be using C++ as the primary language.

 > * What will be the input/output of your project?\
 > *The input will be game items such as weapons and armor stats.\
 > *The output will be sorted items based on the attack and defense and locked items, which will be at the top.

 > * What are the three design patterns you will be using. For each design pattern you must:
 > * Explain in 3 - 5 sentences why you picked this pattern and what feature you will implement with it\
 > *Abstract Factory : Using the Abstract Factory design pattern, varying collectib game objects can be easily created under the general classification of items. The user will   be able to add items to their inventory by inputting the classification (weapons, armor, etc) and the related stats, which will be stored and ready to be organized. Using an abstract factory allows the user to input a variety of items and variations of each classification while allowing them to be compared for sorting.\
 >*Strategy : Strategy uses algorithms to sort items and organize items in an order. This will show players the essential items in the order of best to worst. Using these algorithms, items with the highest attack and defense power will be on top, which will help players see them and effectively use them to win the game.\
 > *State : The State design pattern will be used in our program to lock items into a state where they will never be removed. This will be useful to the user in case they have a specific item that regardless of its properties, they want to keep. Along with this feature, should the player die, they will not lose these specific items. The implementation of this design pattern will make it easier to add these features to our program.\

 > * This description should be in enough detail that the TA/instructor can determine the complexity of the project and if it is sufficient for the team members to complete in the time allotted. 

 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `Backlog` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
 
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 > OMT Class Diagram:
 > <img src="images/Class_Diagram.pdf">
 > Class Diagram description:
 > * Interface:
 > The interface’s job is to store the vector of items while also providing a way for the user to interact with the features of the program. The user will input a number corresponding to their class so that the items they create will correspond to their class. It also holds a vector of Item pointers to keep track of all the items the user puts in or removes. It also stores a pointer to ItemOrder so that the user has access to ItemOrder through the interface. Through the interface, the user can add/remove armor and weapons, favorite and unfavorite items, and display their inventory in order of highest attack or defense. 

> * Item:
> 	The item’s within our program use the Abstract Factory design pattern by allowing the user to create items based on their specific class. The abstract Item class has a subclass system in which there are four subclasses to choose from and the item created will be based on that.The user will be able to input several numbers such as the values for the attack or defense based on the item as well as give a name to the item they are creating. Furthermore, the items that are created will be set to a default unlocked state. All items are stored as pointers in the interface class. All subclasses have functions Favorite, Unfavorite, and Display. The Favorite function changes the state to locked while the Unfavorite function changes it to unlocked. However the display function calls the display function in the State class as Display() will behave differently depending on the state of the item.

> * ItemOrder:
> 	ItemOrder uses the strategy design pattern by having subclasses that order and display the vector of items differently depending on user input. ItemOrder is an abstract parent class that has 2 subclasses HighestAttack and HighestDefence each with their own implementation of the pure virtual function called display. HighestAttack’s display will order the vector with items with higher attack to be closer to the front while highest Defense will do the same but based on the defense stat. 

> * State:
> 	Using the state design pattern will let us change how specific functions will be implemented based on the item’s state. The player will be able to control the state of the favorite and unfavorable items thereby determining which items will be locked or unlocked. The abstract class State is aggregated to Item as the subclasses of Item have a display function that will behave differently depending on the items state. Item’s display function will call either LockedState or UnlockedState’s display function depending on what Item’s currentState variable is. 
>
>
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
