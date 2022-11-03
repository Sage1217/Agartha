#include <iostream>
using namespace std;
void startscreen(){
int charchoice;
int confirm;
int endgame = 1;
int option;
int choice;
bool gameOn = true;
while (gameOn != false){
cout << " ***********AGARTHA*************         " << endl;
cout << "*******************************\n";
cout << " 1 - Start the game.\n";
cout << " 2 - Story.\n";
cout << " 3 - Help.\n";
cout << " 4 - Exit.\n";
cout << " Enter your choice and press return: "; 
cin >> choice;
  
switch (choice){
case 1:
do{
  cout << "*******************************\n";
  cout << "Please choose Your character:" << endl;
  cout << "1. Shadow Demon" << endl;//Stealth
  cout << "2. Nun" << endl;//Support
  cout << "3. Reconnaissance Droid" << endl;//Physical
  cout << "4. Blood and Flesh Priest" << endl;//Support
  cout << "5. Magic Worshipping Mage" << endl;//Mage
  cout << "6. Goblin Lightning Mage" << endl;//Mage
  cout << "7. Survivalist" << endl;//Stealth
  cout << "8. Dragon Knight" << endl;//Physical
  cout << " Enter your choice and press return: ";
  cin >> charchoice;
  do{
     switch(charchoice){
    case 1:{
    cout << "Choose an option:" << endl;
      cout << "1. Motives and explanation" << endl;
      cout << "2. Abilities and Equipment" << endl;
      cout << "3. Confirm Choice" << endl;
      cout << "4. Go back to character selection" << endl;
      cin >> option;
      if (option == 1){
        cout << "A demon that serves a mysterious plain of existence known as the void" << endl;
      cout << "The void is also a living entity that feeds off the souls of living beings and matter itself" << endl;
      cout << "The void demands and sends it's servants to plung entire planets into it's realm." << endl;
      cout << "You play as one of these demons tasked by a ruler of the void, the Night Matron to corrupt the planet Thule. " << endl;
      cout << "However, this is the first time the demon has ever been tasked on such an important mission, so to test the demon's competency; the night matron has placed restrictions and obstacles that will push him to his limits. " << endl;
      cout << "Stick to the shadows and kill only those who the void deems necessary. This is how you will succeed with the character" << endl;
      }
    else if(option == 2){
    cout << "Abilities and Equipment:" << endl;
    cout << "Shadow Words: Words of power that draw energy from the void. The demon starts with knowing only one shadow word." << endl;
    cout << "Shadow Body: The shadow demon's body is part material and immaterial, which allows the demon to perform acrobatic feats like climbing on walls and ceilings. Though, since his body is still part void any light source will hurt the demon." << endl;
    cout << "Tattered Cloak: A personal item that covers the demon and gives him the protection against light sources. Also, can be sacrificed to dodge fatal damage." << endl;
    cout << "Shadow Daggers and Short Sword: Void weapons that the demon can call upon if he needs to kill a target seen or unseen. These weapons can also absorb similar types of weapons to grow stronger. Base Damage for Daggers is 10 damage for each dagger and twenty-five damage for the sword." << endl;
    cout << "Dagger in the Heart: The night matron has restricted the demon by plunging a dagger that hurts him when he angers the void by killing a living creature or entity that void has no interest in being killed. The shadow demon takes damage equal to half the total victum's health" << endl;
      }
    else if(option == 3){
     cout << "Game Start!" << endl;
     break;
     }
    else if (option == 4){
        break;
     }
      break;
    }
    case 2:{
      cout << "Choose an option:" << endl;
      cout << "1. Motives and explanation" << endl;
      cout << "2. Abilities and Equipment" << endl;
      cout << "3. Confirm Choice" << endl;
      cout << "4. Go back to character selection" << endl;
      cin >> option;
      if(option == 1){
    cout << "One of the top commanders and poltical figures of the holy kingdom that led a congregation of sisters known as the Holy Sisterhood that were an invaluable asset to the Holy Kingdom during thewars." << endl;
    cout << "During the late stages of the last war fought between the kingdoms, the nun received a vision."<< endl;
    cout << "In this vision, God showed the Nun a giant well hidden from the rest of the world"<< endl;
    cout << "God then told her to gather her followers and jump down the well to travel to a new land known as Agartha." << endl;
    cout << "After a long journey, her group found and all together jumped in the well." << endl;
   cout << "The Nun wakes up on a dirt ground and  finds she is surrounded by the dead bodies of her followers." << endl;
    cout << "The Holy Spirit then appears before her and tells her that the others have been sent to heaven to be with God but before she can go to heaven, she must travel through Agartha and pass tests of faith to prove that she doesn't have any doubts in God's wisdom." << endl;
    cout << "Remain faithful and loving towards God and share that love with others to well with this character." << endl;
      }
      else if(option == 2){
      cout << "Magic Nullification: A passive ability which allows the Nun to disspell any magic spell as long as her faith is strong enough. Which also means she can't use magic herself." << endl; 
      cout << "Nun Robes: The Nun wears her black robes that do not offer any physical or magical protection but help her keep her faith stable. She wears light chain mail underneath her robes that help her repel some damage from light attack weapons." << endl;
      cout << "Faith-bound Abilities: The Nun does not use mana but instead relies on her faith in God to battle her foes. She must keep her faith meter above fifty-percent to continue using her faith abilities." << endl;
      cout << "Ever-present Doubt: The Nun has always had some doubts about whether she is following the right path in life and now with her faith being put to the test by God, she is feeling even more anxious. Throughout her journey her faith will decrease by five-percent everytime she loses a battle." << endl;
      cout << "Cross Necklace: The Nun wears a necklace in the shape of the cross that symbolizes her connection and love for Jesus. At certain points, throughout the game the Holy Spirit will come out of the cross and give suggestions about where to go and how she can improve her faith. If the Nun follows and obeys the Holy Spirit, she recieve a twenty-five faith bonus. If she disobeys, her faith will decrease by twenty-five percent." << endl;
      cout << "Close Quarters Combat Training: The Nun also has given some light cqc training by some of the paladins, so she will have some way of protecting herself." << endl;
      }
      else if(option == 3){
        cout << "Game Start!" << endl;
        break;
      }
      else if(option == 4){
        break;
      }
      break;
    }
  case 3:{
    cout << "Choose an option:" << endl;
    cout << "1. Motives and explanation" << endl;
    cout << "2. Abilities and Equipment" << endl;
    cout << "3. Confirm Choice" << endl;
    cout << "4. Go back to character selection" << endl;
      cin >> option;
    if (option == 1){
      cout << "One of the United Space Federation's best recon droids sent to Thule to gather information about the planet's resources, creatures, and interesting features." << endl;
      cout << "The USF wants to gather information on multiple candidate planets to settle or extract raw materials from, after their home planet became inhabitable from rapid industrialization efforts that destoried their home planets ecosystem." << endl;
      cout << "The USF now travels throughout the cosmos looking for a new planet to colonize." << endl;
      cout << "One day while scanning multiple planets to see which are good candidates, the USF detected Thule." << endl;
      cout << "Thule interested the USF because their scans were picking up strange energy waves coming from the planet." << endl;
      cout << "So the USF council came up with a plan to sent one of their recon droid's equipped with tough armor and advanced gadgets to the planet's surface via drop pod." << endl;
      cout << "The only problem is that the drop pod containing the recon droid didn't land on the surface of the planet but deep underground in Agartha." << endl;
      cout << "The droid tried to contact an USF officer but there was no connection, so now the droid must travel through Agartha and get back to the surface while also scanning and overcoming obstacles" << endl;
      cout << "Defend yourself with the reconnaissance droid gadgets and scan things to gain useful information to do well with this character." << endl;
      }
    else if (option == 2){
      cout << "Head Scanner: the reconnaissance droid's head is equipped with a high tech scanner that gives the droid the ability to adapt to the new environment. Scanning enemies during combat leaves the droid vulnerable to attack." << endl;
      cout << "Arm-Mounted Arc-Mine Thrower: On the droid's right arm, he comes equipped with rotary arc-mine thrower that tosses out three types of mines that include explosive, stun, and radar. Explosive mines are used to destory organic and non-organic obstacles, they deal 75 base damage to enemies. Stun mines are used to capture threating creatures. Radar mines are used to scan the surrounding area for threats. The thrower with intially 5 of each type of mine." << endl;
      cout << "Arc-Mine Generator: While during the droid's travel phase, it can generator new mines to use in combat as long as the necessary materials are nearby. This process requires the droid know the correct materials to make each type of mine." << endl;
      cout << "Protective Shield: The recon droid also has a protective shielding that wraps around it's body. This shield protects the droid from all elemental attacks but only one element at a time, so the droid must use it's predictive AI to determine which element it needs to block." << endl;
      cout << "Steel External Body: The droid is equipped with an external body that houses a fragile internal body. This external body is made of steel and is very strong but greatly reduces the droid's speed. This external body will be lost if the droid's health reaches twenty-five percent." << endl;
      cout << "Internal Body: The fragile internal body that is exposed when the droid loses it's external which causes it to take fifthy-percent extra damage. It gains an 100 percent attack speed bonus. The droid's arc-mine thrower also is replaced with a energy blade that deals 5 base damage." << endl;
      }
    else if (option == 3){
      cout << "Game Start!" << endl;
      break;
      }
    else if (option == 4){
      break;
      }
      break;
    }
  case 4:{
    cout << "Choose an option:" << endl;
    cout << "1. Motives and explanation" << endl;
    cout << "2. Abilities and Equipment" << endl;
    cout << "3. Confirm Choice" << endl;
    cout << "4. Go back to character selection" << endl;
      cin >> option;
    if (option == 1){
      cout << "A collection of souls and flesh that was once the leader the of holy mage faction in the Wizard Kingdom." << endl;
      cout << "This amalgamation of souls and flesh was crafted by a group known as the death mages." << endl;
      cout << "The death mages sought appease their demonic master by resurrecting and controlling the soul of a disgraced high-priest of holy mages." << endl;
      cout << "This high-priest was disgraced because he failed to keep his party of high ranking mages alive during a battle with the Holy Kingdom." << endl;
      cout << "This humiliating defeat was what caused the high-priest to stripped of his rank and executed." << endl;
      cout << "After hearing word of this execution, the death mages stole the priest's body and gathered the many materials needed for the ritual." << endl;
      cout << "During the ritual, everyting was going smoothly, the death mages seemingly had all the necessary requires to revive the fallen holy mage, but something went wrong." << endl;
      cout << "They had underestimated how many souls they needed to complete the ritual, so the mage's soul was only halfway revived."<< endl;
      cout << "This caused the half complete soul to cry out in pain and start to massacare death mages." << endl;
      cout << "The death mages tried to fight back with summons and curses but were quickly overwhelmed and slaughtered mercilessly." << endl;
      cout << "Afterwards, the priest's still imcomplete soul had at least formed some sort of a body for himself using the corpses of the death mages and with his new body tried casting a spell to see if he could still use magic." << endl;
      cout << "However, when he casted the spell he felt a sharp pain course through his body and he began feel himself slipping away." << endl;
      cout << "A demon then appeared before him, laughing at the aching priest."<< endl;
      cout << "The priest enraged by demon's laughter tried to swipe at demon but the demon easily blocked the attack and kicked the priest into a wall." << endl;
      cout << "The demon then boastfully told the priest that he is now a possession of his master Satan and he is here to take the priest to hell to be endlessly tortured." << endl;
      cout << "The priest then begged the demon to find an alternative way to please his master." << endl;
      cout << "The demon then teleported the priest to an underground cavern and explained to the priest that the only way to earn his freedom is to corrupt the magical core of Agartha." << endl;
      cout << "The priest must now travel through Agartha to escape his fate as a plaything of the devil." << endl;
      cout << "Use your blood efficiently to cast protective Holy spells to do well with character." << endl;
       }
    else if (option == 2){
      
      }
    else if (option == 3){
      cout << "Game Start!" << endl;
      break;
      }
    else if (option == 4){
      break;
      }
      break;
    }    
  case 5:{
    cout << "Choose an option:" << endl;
    cout << "1. Motives and explanation" << endl;
    cout << "2. Abilities and Equipment" << endl;
    cout << "3. Confirm Choice" << endl;
    cout << "4. Go back to character selection" << endl;
      cin >> option;
    if (option == 1){
      
      }
    else if (option == 2){
      
      }
    else if (option == 3){
      cout << "Game Start!" << endl;
      break;
      }
    else if (option == 4){
      break;
      }
      break;
    }
  case 6:{
    cout << "Choose an option:" << endl;
    cout << "1. Motives and explanation" << endl;
    cout << "2. Abilities and Equipment" << endl;
    cout << "3. Confirm Choice" << endl;
    cout << "4. Go back to character selection" << endl;
      cin >> option;
    if (option == 1){
      
      }
    else if (option == 2){
      
      }
    else if (option == 3){
      cout << "Game Start!" << endl;
      }
    else if (option == 4){
      break;
      }
      break;
    }
  case 7:{
    cout << "Choose an option:" << endl;
    cout << "1. Motives and explanation" << endl;
    cout << "2. Abilities and Equipment" << endl;
    cout << "3. Confirm Choice" << endl;
    cout << "4. Go back to character selection" << endl;
      cin >> option;
    if (option == 1){
      
      }
    else if (option == 2){
      
      }
    else if (option == 3){
      cout << "Game Start!" << endl;
      }
    else if (option == 4){
      break;
      }
      break;
    }
  case 8:{
    cout << "Choose an option:" << endl;
    cout << "1. Motives and explanation" << endl;
    cout << "2. Abilities and Equipment" << endl;
    cout << "3. Confirm Choice" << endl;
    cout << "4. Go back to character selection" << endl;
      cin >> option;
    if (option == 1){
      
      }
    else if (option == 2){
      
      }
    else if (option == 3){
      cout << "Game Start!" << endl;
      }
    else if (option == 4){
      break;
      }
    }
    break;
  }
    
  if (charchoice < 1 || charchoice > 8){
    cout << "Please choose a valid choice" << endl;
  }
  }while(option != 4); 
 
  }while (endgame != 0);
 
 
break;
case 2:
  cout << "Welcome to the land of Agartha, a land hidden beneath the crust!" << endl; 
  cout << "A land of never-ending tunnels that can lead to wonderful riches or a fate worse than death." << endl;
  cout << "Not many people from the surface knew about or understand Agartha, so it's mysteries have remained secret for eons." << endl;
  cout << "However, after many years of terrible wars between the Wizard Kingdom and the Holy Kingdom on the surface over the ethics of using magic. Both Kingdoms fell apart and many factions from the surface found and moved to Agartha to settle new lands not destoryed by war." << endl;
  cout <<"Now you must journey through Agartha as a your chosen character from list of select characters that will forever change Thule and Agartha. Adventure Awaits!"<< endl;
break;
case 3:
cout << "Ahahah, you really think I will help you?\n";
break;
case 4:
cout << "End of Program.\n";
gameOn = false;
break;
default:
cout << "Not a Valid Choice. \n";
cout << "Choose again.\n";
cin >> choice;
break;
 }
   }
       }
