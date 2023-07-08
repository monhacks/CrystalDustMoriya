#ifndef GUARD_TRAINER_REMATCH_H
#define GUARD_TRAINER_REMATCH_H

enum {
    REMATCH_ANTHONY,
    REMATCH_RALPH,
    REMATCH_ARNIE,
    REMATCH_DANA,
    REMATCH_LILA_AND_ROY,
    REMATCH_JOEY,
    REMATCH_WADER,
    REMATCH_TODD,
    REMATCH_GINA,
    REMATCH_BEVERLY,
    REMATCH_ALAN,
    REMATCH_VANCE,
    REMATCH_TULLY,
    REMATCH_HUEY,
    REMATCH_TIFFANY,
    REMATCH_KENJI,
    REMATCH_ERIN,
    REMATCH_JOSE,
    REMATCH_JACK,
    REMATCH_REENA,
    REMATCH_GAVEN,
    REMATCH_BETH,
    REMATCH_WADE,
    REMATCH_LIZ,
    REMATCH_IRWIN,
    REMATCH_DEREK,
    REMATCH_CHRIS,
    REMATCH_BRENT,
    REMATCH_ANNA_AND_MEG,
    REMATCH_ISABEL,
    REMATCH_MIGUEL,
    REMATCH_TIMOTHY,
    REMATCH_SHELBY,
    REMATCH_CALVIN,
    REMATCH_ELLIOT,
    REMATCH_ISAIAH,
    REMATCH_MARIA,
    REMATCH_ABIGAIL,
    REMATCH_DYLAN,
    REMATCH_KATELYN,
    REMATCH_BENJAMIN,
    REMATCH_PABLO,
    REMATCH_NICOLAS,
    REMATCH_ROBERT,
    REMATCH_LAO,
    REMATCH_CYNDY,
    REMATCH_MADELINE,
    REMATCH_JENNY,
    REMATCH_DIANA,
    REMATCH_AMY_AND_LIV,
    REMATCH_ERNEST,
    REMATCH_CORY,
    REMATCH_EDWIN,
    REMATCH_LYDIA,
    REMATCH_ISAAC,
    REMATCH_GABRIELLE,
    REMATCH_CATHERINE,
    REMATCH_JACKSON,
    REMATCH_HALEY,
    REMATCH_JAMES,
    REMATCH_TRENT,
    REMATCH_SAWYER,
    REMATCH_KIRA_AND_DAN,
    REMATCH_WALLY_3,  // Entries above WALLY are considered normal trainers, from Wally below are special trainers
    REMATCH_ROXANNE,
    REMATCH_BRAWLY,
    REMATCH_WATTSON,
    REMATCH_FLANNERY,
    REMATCH_NORMAN,
    REMATCH_WINONA,
    REMATCH_TATE_AND_LIZA,
    REMATCH_JUAN,
    REMATCH_SIDNEY, // Entries below SIDNEY are considered part of REMATCH_ELITE_FOUR_ENTRIES.
    REMATCH_PHOEBE,
    REMATCH_GLACIA,
    REMATCH_DRAKE,
    REMATCH_WALLACE,
    REMATCH_TABLE_ENTRIES // The total number of rematch entries. Must be last in enum
};

#define REMATCH_SPECIAL_TRAINER_START   REMATCH_WALLY_3
#define REMATCH_ELITE_FOUR_ENTRIES      REMATCH_SIDNEY

void UpdateGymLeaderRematch(void);

#endif //GUARD_TRAINER_REMATCH_H
