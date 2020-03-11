#include <iostream>
#include <stdlib.h>

int main() {

    std::cout << "              ***************************      (/_/)\n";
    std::cout << "  (/_/)       *   Ana's Text-Adventure  *     (='.'=)\n";
    std::cout << " (='.'=)      *         Anachhi~        *     (')_(')\n";
    std::cout << " (')_(')      ***************************\n\n";

    std::cout << "  Once upon a day Anachhi was walking down summoner's rift as she saw a cute curious individual\n\n";
    std::cout << "  1) Anachhi approaches this cute individual\n\n";
    std::cout << "  2) Anachhi tries walking away\n\n\n";

    int anachhis_choice = 0;
    char cont = 'y';

    do {
        std::cout << "  > ";
        std::cin >> anachhis_choice;
        std::cout << "\n";
    } while (anachhis_choice != 1 && anachhis_choice != 2);

    if (anachhis_choice == 1) {
        std::cout << "  It turns out to be Sky!\n\n";
        std::cout << "  Sky jumps on Anachhi while smiling\n\n";
        std::cout << "                                                                                      Press any char to continue\n";
        std::cout << "  > ";
        std::cin >> cont;
    }
    else{
        std::cout << "  You think you can escape? huh? no way!\n\n";
        std::cout << "  This cute individual runs towards Anachhi and jumps on her!\n\n";
        std::cout << "  Turns out it's actually sky!\n\n";
        std::cout << "                                                                                      Press any char to continue\n";
        std::cout << "  > ";
        std::cin >> cont;
    }

    system("CLS");
    std::cout << "\n\n";
    std::cout << "                                Anachhi is overcame with happiness upon finding Sky!\n\n";
    std::cout << "                         Anachhi is deeply worried because she can't find second pet, Mika.\n\n";
    std::cout << "                  Anachhi was with both her pets and Haruchhi a few hours ago till a wild Darius attacked them\n\n";
    std::cout << "      After a long battle neither of the two parties could win. As a last resort, Darius kidnapped Anachhi's both pets\n\n";
    std::cout << "                                       in the heat of the battle and escaped.\n\n";
    std::cout << "                                                                                      Press any char to continue\n";
    std::cout << "  > ";
    std::cin >> cont;

    system("CLS");
    std::cout << "\n\n";
    std::cout << "                         A few minutes later Haruchhi comes running with a lot of battle wounds\n\n";
    std::cout << "                                'Anachhi, hand me some potions. My HP is almost 0...'\n\n";
    std::cout << "  1) Hand over some HP Pots to Haruchhi.\n\n";
    std::cout << "  2) Ignore him and continue on the adventure against Darius alone\n\n";
    do {
        std::cout << "  > ";
        std::cin >> anachhis_choice;
        std::cout << "\n";
    } while (anachhis_choice != 1 && anachhis_choice != 2);
    system("CLS");
    if (anachhis_choice == 1) {
        std::cout << "\n\n";
        std::cout << "  'Thank you!' Harucchi shouts while running off to continue battling with Darius\n\n";
        std::cout << "  Anachhi runs after Haru 'Omg wait me!'\n\n";
        std::cout << "  Anachhi and Haru find Darius about to land on his escape ship\n\n";
        std::cout << "  Haru runs off to stop him but at this rate he won't catch up\n\n";
        std::cout << "  Anachhi knew she had to do something\n\n";
        std::cout << "  1) Borrow Sky's Ahri-like power\n\n";
        std::cout << "  2) Try shooting Darius with some fire\n\n";
        do {
            std::cout << "  > ";
            std::cin >> anachhis_choice;
            std::cout << "\n";
        } while (anachhis_choice != 1 && anachhis_choice != 2);

        system("CLS");

        if (anachhis_choice == 1) {
            std::cout << "\n\n";
            std::cout << "After borrowing Sky's power Anachhi dashes forward and charms Darius for 2 seconds\n\n";
            std::cout << "Long enough for Mika to jump off and Haru to stab Darius and push him off into the water \n\n";
            std::cout << "                                                                                      Press any char to continue\n";
            std::cout << "  > ";
            std::cin >> cont;
            system("CLS");
            std::cout << "                                           VICTORY!\n\n\n\n\n";
            std::cout << "                               Chapter1: Comrades Gathering ended.\n\n";
            std::cout << "                                        Chapter2: TBA\n\n";
        }
        else {
            std::cout << "\n\n";
            std::cout << "Darius ends up escaping with Mika..\n\n";
            std::cout << "                                                                                      Press any char to continue\n";
            std::cout << "  > ";
            std::cin >> cont;
            system("CLS");
            std::cout << "                                           G A M E - O V E R\n\n\n\n\n";
            std::cout << "                       Failure to end the story line with all party members alive.\n\n\n\n";
            std::cout << "                                           Members dead: Mika.\n\n\n";
        }

    }
    else {
        std::cout << "  Haruchhi ends up dying a few seconds later. Anachhi tries looking for Darius but it's already too late.\n\n";
        std::cout << "  Haruchhi was the only one who knew Darius's last position and he ended up dying..\n\n";
        std::cout << "                                                                                      Press any char to continue\n";
        std::cout << "  > ";
        std::cin >> cont;
        system("CLS");
        std::cout << "\n\n\n\n";
        std::cout << "                                           G A M E - O V E R\n\n\n\n\n";
        std::cout << "                       Failure to end the story line with all party members alive.\n\n\n\n";
        std::cout << "                                   Members dead: Haruchhi, and Mika.\n\n\n";
    }



}