int main() {
startscreen();
//Caroline is SUS 
// ░░░░░░░░░░░░░░░▄▀▄░░░░░░░░░░░░░░░
// ░░░░░▄▄▄▄▀▀▀▀▀▀▀▀▄▄▄▄▄▄░░░░░░░
// ░░░░░█░░░░▒▒▒▒▒▒▒▒▒▒▒▒░░▀▀▄░░░░
// ░░░░█░░░▒▒▒▒▒▒░░░░░░░░▒▒▒░░█░░░
// ░░░█░░░░░░▄██▀▄▄░░░░░▄▄▄░░░░█░░
// ░▄▀▒▄▄▄▒░█▀▀▀▀▄▄█░░░██▄▄█░░░░█░
// █░▒█▒▄░▀▄▄▄▀░░░░░░░░█░░░▒▒▒▒▒░█
// █░▒█░█▀▄▄░░░░░█▀░░░░▀▄░░▄▀▀▀▄▒█
// ░█░▀▄░█▄░█▀▄▄░▀░▀▀░▄▄▀░░░░█░░█░
// ░░█░░░▀▄▀█▄▄░█▀▀▀▄▄▄▄▀▀█▀██░█░░
// ░░░█░░░░██░░▀█▄▄▄█▄▄█▄████░█░░░
// ░░░░█░░░░▀▀▄░█░░░█░█▀██████░█░░
// ░░░░░▀▄░░░░░▀▀▄▄▄█▄█▄█▄█▄▀░░█░░
// ░░░░░░░▀▄▄░▒▒▒▒░░░░░░░░░░▒░░░█░
// ░░░░░░░░░░▀▀▄▄░▒▒▒▒▒▒▒▒▒▒░░░░█░
// ░░░░░░░░░░░░░░▀▄▄▄▄▄░░░░░░░░█░░

  
}