#include <stdio.h>

// Implementing function using the combinational boolean equations
void states(int s0, int s1, int o0, int b, int* S0, int* S1, int* O0) {
    *S0 = b;
    *S1 = s0 & (!s1) & (!b) | (!s0) & s1 | s1 & b;
    *O0 = (!s1) & b | s0 & (!s1) | (!s0) & s1 & (!b);

}

// // Implementing function using the truth table
// void states(int s0, int s1, int o0, int b, int* S0, int* S1, int* O0) {
//     *S0 = s0;
//     *S1 = s1;
//     *O0 = o0;

//     if ((s0 == 0) && (s1 == 0)) {
//         // State 1: Bulb OFF while not pushed
//         // 0	 0	0	0	0	0
//         // 0	 0	1	1	0	1
//         if (b == 0) {
//             *S0 = 0;
//             *S1 = 0;
//             *O0 = 0;
//         } else {
//             *S0 = 1;
//             *S1 = 0;
//             *O0 = 1;
//         }
//     } else if ((s0 == 1) && (s1 == 0)) {
//         // State 2: Bulb ON while pushed
//         // 1	 0	0	0	1	1
//         // 1	 0	1	1	0	1
//         if (b == 0) {
//             *S0 = 0;
//             *S1 = 1;
//             *O0 = 1;
//         } else {
//             *S0 = 1;
//             *S1 = 0;
//             *O0 = 1;
//         }
//     } else if ((s0 == 0) && (s1 == 1)) {
//         // State 3: Bulb ON while not pushed
//         // 0	 1	0	0	1	1
//         // 0	 1	1	1	1	0
//         if (b == 0){
//             *S0 = 0;
//             *S1 = 1;
//             *O0 = 1;
//         } else {
//             *S0 = 1;
//             *S1 = 1;
//             *O0 = 0;
//         }
//     } else if ((s0 == 1) && (s1 == 1)) {
//         // State 4: Bulb OFF while pushed
//         // 1	 1	0	0	0	0
//         // 1	 1	1	1	1	0
//         if (b == 0) {
//             *S0 = 0;
//             *S1 = 0;
//             *O0 = 0;
//         } else {
//             *S0 = 1;
//             *S1 = 1;
//             *O0 = 0;
//         }
//     }
// }

