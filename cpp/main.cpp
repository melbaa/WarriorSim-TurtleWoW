#ifndef USE_EMSCRIPTEN

#include "bindings.h"

int main()
{
    enableBuff( 2458, 1 );
    enableBuff( 27578, 1 );
    enableBuff( 22888, 1 );
    enableBuff( 24425, 1 );
    enableBuff( 23768, 1 );
    enableBuff( 22817, 1 );
    enableBuff( 15366, 1 );
    enableBuff( 16609, 1 );
    enableBuff( 9885, 1 );
    enableBuff( 20906, 1 );
    enableBuff( 20217, 1 );
    enableBuff( 19838, 1 );
    enableBuff( 8410, 1 );
    enableBuff( 13452, 1 );
    enableBuff( 12451, 1 );
    enableBuff( 12460, 1 );
    enableBuff( 13810, 1 );
    enableEnchant( ITEM_HEAD, 11645, 1 );
    enableEnchant( ITEM_SHOULDER, 29483, 1 );
    enableEnchant( ITEM_BACK, 13882, 1 );
    enableEnchant( ITEM_CHEST, 20025, 1 );
    enableEnchant( ITEM_WRIST, 20010, 1 );
    enableEnchant( ITEM_HANDS, 25080, 1 );
    enableEnchant( ITEM_LEGS, 11645, 1 );
    enableEnchant( ITEM_FEET, 13890, 1 );
    enableEnchant( ITEM_MAINHAND, 20034, 1 );
    enableEnchant( ITEM_MAINHAND, 18262, 1 );
    enableEnchant( ITEM_OFFHAND, 20034, 1 );
    enableEnchant( ITEM_OFFHAND, 18262, 1 );
    enableItem( ITEM_HEAD, 19372, 1 );
    enableItem( ITEM_NECK, 23053, 1 );
    enableItem( ITEM_SHOULDER, 21330, 1 );
    enableItem( ITEM_BACK, 23045, 1 );
    enableItem( ITEM_CHEST, 23000, 1 );
    enableItem( ITEM_WRIST, 22936, 1 );
    enableItem( ITEM_HANDS, 21581, 1 );
    enableItem( ITEM_WAIST, 23219, 1 );
    enableItem( ITEM_LEGS, 23068, 1 );
    enableItem( ITEM_FEET, 19387, 1 );
    enableItem( ITEM_FINGER1, 23038, 1 );
    enableItem( ITEM_FINGER2, 18821, 1 );
    enableItem( ITEM_TRINKET1, 23041, 1 );
    enableItem( ITEM_TRINKET2, 22954, 1 );
    enableItem( ITEM_RANGED, 22812, 1 );
    enableItem( ITEM_MAINHAND, 23054, 1 );
    enableItem( ITEM_OFFHAND, 23577, 1 );
    int* options;
    options = spellOptions( 23894 ); options[0] = 1; options[1] = 30; options[2] = 100;
    options = spellOptions( 27580 ); options[0] = 0; options[1] = 30; options[2] = 100;
    options = spellOptions( 11567 ); options[0] = 1; options[1] = 30; options[2] = 4; options[3] = 0; options[4] = 200; options[5] = 500;
    options = spellOptions( 20662 ); options[0] = 1; options[1] = 2000; options[2] = 100;
    options = spellOptions( 1680 ); options[0] = 1; options[1] = 50; options[2] = 2; options[3] = 300;
    options = spellOptions( 12328 ); options[0] = 1; options[1] = 31; options[2] = 0; options[3] = 300;
    options = spellOptions( 1719 ); options[0] = 0; options[1] = 16; options[2] = 300;
    options = spellOptions( 11585 ); options[0] = 0; options[1] = 25; options[2] = 2; options[3] = 300;
    options = spellOptions( 26296 ); options[0] = 0; options[1] = 11; options[2] = 30; options[3] = 300;
    options = spellOptions( 20572 ); options[0] = 0; options[1] = 26; options[2] = 300;
    options = spellOptions( 2687 ); options[0] = 1; options[1] = 100;
    options = spellOptions( 17528 ); options[0] = 1; options[1] = 21; options[2] = 0; options[3] = 100;
    options = spellOptions( 11597 ); options[0] = 1; options[1] = 1; options[2] = 300;
    options = spellOptions( 7373 ); options[0] = 0; options[1] = 50; options[2] = 100;
    options = spellOptions( 115671 ); options[0] = 0; options[1] = 30; options[2] = 0; options[3] = 200; options[4] = 100;
    Config* cfg = allocConfig();
    cfg->sim.timesecsmin = 50;
    cfg->sim.timesecsmax = 60;
    cfg->sim.executeperc = 20;
    cfg->sim.startrage = 0;
    cfg->sim.iterations = 1000;
    cfg->player.testId = -1;
    cfg->player.testType = -1;
    cfg->player.enchType = -1;
    cfg->player.race = RACE_HUMAN;
    cfg->player.aqbooks = 0;
    cfg->player.weaponrng = 1;
    cfg->player.spelldamage = 0;
    cfg->target.level = 63;
    cfg->target.basearmor = 336;
    cfg->target.armor = 336;
    cfg->target.defense = 315;
    cfg->target.mitigation = 0.94;
    cfg->target.binaryresist = 2197;
    Talents* talents = allocTalents();
    setTalent( talents, 124, 3 );
    setTalent( talents, 127, 3 );
    setTalent( talents, 641, 5 );
    setTalent( talents, 137, 1 );
    setTalent( talents, 121, 3 );
    setTalent( talents, 662, 2 );
    setTalent( talents, 157, 5 );
    setTalent( talents, 159, 5 );
    setTalent( talents, 154, 5 );
    setTalent( talents, 1581, 5 );
    setTalent( talents, 1542, 2 );
    setTalent( talents, 155, 5 );
    setTalent( talents, 165, 1 );
    setTalent( talents, 156, 5 );
    setTalent( talents, 167, 1 );
    Simulation* sim = allocSimulation( cfg, talents );
    runSimulation( sim );
    reportSimulation( sim, 1 );
    freeSimulation( sim );
    freeTalents( talents );
    freeConfig( cfg );
    return 0;
}

#endif