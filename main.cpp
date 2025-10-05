#include <iostream>

using namespace std;

int main()
{
    char name [20],letter;
    int result, a = 5,score = 0;

    cout << "WELCOME TO THE TRIVIA GAME\n\n";
    cout << "THIS WILL TEST YOUR KNOWLEDGE AND SEE HOW KNOWLEDGEABLE YOU ARE WHEN IT COMES TO GAMES!\n\n";
    cout << "ENTER PLAYER NAME:";

    cin >> name;

    cout << "\nPLEASE PREPARE TO ANSWER THE QUESTIONS\n\nALL OF THE QUESTIONS ARE MULTIPLE CHOICES\n\nPLEASE CHOOSE THE BEST ANSWER\n\nEACH OF THE FOLLOWING IS WORTH 5 POINTS\n\nGOODLUCK!\n\n";


    cout << "\n\nARE YOU READY TO PLAY?\n\n";

    cout << "PRESS Y IF YES\n\n";

    cout << "PRESS N IF NO\n\n";

    cin >> letter;

    switch (letter){


case 'Y':
    cout << "YOU ARE READY!\n\n" ;
    break;

case 'y':
    cout << "YOU ARE READY!\n\n" ;
    break;

case 'N':
    cout << "SEEMS LIKE YOU DON'T WANT TO TEST YOUR POTENTIAL..\n\n";
    break;

case 'n':
    cout << "SEEMS LIKE YOU DON'T WANT TO TEST YOUR POTENTIAL..\n\n";
    break;

default:
    cout << "\n\nAUTOMATIC " << score << " SCORE DUE TO INVALID INPUT\n\n";
    cout << "GAME OVER\n\n";
    return 1;
    }

    cout << "\n\n1.WHAT DOES MMORPG MEAN?\n\nA. MASSIVE MULTIPAYER ONLINE ROLEPLAY GAME\nB. MONSTER GAME\nC. FIRST PERSON SHOOTER GAME\nD. ACTION PLATFORMER\n\n";
    cin >> letter;

    if (letter == 'A'|| letter == 'a'){
        result = score + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;
    }else if (letter == 'B' || letter == 'b'){
    result = score;
        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'C' || letter == 'c'){
    result = score;
        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'D' || letter == 'd'){
    result = score;
        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else{
    cout << "ERROR\n\n";
    cout << "YOUR SCORE REMAINS " << score;
    }


    cout << "\n\n2.USUALLY SET IN HOSTILE, INTENSE, OPEN-WORLD ENVIRONMENTS AND PLAYERS ARE REQUIRED TO SURVIVE AS LONG AS POSSIBLE.\n\nA. MOBA GAME\nB. FPS GAME\nC. SURVIVAL GAME\nD. IDLE GAME\n\n";

    cin >> letter;

    if (letter == 'A'|| letter == 'a'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'B' || letter == 'b'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'C' || letter == 'c'){
        result = result + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;
    }else if (letter == 'D' || letter == 'd'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else{
    cout << "ERROR\n\n";
    cout << "YOUR SCORE REMAINS " << result;
    }



     cout << "\n\n3.WHAT TYPE OF GAME IS MARIO?\n\nA. SURVIVAL GAME\nB. ACTION PLATFORMER\nC. RACING GAME\nD. FPS GAME\n\n";

    cin >> letter;

        if (letter == 'A'|| letter == 'a'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'B' || letter == 'b'){

         result = result + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;

    }else if (letter == 'C' || letter == 'c'){
        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'D' || letter == 'd'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else{
    cout << "ERROR\n\n";
    cout << "YOUR SCORE REMAINS " << result;
    }

    cout << "\n\n4.WHICH OF THESE GAMES IS A SURVIVAL GAME?\n\nA. CALL OF DUTY\nB. MOBILE LEGENDS\nC. PACMAN\nD. ARK SURVIVAL: EVOLVED\n\n";

    cin >> letter;

    if (letter == 'A'|| letter == 'a'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'B' || letter == 'b'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'C' || letter == 'c'){
        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'D' || letter == 'd'){

         result = result + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;

    }else{
    cout << "ERROR\n\n";
    cout << "YOUR SCORE REMAINS " << result;
    }

    cout << "\n\n5.IN WHICH GAME GENRE DOES STREET FIGHTER BELONG TO?\n\nA. FIRST PERSON SHOOTER\nB. FIGHTING GAME\nC. ACTION PLATFORMER\nD. SURVIVAL GAME\n\n";

    cin >> letter;

     if (letter == 'A'|| letter == 'a'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'B' || letter == 'b'){

         result = result + a;
        cout << "\n\nYOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;

    }else if (letter == 'C' || letter == 'c'){
        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'D' || letter == 'd'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else{
    cout << "ERROR\n\n";
    cout << "YOUR SCORE REMAINS " << result;
    }
        cout << "\n\n6.WHICH OF THE FOLLOWING IS AN FPS GAME?\n\nA. MINECRAFT\nB. TERRARIA\nC. CLASH OF CLANS\nD. VALORANT\n\n";

    cin >> letter;

     if (letter == 'A'|| letter == 'a'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'B' || letter == 'b'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'C' || letter == 'c'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'D' || letter == 'd'){

         result = result + a;
        cout << "\n\nYOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;

    }else{

    cout << "ERROR\n\n";

    cout << "YOUR SCORE REMAINS " << result;

    }

    cout << "\n\n7.WHAT GAME BELONGS TO THE YEAR 1990'S?\n\nA. HALF-LIFE\nB. GTA\nC. SUPER MARIO GALAXY\nD. THE SIMS\n\n";

    cin >> letter;

     if (letter == 'A'|| letter == 'a'){

         result = result + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;

    }else if (letter == 'B' || letter == 'b'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'C' || letter == 'c'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'D' || letter == 'd'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else{

    cout << "ERROR\n\n";

    cout << "YOUR SCORE REMAINS " << result;

    }
    cout << "\n\n8.WHICH YEAR WAS STREET FIGHTER II WAS RELEASED IN ARCADES?\n\nA. 1990\nB. 1970\nC. 1992\nD. 1987\n\n";

    cin >> letter;

         if (letter == 'A'|| letter == 'a'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'B' || letter == 'b'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'C' || letter == 'c'){

         result = result + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;

    }else if (letter == 'D' || letter == 'd'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else{

    cout << "ERROR\n\n";

    cout << "YOUR SCORE REMAINS " << result;

    }
    cout << "\n\n9.WHICH OF THE FOLLOWING IS A GAME DEVELOPED USING PYTHON PROGRAMMING LANGUAGE?\n\nA. COUNTER-STRIKE\nB. WORLD OF WARCRAFT\nC. FOOTBALL PRO\nD. WORLD OF TANKS\n\n";

    cin >> letter;

          if (letter == 'A'|| letter == 'a'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'B' || letter == 'b'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'C' || letter == 'c'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'D' || letter == 'd'){

        result = result + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;

    }else{

    cout << "ERROR\n\n";

    cout << "YOUR SCORE REMAINS " << result;

    }
        cout << "\n\n10.WHO WAS THE FATHER OF VIDEO GAMES?\n\nA. RALPH BAER\nB. SHIGERO MIYAMOTO\nC. ANDREW SPINKS\nD. MARKUS PERSSON\n\n";

    cin >> letter;

          if (letter == 'A'|| letter == 'a'){

        result = result + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;
    }else if (letter == 'B' || letter == 'b'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'C' || letter == 'c'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'D' || letter == 'd'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else{

    cout << "ERROR\n\n";

    cout << "YOUR SCORE REMAINS " << result;

    }
    cout << "\n\n11.WHAT IS THE GENRE OF THE GAME MONSTER HUNTER?\n\nA. 2D PLATFORMER\nB. SURVIVAL\nC. FPS\nD. FANTASY, ACTION ROLE-PLAY\n\n";

    cin >> letter;

    if (letter == 'A'|| letter == 'a'){
        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'B' || letter == 'b'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'C' || letter == 'c'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'D' || letter == 'd'){

        result = result + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;

    }else{

    cout << "ERROR\n\n";

    cout << "YOUR SCORE REMAINS " << result;

    }
    cout << "\n\n12.WHO IS THE PROTAGONIST OF DEVIL MAY CRY?\n\nA. URIZEN\nB. DANTE\nC. NERO\nD. GILVIER\n\n";

    cin >> letter;

    if (letter == 'A'|| letter == 'a'){
        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'B' || letter == 'b'){

        result = result + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;

    }else if (letter == 'C' || letter == 'c'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'D' || letter == 'd'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else{

    cout << "ERROR\n\n";

    cout << "YOUR SCORE REMAINS " << result;

    }
    cout << "\n\n13.WHAT IS THE NUMBER 1 RULE IN MINECRAFT?\n\nA. NEVER HURT VILLAGERS\nB. NEVER LET LEAVES FLOATING\nC. NEVER CHEAT\nD. NEVER DIG STRAIGHT DOWN\n\n";

    cin >> letter;

    if (letter == 'A'|| letter == 'a'){
        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'B' || letter == 'b'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'C' || letter == 'c'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'D' || letter == 'd'){

        result = result + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;

    }else{

    cout << "ERROR\n\n";

    cout << "YOUR SCORE REMAINS " << result;

    }
    cout << "\n\n14.IN POKEMON, WHICH OF THE FOLLOWING IS A LEGENDARY POKEMON FROM GEN 1?\n\nA. KYOGRE\nB. GROUDON\nC. MOLTRES\nD. RAYQUAZA\n\n";

    cin >> letter;

    if (letter == 'A'|| letter == 'a'){
        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'B' || letter == 'b'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'C' || letter == 'c'){

        result = result + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;
    }else if (letter == 'D' || letter == 'd'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else{

    cout << "ERROR\n\n";

    cout << "YOUR SCORE REMAINS " << result;

    }
    cout << "\n\n15.IN DEVIL MAY CRY, WHAT IS VERGIL'S GOAL?\n\nA. TO PROTECT THE WORLD\nB. TO SAVE THE WORLD FROM EVIL\nC. TO RULE THE WORLD WITH DANTE\nD. TO BECOME THE MOST POWERFUL BEING\n\n";

    cin >> letter;

    if (letter == 'A'|| letter == 'a'){
        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'B' || letter == 'b'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'C' || letter == 'c'){

        result = result + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;
    }else if (letter == 'D' || letter == 'd'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else{

    cout << "ERROR\n\n";

    cout << "YOUR SCORE REMAINS " << result;

    }
    cout << "\n\n16.WHAT IS THE OLDEST GAME IN THE WORLD?\n\nA. MANCALA\nB. SENET\nC. MESOAMERICAN BALL GAME\nD. GYAN CHAUPER\n\n";

    cin >> letter;

    if (letter == 'A'|| letter == 'a'){
        result = result + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;
    }else if (letter == 'B' || letter == 'b'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'C' || letter == 'c'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'D' || letter == 'd'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else{

    cout << "ERROR\n\n";

    cout << "YOUR SCORE REMAINS " << result;

    }
     cout << "\n\n17.WHAT IS THE GENRE THAT ALLOW PLAYERS TO SEE THEIR CHARACTERS ON SIDE VIEW AS THE SCREEN MOVES THEM HORIZONTALLY AND VERTICALLY?\n\nA. FPS\nB. BOARD GAME\nC. 2D PLATFORMER\nD. 3D PLATFORMER\n\n";

    cin >> letter;

    if (letter == 'A'|| letter == 'a'){
         cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'B' || letter == 'b'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'C' || letter == 'c'){

        result = result + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;

    }else if (letter == 'D' || letter == 'd'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else{

    cout << "ERROR\n\n";

    cout << "YOUR SCORE REMAINS " << result;

    }
         cout << "\n\n18.THIS SURVIVAL GAME FEATURES A LONE SURVIVOR MAROONED ON AN ALIEN WORLD,IT JOURNEYS DEEP INTO EXTRATERRESTRIAL WATERS FILLED WITH MONSTERS.\n\nA. MINECRAFT\nB. RAFT\nC. GROUNDED\nD. SUBNAUTICA\n\n";

    cin >> letter;

    if (letter == 'A'|| letter == 'a'){
        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'B' || letter == 'b'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'C' || letter == 'c'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'D' || letter == 'd'){

        result = result + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;
    }else{

    cout << "ERROR\n\n";

    cout << "YOUR SCORE REMAINS " << result;

    }
             cout << "\n\n19.THE FOLLOWING ARE MONSTERS THAT BELONG IN THE MONSTER HUNTER SERIES EXCEPT.\n\nA. URAGAAN\nB. BAZELGUESE\nC. CTHULHU\nD. GLAVENUS\n\n";

    cin >> letter;

       if (letter == 'A'|| letter == 'a'){
        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;
    }else if (letter == 'B' || letter == 'b'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else if (letter == 'C' || letter == 'c'){

        result = result + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";
        cout << name << "'s score is now " <<result;

    }else if (letter == 'D' || letter == 'd'){

        cout << "\n\nWRONG ANSWER\n\n";
        cout << name << "'s score is " <<result << endl;

    }else{

    cout << "ERROR\n\n";

    cout << "YOUR SCORE REMAINS " << result;

    }
    cout << "\n\n20.WHAT ARE THE MOST POWERFUL MONSTERS IN MONSTER HUNTER?\n\nA. ELDER DRAGONS\nB. WYVERNS\nC. WINGDRAKE\nD. PISCINE WYVERNS\n\n";

    cin >> letter;

if (letter == 'A'|| letter == 'a'){
        result = result + a;
        cout << "\n\n\YOUR ANSWER IS CORRECT!\n\n";

    }else if (letter == 'B' || letter == 'b'){

        cout << "\n\nWRONG ANSWER\n\n";

    }else if (letter == 'C' || letter == 'c'){

        cout << "\n\nWRONG ANSWER\n\n";


    }else if (letter == 'D' || letter == 'd'){

        cout << "\n\nWRONG ANSWER\n\n";


    }else{

    cout << "ERROR\n\n";


    }
    cout << "YOUR TOTAL SCORE IS " << result << "\n\n";

    return 0;
}
