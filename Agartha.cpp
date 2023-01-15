#include <iostream>

using namespace std;
void startscreen() {
  int charchoice;
  int confirm;
  int endgame = 1;
  int option;
  int choice;
  bool gameOn = true;
  while (gameOn != false) {
    cout << " ***********AGARTHA************* " << endl;
    cout << " 1 - Start the game.\n";
    cout << " 2 - Story.\n";
    cout << " 3 - Help.\n";
    cout << " 4 - Exit.\n";
    cout << " Enter your choice and press return: ";
    cin >> choice;

    switch (choice) {
    case 1:
      do {
        cout << "*******************************\n";
        cout << "Please choose Your character:" << endl;
        cout << "1. Shadow Demon" << endl; //Stealth
        cout << "2. Nun" << endl; //Support
        cout << "3. Reconnaissance Droid" << endl; //Physical
        cout << "4. Blood and Flesh Priest" << endl; //Support
        cout << "5. Magic Worshipping Mage" << endl; //Mage
        cout << "6. Goblin Lightning Mage" << endl; //Mage
        cout << "7. Survivalist" << endl; //Stealth
        cout << "8. Dragon Knight" << endl; //Physical
        cout << " Enter your choice and press return: ";
        cin >> charchoice;
        do {
          switch (charchoice) {
          case 1: {
            cout << "Choose an option:" << endl;
            cout << "1. Motives and explanation" << endl;
            cout << "2. Abilities and Equipment" << endl;
            cout << "3. Confirm Choice" << endl;
            cout << "4. Go back to character selection" << endl;
            cin >> option;
            if (option == 1) {
              cout << "A demon that serves a mysterious plain of existence known as the void" << endl;
              cout << "The void is also a living entity that feeds off the souls of living beings and matter itself" << endl;
              cout << "The void demands and sends it's servants to plunge entire planets into it's realm." << endl;
              cout << "You play as one of these demons tasked by a ruler of the void, the Night Matron to corrupt the planet Thule. " << endl;
              cout << "However, this is the first time the demon has ever been tasked on such an important mission, so to test the demon's competency; the night matron has placed restrictions and obstacles that will push him to his limits. " << endl;
              cout << "Stick to the shadows and kill only those who the void deems necessary. This is how you will succeed with the character!" << endl;
            } else if (option == 2) {
              cout << "Abilities and Equipment:" << endl;
              cout << "Shadow Words: Words of power that draw energy from the void. The demon starts with knowing only one shadow word." << endl;
              cout << "Shadow Body: The shadow demon's body is part material and immaterial, which allows the demon to perform acrobatic feats like climbing on walls and ceilings. Though, since his body is still part void any light source will hurt the demon." << endl;
              cout << "Tattered Cloak: A personal item that covers the demon and gives him the protection against light sources. Also, can be sacrificed to dodge fatal damage." << endl;
              cout << "Shadow Daggers and Short Sword: Void weapons that the demon can call upon if he needs to kill a target seen or unseen. These weapons can also absorb similar types of weapons to grow stronger. Base Damage for Daggers is 10 damage for each dagger and twenty-five damage for the sword." << endl;
              cout << "Dagger in the Heart: The night matron has restricted the demon by plunging a dagger that hurts him when he angers the void by killing a living creature or entity that void has no interest in being killed. The shadow demon takes damage equal to half the total victim's health" << endl;
            } else if (option == 3) {
              cout << "Game Start!" << endl;
              break;
            } else if (option == 4) {
              break;
            }
            break;
          }
          case 2: {
            cout << "Choose an option:" << endl;
            cout << "1. Motives and explanation" << endl;
            cout << "2. Abilities and Equipment" << endl;
            cout << "3. Confirm Choice" << endl;
            cout << "4. Go back to character selection" << endl;
            cin >> option;
            if (option == 1) {
              cout << "One of the top commanders and political figures of the holy kingdom that led a congregation of sisters known as the Holy Sisterhood that were an invaluable asset to the Holy Kingdom during the wars." << endl;
              cout << "They served the Holy Kingdom during every war but during the late stages of the last war fought between the kingdoms, the nun received a vision." << endl;
              cout << "In this vision, God showed the Nun a giant well hidden from the rest of the world" << endl;
              cout << "God then told her to gather her followers and jump down the well to travel to a new land known as Agartha." << endl;
              cout << "After a long journey, her group found and all together jumped in the well." << endl;
              cout << "The Nun wakes up on a dirt ground and  finds she is surrounded by the dead bodies of her followers." << endl;
              cout << "The Holy Spirit then appears before her and tells her that the others have been sent to heaven to be with God but before she can go to heaven, she must travel through Agartha and pass tests of faith to prove that she doesn't have any doubts in God's wisdom." << endl;
              cout << "Remain faithful and loving towards God and share that love with others to well with this character!" << endl;
            } else if (option == 2) {
              cout << "Magic Nullification: A passive ability which allows the Nun to dispel any magic spell as long as her faith is strong enough. Which also means she can't use magic herself." << endl;
              cout << "Nun Robes: The Nun wears her black robes that do not offer any physical or magical protection but help her keep her faith stable. She wears light chain mail underneath her robes that help her repel some damage from light attack weapons." << endl;
              cout << "Faith-bound Abilities: The Nun does not use mana but instead relies on her faith in God to battle her foes. She must keep her faith meter above fifty-percent to continue using her faith abilities." << endl;
              cout << "Ever-present Doubt: The Nun has always had some doubts about whether she is following the right path in life and now with her faith being put to the test by God, she is feeling even more anxious. Throughout her journey her faith will decrease by five-percent everytime she loses a battle." << endl;
              cout << "Cross Necklace: The Nun wears a necklace in the shape of the cross that symbolizes her connection and love for Jesus. At certain points, throughout the game the Holy Spirit will come out of the cross and give suggestions about where to go and how she can improve her faith. If the Nun follows and obeys the Holy Spirit, she recieve a twenty-five faith bonus. If she disobeys, her faith will decrease by twenty-five percent." << endl;
              cout << "Close Quarters Combat Training: The Nun also has given some light cqc training by some of the paladins, so she will have some way of protecting herself." << endl;
            } else if (option == 3) {
              cout << "Game Start!" << endl;
              break;
            } else if (option == 4) {
              break;
            }
            break;
          }
          case 3: {
            cout << "Choose an option:" << endl;
            cout << "1. Motives and explanation" << endl;
            cout << "2. Abilities and Equipment" << endl;
            cout << "3. Confirm Choice" << endl;
            cout << "4. Go back to character selection" << endl;
            cin >> option;
            if (option == 1) {
              cout << "One of the United Space Federation's best recon droids sent to Thule to gather information about the planet's resources, creatures, and interesting features." << endl;
              cout << "The USF wants to gather information on multiple candidate planets to settle or extract raw materials from, after their home planet became inhabitable from rapid industrialization efforts that destoried their home planets ecosystem." << endl;
              cout << "The USF now travels throughout the cosmos looking for a new planet to colonize." << endl;
              cout << "One day while scanning multiple planets to see which are good candidates, the USF detected Thule." << endl;
              cout << "Thule interested the USF because their scans were picking up strange energy waves coming from the planet." << endl;
              cout << "So the USF council came up with a plan to sent one of their recon droid's equipped with tough armor and advanced gadgets to the planet's surface via drop pod." << endl;
              cout << "The only problem is that the drop pod containing the recon droid didn't land on the surface of the planet but deep underground in Agartha." << endl;
              cout << "The droid tried to contact an USF officer but there was no connection, so now the droid must travel through Agartha and get back to the surface while also scanning and overcoming obstacles" << endl;
              cout << "Defend yourself with the reconnaissance droid gadgets and scan things to gain useful information to do well with this character!" << endl;
            } else if (option == 2) {
              cout << "Head Scanner: the reconnaissance droid's head is equipped with a high tech scanner that gives the droid the ability to adapt to the new environment. Scanning enemies during combat leaves the droid vulnerable to attack." << endl;
              cout << "Arm-Mounted Arc-Mine Thrower: On the droid's right arm, he comes equipped with rotary arc-mine thrower that tosses out three types of mines that include explosive, stun, and radar. Explosive mines are used to destory organic and non-organic obstacles, they deal 75 base damage to enemies. Stun mines are used to capture threating creatures. Radar mines are used to scan the surrounding area for threats. The thrower with intially 5 of each type of mine." << endl;
              cout << "Arc-Mine Generator: While during the droid's travel phase, it can generator new mines to use in combat as long as the necessary materials are nearby. This process requires the droid know the correct materials to make each type of mine." << endl;
              cout << "Protective Shield: The recon droid also has a protective shielding that wraps around it's body. This shield protects the droid from all elemental attacks but only one element at a time, so the droid must use it's predictive AI to determine which element it needs to block." << endl;
              cout << "Steel External Body: The droid is equipped with an external body that houses a fragile internal body. This external body is made of steel and is very strong but greatly reduces the droid's speed. This external body will be lost if the droid's health reaches twenty-five percent." << endl;
              cout << "Internal Body: The fragile internal body that is exposed when the droid loses it's external which causes it to take fifty-percent extra damage. It gains an 100 percent attack speed bonus. The droid's arc-mine thrower also is replaced with a energy blade that deals 5 base damage." << endl;
            } else if (option == 3) {
              cout << "Game Start!" << endl;
              break;
            } else if (option == 4) {
              break;
            }
            break;
          }
          case 4: {
            cout << "Choose an option:" << endl;
            cout << "1. Motives and explanation" << endl;
            cout << "2. Abilities and Equipment" << endl;
            cout << "3. Confirm Choice" << endl;
            cout << "4. Go back to character selection" << endl;
            cin >> option;
            if (option == 1) {
              cout << "A collection of souls and flesh that was once the leader the of holy mage faction in the Wizard Kingdom." << endl;
              cout << "This amalgamation of souls and flesh was crafted by a group known as the death mages." << endl;
              cout << "The death mages sought appease their demonic master by resurrecting and controlling the soul of a disgraced high-priest of holy mages." << endl;
              cout << "This high-priest was disgraced because he failed to keep his party of high ranking mages alive during a battle with the Holy Kingdom." << endl;
              cout << "This humiliating defeat was what caused the high-priest to stripped of his rank and executed." << endl;
              cout << "After hearing word of this execution, the death mages stole the priest's body and gathered the many materials needed for the ritual." << endl;
              cout << "During the ritual, everything was going smoothly, the death mages seemingly had all the necessary requires to revive the fallen holy mage, but something went wrong." << endl;
              cout << "They had underestimated how many souls they needed to complete the ritual, so the mage's soul was only halfway revived." << endl;
              cout << "This caused the half complete soul to cry out in pain and start to massacre death mages." << endl;
              cout << "The death mages tried to fight back by using a instant death spells but they spells failed to do anything because the priests incomplete soul was too powerful." << endl;
              cout << "Afterwards, the priest's still incomplete soul had at least formed some sort of a body for himself using the corpses of the death mages and with his new body tried casting a spell to see if he could still use magic." << endl;
              cout << "He picked up a black soul-gem and tried to cast a healing spell on himself but felt a sharp pain course through his body causing to fall to the floor." << endl;
              cout << "A demon then appeared before him, laughing at the aching priest." << endl;
              cout << "The priest enraged by demon's laughter tried to swipe at demon but the demon easily blocked the attack and kicked the priest into a wall." << endl;
              cout << "The demon then boastfully told the priest that he is now a possession of his master Satan and he is here to take the priest to hell to be endlessly tortured." << endl;
              cout << "The priest then begged the demon to find an alternative way to please his master." << endl;
              cout << "The demon then teleported the priest to an underground cavern and explained to the priest that the only way to earn his freedom is to corrupt the magical core of Agartha." << endl;
              cout << "The priest must now travel through Agartha to escape his fate as a plaything of the devil." << endl;
              cout << "Use your blood efficiently to cast protective Holy spells to do well with character!" << endl;
            } else if (option == 2) {
              cout << "Blood Magic: The demon explained to the priest that in his new form, he must now use his own blood as substitute for soul-gems. This means to cast a spell, he must sacrifice a portion of his health equal to the spells soul gem value." << endl;
              cout << "Holy Magic Mastery: The priest has mastered the art of casting holy magic and knows every holy spell known to man. " << endl;
              cout << "Everlasting Hunger: The priest's new body and half-complete soul hungers for the souls and flesh of living creatures. When the priest wins a battle, he absorbs the corpses of living creatures and gains health equal to their health. He also steals their soul to add to his soul well." << endl;
              cout << "Soul-Well: The priest's soul is not complete, so he possesses a well of souls instead of a unified soul. The soul-well with evolve into a complete soul when the well contains one-thousand souls and when he completes his soul, he can use mana instead of blood. However, the priest starts with only two-hundred seventy souls in his soul-well. He also loses two soul every time he takes damage and if he loses all of his souls, he instantly dies." << endl;
              cout << "Amorphous-Body: The priest's new body is a amalgamation of human flesh, so he has no natural form. The priest can instead transform his body and mimic the appearance of any creature that he absorbs. He also can use his body to get through small spaces." << endl;
            } else if (option == 3) {
              cout << "Game Start!" << endl;
              break;
            } else if (option == 4) {
              break;
            }
            break;
          }
          case 5: {
            cout << "Choose an option:" << endl;
            cout << "1. Motives and explanation" << endl;
            cout << "2. Abilities and Equipment" << endl;
            cout << "3. Confirm Choice" << endl;
            cout << "4. Go back to character selection" << endl;
            cin >> option;
            if (option == 1) {
              cout << "A mage from the Wizard Kingdom that practiced an unorthodox form of magic known as worship magic." << endl;
              cout << "The Wizard Kingdom considered this form of magic ineffective and controversial for many reasons." << endl;
              cout << "The magic-worshipping mage however believed that worship magic was the best way to cast spells and was more respectful to the spell." << endl;
              cout << "This belief caused the magic-worshipping to be bullied and ostracized by his fellow mages which forced him to be homeless for most of his life" << endl;
              cout << "Tired of feeling unwanted, he sought after the death mages to see if they would accept him." << endl;
              cout << "So they gave a mission and his mission was to destroy the Wizards Kingdom's capital city." << endl;
              cout << "The magic-worshiping mage accepted his quest and traveled to the Capital city." << endl;
              cout << "He hid in the sewers beneath the main city and began casting a death spell that summons thousands of demons." << endl;
              cout << "This casting takes days of non-stop praying to the spell to get it to cast." << endl;
              cout << "On the surface, the Wizard Kingdom was celebrating it's triumph over the Holy Kingdom by executing the Archbishops of the Holy Kingdom." << endl;
              cout << "The event was going well and just as the archbishops were about to be brutally executed by the Wizard Kingdom's council, a rumbling starting to occur and caught everyone off guard." << endl;
              cout << "The spell was almost casted but the Magic-Worshipping Mage made one fatal error, at the last moment he tripped and cut his knee, which caused him to scream in pain." << endl;
              cout << "This scream caused the spell to teleport the entire Wizard Kingdom capital to an alternate dimension and the Magic-Worshiping Mage to pass out." << endl;
              cout << "He then woke up in an unfamiliar cave and heard booming voices thanking him for sending the mages to their realm." << endl;
              cout << "However, they then told him that the reason why he woke up in a new cave was that the voices wanted him to finish off the rest of mages that live in Agartha." << endl;
              cout << "The magic-worshipping mage with crazed smile then set off to exterminate any surviving mages." << endl;
              cout << "Use the power of worship magic to cast powerful spells to do well with this character!" << endl;
            } else if (option == 2) {
              cout << "Worship Magic: A form of magic that involves praying to spells instead of casting spells using mana. This means that the magic-worshipping priest must spend a certain number of turns praying to the spell he wishes to cast before the spell can go off." << endl;
              cout << "Basic Magic Knowledge: The magic-worshipping mage has amnesia and has forgotten how cast most of his spells. Throughout, the game the magic-worshipping mage will relearn how to cast his more powerful spells. The magic-worshipping mage start with knowing four spells, which are Fireball, Restabilize-mind, Heal, and Damage-Resistance." << endl;
              cout << "Unstable Mind: The magic-worshipping mages mind is unstable, so at certain points in the game he will have to face ghost encounters, which are encounters that magic-worshipping mage hallucinates. These encounters will always lead to battles. The only way to avoid these encounters is to use the spell 'Restabilize-mind' on the magic-worshipping mage." << endl;
              cout << "Chaotic Magic Manipulation: The booming-voices infused the magic-worshipping mage with the passive ability to destabilize magic spells. This means any mage who cast's a spell at the magic worshipping mage will have a ten-percent chance of having their spell transform into a chaotic version of the spell." << endl;
              cout << "Wizard Robes: The magic-worshipping mage wears his signature red and purple wizard robes that connect him spiritually to magic. The robes also has a one-percent chance of causing the magic-worshipping mage to explode on his turn. This explosion will cause every enemy to die and put the magic-worshipping mage a one health. These robes cannot be taken off because the magic-worshipping mage forbids it." << endl;
            } else if (option == 3) {
              cout << "Game Start!" << endl;
              break;
            } else if (option == 4) {
              break;
            }
            break;
          }
          case 6: {
            cout << "Choose an option:" << endl;
            cout << "1. Motives and explanation" << endl;
            cout << "2. Abilities and Equipment" << endl;
            cout << "3. Confirm Choice" << endl;
            cout << "4. Go back to character selection" << endl;
            cin >> option;
            if (option == 1) {
              cout << "A goblin who is banished from his homeland the 3rd layer of Agartha to the 2nd layer of Agartha." << endl;
              cout << "On this layer the goblin had to fend for himself against the Nephilim and false gods that lived on the layer." << endl;
              cout << "One day he saw a campsite set up by adventurers." << endl;
              cout << "He snuck up on the campsite and went into one of tents." << endl;
              cout << "In the tent, he many valuable looking items and gem stones." << endl;
              cout << "He toke one of the stones and marveled at the stone for a while." << endl;
              cout << "The stone was green and had lightning flowing through the gem which caused it to vibrate slightly." << endl;
              cout << "Distracted by the gem, he failed to notice that the adventurers had woke up and heard him rummaging through their stuff." << endl;
              cout << "They opened up the tent and saw the goblin looking the gem, the brute of group then swung his mighty hammer and flung the goblin through the tent." << endl;
              cout << "The goblin crashed through the tent and far into the air landing a few feet away from the campsite with a crash." << endl;
              cout << "The goblin was severely hurt but could still move one of arms that held the stone in it." << endl;
              cout << "He then knew he was most likely going to die and decided to swallow the gem, so that he could at least die knowing they weren't getting gem back so easily." << endl;
              cout << "However, unexpectedly the goblin began to feel his pain dull and his body gaining strength, he even stood up despite breaking his legs. " << endl;
              cout << "He then saw that three adventurers had found him and the swordsman and brute charged him with the holy mage giving them blessings." << endl;
              cout << "Scared of dying he crossed his arms to cover his face but then just the brute was about to swing at him, lightning shot out of goblin's hand which decapitated the brute." << endl;
              cout << "The brutes limp body fell on top of the swordsman caused him to also fall to the ground and the other two adventurers to flee in terror." << endl;
              cout << "The goblin confused by what happened looked at his hand and the dead adventurer that lay before him." << endl;
              cout << "He then realized that his new power must have come from the gem that he swallowed" << endl;
              cout << "The goblin was still confused because he had been told by his elders that Goblins cannot use magic." << endl;
              cout << "He realized that he must be special somehow and that he must have been chosen by the Holy Trio to become their champion." << endl;
              cout << "This new belief gave the goblins something he needed confidence and with this confidence he sets out to return to his homeland." << endl;
              cout << "Harness the power of lightning magic and destroy your foes with this character!" << endl;
            } else if (option == 2) {
              cout << "Lightning Magic Amateur: The goblin has now become lightning mage but he can only slightly control his magical abilities. This means he only knows one spell called unstable lightning bolt. This spell deals the same amount of damage as normal lightning bolt spell but has fifty-percent chance of failing." << endl;
              cout << "Wizard Robes: The goblin before he began his journey went to the campsite and intimidated the two remaining adventurers into give him some wizard robes. The robes were not his size so he had the holy mage bless the robe to make the fit him. The robes give him a bonus to his magical abilities. " << endl;
              cout << "Quick Feet: The goblin has a thirty-five percent chance to automatically dodge his opponent's attacks thanks to his training." << endl;
              cout << "Powerful Inner Soul Energy: The gem the goblin swallowed held the soul of a power lightning god known as Lyn the living lightning bolt. Lyn had absorbed many souls while he was alive and thus had a very powerful soul worth one-hundred souls. The goblin learned this from interrogating the holy mage. He now knows he has ninety-seven souls stored in his body." << endl;
              cout << "Soul-Gem bag: The goblin also stole the holy mage's soul gem bag which contained one great and sixteen small soul-gems." << endl;
            } else if (option == 3) {
              cout << "Game Start!" << endl;
            } else if (option == 4) {
              break;
            }
            break;
          }
          case 7: {
            cout << "Choose an option:" << endl;
            cout << "1. Motives and explanation" << endl;
            cout << "2. Abilities and Equipment" << endl;
            cout << "3. Confirm Choice" << endl;
            cout << "4. Go back to character selection" << endl;
            cin >> option;
            if (option == 1) {
              cout << "An ex-paladin that fought against the Wizard Kingdom in the final war and now lives in the first layer of Agartha." << endl;
              cout << "He was teleported to first layer after fighting endless hordes and horrifying magical beasts with other mages and paladins." << endl;
              cout << "In this impromptu alliance, they promised each other that if they survived that would end this feud between the two kingdoms and join as one." << endl;
              cout << "The paladins killed many of the magical beasts while the mages began to cast a giant spell that would teleport everyone out of that hell and after they succeeded they made their alliance official." << endl;
              cout << "The first thing the alliance did was build a town and discover the creatures that inhabited this new land." << endl;
              cout << "They discovered lost creatures known as dinosaurs lived here, which had thought to be driven to extinct during the era of the dragons." << endl;
              cout << "The alliance then formed a treaty that they will work together with each other to hunt and find new interesting things and form a society where they abandon both kingdoms traditions to focus on helping themselves." << endl;
              cout << "The survivalist hated the treaty though because he still wanted to uphold the traditions of the holy kingdom. " << endl;
              cout << "It seemed like he was in the minority of opinion and the alliance banished him to fend for himself." << endl;
              cout << "After his banishment, he sent up his own encampment and stalked the adventurer alliance from time to time." << endl;
              cout << "He watched with disgust his remaining brothers and sisters learn magic and host prayer sessions with mages." << endl;
              cout << "He vowed to never reform his ways and become the last true follower of Jesus Christ." << endl;
              cout << "He also stole a bow and some arrows from the adventurer settlement to help him survive and to get some revenge on them." << endl;
              cout << "This bow was a great asset to him and he became an skilled archer after some time of practicing." << endl;
              cout << "One day while hunt some raptors, he saw something fall from the sky and crash into the ground." << endl;
              cout << "He curiously ran to the crash site because he knew the loud crash would attract the attention of the adventurer guild." << endl;
              cout << "When he got to the crash site, he found a strange looking pod that was the shape of dinosaur eggs he would steal." << endl;
              cout << "The pod then suddenly open and with his bow drawn he approached the pod." << endl;
              cout << "He then saw the body of a women who wore strange armor and was covered in blood." << endl;
              cout << "He assumed the women was dead and took her body out of the pod." << endl;
              cout << "A device fell from the pod that looked like a glove of some kind which caused the survivalist to jump and shoot the glove with an arrow." << endl;
              cout << "The glove then produced a hologram out of a man in a uniform asking someone named Caroline and demanding her to answer him." << endl;
              cout << "The survivalist then bend down and looked at the hologram with confusion." << endl;
              cout << "The hologram of man then saw the survivalist and the dead body of Caroline and thought that the man killed Caroline." << endl;
              cout << "He then said a phase which caused the glove to attach itself to the survivalists arm and shock him nearly to death. " << endl;
              cout << "The survivalist screamed in pain and fell to his knee, the hologram then appeared on the survivalist's arm and told him to listen to him closely." << endl;
              cout << "The hologram told the survivalist that dead women's mission was to find a robot that belonged to the UEF and that his duty is carry on that mission for the MC (Mars Confederacy) or he will be shocked to death." << endl;
              cout << "The survivalist with no other choice goes off to find this robot." << endl;
              cout << "Use stealth, trickery, the survivalist's weapons and his gadgets to survive this perilous journey!" << endl;
            } else if (option == 2) {
              cout << "Mary: The survivalist's trusty bow named after the mother of christ. The bow does twenty base damage but if the survivalist gets a head shot, the target dies instantly as long as the target is not a giant enemy. Head shots have a five percent chance to occur in normal battle." << endl;
              cout << "Survival Skills: The survivalist has picked up many skills from living in the wilds that will help him on his journey. He knows how to set up shelter, hunt food, find and purify water. During the travel phase of the game, he will need to tend to use these skills to satisfy his basic needs." << endl;
              cout << "Stealth Skills: The survivalist has learned how effectively hide from his enemies. He can also ambush and stealth his enemies as well. This means the survivalist can hide from enemies in hostile travel events more effectively than other characters. This also means he can choose to reveal himself and snipe one enemy with bow which has a thirty-five chance of killing the enemy." << endl;
              cout << "Traps: The survivalist can set up a trap right before he hides that give him an advantage in battle. However, setting up traps also has the chance of the survivalist being found right away by the enemy depending on long it takes to set up the trap. The two traps he knows how to set up are a " << endl;
            } else if (option == 3) {
              cout << "Game Start!" << endl;
            } else if (option == 4) {
              break;
            }
            break;
          }
          case 8: {
            cout << "Choose an option:" << endl;
            cout << "1. Motives and explanation" << endl;
            cout << "2. Abilities and Equipment" << endl;
            cout << "3. Confirm Choice" << endl;
            cout << "4. Go back to character selection" << endl;
            cin >> option;
            if (option == 1) {
                            
            } else if (option == 2) {

            } else if (option == 3) {
              cout << "Game Start!" << endl;
            } else if (option == 4) {
              break;
            }
          }
          break;
          }

          if (charchoice < 1 || charchoice > 8) {
            cout << "Please choose a valid choice" << endl;
          }
        } while (option != 4);

      } while (endgame != 0);

      break;
    case 2:
      cout << "Welcome to the land of Agartha, a land hidden beneath the crust!" << endl;
      cout << "A land of never-ending tunnels that can lead to wonderful riches or a fate worse than death." << endl;
      cout << "For eons Agartha had been an unknown land and was home to many creatures thought to have disappeared or were just myths." << endl;
      cout << "The denizens of Thule would have never dreamed that Agartha and it's creatures existed." << endl;
      cout << "However, after many years of terrible wars between the Wizard Kingdom and the Holy Kingdom on the surface over the ethics of using magic. Both Kingdoms fell apart and many factions from the surface found and moved to Agartha to settle new lands not destroyed by wars." << endl;
      cout << "Now you must journey through Agartha as a your chosen character that will forever change Thule and Agartha. Adventure Awaits!" << endl;
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
