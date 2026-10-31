#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_controls.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0165[4089] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 6, 7, 8, 0, 9, 0, 0, 10, 0, 0, 11, 0, 12, 0, 13, 0, 14, 15, 0, 16, 0,
    0, 17, 0, 0, 18, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 24, 25, 26, 0, 27, 0, 0, 28, 0, 29, 30, 0, 31, 0,
    0, 0, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 0, 40, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 45,
    0, 46, 47, 0, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57,
    0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 67, 0, 68,
    0, 69, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 0, 79, 0, 0, 0, 0,
    0, 80, 0, 81, 0, 82, 0, 0, 83, 0, 84, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 0, 90, 0, 91, 0,
    92, 0, 93, 0, 0, 94, 95, 96, 0, 0, 0, 97, 0, 98, 0, 0, 99, 0, 0, 100, 0, 101, 0, 0, 102, 0, 103, 0, 104, 0, 105, 0,
    0, 106, 107, 108, 0, 109, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118,
    0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 122, 123, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 127, 0, 128, 0,
    129, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 142, 0, 143, 0, 0, 144, 0, 0, 145, 0, 146, 0, 147, 0, 0, 148,
    0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 151, 0, 152, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 158, 0,
    159, 0, 160, 161, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 169, 0, 0, 170, 0, 0, 0, 171, 0,
    172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0,
    0, 182, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0, 0, 191, 0, 0, 0,
    192, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 201, 0, 202, 0, 0, 203,
    204, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 0, 0, 213, 0, 214, 0, 0, 0, 215, 0, 216,
    0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0,
    225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 0, 0, 234, 0, 235, 0, 236, 237, 0, 0, 0, 238, 0, 0,
    0, 0, 0, 239, 0, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 0, 247, 0, 248, 0, 0, 249, 250, 251, 0, 0,
    0, 252, 0, 0, 253, 0, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265,
    0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 274, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 280, 0,
    0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 285, 0, 286, 0, 287, 0, 0, 0, 0, 288, 289, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0,
    0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 303, 0, 304, 0, 0, 0,
    305, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0, 0, 309, 310, 0, 0, 311, 0, 0, 312, 0, 313, 0, 314, 0, 0, 315, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 323, 324, 0, 0, 325, 0,
    0, 326, 0, 327, 0, 328, 0, 0, 0, 0, 329, 330, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 335, 0, 0,
    0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 347, 348, 0,
    349, 0, 0, 350, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 358, 359, 0, 360, 0, 361, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0,
    364, 0, 365, 0, 366, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0,
    378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0,
    382, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 385, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 389, 390, 0, 0, 0, 0, 0, 391,
    0, 0, 0, 0, 0, 392, 0, 393, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 397, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400,
    0, 401, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 405, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 409, 410, 0, 0, 0,
    0, 0, 411, 0, 0, 0, 412, 0, 413, 414, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 417, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420,
    0, 421, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 425, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 429, 430, 0, 0, 0,
    0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 438,
    0, 0, 439, 0, 440, 0, 0, 441, 442, 0, 443, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 449, 0, 0, 450,
    0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0,
    461, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 464, 465, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 470,
    0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0,
    475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 478, 0, 0, 479, 0, 480, 0, 481, 0, 0, 0, 482, 0, 483, 0, 0, 484, 0, 485, 0,
    0, 0, 486, 0, 487, 0, 0, 488, 0, 489, 0, 0, 0, 490, 0, 491, 0, 0, 492, 0, 493, 0, 0, 0, 494, 0, 495, 0, 0, 496, 0, 497,
    0, 0, 0, 498, 0, 499, 0, 0, 0, 500, 0, 501, 0, 0, 0, 502, 0, 503, 0, 0, 504, 0, 505, 0, 0, 0, 506, 0, 507, 0, 0, 508,
    0, 509, 0, 0, 0, 510, 0, 511, 0, 0, 512, 0, 513, 0, 0, 0, 514, 0, 515, 0, 0, 516, 0, 517, 0, 0, 0, 518, 0, 519, 0, 0,
    520, 0, 521, 0, 0, 0, 522, 0, 523, 0, 0, 524, 0, 525, 0, 0, 0, 526, 0, 527, 0, 0, 528, 0, 529, 0, 0, 0, 530, 0, 531, 0,
    0, 532, 0, 533, 0, 0, 0, 534, 0, 535, 0, 0, 536, 0, 537, 0, 0, 0, 538, 0, 539, 0, 0, 540, 0, 541, 0, 0, 0, 542, 0, 543,
    0, 0, 544, 0, 545, 0, 0, 0, 546, 0, 547, 0, 0, 548, 0, 549, 0, 0, 0, 550, 0, 551, 0, 0, 552, 0, 553, 0, 0, 0, 554, 0,
    555, 0, 0, 556, 0, 557, 0, 0, 0, 558, 0, 559, 0, 0, 560, 0, 561, 0, 0, 0, 562, 0, 563, 0, 0, 564, 0, 565, 0, 0, 0, 566,
    0, 567, 0, 0, 568, 0, 0, 0, 569, 0, 570, 0, 0, 571, 0, 572, 0, 0, 0, 573, 0, 574, 0, 0, 575, 0, 576, 0, 0, 0, 577, 0,
    578, 0, 0, 579, 0, 0, 0, 580, 0, 581, 0, 0, 582, 0, 583, 0, 0, 0, 584, 0, 585, 0, 0, 586, 0, 587, 0, 0, 0, 588, 0, 589,
    0, 0, 590, 0, 591, 0, 0, 0, 592, 0, 593, 0, 0, 594, 0, 595, 0, 0, 0, 596, 0, 597, 0, 0, 598, 0, 599, 0, 0, 0, 600, 0,
    601, 0, 0, 602, 0, 603, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 607, 0, 0, 608, 0, 609, 610, 611,
    0, 0, 612, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 618, 0, 0, 619,
    0, 620, 621, 622, 0, 0, 623, 0, 0, 0, 0, 624, 0, 625, 0, 0, 0, 626, 0, 627, 0, 0, 628, 0, 629, 0, 0, 0, 630, 0, 631, 0,
    0, 632, 0, 633, 0, 0, 0, 634, 0, 635, 0, 0, 636, 0, 0, 0, 637, 0, 638, 0, 0, 639, 0, 640, 0, 0, 0, 641, 0, 642, 0, 0,
    643, 0, 644, 0, 0, 0, 645, 0, 646, 0, 0, 647, 0, 648, 0, 0, 0, 649, 0, 650, 0, 0, 651, 0, 652, 0, 0, 0, 653, 0, 654, 0,
    0, 655, 0, 656, 0, 0, 0, 657, 0, 658, 0, 0, 659, 0, 660, 0, 0, 0, 661, 0, 662, 0, 0, 663, 0, 664, 0, 0, 0, 665, 0, 666,
    0, 0, 667, 0, 668, 0, 0, 0, 669, 0, 670, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 674,
    0, 0, 675, 0, 676, 0, 0, 677, 0, 678, 0, 679, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0,
    0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 692, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0,
    0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 697, 0, 0, 698,
    0, 699, 0, 0, 700, 0, 0, 701, 0, 702, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 704, 0, 0, 705, 0, 0, 706, 0, 0, 0, 707, 0,
    0, 0, 708, 0, 709, 0, 710, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0, 0, 715,
    0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 717, 718, 0, 0, 0, 719, 0, 720, 0, 0, 721, 0, 0, 0, 722, 0, 723, 0, 0, 724, 0, 0,
    0, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 727, 0, 0, 728, 0, 0, 0, 729, 730, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 732, 0, 733, 0, 0, 734, 0, 0, 0, 735, 0, 0, 736, 0, 737, 0, 0, 738, 0, 739, 0, 740, 0, 741, 0,
    0, 742, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 746, 0, 747,
    748, 0, 749, 0, 0, 0, 0, 0, 750, 0, 751, 0, 752, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 0, 755, 0, 0, 756,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 758, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 762, 0, 763, 0,
    764, 0, 0, 0, 0, 0, 0, 765, 766, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 769, 0, 0, 0, 770, 0, 0, 771,
    0, 772, 0, 0, 773, 774, 0, 775, 0, 0, 776, 0, 0, 777, 0, 0, 0, 0, 778, 0, 0, 779, 0, 0, 780, 0, 0, 781, 0, 0, 782, 0,
    0, 783, 0, 0, 784, 0, 0, 785, 786, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 789, 0, 790, 0, 0,
    791, 0, 0, 0, 792, 0, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 0, 0, 796, 797, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0,
    0, 799, 0, 0, 800, 0, 0, 0, 0, 0, 801, 0, 0, 802, 0, 0, 0, 0, 0, 803, 0, 0, 804, 0, 0, 0, 0, 0, 805, 0, 0, 806,
    0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 809, 810, 0, 0, 811, 0, 0, 812, 0, 813, 0, 0,
    0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 0, 818, 0, 0, 819, 0, 0, 820, 0, 0, 821, 0, 822, 0,
    0, 823, 0, 0, 824, 0, 825, 0, 0, 826, 0, 0, 827, 0, 828, 0, 0, 829, 830, 0, 831, 0, 0, 0, 832, 0, 833, 0, 834, 0, 835, 0,
    836, 0, 837, 0, 0, 838, 0, 0, 0, 839, 0, 840, 0, 841, 0, 842, 0, 0, 843, 0, 844, 0, 845, 0, 846, 0, 0, 0, 0, 847, 0, 0,
    0, 0, 0, 0, 0, 848, 0, 0, 849, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0, 851, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 852, 0, 853, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0,
    857, 0, 858, 0, 859, 0, 860, 0, 0, 861, 0, 0, 862, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 0,
    865, 0, 0, 0, 0, 0, 866, 0, 867, 0, 0, 868, 0, 0, 869, 0, 0, 0, 0, 0, 0, 0, 870, 0, 0, 0, 0, 0, 0, 0, 0, 871,
    0, 0, 872, 0, 0, 0, 0, 0, 873, 0, 874, 0, 0, 0, 0, 0, 0, 0, 875, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 877, 0, 878, 0, 879, 0, 880, 0, 0, 881, 0, 882, 883, 0, 884, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 885,
    0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 889,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0, 891, 0, 0, 892, 0, 893, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 894, 0, 0, 0, 0, 895, 0, 896, 0, 897, 0, 898, 0, 899, 0, 900, 0, 0,
    901, 0, 0, 902, 0, 903, 0, 904, 0, 0, 0, 905, 0, 0, 906, 0, 907, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 908, 0, 909, 0, 910, 0, 0, 0, 0, 0, 0, 0, 911, 0, 0, 0, 0, 912,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 913, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 914, 0, 915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 916, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 917, 0, 0, 0, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0, 919, 0, 0, 0, 0, 0, 0, 920, 0, 0, 0, 0,
    921, 0, 0, 0, 0, 0, 0, 922, 0, 0, 0, 0, 923, 0, 0, 0, 924, 0, 0, 0, 0, 0, 925, 0, 0, 926, 0, 0, 0, 0, 0, 927,
    0, 928, 0, 0, 0, 0, 929, 0, 0, 0, 0, 930, 0, 0, 0, 0, 0, 0, 0, 0, 0, 931, 0, 0, 0, 932, 0, 0, 933, 0, 934, 935,
    0, 0, 0, 0, 936, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 937, 0, 0, 0, 0, 0, 938, 0, 0, 0, 0, 0, 0, 939,
    0, 0, 0, 0, 940, 0, 0, 0, 941, 0, 0, 0, 0, 0, 942, 0, 0, 943, 0, 0, 0, 0, 944, 0, 0, 0, 0, 945, 0, 0, 0, 0,
    0, 0, 0, 946, 0, 947, 0, 948, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 949, 0, 950, 0, 951, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 952, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 953, 0, 0, 954, 0, 955, 0, 0, 0, 0, 0, 956, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 957, 0, 958, 0, 959, 0, 0, 0, 0, 960, 0, 0, 0, 0, 0, 961, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 962, 0, 0, 963, 0, 964, 0, 965, 0, 966, 0, 967, 0, 0, 0, 0, 0, 0, 968, 0, 0, 969,
    0, 0, 0, 970, 0, 0, 0, 971, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 972, 0, 0, 0, 973, 0, 974, 0, 0, 0, 0, 975, 0, 0,
    0, 976, 0, 0, 0, 0, 0, 0, 977, 0, 0, 0, 978, 0, 0, 0, 0, 0, 0, 979, 0, 0, 0, 980, 981, 0, 0, 0, 982, 0, 983, 0,
    984, 0, 0, 0, 0, 985, 0, 0, 986, 0, 0, 0, 0, 0, 0, 0, 987, 0, 0, 0, 0, 0, 0, 0, 0, 988, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 989, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 990,
    0, 991, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 992, 0, 993, 0, 0, 0, 0, 994, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 995, 0, 996, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 997, 0, 998, 0, 0, 0, 0, 999, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000, 0, 1001, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1002, 0, 1003, 0, 0, 0, 0, 1004, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1005, 0, 1006, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1007, 0, 1008, 0, 0, 0, 0, 1009, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1010, 0, 1011, 0, 0, 0, 0, 1012, 1013, 0, 0, 0, 0, 0, 1014, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1015, 0, 1016, 0, 0, 0, 0, 1017, 0, 0, 0, 0, 0, 0, 1018,
};
void recomp_unit_0165_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A98004u;
        entry_id = (entry_delta < 16356u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0165[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A98004;
    case 2u: goto L_08A9800C;
    case 3u: goto L_08A98014;
    case 4u: goto L_08A9801C;
    case 5u: goto L_08A98024;
    case 6u: goto L_08A98030;
    case 7u: goto L_08A98034;
    case 8u: goto L_08A98038;
    case 9u: goto L_08A98040;
    case 10u: goto L_08A9804C;
    case 11u: goto L_08A98058;
    case 12u: goto L_08A98060;
    case 13u: goto L_08A98068;
    case 14u: goto L_08A98070;
    case 15u: goto L_08A98074;
    case 16u: goto L_08A9807C;
    case 17u: goto L_08A98088;
    case 18u: goto L_08A98094;
    case 19u: goto L_08A9809C;
    case 20u: goto L_08A980A8;
    case 21u: goto L_08A980B0;
    case 22u: goto L_08A980B8;
    case 23u: goto L_08A980C0;
    case 24u: goto L_08A980CC;
    case 25u: goto L_08A980D0;
    case 26u: goto L_08A980D4;
    case 27u: goto L_08A980DC;
    case 28u: goto L_08A980E8;
    case 29u: goto L_08A980F0;
    case 30u: goto L_08A980F4;
    case 31u: goto L_08A980FC;
    case 32u: goto L_08A98110;
    case 33u: goto L_08A98118;
    case 34u: goto L_08A98120;
    case 35u: goto L_08A98128;
    case 36u: goto L_08A98130;
    case 37u: goto L_08A98138;
    case 38u: goto L_08A98140;
    case 39u: goto L_08A98148;
    case 40u: goto L_08A98154;
    case 41u: goto L_08A9815C;
    case 42u: goto L_08A98164;
    case 43u: goto L_08A98170;
    case 44u: goto L_08A98178;
    case 45u: goto L_08A98180;
    case 46u: goto L_08A98188;
    case 47u: goto L_08A9818C;
    case 48u: goto L_08A9819C;
    case 49u: goto L_08A981A4;
    case 50u: goto L_08A981B4;
    case 51u: goto L_08A981C0;
    case 52u: goto L_08A981D4;
    case 53u: goto L_08A981E0;
    case 54u: goto L_08A981E8;
    case 55u: goto L_08A981F0;
    case 56u: goto L_08A981F8;
    case 57u: goto L_08A98200;
    case 58u: goto L_08A9820C;
    case 59u: goto L_08A98220;
    case 60u: goto L_08A9822C;
    case 61u: goto L_08A98234;
    case 62u: goto L_08A9823C;
    case 63u: goto L_08A98244;
    case 64u: goto L_08A9824C;
    case 65u: goto L_08A98258;
    case 66u: goto L_08A9826C;
    case 67u: goto L_08A98278;
    case 68u: goto L_08A98280;
    case 69u: goto L_08A98288;
    case 70u: goto L_08A98290;
    case 71u: goto L_08A98298;
    case 72u: goto L_08A982A4;
    case 73u: goto L_08A982B8;
    case 74u: goto L_08A982C4;
    case 75u: goto L_08A982CC;
    case 76u: goto L_08A982D4;
    case 77u: goto L_08A982DC;
    case 78u: goto L_08A982E4;
    case 79u: goto L_08A982F0;
    case 80u: goto L_08A98308;
    case 81u: goto L_08A98310;
    case 82u: goto L_08A98318;
    case 83u: goto L_08A98324;
    case 84u: goto L_08A9832C;
    case 85u: goto L_08A98330;
    case 86u: goto L_08A98340;
    case 87u: goto L_08A98358;
    case 88u: goto L_08A98360;
    case 89u: goto L_08A98368;
    case 90u: goto L_08A98374;
    case 91u: goto L_08A9837C;
    case 92u: goto L_08A98384;
    case 93u: goto L_08A9838C;
    case 94u: goto L_08A98398;
    case 95u: goto L_08A9839C;
    case 96u: goto L_08A983A0;
    case 97u: goto L_08A983B0;
    case 98u: goto L_08A983B8;
    case 99u: goto L_08A983C4;
    case 100u: goto L_08A983D0;
    case 101u: goto L_08A983D8;
    case 102u: goto L_08A983E4;
    case 103u: goto L_08A983EC;
    case 104u: goto L_08A983F4;
    case 105u: goto L_08A983FC;
    case 106u: goto L_08A98408;
    case 107u: goto L_08A9840C;
    case 108u: goto L_08A98410;
    case 109u: goto L_08A98418;
    case 110u: goto L_08A98424;
    case 111u: goto L_08A98430;
    case 112u: goto L_08A98438;
    case 113u: goto L_08A98440;
    case 114u: goto L_08A98448;
    case 115u: goto L_08A98450;
    case 116u: goto L_08A98458;
    case 117u: goto L_08A98478;
    case 118u: goto L_08A98480;
    case 119u: goto L_08A9848C;
    case 120u: goto L_08A98494;
    case 121u: goto L_08A9849C;
    case 122u: goto L_08A984B8;
    case 123u: goto L_08A984BC;
    case 124u: goto L_08A984D4;
    case 125u: goto L_08A984E0;
    case 126u: goto L_08A984EC;
    case 127u: goto L_08A984F4;
    case 128u: goto L_08A984FC;
    case 129u: goto L_08A98504;
    case 130u: goto L_08A9850C;
    case 131u: goto L_08A98514;
    case 132u: goto L_08A98528;
    case 133u: goto L_08A9853C;
    case 134u: goto L_08A98550;
    case 135u: goto L_08A98560;
    case 136u: goto L_08A98578;
    case 137u: goto L_08A98594;
    case 138u: goto L_08A985A0;
    case 139u: goto L_08A985A8;
    case 140u: goto L_08A985B0;
    case 141u: goto L_08A985B8;
    case 142u: goto L_08A985C4;
    case 143u: goto L_08A985CC;
    case 144u: goto L_08A985D8;
    case 145u: goto L_08A985E4;
    case 146u: goto L_08A985EC;
    case 147u: goto L_08A985F4;
    case 148u: goto L_08A98600;
    case 149u: goto L_08A98618;
    case 150u: goto L_08A98624;
    case 151u: goto L_08A9862C;
    case 152u: goto L_08A98634;
    case 153u: goto L_08A98638;
    case 154u: goto L_08A9864C;
    case 155u: goto L_08A98660;
    case 156u: goto L_08A9866C;
    case 157u: goto L_08A98674;
    case 158u: goto L_08A9867C;
    case 159u: goto L_08A98684;
    case 160u: goto L_08A9868C;
    case 161u: goto L_08A98690;
    case 162u: goto L_08A9869C;
    case 163u: goto L_08A986B0;
    case 164u: goto L_08A986BC;
    case 165u: goto L_08A986C4;
    case 166u: goto L_08A986CC;
    case 167u: goto L_08A986D4;
    case 168u: goto L_08A986DC;
    case 169u: goto L_08A986E0;
    case 170u: goto L_08A986EC;
    case 171u: goto L_08A986FC;
    case 172u: goto L_08A98704;
    case 173u: goto L_08A98714;
    case 174u: goto L_08A98724;
    case 175u: goto L_08A98730;
    case 176u: goto L_08A98738;
    case 177u: goto L_08A98744;
    case 178u: goto L_08A98754;
    case 179u: goto L_08A9875C;
    case 180u: goto L_08A9876C;
    case 181u: goto L_08A9877C;
    case 182u: goto L_08A98788;
    case 183u: goto L_08A98790;
    case 184u: goto L_08A9879C;
    case 185u: goto L_08A987AC;
    case 186u: goto L_08A987B4;
    case 187u: goto L_08A987C4;
    case 188u: goto L_08A987D4;
    case 189u: goto L_08A987E0;
    case 190u: goto L_08A987E8;
    case 191u: goto L_08A987F4;
    case 192u: goto L_08A98804;
    case 193u: goto L_08A9880C;
    case 194u: goto L_08A9881C;
    case 195u: goto L_08A9882C;
    case 196u: goto L_08A98838;
    case 197u: goto L_08A98840;
    case 198u: goto L_08A9884C;
    case 199u: goto L_08A98858;
    case 200u: goto L_08A98864;
    case 201u: goto L_08A9886C;
    case 202u: goto L_08A98874;
    case 203u: goto L_08A98880;
    case 204u: goto L_08A98884;
    case 205u: goto L_08A98888;
    case 206u: goto L_08A98890;
    case 207u: goto L_08A988A8;
    case 208u: goto L_08A988B0;
    case 209u: goto L_08A988B8;
    case 210u: goto L_08A988C0;
    case 211u: goto L_08A988C8;
    case 212u: goto L_08A988D0;
    case 213u: goto L_08A988E0;
    case 214u: goto L_08A988E8;
    case 215u: goto L_08A988F8;
    case 216u: goto L_08A98900;
    case 217u: goto L_08A98910;
    case 218u: goto L_08A9891C;
    case 219u: goto L_08A98924;
    case 220u: goto L_08A9892C;
    case 221u: goto L_08A98934;
    case 222u: goto L_08A9893C;
    case 223u: goto L_08A98948;
    case 224u: goto L_08A9897C;
    case 225u: goto L_08A98984;
    case 226u: goto L_08A9898C;
    case 227u: goto L_08A98994;
    case 228u: goto L_08A9899C;
    case 229u: goto L_08A989A4;
    case 230u: goto L_08A989AC;
    case 231u: goto L_08A989B4;
    case 232u: goto L_08A989BC;
    case 233u: goto L_08A989C4;
    case 234u: goto L_08A989D4;
    case 235u: goto L_08A989DC;
    case 236u: goto L_08A989E4;
    case 237u: goto L_08A989E8;
    case 238u: goto L_08A989F8;
    case 239u: goto L_08A98A10;
    case 240u: goto L_08A98A20;
    case 241u: goto L_08A98A28;
    case 242u: goto L_08A98A30;
    case 243u: goto L_08A98A38;
    case 244u: goto L_08A98A40;
    case 245u: goto L_08A98A48;
    case 246u: goto L_08A98A50;
    case 247u: goto L_08A98A5C;
    case 248u: goto L_08A98A64;
    case 249u: goto L_08A98A70;
    case 250u: goto L_08A98A74;
    case 251u: goto L_08A98A78;
    case 252u: goto L_08A98A88;
    case 253u: goto L_08A98A94;
    case 254u: goto L_08A98AA0;
    case 255u: goto L_08A98AA8;
    case 256u: goto L_08A98AB0;
    case 257u: goto L_08A98AB8;
    case 258u: goto L_08A98AC0;
    case 259u: goto L_08A98AC8;
    case 260u: goto L_08A98AD4;
    case 261u: goto L_08A98AE0;
    case 262u: goto L_08A98AE8;
    case 263u: goto L_08A98AF0;
    case 264u: goto L_08A98AF8;
    case 265u: goto L_08A98B00;
    case 266u: goto L_08A98B08;
    case 267u: goto L_08A98B24;
    case 268u: goto L_08A98B2C;
    case 269u: goto L_08A98B34;
    case 270u: goto L_08A98B40;
    case 271u: goto L_08A98B58;
    case 272u: goto L_08A98B60;
    case 273u: goto L_08A98B84;
    case 274u: goto L_08A98B8C;
    case 275u: goto L_08A98B94;
    case 276u: goto L_08A98B9C;
    case 277u: goto L_08A98BB8;
    case 278u: goto L_08A98BD4;
    case 279u: goto L_08A98BF8;
    case 280u: goto L_08A98BFC;
    case 281u: goto L_08A98C0C;
    case 282u: goto L_08A98C28;
    case 283u: goto L_08A98C30;
    case 284u: goto L_08A98C38;
    case 285u: goto L_08A98C44;
    case 286u: goto L_08A98C4C;
    case 287u: goto L_08A98C54;
    case 288u: goto L_08A98C68;
    case 289u: goto L_08A98C6C;
    case 290u: goto L_08A98C84;
    case 291u: goto L_08A98CA0;
    case 292u: goto L_08A98CB4;
    case 293u: goto L_08A98CBC;
    case 294u: goto L_08A98CD0;
    case 295u: goto L_08A98CD4;
    case 296u: goto L_08A98CEC;
    case 297u: goto L_08A98D08;
    case 298u: goto L_08A98D28;
    case 299u: goto L_08A98D2C;
    case 300u: goto L_08A98D3C;
    case 301u: goto L_08A98D5C;
    case 302u: goto L_08A98D64;
    case 303u: goto L_08A98D6C;
    case 304u: goto L_08A98D74;
    case 305u: goto L_08A98D84;
    case 306u: goto L_08A98D8C;
    case 307u: goto L_08A98D9C;
    case 308u: goto L_08A98DA4;
    case 309u: goto L_08A98DB4;
    case 310u: goto L_08A98DB8;
    case 311u: goto L_08A98DC4;
    case 312u: goto L_08A98DD0;
    case 313u: goto L_08A98DD8;
    case 314u: goto L_08A98DE0;
    case 315u: goto L_08A98DEC;
    case 316u: goto L_08A98E00;
    case 317u: goto L_08A98E14;
    case 318u: goto L_08A98E28;
    case 319u: goto L_08A98E2C;
    case 320u: goto L_08A98E3C;
    case 321u: goto L_08A98E5C;
    case 322u: goto L_08A98E64;
    case 323u: goto L_08A98E6C;
    case 324u: goto L_08A98E70;
    case 325u: goto L_08A98E7C;
    case 326u: goto L_08A98E88;
    case 327u: goto L_08A98E90;
    case 328u: goto L_08A98E98;
    case 329u: goto L_08A98EAC;
    case 330u: goto L_08A98EB0;
    case 331u: goto L_08A98EB8;
    case 332u: goto L_08A98ECC;
    case 333u: goto L_08A98EE0;
    case 334u: goto L_08A98EF4;
    case 335u: goto L_08A98EF8;
    case 336u: goto L_08A98F08;
    case 337u: goto L_08A98F1C;
    case 338u: goto L_08A98F38;
    case 339u: goto L_08A98F88;
    case 340u: goto L_08A98FAC;
    case 341u: goto L_08A98FB4;
    case 342u: goto L_08A98FBC;
    case 343u: goto L_08A98FC4;
    case 344u: goto L_08A98FE0;
    case 345u: goto L_08A98FE8;
    case 346u: goto L_08A98FF0;
    case 347u: goto L_08A98FF8;
    case 348u: goto L_08A98FFC;
    case 349u: goto L_08A99004;
    case 350u: goto L_08A99010;
    case 351u: goto L_08A99018;
    case 352u: goto L_08A99020;
    case 353u: goto L_08A9904C;
    case 354u: goto L_08A99054;
    case 355u: goto L_08A99058;
    case 356u: goto L_08A9909C;
    case 357u: goto L_08A990B0;
    case 358u: goto L_08A990B8;
    case 359u: goto L_08A990BC;
    case 360u: goto L_08A990C4;
    case 361u: goto L_08A990CC;
    case 362u: goto L_08A990D0;
    case 363u: goto L_08A990EC;
    case 364u: goto L_08A99104;
    case 365u: goto L_08A9910C;
    case 366u: goto L_08A99114;
    case 367u: goto L_08A9911C;
    case 368u: goto L_08A9912C;
    case 369u: goto L_08A99160;
    case 370u: goto L_08A99198;
    case 371u: goto L_08A991A8;
    case 372u: goto L_08A991DC;
    case 373u: goto L_08A99214;
    case 374u: goto L_08A99228;
    case 375u: goto L_08A99230;
    case 376u: goto L_08A99238;
    case 377u: goto L_08A9927C;
    case 378u: goto L_08A99284;
    case 379u: goto L_08A9928C;
    case 380u: goto L_08A992DC;
    case 381u: goto L_08A992F0;
    case 382u: goto L_08A99304;
    case 383u: goto L_08A99318;
    case 384u: goto L_08A99328;
    case 385u: goto L_08A99330;
    case 386u: goto L_08A99334;
    case 387u: goto L_08A9934C;
    case 388u: goto L_08A9935C;
    case 389u: goto L_08A99364;
    case 390u: goto L_08A99368;
    case 391u: goto L_08A99380;
    case 392u: goto L_08A99398;
    case 393u: goto L_08A993A0;
    case 394u: goto L_08A993A4;
    case 395u: goto L_08A993BC;
    case 396u: goto L_08A993CC;
    case 397u: goto L_08A993D4;
    case 398u: goto L_08A993D8;
    case 399u: goto L_08A993F0;
    case 400u: goto L_08A99400;
    case 401u: goto L_08A99408;
    case 402u: goto L_08A9940C;
    case 403u: goto L_08A99424;
    case 404u: goto L_08A99434;
    case 405u: goto L_08A9943C;
    case 406u: goto L_08A99440;
    case 407u: goto L_08A99458;
    case 408u: goto L_08A99468;
    case 409u: goto L_08A99470;
    case 410u: goto L_08A99474;
    case 411u: goto L_08A9948C;
    case 412u: goto L_08A9949C;
    case 413u: goto L_08A994A4;
    case 414u: goto L_08A994A8;
    case 415u: goto L_08A994BC;
    case 416u: goto L_08A994CC;
    case 417u: goto L_08A994D4;
    case 418u: goto L_08A994D8;
    case 419u: goto L_08A994F0;
    case 420u: goto L_08A99500;
    case 421u: goto L_08A99508;
    case 422u: goto L_08A9950C;
    case 423u: goto L_08A99524;
    case 424u: goto L_08A99534;
    case 425u: goto L_08A9953C;
    case 426u: goto L_08A99540;
    case 427u: goto L_08A99558;
    case 428u: goto L_08A99568;
    case 429u: goto L_08A99570;
    case 430u: goto L_08A99574;
    case 431u: goto L_08A99598;
    case 432u: goto L_08A995A8;
    case 433u: goto L_08A995C8;
    case 434u: goto L_08A995D4;
    case 435u: goto L_08A995E0;
    case 436u: goto L_08A995EC;
    case 437u: goto L_08A995F8;
    case 438u: goto L_08A99600;
    case 439u: goto L_08A9960C;
    case 440u: goto L_08A99614;
    case 441u: goto L_08A99620;
    case 442u: goto L_08A99624;
    case 443u: goto L_08A9962C;
    case 444u: goto L_08A99638;
    case 445u: goto L_08A99644;
    case 446u: goto L_08A99650;
    case 447u: goto L_08A9965C;
    case 448u: goto L_08A99668;
    case 449u: goto L_08A99674;
    case 450u: goto L_08A99680;
    case 451u: goto L_08A9968C;
    case 452u: goto L_08A99698;
    case 453u: goto L_08A996A4;
    case 454u: goto L_08A996B0;
    case 455u: goto L_08A996BC;
    case 456u: goto L_08A996C8;
    case 457u: goto L_08A996D4;
    case 458u: goto L_08A996E0;
    case 459u: goto L_08A996EC;
    case 460u: goto L_08A996F8;
    case 461u: goto L_08A99704;
    case 462u: goto L_08A99710;
    case 463u: goto L_08A9971C;
    case 464u: goto L_08A99734;
    case 465u: goto L_08A99738;
    case 466u: goto L_08A99740;
    case 467u: goto L_08A99754;
    case 468u: goto L_08A99768;
    case 469u: goto L_08A99778;
    case 470u: goto L_08A99780;
    case 471u: goto L_08A9978C;
    case 472u: goto L_08A99794;
    case 473u: goto L_08A997C0;
    case 474u: goto L_08A997E8;
    case 475u: goto L_08A99804;
    case 476u: goto L_08A99818;
    case 477u: goto L_08A9982C;
    case 478u: goto L_08A99834;
    case 479u: goto L_08A99840;
    case 480u: goto L_08A99848;
    case 481u: goto L_08A99850;
    case 482u: goto L_08A99860;
    case 483u: goto L_08A99868;
    case 484u: goto L_08A99874;
    case 485u: goto L_08A9987C;
    case 486u: goto L_08A9988C;
    case 487u: goto L_08A99894;
    case 488u: goto L_08A998A0;
    case 489u: goto L_08A998A8;
    case 490u: goto L_08A998B8;
    case 491u: goto L_08A998C0;
    case 492u: goto L_08A998CC;
    case 493u: goto L_08A998D4;
    case 494u: goto L_08A998E4;
    case 495u: goto L_08A998EC;
    case 496u: goto L_08A998F8;
    case 497u: goto L_08A99900;
    case 498u: goto L_08A99910;
    case 499u: goto L_08A99918;
    case 500u: goto L_08A99928;
    case 501u: goto L_08A99930;
    case 502u: goto L_08A99940;
    case 503u: goto L_08A99948;
    case 504u: goto L_08A99954;
    case 505u: goto L_08A9995C;
    case 506u: goto L_08A9996C;
    case 507u: goto L_08A99974;
    case 508u: goto L_08A99980;
    case 509u: goto L_08A99988;
    case 510u: goto L_08A99998;
    case 511u: goto L_08A999A0;
    case 512u: goto L_08A999AC;
    case 513u: goto L_08A999B4;
    case 514u: goto L_08A999C4;
    case 515u: goto L_08A999CC;
    case 516u: goto L_08A999D8;
    case 517u: goto L_08A999E0;
    case 518u: goto L_08A999F0;
    case 519u: goto L_08A999F8;
    case 520u: goto L_08A99A04;
    case 521u: goto L_08A99A0C;
    case 522u: goto L_08A99A1C;
    case 523u: goto L_08A99A24;
    case 524u: goto L_08A99A30;
    case 525u: goto L_08A99A38;
    case 526u: goto L_08A99A48;
    case 527u: goto L_08A99A50;
    case 528u: goto L_08A99A5C;
    case 529u: goto L_08A99A64;
    case 530u: goto L_08A99A74;
    case 531u: goto L_08A99A7C;
    case 532u: goto L_08A99A88;
    case 533u: goto L_08A99A90;
    case 534u: goto L_08A99AA0;
    case 535u: goto L_08A99AA8;
    case 536u: goto L_08A99AB4;
    case 537u: goto L_08A99ABC;
    case 538u: goto L_08A99ACC;
    case 539u: goto L_08A99AD4;
    case 540u: goto L_08A99AE0;
    case 541u: goto L_08A99AE8;
    case 542u: goto L_08A99AF8;
    case 543u: goto L_08A99B00;
    case 544u: goto L_08A99B0C;
    case 545u: goto L_08A99B14;
    case 546u: goto L_08A99B24;
    case 547u: goto L_08A99B2C;
    case 548u: goto L_08A99B38;
    case 549u: goto L_08A99B40;
    case 550u: goto L_08A99B50;
    case 551u: goto L_08A99B58;
    case 552u: goto L_08A99B64;
    case 553u: goto L_08A99B6C;
    case 554u: goto L_08A99B7C;
    case 555u: goto L_08A99B84;
    case 556u: goto L_08A99B90;
    case 557u: goto L_08A99B98;
    case 558u: goto L_08A99BA8;
    case 559u: goto L_08A99BB0;
    case 560u: goto L_08A99BBC;
    case 561u: goto L_08A99BC4;
    case 562u: goto L_08A99BD4;
    case 563u: goto L_08A99BDC;
    case 564u: goto L_08A99BE8;
    case 565u: goto L_08A99BF0;
    case 566u: goto L_08A99C00;
    case 567u: goto L_08A99C08;
    case 568u: goto L_08A99C14;
    case 569u: goto L_08A99C24;
    case 570u: goto L_08A99C2C;
    case 571u: goto L_08A99C38;
    case 572u: goto L_08A99C40;
    case 573u: goto L_08A99C50;
    case 574u: goto L_08A99C58;
    case 575u: goto L_08A99C64;
    case 576u: goto L_08A99C6C;
    case 577u: goto L_08A99C7C;
    case 578u: goto L_08A99C84;
    case 579u: goto L_08A99C90;
    case 580u: goto L_08A99CA0;
    case 581u: goto L_08A99CA8;
    case 582u: goto L_08A99CB4;
    case 583u: goto L_08A99CBC;
    case 584u: goto L_08A99CCC;
    case 585u: goto L_08A99CD4;
    case 586u: goto L_08A99CE0;
    case 587u: goto L_08A99CE8;
    case 588u: goto L_08A99CF8;
    case 589u: goto L_08A99D00;
    case 590u: goto L_08A99D0C;
    case 591u: goto L_08A99D14;
    case 592u: goto L_08A99D24;
    case 593u: goto L_08A99D2C;
    case 594u: goto L_08A99D38;
    case 595u: goto L_08A99D40;
    case 596u: goto L_08A99D50;
    case 597u: goto L_08A99D58;
    case 598u: goto L_08A99D64;
    case 599u: goto L_08A99D6C;
    case 600u: goto L_08A99D7C;
    case 601u: goto L_08A99D84;
    case 602u: goto L_08A99D90;
    case 603u: goto L_08A99D98;
    case 604u: goto L_08A99DA8;
    case 605u: goto L_08A99DB0;
    case 606u: goto L_08A99DD8;
    case 607u: goto L_08A99DE4;
    case 608u: goto L_08A99DF0;
    case 609u: goto L_08A99DF8;
    case 610u: goto L_08A99DFC;
    case 611u: goto L_08A99E00;
    case 612u: goto L_08A99E0C;
    case 613u: goto L_08A99E20;
    case 614u: goto L_08A99E28;
    case 615u: goto L_08A99E38;
    case 616u: goto L_08A99E40;
    case 617u: goto L_08A99E68;
    case 618u: goto L_08A99E74;
    case 619u: goto L_08A99E80;
    case 620u: goto L_08A99E88;
    case 621u: goto L_08A99E8C;
    case 622u: goto L_08A99E90;
    case 623u: goto L_08A99E9C;
    case 624u: goto L_08A99EB0;
    case 625u: goto L_08A99EB8;
    case 626u: goto L_08A99EC8;
    case 627u: goto L_08A99ED0;
    case 628u: goto L_08A99EDC;
    case 629u: goto L_08A99EE4;
    case 630u: goto L_08A99EF4;
    case 631u: goto L_08A99EFC;
    case 632u: goto L_08A99F08;
    case 633u: goto L_08A99F10;
    case 634u: goto L_08A99F20;
    case 635u: goto L_08A99F28;
    case 636u: goto L_08A99F34;
    case 637u: goto L_08A99F44;
    case 638u: goto L_08A99F4C;
    case 639u: goto L_08A99F58;
    case 640u: goto L_08A99F60;
    case 641u: goto L_08A99F70;
    case 642u: goto L_08A99F78;
    case 643u: goto L_08A99F84;
    case 644u: goto L_08A99F8C;
    case 645u: goto L_08A99F9C;
    case 646u: goto L_08A99FA4;
    case 647u: goto L_08A99FB0;
    case 648u: goto L_08A99FB8;
    case 649u: goto L_08A99FC8;
    case 650u: goto L_08A99FD0;
    case 651u: goto L_08A99FDC;
    case 652u: goto L_08A99FE4;
    case 653u: goto L_08A99FF4;
    case 654u: goto L_08A99FFC;
    case 655u: goto L_08A9A008;
    case 656u: goto L_08A9A010;
    case 657u: goto L_08A9A020;
    case 658u: goto L_08A9A028;
    case 659u: goto L_08A9A034;
    case 660u: goto L_08A9A03C;
    case 661u: goto L_08A9A04C;
    case 662u: goto L_08A9A054;
    case 663u: goto L_08A9A060;
    case 664u: goto L_08A9A068;
    case 665u: goto L_08A9A078;
    case 666u: goto L_08A9A080;
    case 667u: goto L_08A9A08C;
    case 668u: goto L_08A9A094;
    case 669u: goto L_08A9A0A4;
    case 670u: goto L_08A9A0AC;
    case 671u: goto L_08A9A0BC;
    case 672u: goto L_08A9A0D8;
    case 673u: goto L_08A9A1E8;
    case 674u: goto L_08A9A200;
    case 675u: goto L_08A9A20C;
    case 676u: goto L_08A9A214;
    case 677u: goto L_08A9A220;
    case 678u: goto L_08A9A228;
    case 679u: goto L_08A9A230;
    case 680u: goto L_08A9A238;
    case 681u: goto L_08A9A2CC;
    case 682u: goto L_08A9A2F8;
    case 683u: goto L_08A9A334;
    case 684u: goto L_08A9A360;
    case 685u: goto L_08A9A390;
    case 686u: goto L_08A9A3AC;
    case 687u: goto L_08A9A3C0;
    case 688u: goto L_08A9A3F4;
    case 689u: goto L_08A9A40C;
    case 690u: goto L_08A9A444;
    case 691u: goto L_08A9A450;
    case 692u: goto L_08A9A458;
    case 693u: goto L_08A9A460;
    case 694u: goto L_08A9A478;
    case 695u: goto L_08A9A494;
    case 696u: goto L_08A9A4D8;
    case 697u: goto L_08A9A4F4;
    case 698u: goto L_08A9A500;
    case 699u: goto L_08A9A508;
    case 700u: goto L_08A9A514;
    case 701u: goto L_08A9A520;
    case 702u: goto L_08A9A528;
    case 703u: goto L_08A9A53C;
    case 704u: goto L_08A9A554;
    case 705u: goto L_08A9A560;
    case 706u: goto L_08A9A56C;
    case 707u: goto L_08A9A57C;
    case 708u: goto L_08A9A58C;
    case 709u: goto L_08A9A594;
    case 710u: goto L_08A9A59C;
    case 711u: goto L_08A9A5A8;
    case 712u: goto L_08A9A5B8;
    case 713u: goto L_08A9A5DC;
    case 714u: goto L_08A9A5E8;
    case 715u: goto L_08A9A600;
    case 716u: goto L_08A9A61C;
    case 717u: goto L_08A9A62C;
    case 718u: goto L_08A9A630;
    case 719u: goto L_08A9A640;
    case 720u: goto L_08A9A648;
    case 721u: goto L_08A9A654;
    case 722u: goto L_08A9A664;
    case 723u: goto L_08A9A66C;
    case 724u: goto L_08A9A678;
    case 725u: goto L_08A9A694;
    case 726u: goto L_08A9A6A8;
    case 727u: goto L_08A9A6B4;
    case 728u: goto L_08A9A6C0;
    case 729u: goto L_08A9A6D0;
    case 730u: goto L_08A9A6D4;
    case 731u: goto L_08A9A6E0;
    case 732u: goto L_08A9A720;
    case 733u: goto L_08A9A728;
    case 734u: goto L_08A9A734;
    case 735u: goto L_08A9A744;
    case 736u: goto L_08A9A750;
    case 737u: goto L_08A9A758;
    case 738u: goto L_08A9A764;
    case 739u: goto L_08A9A76C;
    case 740u: goto L_08A9A774;
    case 741u: goto L_08A9A77C;
    case 742u: goto L_08A9A788;
    case 743u: goto L_08A9A7A4;
    case 744u: goto L_08A9A7C4;
    case 745u: goto L_08A9A7E8;
    case 746u: goto L_08A9A7F8;
    case 747u: goto L_08A9A800;
    case 748u: goto L_08A9A804;
    case 749u: goto L_08A9A80C;
    case 750u: goto L_08A9A824;
    case 751u: goto L_08A9A82C;
    case 752u: goto L_08A9A834;
    case 753u: goto L_08A9A850;
    case 754u: goto L_08A9A868;
    case 755u: goto L_08A9A874;
    case 756u: goto L_08A9A880;
    case 757u: goto L_08A9A8A8;
    case 758u: goto L_08A9A8AC;
    case 759u: goto L_08A9A8C8;
    case 760u: goto L_08A9A8D8;
    case 761u: goto L_08A9A8E8;
    case 762u: goto L_08A9A8F4;
    case 763u: goto L_08A9A8FC;
    case 764u: goto L_08A9A904;
    case 765u: goto L_08A9A920;
    case 766u: goto L_08A9A924;
    case 767u: goto L_08A9A92C;
    case 768u: goto L_08A9A950;
    case 769u: goto L_08A9A964;
    case 770u: goto L_08A9A974;
    case 771u: goto L_08A9A980;
    case 772u: goto L_08A9A988;
    case 773u: goto L_08A9A994;
    case 774u: goto L_08A9A998;
    case 775u: goto L_08A9A9A0;
    case 776u: goto L_08A9A9AC;
    case 777u: goto L_08A9A9B8;
    case 778u: goto L_08A9A9CC;
    case 779u: goto L_08A9A9D8;
    case 780u: goto L_08A9A9E4;
    case 781u: goto L_08A9A9F0;
    case 782u: goto L_08A9A9FC;
    case 783u: goto L_08A9AA08;
    case 784u: goto L_08A9AA14;
    case 785u: goto L_08A9AA20;
    case 786u: goto L_08A9AA24;
    case 787u: goto L_08A9AA38;
    case 788u: goto L_08A9AA50;
    case 789u: goto L_08A9AA70;
    case 790u: goto L_08A9AA78;
    case 791u: goto L_08A9AA84;
    case 792u: goto L_08A9AA94;
    case 793u: goto L_08A9AAAC;
    case 794u: goto L_08A9AAB8;
    case 795u: goto L_08A9AAC4;
    case 796u: goto L_08A9AAD4;
    case 797u: goto L_08A9AAD8;
    case 798u: goto L_08A9AAF0;
    case 799u: goto L_08A9AB08;
    case 800u: goto L_08A9AB14;
    case 801u: goto L_08A9AB2C;
    case 802u: goto L_08A9AB38;
    case 803u: goto L_08A9AB50;
    case 804u: goto L_08A9AB5C;
    case 805u: goto L_08A9AB74;
    case 806u: goto L_08A9AB80;
    case 807u: goto L_08A9AB88;
    case 808u: goto L_08A9ABC8;
    case 809u: goto L_08A9ABD4;
    case 810u: goto L_08A9ABD8;
    case 811u: goto L_08A9ABE4;
    case 812u: goto L_08A9ABF0;
    case 813u: goto L_08A9ABF8;
    case 814u: goto L_08A9AC08;
    case 815u: goto L_08A9AC20;
    case 816u: goto L_08A9AC30;
    case 817u: goto L_08A9AC40;
    case 818u: goto L_08A9AC50;
    case 819u: goto L_08A9AC5C;
    case 820u: goto L_08A9AC68;
    case 821u: goto L_08A9AC74;
    case 822u: goto L_08A9AC7C;
    case 823u: goto L_08A9AC88;
    case 824u: goto L_08A9AC94;
    case 825u: goto L_08A9AC9C;
    case 826u: goto L_08A9ACA8;
    case 827u: goto L_08A9ACB4;
    case 828u: goto L_08A9ACBC;
    case 829u: goto L_08A9ACC8;
    case 830u: goto L_08A9ACCC;
    case 831u: goto L_08A9ACD4;
    case 832u: goto L_08A9ACE4;
    case 833u: goto L_08A9ACEC;
    case 834u: goto L_08A9ACF4;
    case 835u: goto L_08A9ACFC;
    case 836u: goto L_08A9AD04;
    case 837u: goto L_08A9AD0C;
    case 838u: goto L_08A9AD18;
    case 839u: goto L_08A9AD28;
    case 840u: goto L_08A9AD30;
    case 841u: goto L_08A9AD38;
    case 842u: goto L_08A9AD40;
    case 843u: goto L_08A9AD4C;
    case 844u: goto L_08A9AD54;
    case 845u: goto L_08A9AD5C;
    case 846u: goto L_08A9AD64;
    case 847u: goto L_08A9AD78;
    case 848u: goto L_08A9AD98;
    case 849u: goto L_08A9ADA4;
    case 850u: goto L_08A9ADB8;
    case 851u: goto L_08A9ADD4;
    case 852u: goto L_08A9AE10;
    case 853u: goto L_08A9AE18;
    case 854u: goto L_08A9AE2C;
    case 855u: goto L_08A9AE44;
    case 856u: goto L_08A9AE70;
    case 857u: goto L_08A9AE84;
    case 858u: goto L_08A9AE8C;
    case 859u: goto L_08A9AE94;
    case 860u: goto L_08A9AE9C;
    case 861u: goto L_08A9AEA8;
    case 862u: goto L_08A9AEB4;
    case 863u: goto L_08A9AED4;
    case 864u: goto L_08A9AEF8;
    case 865u: goto L_08A9AF04;
    case 866u: goto L_08A9AF1C;
    case 867u: goto L_08A9AF24;
    case 868u: goto L_08A9AF30;
    case 869u: goto L_08A9AF3C;
    case 870u: goto L_08A9AF5C;
    case 871u: goto L_08A9AF80;
    case 872u: goto L_08A9AF8C;
    case 873u: goto L_08A9AFA4;
    case 874u: goto L_08A9AFAC;
    case 875u: goto L_08A9AFCC;
    case 876u: goto L_08A9AFD4;
    case 877u: goto L_08A9B01C;
    case 878u: goto L_08A9B024;
    case 879u: goto L_08A9B02C;
    case 880u: goto L_08A9B034;
    case 881u: goto L_08A9B040;
    case 882u: goto L_08A9B048;
    case 883u: goto L_08A9B04C;
    case 884u: goto L_08A9B054;
    case 885u: goto L_08A9B080;
    case 886u: goto L_08A9B08C;
    case 887u: goto L_08A9B0B8;
    case 888u: goto L_08A9B0D0;
    case 889u: goto L_08A9B100;
    case 890u: goto L_08A9B134;
    case 891u: goto L_08A9B158;
    case 892u: goto L_08A9B164;
    case 893u: goto L_08A9B16C;
    case 894u: goto L_08A9B1BC;
    case 895u: goto L_08A9B1D0;
    case 896u: goto L_08A9B1D8;
    case 897u: goto L_08A9B1E0;
    case 898u: goto L_08A9B1E8;
    case 899u: goto L_08A9B1F0;
    case 900u: goto L_08A9B1F8;
    case 901u: goto L_08A9B204;
    case 902u: goto L_08A9B210;
    case 903u: goto L_08A9B218;
    case 904u: goto L_08A9B220;
    case 905u: goto L_08A9B230;
    case 906u: goto L_08A9B23C;
    case 907u: goto L_08A9B244;
    case 908u: goto L_08A9B33C;
    case 909u: goto L_08A9B344;
    case 910u: goto L_08A9B34C;
    case 911u: goto L_08A9B36C;
    case 912u: goto L_08A9B380;
    case 913u: goto L_08A9B3A8;
    case 914u: goto L_08A9B428;
    case 915u: goto L_08A9B430;
    case 916u: goto L_08A9B470;
    case 917u: goto L_08A9B498;
    case 918u: goto L_08A9B4BC;
    case 919u: goto L_08A9B4D4;
    case 920u: goto L_08A9B4F0;
    case 921u: goto L_08A9B504;
    case 922u: goto L_08A9B520;
    case 923u: goto L_08A9B534;
    case 924u: goto L_08A9B544;
    case 925u: goto L_08A9B55C;
    case 926u: goto L_08A9B568;
    case 927u: goto L_08A9B580;
    case 928u: goto L_08A9B588;
    case 929u: goto L_08A9B59C;
    case 930u: goto L_08A9B5B0;
    case 931u: goto L_08A9B5D8;
    case 932u: goto L_08A9B5E8;
    case 933u: goto L_08A9B5F4;
    case 934u: goto L_08A9B5FC;
    case 935u: goto L_08A9B600;
    case 936u: goto L_08A9B614;
    case 937u: goto L_08A9B64C;
    case 938u: goto L_08A9B664;
    case 939u: goto L_08A9B680;
    case 940u: goto L_08A9B694;
    case 941u: goto L_08A9B6A4;
    case 942u: goto L_08A9B6BC;
    case 943u: goto L_08A9B6C8;
    case 944u: goto L_08A9B6DC;
    case 945u: goto L_08A9B6F0;
    case 946u: goto L_08A9B710;
    case 947u: goto L_08A9B718;
    case 948u: goto L_08A9B720;
    case 949u: goto L_08A9B758;
    case 950u: goto L_08A9B760;
    case 951u: goto L_08A9B768;
    case 952u: goto L_08A9B7CC;
    case 953u: goto L_08A9B82C;
    case 954u: goto L_08A9B838;
    case 955u: goto L_08A9B840;
    case 956u: goto L_08A9B858;
    case 957u: goto L_08A9B8BC;
    case 958u: goto L_08A9B8C4;
    case 959u: goto L_08A9B8CC;
    case 960u: goto L_08A9B8E0;
    case 961u: goto L_08A9B8F8;
    case 962u: goto L_08A9B92C;
    case 963u: goto L_08A9B938;
    case 964u: goto L_08A9B940;
    case 965u: goto L_08A9B948;
    case 966u: goto L_08A9B950;
    case 967u: goto L_08A9B958;
    case 968u: goto L_08A9B974;
    case 969u: goto L_08A9B980;
    case 970u: goto L_08A9B990;
    case 971u: goto L_08A9B9A0;
    case 972u: goto L_08A9B9CC;
    case 973u: goto L_08A9B9DC;
    case 974u: goto L_08A9B9E4;
    case 975u: goto L_08A9B9F8;
    case 976u: goto L_08A9BA08;
    case 977u: goto L_08A9BA24;
    case 978u: goto L_08A9BA34;
    case 979u: goto L_08A9BA50;
    case 980u: goto L_08A9BA60;
    case 981u: goto L_08A9BA64;
    case 982u: goto L_08A9BA74;
    case 983u: goto L_08A9BA7C;
    case 984u: goto L_08A9BA84;
    case 985u: goto L_08A9BA98;
    case 986u: goto L_08A9BAA4;
    case 987u: goto L_08A9BAC4;
    case 988u: goto L_08A9BAE8;
    case 989u: goto L_08A9BB10;
    case 990u: goto L_08A9BB80;
    case 991u: goto L_08A9BB88;
    case 992u: goto L_08A9BBD8;
    case 993u: goto L_08A9BBE0;
    case 994u: goto L_08A9BBF4;
    case 995u: goto L_08A9BC64;
    case 996u: goto L_08A9BC6C;
    case 997u: goto L_08A9BCBC;
    case 998u: goto L_08A9BCC4;
    case 999u: goto L_08A9BCD8;
    case 1000u: goto L_08A9BD48;
    case 1001u: goto L_08A9BD50;
    case 1002u: goto L_08A9BDA0;
    case 1003u: goto L_08A9BDA8;
    case 1004u: goto L_08A9BDBC;
    case 1005u: goto L_08A9BE2C;
    case 1006u: goto L_08A9BE34;
    case 1007u: goto L_08A9BE84;
    case 1008u: goto L_08A9BE8C;
    case 1009u: goto L_08A9BEA0;
    case 1010u: goto L_08A9BF04;
    case 1011u: goto L_08A9BF0C;
    case 1012u: goto L_08A9BF20;
    case 1013u: goto L_08A9BF24;
    case 1014u: goto L_08A9BF3C;
    case 1015u: goto L_08A9BFAC;
    case 1016u: goto L_08A9BFB4;
    case 1017u: goto L_08A9BFC8;
    case 1018u: goto L_08A9BFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A98004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98034;
      }
      goto L_08A9800C;
    }
L_08A9800C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98038;
      }
      goto L_08A98014;
    }
L_08A98014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98038;
      }
      goto L_08A9801C;
    }
L_08A9801C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98038;
      }
      goto L_08A98024;
    }
L_08A98024:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98034;
      }
      goto L_08A98030;
    }
L_08A98030:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A98034;
L_08A98034:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A98038;
L_08A98038:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98040:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98068;
      }
      goto L_08A9804C;
    }
L_08A9804C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98060;
      }
      goto L_08A98058;
    }
L_08A98058:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98070;
      }
      goto L_08A98060;
    }
L_08A98060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98074;
      }
      goto L_08A98068;
    }
L_08A98068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98074;
      }
      goto L_08A98070;
    }
L_08A98070:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    goto L_08A98074;
L_08A98074:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9807C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A980B8;
      }
      goto L_08A98088;
    }
L_08A98088:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A980B0;
      }
      goto L_08A98094;
    }
L_08A98094:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A980B0;
      }
      goto L_08A9809C;
    }
L_08A9809C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A980C0;
      }
      goto L_08A980A8;
    }
L_08A980A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A980D0;
      }
      goto L_08A980B0;
    }
L_08A980B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A980D4;
      }
      goto L_08A980B8;
    }
L_08A980B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A980D4;
      }
      goto L_08A980C0;
    }
L_08A980C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A980D0;
      }
      goto L_08A980CC;
    }
L_08A980CC:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A980D0;
L_08A980D0:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A980D4;
L_08A980D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A980DC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A980F0;
      }
      goto L_08A980E8;
    }
L_08A980E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A980F4;
      }
      goto L_08A980F0;
    }
L_08A980F0:
    {
        const bool driving = lcs::lcs_guest_player_in_vehicle(aot_mem);
        if (driving) lcs::lcs_note_vehicle_control_read();
        std::int16_t accelerate = static_cast<std::int16_t>(
            aot_mem.aot_load16(ctx.gpr[4] + (driving ? lcs::lcs_accelerate_pad_offset() : 42u)));
        if (driving && accelerate == 0) accelerate = lcs::lcs_host_accelerate();
        ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(accelerate)));
    }
    goto L_08A980F4;
L_08A980F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A980FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A98110u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 667u, 0x08A96D98u>(ctx, &aot_mem) && ctx.pc == 0x08A98110u) goto L_08A98110;
    return;
L_08A98110:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9815C;
      }
      goto L_08A98118;
    }
L_08A98118:
    ctx.gpr[31] = (0x08A98120u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 671u, 0x08A96DBCu>(ctx, &aot_mem) && ctx.pc == 0x08A98120u) goto L_08A98120;
    return;
L_08A98120:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9815C;
      }
      goto L_08A98128;
    }
L_08A98128:
    ctx.gpr[31] = (0x08A98130u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 675u, 0x08A96DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A98130u) goto L_08A98130;
    return;
L_08A98130:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9815C;
      }
      goto L_08A98138;
    }
L_08A98138:
    ctx.gpr[31] = (0x08A98140u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 679u, 0x08A96E04u>(ctx, &aot_mem) && ctx.pc == 0x08A98140u) goto L_08A98140;
    return;
L_08A98140:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9815C;
      }
      goto L_08A98148;
    }
L_08A98148:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98164;
      }
      goto L_08A98154;
    }
L_08A98154:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A98178;
      }
      goto L_08A9815C;
    }
L_08A9815C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9818C;
      }
      goto L_08A98164;
    }
L_08A98164:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A98178;
      }
      goto L_08A98170;
    }
L_08A98170:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A98178;
L_08A98178:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98188;
      }
      goto L_08A98180;
    }
L_08A98180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9818C;
      }
      goto L_08A98188;
    }
L_08A98188:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A9818C;
L_08A9818C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9819C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A981A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A981B4u);
    // nop
    goto L_08A980FC;
L_08A981B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A981C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A981F0;
      }
      goto L_08A981D4;
    }
L_08A981D4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A981E8;
      }
      goto L_08A981E0;
    }
L_08A981E0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A981F8;
      }
      goto L_08A981E8;
    }
L_08A981E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98200;
      }
      goto L_08A981F0;
    }
L_08A981F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98200;
      }
      goto L_08A981F8;
    }
L_08A981F8:
    ctx.gpr[31] = (0x08A98200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 723u, 0x08A96F98u>(ctx, &aot_mem) && ctx.pc == 0x08A98200u) goto L_08A98200;
    return;
L_08A98200:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9820C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9823C;
      }
      goto L_08A98220;
    }
L_08A98220:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98234;
      }
      goto L_08A9822C;
    }
L_08A9822C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98244;
      }
      goto L_08A98234;
    }
L_08A98234:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9824C;
      }
      goto L_08A9823C;
    }
L_08A9823C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9824C;
      }
      goto L_08A98244;
    }
L_08A98244:
    ctx.gpr[31] = (0x08A9824Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 703u, 0x08A96EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9824Cu) goto L_08A9824C;
    return;
L_08A9824C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98258:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98288;
      }
      goto L_08A9826C;
    }
L_08A9826C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98280;
      }
      goto L_08A98278;
    }
L_08A98278:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98290;
      }
      goto L_08A98280;
    }
L_08A98280:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98298;
      }
      goto L_08A98288;
    }
L_08A98288:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98298;
      }
      goto L_08A98290;
    }
L_08A98290:
    ctx.gpr[31] = (0x08A98298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 703u, 0x08A96EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A98298u) goto L_08A98298;
    return;
L_08A98298:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A982A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A982D4;
      }
      goto L_08A982B8;
    }
L_08A982B8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A982CC;
      }
      goto L_08A982C4;
    }
L_08A982C4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A982DC;
      }
      goto L_08A982CC;
    }
L_08A982CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A982E4;
      }
      goto L_08A982D4;
    }
L_08A982D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A982E4;
      }
      goto L_08A982DC;
    }
L_08A982DC:
    ctx.gpr[31] = (0x08A982E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 723u, 0x08A96F98u>(ctx, &aot_mem) && ctx.pc == 0x08A982E4u) goto L_08A982E4;
    return;
L_08A982E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A982F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A98324;
      }
      goto L_08A98308;
    }
L_08A98308:
    ctx.gpr[31] = (0x08A98310u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A98890;
L_08A98310:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9832C;
      }
      goto L_08A98318;
    }
L_08A98318:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98330;
      }
      goto L_08A98324;
    }
L_08A98324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98330;
      }
      goto L_08A9832C;
    }
L_08A9832C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98330;
L_08A98330:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98340:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A98384;
      }
      goto L_08A98358;
    }
L_08A98358:
    ctx.gpr[31] = (0x08A98360u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A98890;
L_08A98360:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9837C;
      }
      goto L_08A98368;
    }
L_08A98368:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9838C;
      }
      goto L_08A98374;
    }
L_08A98374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9839C;
      }
      goto L_08A9837C;
    }
L_08A9837C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A983A0;
      }
      goto L_08A98384;
    }
L_08A98384:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A983A0;
      }
      goto L_08A9838C;
    }
L_08A9838C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9839C;
      }
      goto L_08A98398;
    }
L_08A98398:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A9839C;
L_08A9839C:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    goto L_08A983A0;
L_08A983A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A983B0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A983B8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A983F4;
      }
      goto L_08A983C4;
    }
L_08A983C4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A983EC;
      }
      goto L_08A983D0;
    }
L_08A983D0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A983EC;
      }
      goto L_08A983D8;
    }
L_08A983D8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A983FC;
      }
      goto L_08A983E4;
    }
L_08A983E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9840C;
      }
      goto L_08A983EC;
    }
L_08A983EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98410;
      }
      goto L_08A983F4;
    }
L_08A983F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98410;
      }
      goto L_08A983FC;
    }
L_08A983FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9840C;
      }
      goto L_08A98408;
    }
L_08A98408:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A9840C;
L_08A9840C:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A98410;
L_08A98410:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98418:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98440;
      }
      goto L_08A98424;
    }
L_08A98424:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98438;
      }
      goto L_08A98430;
    }
L_08A98430:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98448;
      }
      goto L_08A98438;
    }
L_08A98438:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98450;
      }
      goto L_08A98440;
    }
L_08A98440:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98450;
      }
      goto L_08A98448;
    }
L_08A98448:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A98450;
L_08A98450:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98458:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A98494;
      }
      goto L_08A98478;
    }
L_08A98478:
    ctx.gpr[31] = (0x08A98480u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A983B8;
L_08A98480:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9849C;
      }
      goto L_08A9848C;
    }
L_08A9848C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A984BC;
      }
      goto L_08A98494;
    }
L_08A98494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98560;
      }
      goto L_08A9849C;
    }
L_08A9849C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), ctx.gpr[6]);
    ctx.gpr[31] = (0x08A984B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20436));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 745u, 0x08A938ECu>(ctx, &aot_mem) && ctx.pc == 0x08A984B8u) goto L_08A984B8;
    return;
L_08A984B8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    goto L_08A984BC;
L_08A984BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[18] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 750 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A984E0;
      }
      goto L_08A984D4;
    }
L_08A984D4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 750 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98514;
      }
      goto L_08A984E0;
    }
L_08A984E0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 751 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 51 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9850C;
      }
      goto L_08A984EC;
    }
L_08A984EC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 250 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9850C;
      }
      goto L_08A984F4;
    }
L_08A984F4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9850C;
      }
      goto L_08A984FC;
    }
L_08A984FC:
    ctx.gpr[31] = (0x08A98504u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A98418;
L_08A98504:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9853C;
      }
      goto L_08A9850C;
    }
L_08A9850C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98560;
      }
      goto L_08A98514;
    }
L_08A98514:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A98528u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20404));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 745u, 0x08A938ECu>(ctx, &aot_mem) && ctx.pc == 0x08A98528u) goto L_08A98528;
    return;
L_08A98528:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08A98560;
      }
      goto L_08A9853C;
    }
L_08A9853C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A98550u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20376));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 745u, 0x08A938ECu>(ctx, &aot_mem) && ctx.pc == 0x08A98550u) goto L_08A98550;
    return;
L_08A98550:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    goto L_08A98560;
L_08A98560:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98578:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A985A8;
      }
      goto L_08A98594;
    }
L_08A98594:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A98634;
      }
      goto L_08A985A0;
    }
L_08A985A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A985B0;
      }
      goto L_08A985A8;
    }
L_08A985A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98638;
      }
      goto L_08A985B0;
    }
L_08A985B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98634;
      }
      goto L_08A985B8;
    }
L_08A985B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98634;
      }
      goto L_08A985C4;
    }
L_08A985C4:
    ctx.gpr[31] = (0x08A985CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 870u, 0x08A975E8u>(ctx, &aot_mem) && ctx.pc == 0x08A985CCu) goto L_08A985CC;
    return;
L_08A985CC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[4] = (0u - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A985E4;
      }
      goto L_08A985D8;
    }
L_08A985D8:
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
      if (branch_taken) {
          goto L_08A985EC;
      }
      goto L_08A985E4;
    }
L_08A985E4:
    ctx.gpr[17] = (ctx.gpr[17] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    goto L_08A985EC;
L_08A985EC:
    ctx.gpr[31] = (0x08A985F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 879u, 0x08A9764Cu>(ctx, &aot_mem) && ctx.pc == 0x08A985F4u) goto L_08A985F4;
    return;
L_08A985F4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] << 16u);
      if (branch_taken) {
          goto L_08A98618;
      }
      goto L_08A98600;
    }
L_08A98600:
    ctx.gpr[4] = (0u - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::int32_t>(ctx.gpr[17]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98624;
      }
      goto L_08A98618;
    }
L_08A98618:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[17] = (static_cast<std::int32_t>(ctx.gpr[17]) < 65 ? 1u : 0u);
    goto L_08A98624;
L_08A98624:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98634;
      }
      goto L_08A9862C;
    }
L_08A9862C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A98638;
      }
      goto L_08A98634;
    }
L_08A98634:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98638;
L_08A98638:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9864C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98684;
      }
      goto L_08A98660;
    }
L_08A98660:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9867C;
      }
      goto L_08A9866C;
    }
L_08A9866C:
    ctx.gpr[31] = (0x08A98674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 703u, 0x08A96EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A98674u) goto L_08A98674;
    return;
L_08A98674:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9868C;
      }
      goto L_08A9867C;
    }
L_08A9867C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98690;
      }
      goto L_08A98684;
    }
L_08A98684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98690;
      }
      goto L_08A9868C;
    }
L_08A9868C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A98690;
L_08A98690:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9869C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A986D4;
      }
      goto L_08A986B0;
    }
L_08A986B0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A986CC;
      }
      goto L_08A986BC;
    }
L_08A986BC:
    ctx.gpr[31] = (0x08A986C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 723u, 0x08A96F98u>(ctx, &aot_mem) && ctx.pc == 0x08A986C4u) goto L_08A986C4;
    return;
L_08A986C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A986DC;
      }
      goto L_08A986CC;
    }
L_08A986CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A986E0;
      }
      goto L_08A986D4;
    }
L_08A986D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A986E0;
      }
      goto L_08A986DC;
    }
L_08A986DC:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A986E0;
L_08A986E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A986EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A986FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A986FCu) goto L_08A986FC;
    return;
L_08A986FC:
    ctx.gpr[31] = (0x08A98704u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 663u, 0x08A96D54u>(ctx, &aot_mem) && ctx.pc == 0x08A98704u) goto L_08A98704;
    return;
L_08A98704:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < -15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A98730;
      }
      goto L_08A98714;
    }
L_08A98714:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(25352))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < -5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98730;
      }
      goto L_08A98724;
    }
L_08A98724:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(25352), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A98738;
      }
      goto L_08A98730;
    }
L_08A98730:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(25352), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98738;
L_08A98738:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98744:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A98754u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A98754u) goto L_08A98754;
    return;
L_08A98754:
    ctx.gpr[31] = (0x08A9875Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 663u, 0x08A96D54u>(ctx, &aot_mem) && ctx.pc == 0x08A9875Cu) goto L_08A9875C;
    return;
L_08A9875C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A98788;
      }
      goto L_08A9876C;
    }
L_08A9876C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(25354))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98788;
      }
      goto L_08A9877C;
    }
L_08A9877C:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(25354), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A98790;
      }
      goto L_08A98788;
    }
L_08A98788:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(25354), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98790;
L_08A98790:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9879C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A987ACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A987ACu) goto L_08A987AC;
    return;
L_08A987AC:
    ctx.gpr[31] = (0x08A987B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 659u, 0x08A96D10u>(ctx, &aot_mem) && ctx.pc == 0x08A987B4u) goto L_08A987B4;
    return;
L_08A987B4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < -25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A987E0;
      }
      goto L_08A987C4;
    }
L_08A987C4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(25356))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < -20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A987E0;
      }
      goto L_08A987D4;
    }
L_08A987D4:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(25356), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A987E8;
      }
      goto L_08A987E0;
    }
L_08A987E0:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(25356), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[2] = (0u | 0u);
    goto L_08A987E8;
L_08A987E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A987F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A98804u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A98804u) goto L_08A98804;
    return;
L_08A98804:
    ctx.gpr[31] = (0x08A9880Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 659u, 0x08A96D10u>(ctx, &aot_mem) && ctx.pc == 0x08A9880Cu) goto L_08A9880C;
    return;
L_08A9880C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 26 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A98838;
      }
      goto L_08A9881C;
    }
L_08A9881C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(25358))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98838;
      }
      goto L_08A9882C;
    }
L_08A9882C:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(25358), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A98840;
      }
      goto L_08A98838;
    }
L_08A98838:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(25358), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98840;
L_08A98840:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9884C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9886C;
      }
      goto L_08A98858;
    }
L_08A98858:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98874;
      }
      goto L_08A98864;
    }
L_08A98864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98884;
      }
      goto L_08A9886C;
    }
L_08A9886C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98888;
      }
      goto L_08A98874;
    }
L_08A98874:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98884;
      }
      goto L_08A98880;
    }
L_08A98880:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A98884;
L_08A98884:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A98888;
L_08A98888:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98890:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A988C0;
      }
      goto L_08A988A8;
    }
L_08A988A8:
    ctx.gpr[31] = (0x08A988B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1017u, 0x08A97CDCu>(ctx, &aot_mem) && ctx.pc == 0x08A988B0u) goto L_08A988B0;
    return;
L_08A988B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A988C8;
      }
      goto L_08A988B8;
    }
L_08A988B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98910;
      }
      goto L_08A988C0;
    }
L_08A988C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A989E8;
      }
      goto L_08A988C8;
    }
L_08A988C8:
    ctx.gpr[31] = (0x08A988D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A988D0u) goto L_08A988D0;
    return;
L_08A988D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A98910;
      }
      goto L_08A988E0;
    }
L_08A988E0:
    ctx.gpr[31] = (0x08A988E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A988E8u) goto L_08A988E8;
    return;
L_08A988E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A98924;
      }
      goto L_08A988F8;
    }
L_08A988F8:
    ctx.gpr[31] = (0x08A98900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A98900u) goto L_08A98900;
    return;
L_08A98900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A98924;
      }
      goto L_08A98910;
    }
L_08A98910:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
      if (branch_taken) {
          goto L_08A9892C;
      }
      goto L_08A9891C;
    }
L_08A9891C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A989D4;
      }
      goto L_08A98924;
    }
L_08A98924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A989E8;
      }
      goto L_08A9892C;
    }
L_08A9892C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A989E4;
      }
      goto L_08A98934;
    }
L_08A98934:
    ctx.gpr[31] = (0x08A9893Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9893Cu) goto L_08A9893C;
    return;
L_08A9893C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A989E4;
      }
      goto L_08A98948;
    }
L_08A98948:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_08A989E4;
      }
      goto L_08A9897C;
    }
L_08A9897C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_08A989E4;
      }
      goto L_08A98984;
    }
L_08A98984:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_08A989E4;
      }
      goto L_08A9898C;
    }
L_08A9898C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 34u);
      if (branch_taken) {
          goto L_08A989E4;
      }
      goto L_08A98994;
    }
L_08A98994:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A989E4;
      }
      goto L_08A9899C;
    }
L_08A9899C:
    ctx.gpr[31] = (0x08A989A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 870u, 0x08A975E8u>(ctx, &aot_mem) && ctx.pc == 0x08A989A4u) goto L_08A989A4;
    return;
L_08A989A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A989BC;
      }
      goto L_08A989AC;
    }
L_08A989AC:
    ctx.gpr[31] = (0x08A989B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 879u, 0x08A9764Cu>(ctx, &aot_mem) && ctx.pc == 0x08A989B4u) goto L_08A989B4;
    return;
L_08A989B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A989C4;
      }
      goto L_08A989BC;
    }
L_08A989BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A989E8;
      }
      goto L_08A989C4;
    }
L_08A989C4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A989E8;
      }
      goto L_08A989D4;
    }
L_08A989D4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A989E4;
      }
      goto L_08A989DC;
    }
L_08A989DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A989E8;
      }
      goto L_08A989E4;
    }
L_08A989E4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A989E8;
L_08A989E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A989F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98A30;
      }
      goto L_08A98A10;
    }
L_08A98A10:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_08A98A38;
    }
    goto L_08A98A20;
L_08A98A20:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A98A48;
      }
      goto L_08A98A28;
    }
L_08A98A28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98A78;
      }
      goto L_08A98A30;
    }
L_08A98A30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98A78;
      }
      goto L_08A98A38;
    }
L_08A98A38:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98A28;
      }
      goto L_08A98A40;
    }
L_08A98A40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98A50;
      }
      goto L_08A98A48;
    }
L_08A98A48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98A78;
      }
      goto L_08A98A50;
    }
L_08A98A50:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98A74;
      }
      goto L_08A98A5C;
    }
L_08A98A5C:
    ctx.gpr[31] = (0x08A98A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 659u, 0x08A96D10u>(ctx, &aot_mem) && ctx.pc == 0x08A98A64u) goto L_08A98A64;
    return;
L_08A98A64:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98A74;
      }
      goto L_08A98A70;
    }
L_08A98A70:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A98A74;
L_08A98A74:
    ctx.gpr[2] = (ctx.gpr[16] & 255u);
    goto L_08A98A78;
L_08A98A78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98A88:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98AB0;
      }
      goto L_08A98A94;
    }
L_08A98A94:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98AA8;
      }
      goto L_08A98AA0;
    }
L_08A98AA0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98AB8;
      }
      goto L_08A98AA8;
    }
L_08A98AA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98AC0;
      }
      goto L_08A98AB0;
    }
L_08A98AB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98AC0;
      }
      goto L_08A98AB8;
    }
L_08A98AB8:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A98AC0;
L_08A98AC0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98AC8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98AF0;
      }
      goto L_08A98AD4;
    }
L_08A98AD4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98AE8;
      }
      goto L_08A98AE0;
    }
L_08A98AE0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98AF8;
      }
      goto L_08A98AE8;
    }
L_08A98AE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98B00;
      }
      goto L_08A98AF0;
    }
L_08A98AF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98B00;
      }
      goto L_08A98AF8;
    }
L_08A98AF8:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A98B00;
L_08A98B00:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98B08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98BF8;
      }
      goto L_08A98B24;
    }
L_08A98B24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98BF8;
      }
      goto L_08A98B2C;
    }
L_08A98B2C:
    ctx.gpr[31] = (0x08A98B34u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A98B34u) goto L_08A98B34;
    return;
L_08A98B34:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98B94;
      }
      goto L_08A98B40;
    }
L_08A98B40:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[4] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A98B84;
      }
      goto L_08A98B58;
    }
L_08A98B58:
    ctx.gpr[31] = (0x08A98B60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 659u, 0x08A96D10u>(ctx, &aot_mem) && ctx.pc == 0x08A98B60u) goto L_08A98B60;
    return;
L_08A98B60:
    if (lcs::lcs_camera_hook_enabled() && ctx.gpr[2] == 0u)
        ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(lcs::lcs_camera_axis_x())));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98BFC;
      }
      goto L_08A98B84;
    }
L_08A98B84:
    ctx.gpr[31] = (0x08A98B8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 659u, 0x08A96D10u>(ctx, &aot_mem) && ctx.pc == 0x08A98B8Cu) goto L_08A98B8C;
    return;
L_08A98B8C:
    if (lcs::lcs_camera_hook_enabled() && ctx.gpr[2] == 0u)
        ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(lcs::lcs_camera_axis_x())));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98BFC;
      }
      goto L_08A98B94;
    }
L_08A98B94:
    ctx.gpr[31] = (0x08A98B9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 659u, 0x08A96D10u>(ctx, &aot_mem) && ctx.pc == 0x08A98B9Cu) goto L_08A98B9C;
    return;
L_08A98B9C:
    if (lcs::lcs_camera_hook_enabled() && ctx.gpr[2] == 0u)
        ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(lcs::lcs_camera_axis_x())));
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A98BD4;
      }
      goto L_08A98BB8;
    }
L_08A98BB8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98BFC;
      }
      goto L_08A98BD4;
    }
L_08A98BD4:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98BFC;
      }
      goto L_08A98BF8;
    }
L_08A98BF8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98BFC;
L_08A98BFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98C0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98D28;
      }
      goto L_08A98C28;
    }
L_08A98C28:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98D28;
      }
      goto L_08A98C30;
    }
L_08A98C30:
    ctx.gpr[31] = (0x08A98C38u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A98C38u) goto L_08A98C38;
    return;
L_08A98C38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98CB4;
      }
      goto L_08A98C44;
    }
L_08A98C44:
    ctx.gpr[31] = (0x08A98C4Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A98C4Cu) goto L_08A98C4C;
    return;
L_08A98C4C:
    ctx.gpr[31] = (0x08A98C54u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 663u, 0x08A96D54u>(ctx, &aot_mem) && ctx.pc == 0x08A98C54u) goto L_08A98C54;
    return;
L_08A98C54:
    if (lcs::lcs_camera_hook_enabled() && ctx.gpr[2] == 0u)
        ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(lcs::lcs_camera_axis_y())));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25331)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A98C6C;
      }
      goto L_08A98C68;
    }
L_08A98C68:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_08A98C6C;
L_08A98C6C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[4] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A98CA0;
      }
      goto L_08A98C84;
    }
L_08A98C84:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98D2C;
      }
      goto L_08A98CA0;
    }
L_08A98CA0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98D2C;
      }
      goto L_08A98CB4;
    }
L_08A98CB4:
    ctx.gpr[31] = (0x08A98CBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 663u, 0x08A96D54u>(ctx, &aot_mem) && ctx.pc == 0x08A98CBCu) goto L_08A98CBC;
    return;
L_08A98CBC:
    if (lcs::lcs_camera_hook_enabled() && ctx.gpr[2] == 0u)
        ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(lcs::lcs_camera_axis_y())));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25331)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A98CD4;
      }
      goto L_08A98CD0;
    }
L_08A98CD0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_08A98CD4;
L_08A98CD4:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[4] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_08A98D08;
      }
      goto L_08A98CEC;
    }
L_08A98CEC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98D2C;
      }
      goto L_08A98D08;
    }
L_08A98D08:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98D2C;
      }
      goto L_08A98D28;
    }
L_08A98D28:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98D2C;
L_08A98D2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98D3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    if (lcs::lcs_camera_hook_enabled()) ctx.gpr[5] = (7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98E28;
      }
      goto L_08A98D5C;
    }
L_08A98D5C:
    ctx.gpr[31] = (0x08A98D64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1017u, 0x08A97CDCu>(ctx, &aot_mem) && ctx.pc == 0x08A98D64u) goto L_08A98D64;
    return;
L_08A98D64:
    if (lcs::lcs_camera_hook_enabled()) goto L_08A98DB8;
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98DB8;
      }
      goto L_08A98D6C;
    }
L_08A98D6C:
    ctx.gpr[31] = (0x08A98D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A98D74u) goto L_08A98D74;
    return;
L_08A98D74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A98DB8;
      }
      goto L_08A98D84;
    }
L_08A98D84:
    ctx.gpr[31] = (0x08A98D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A98D8Cu) goto L_08A98D8C;
    return;
L_08A98D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A98DB4;
      }
      goto L_08A98D9C;
    }
L_08A98D9C:
    ctx.gpr[31] = (0x08A98DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A98DA4u) goto L_08A98DA4;
    return;
L_08A98DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A98DB8;
      }
      goto L_08A98DB4;
    }
L_08A98DB4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08A98DB8;
L_08A98DB8:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A98DEC;
      }
      goto L_08A98DC4;
    }
L_08A98DC4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98DEC;
      }
      goto L_08A98DD0;
    }
L_08A98DD0:
    ctx.gpr[31] = (0x08A98DD8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A98DD8u) goto L_08A98DD8;
    return;
L_08A98DD8:
    if (lcs::lcs_camera_hook_enabled()) {
        ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(lcs::lcs_camera_axis_x())));
        goto L_08A98DE0;
    }
    ctx.gpr[31] = (0x08A98DE0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 659u, 0x08A96D10u>(ctx, &aot_mem) && ctx.pc == 0x08A98DE0u) goto L_08A98DE0;
    return;
L_08A98DE0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A98DEC;
      }
      goto L_08A98DEC;
    }
L_08A98DEC:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A98E14;
      }
      goto L_08A98E00;
    }
L_08A98E00:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98E2C;
      }
      goto L_08A98E14;
    }
L_08A98E14:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98E2C;
      }
      goto L_08A98E28;
    }
L_08A98E28:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98E2C;
L_08A98E2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98E3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    if (lcs::lcs_camera_hook_enabled()) ctx.gpr[5] = (7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98EF4;
      }
      goto L_08A98E5C;
    }
L_08A98E5C:
    ctx.gpr[31] = (0x08A98E64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1017u, 0x08A97CDCu>(ctx, &aot_mem) && ctx.pc == 0x08A98E64u) goto L_08A98E64;
    return;
L_08A98E64:
    if (lcs::lcs_camera_hook_enabled()) goto L_08A98E70;
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98E70;
      }
      goto L_08A98E6C;
    }
L_08A98E6C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08A98E70;
L_08A98E70:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A98EB8;
      }
      goto L_08A98E7C;
    }
L_08A98E7C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98EB8;
      }
      goto L_08A98E88;
    }
L_08A98E88:
    ctx.gpr[31] = (0x08A98E90u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A98E90u) goto L_08A98E90;
    return;
L_08A98E90:
    if (lcs::lcs_camera_hook_enabled()) {
        ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(lcs::lcs_camera_axis_y())));
        goto L_08A98E98;
    }
    ctx.gpr[31] = (0x08A98E98u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 663u, 0x08A96D54u>(ctx, &aot_mem) && ctx.pc == 0x08A98E98u) goto L_08A98E98;
    return;
L_08A98E98:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25331)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A98EB0;
      }
      goto L_08A98EAC;
    }
L_08A98EAC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_08A98EB0;
L_08A98EB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98EB8;
      }
      goto L_08A98EB8;
    }
L_08A98EB8:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A98EE0;
      }
      goto L_08A98ECC;
    }
L_08A98ECC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98EF8;
      }
      goto L_08A98EE0;
    }
L_08A98EE0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98EF8;
      }
      goto L_08A98EF4;
    }
L_08A98EF4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98EF8;
L_08A98EF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98F08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A98F1Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A98040;
L_08A98F1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98F38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 12u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    goto L_08A98F88;
L_08A98F88:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A98F88;
      }
      goto L_08A98FAC;
    }
L_08A98FAC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
      if (branch_taken) {
          goto L_08A98FBC;
      }
      goto L_08A98FB4;
    }
L_08A98FB4:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6106), static_cast<std::uint8_t>(0u));
    goto L_08A98FBC;
L_08A98FBC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98FE8;
      }
      goto L_08A98FC4;
    }
L_08A98FC4:
    ctx.gpr[17] = (2230u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    ctx.gpr[5] = (17152u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A98FF0;
      }
      goto L_08A98FE0;
    }
L_08A98FE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98FFC;
      }
      goto L_08A98FE8;
    }
L_08A98FE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A99794;
      }
      goto L_08A98FF0;
    }
L_08A98FF0:
    ctx.gpr[31] = (0x08A98FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A98FF8u) goto L_08A98FF8;
    return;
L_08A98FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    goto L_08A98FFC;
L_08A98FFC:
    ctx.gpr[31] = (0x08A99004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 582u, 0x08837FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A99004u) goto L_08A99004;
    return;
L_08A99004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A99020;
      }
      goto L_08A99010;
    }
L_08A99010:
    ctx.gpr[31] = (0x08A99018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A99018u) goto L_08A99018;
    return;
L_08A99018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08A99020;
L_08A99020:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A99058;
      }
      goto L_08A9904C;
    }
L_08A9904C:
    ctx.gpr[31] = (0x08A99054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A99054u) goto L_08A99054;
    return;
L_08A99054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    goto L_08A99058;
L_08A99058:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25324)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A990B0;
      }
      goto L_08A9909C;
    }
L_08A9909C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A990BC;
      }
      goto L_08A990B0;
    }
L_08A990B0:
    ctx.gpr[31] = (0x08A990B8u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BB54u;
    return;
L_08A990B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    goto L_08A990BC;
L_08A990BC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A990D0;
      }
      goto L_08A990C4;
    }
L_08A990C4:
    ctx.gpr[31] = (0x08A990CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A990CCu) goto L_08A990CC;
    return;
L_08A990CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    goto L_08A990D0;
L_08A990D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A990EC;
    }
    goto L_08A990EC;
L_08A990EC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(13696)));
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25320)));
      if (branch_taken) {
          goto L_08A9910C;
      }
      goto L_08A99104;
    }
L_08A99104:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A9910C;
L_08A9910C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9911C;
      }
      goto L_08A99114;
    }
L_08A99114:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    goto L_08A9911C;
L_08A9911C:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A99160;
      }
      goto L_08A9912C;
    }
L_08A9912C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A99198;
      }
      goto L_08A99160;
    }
L_08A99160:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A99198;
L_08A99198:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A991DC;
      }
      goto L_08A991A8;
    }
L_08A991A8:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A99214;
      }
      goto L_08A991DC;
    }
L_08A991DC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A99214;
L_08A99214:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A99238;
      }
      goto L_08A99228;
    }
L_08A99228:
    ctx.gpr[31] = (0x08A99230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A99230u) goto L_08A99230;
    return;
L_08A99230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08A99238;
L_08A99238:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A9928C;
      }
      goto L_08A9927C;
    }
L_08A9927C:
    ctx.gpr[31] = (0x08A99284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A99284u) goto L_08A99284;
    return;
L_08A99284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08A9928C;
L_08A9928C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[8]));
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (0u | 255u);
        goto L_08A992DC;
    }
    goto L_08A992DC;
L_08A992DC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < -99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (0u | 255u);
        goto L_08A992F0;
    }
    goto L_08A992F0;
L_08A992F0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (0u | 255u);
        goto L_08A99304;
    }
    goto L_08A99304;
L_08A99304:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[6] = (0u | 255u);
        goto L_08A99318;
    }
    goto L_08A99318;
L_08A99318:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A99334;
      }
      goto L_08A99328;
    }
L_08A99328:
    ctx.gpr[31] = (0x08A99330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A99330u) goto L_08A99330;
    return;
L_08A99330:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    goto L_08A99334;
L_08A99334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A9934C;
    }
    goto L_08A9934C;
L_08A9934C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A99368;
      }
      goto L_08A9935C;
    }
L_08A9935C:
    ctx.gpr[31] = (0x08A99364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A99364u) goto L_08A99364;
    return;
L_08A99364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    goto L_08A99368;
L_08A99368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A99380;
    }
    goto L_08A99380;
L_08A99380:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A993A4;
      }
      goto L_08A99398;
    }
L_08A99398:
    ctx.gpr[31] = (0x08A993A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A993A0u) goto L_08A993A0;
    return;
L_08A993A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    goto L_08A993A4;
L_08A993A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A993BC;
    }
    goto L_08A993BC;
L_08A993BC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A993D8;
      }
      goto L_08A993CC;
    }
L_08A993CC:
    ctx.gpr[31] = (0x08A993D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A993D4u) goto L_08A993D4;
    return;
L_08A993D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    goto L_08A993D8;
L_08A993D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A993F0;
    }
    goto L_08A993F0;
L_08A993F0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9940C;
      }
      goto L_08A99400;
    }
L_08A99400:
    ctx.gpr[31] = (0x08A99408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A99408u) goto L_08A99408;
    return;
L_08A99408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    goto L_08A9940C;
L_08A9940C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A99424;
    }
    goto L_08A99424;
L_08A99424:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A99440;
      }
      goto L_08A99434;
    }
L_08A99434:
    ctx.gpr[31] = (0x08A9943Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A9943Cu) goto L_08A9943C;
    return;
L_08A9943C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    goto L_08A99440;
L_08A99440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A99458;
    }
    goto L_08A99458;
L_08A99458:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A99474;
      }
      goto L_08A99468;
    }
L_08A99468:
    ctx.gpr[31] = (0x08A99470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A99470u) goto L_08A99470;
    return;
L_08A99470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    goto L_08A99474;
L_08A99474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A9948C;
    }
    goto L_08A9948C;
L_08A9948C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A994A8;
      }
      goto L_08A9949C;
    }
L_08A9949C:
    ctx.gpr[31] = (0x08A994A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A994A4u) goto L_08A994A4;
    return;
L_08A994A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    goto L_08A994A8;
L_08A994A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A994BC;
    }
    goto L_08A994BC;
L_08A994BC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A994D8;
      }
      goto L_08A994CC;
    }
L_08A994CC:
    ctx.gpr[31] = (0x08A994D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A994D4u) goto L_08A994D4;
    return;
L_08A994D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    goto L_08A994D8;
L_08A994D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A994F0;
    }
    goto L_08A994F0;
L_08A994F0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9950C;
      }
      goto L_08A99500;
    }
L_08A99500:
    ctx.gpr[31] = (0x08A99508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A99508u) goto L_08A99508;
    return;
L_08A99508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    goto L_08A9950C;
L_08A9950C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A99524;
    }
    goto L_08A99524;
L_08A99524:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A99540;
      }
      goto L_08A99534;
    }
L_08A99534:
    ctx.gpr[31] = (0x08A9953Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A9953Cu) goto L_08A9953C;
    return;
L_08A9953C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    goto L_08A99540;
L_08A99540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A99558;
    }
    goto L_08A99558;
L_08A99558:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A99574;
      }
      goto L_08A99568;
    }
L_08A99568:
    ctx.gpr[31] = (0x08A99570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A99570u) goto L_08A99570;
    return;
L_08A99570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20908)));
    goto L_08A99574;
L_08A99574:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(146)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A99598;
    }
    goto L_08A99598;
L_08A99598:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(13696)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A995C8;
      }
      goto L_08A995A8;
    }
L_08A995A8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_08A995C8;
L_08A995C8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08A99624;
      }
      goto L_08A995D4;
    }
L_08A995D4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9960C;
      }
      goto L_08A995E0;
    }
L_08A995E0:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99600;
      }
      goto L_08A995EC;
    }
L_08A995EC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99600;
      }
      goto L_08A995F8;
    }
L_08A995F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08A99624;
      }
      goto L_08A99600;
    }
L_08A99600:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A99624;
      }
      goto L_08A9960C;
    }
L_08A9960C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99624;
      }
      goto L_08A99614;
    }
L_08A99614:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99624;
      }
      goto L_08A99620;
    }
L_08A99620:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08A99624;
L_08A99624:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A9962C;
    }
L_08A9962C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A99638;
    }
L_08A99638:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A99644;
    }
L_08A99644:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A99650;
    }
L_08A99650:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A9965C;
    }
L_08A9965C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A99668;
    }
L_08A99668:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(22))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A99674;
    }
L_08A99674:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A99680;
    }
L_08A99680:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A9968C;
    }
L_08A9968C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A99698;
    }
L_08A99698:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A996A4;
    }
L_08A996A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A996B0;
    }
L_08A996B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A996BC;
    }
L_08A996BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A996C8;
    }
L_08A996C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A996D4;
    }
L_08A996D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A996E0;
    }
L_08A996E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A996EC;
    }
L_08A996EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A996F8;
    }
L_08A996F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(46))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99710;
      }
      goto L_08A99704;
    }
L_08A99704:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9971C;
      }
      goto L_08A99710;
    }
L_08A99710:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    goto L_08A9971C;
L_08A9971C:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99738;
      }
      goto L_08A99734;
    }
L_08A99734:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(0u));
    goto L_08A99738;
L_08A99738:
    ctx.gpr[31] = (0x08A99740u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1027u, 0x08A97D38u>(ctx, &aot_mem) && ctx.pc == 0x08A99740u) goto L_08A99740;
    return;
L_08A99740:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(146)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(138), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08A99754;
L_08A99754:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(102))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(104), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A99754;
      }
      goto L_08A99768;
    }
L_08A99768:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6108)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99780;
      }
      goto L_08A99778;
    }
L_08A99778:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29524), static_cast<std::uint8_t>(0u));
    goto L_08A99780;
L_08A99780:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(147)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A99794;
      }
      goto L_08A9978C;
    }
L_08A9978C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(147), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A99794;
L_08A99794:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A997C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_08A997E8;
L_08A997E8:
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(149))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(150), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08A997E8;
      }
      goto L_08A99804;
    }
L_08A99804:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(679)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99848;
      }
      goto L_08A99818;
    }
L_08A99818:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(149));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9982Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27327));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9982Cu) goto L_08A9982C;
    return;
L_08A9982C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99850;
      }
      goto L_08A99834;
    }
L_08A99834:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99840u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 755u, 0x08A939A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99840u) goto L_08A99840;
    return;
L_08A99840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99848;
    }
L_08A99848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99850;
    }
L_08A99850:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99860u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27318));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99860u) goto L_08A99860;
    return;
L_08A99860:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9987C;
      }
      goto L_08A99868;
    }
L_08A99868:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99874u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 801u, 0x08A93C00u>(ctx, &aot_mem) && ctx.pc == 0x08A99874u) goto L_08A99874;
    return;
L_08A99874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A9987C;
    }
L_08A9987C:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9988Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27309));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9988Cu) goto L_08A9988C;
    return;
L_08A9988C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A998A8;
      }
      goto L_08A99894;
    }
L_08A99894:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A998A0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 844u, 0x08A93E38u>(ctx, &aot_mem) && ctx.pc == 0x08A998A0u) goto L_08A998A0;
    return;
L_08A998A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A998A8;
    }
L_08A998A8:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A998B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27300));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A998B8u) goto L_08A998B8;
    return;
L_08A998B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A998D4;
      }
      goto L_08A998C0;
    }
L_08A998C0:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A998CCu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 212u, 0x08A94EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A998CCu) goto L_08A998CC;
    return;
L_08A998CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A998D4;
    }
L_08A998D4:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A998E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27291));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A998E4u) goto L_08A998E4;
    return;
L_08A998E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99900;
      }
      goto L_08A998EC;
    }
L_08A998EC:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A998F8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 221u, 0x08A94FC8u>(ctx, &aot_mem) && ctx.pc == 0x08A998F8u) goto L_08A998F8;
    return;
L_08A998F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99900;
    }
L_08A99900:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99910u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27282));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99910u) goto L_08A99910;
    return;
L_08A99910:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99930;
      }
      goto L_08A99918;
    }
L_08A99918:
    ctx.gpr[4] = (0u | 32u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A99928u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 44u, 0x08A942F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99928u) goto L_08A99928;
    return;
L_08A99928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99930;
    }
L_08A99930:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99940u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27273));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99940u) goto L_08A99940;
    return;
L_08A99940:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9995C;
      }
      goto L_08A99948;
    }
L_08A99948:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99954u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 231u, 0x08A95090u>(ctx, &aot_mem) && ctx.pc == 0x08A99954u) goto L_08A99954;
    return;
L_08A99954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A9995C;
    }
L_08A9995C:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9996Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27264));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9996Cu) goto L_08A9996C;
    return;
L_08A9996C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99988;
      }
      goto L_08A99974;
    }
L_08A99974:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99980u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 244u, 0x08A95168u>(ctx, &aot_mem) && ctx.pc == 0x08A99980u) goto L_08A99980;
    return;
L_08A99980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99988;
    }
L_08A99988:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99998u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27255));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99998u) goto L_08A99998;
    return;
L_08A99998:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A999B4;
      }
      goto L_08A999A0;
    }
L_08A999A0:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A999ACu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 255u, 0x08A95220u>(ctx, &aot_mem) && ctx.pc == 0x08A999ACu) goto L_08A999AC;
    return;
L_08A999AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A999B4;
    }
L_08A999B4:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A999C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27246));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A999C4u) goto L_08A999C4;
    return;
L_08A999C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A999E0;
      }
      goto L_08A999CC;
    }
L_08A999CC:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A999D8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 265u, 0x08A952CCu>(ctx, &aot_mem) && ctx.pc == 0x08A999D8u) goto L_08A999D8;
    return;
L_08A999D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A999E0;
    }
L_08A999E0:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A999F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27237));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A999F0u) goto L_08A999F0;
    return;
L_08A999F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99A0C;
      }
      goto L_08A999F8;
    }
L_08A999F8:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99A04u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 275u, 0x08A95378u>(ctx, &aot_mem) && ctx.pc == 0x08A99A04u) goto L_08A99A04;
    return;
L_08A99A04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99A0C;
    }
L_08A99A0C:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99A1Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27228));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99A1Cu) goto L_08A99A1C;
    return;
L_08A99A1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99A38;
      }
      goto L_08A99A24;
    }
L_08A99A24:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99A30u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 285u, 0x08A95424u>(ctx, &aot_mem) && ctx.pc == 0x08A99A30u) goto L_08A99A30;
    return;
L_08A99A30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99A38;
    }
L_08A99A38:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99A48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27219));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99A48u) goto L_08A99A48;
    return;
L_08A99A48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99A64;
      }
      goto L_08A99A50;
    }
L_08A99A50:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99A5Cu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 295u, 0x08A954D0u>(ctx, &aot_mem) && ctx.pc == 0x08A99A5Cu) goto L_08A99A5C;
    return;
L_08A99A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99A64;
    }
L_08A99A64:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99A74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27210));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99A74u) goto L_08A99A74;
    return;
L_08A99A74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99A90;
      }
      goto L_08A99A7C;
    }
L_08A99A7C:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99A88u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 105u, 0x08A9471Cu>(ctx, &aot_mem) && ctx.pc == 0x08A99A88u) goto L_08A99A88;
    return;
L_08A99A88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99A90;
    }
L_08A99A90:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99AA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27201));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99AA0u) goto L_08A99AA0;
    return;
L_08A99AA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99ABC;
      }
      goto L_08A99AA8;
    }
L_08A99AA8:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99AB4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 305u, 0x08A9557Cu>(ctx, &aot_mem) && ctx.pc == 0x08A99AB4u) goto L_08A99AB4;
    return;
L_08A99AB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99ABC;
    }
L_08A99ABC:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99ACCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27192));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99ACCu) goto L_08A99ACC;
    return;
L_08A99ACC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99AE8;
      }
      goto L_08A99AD4;
    }
L_08A99AD4:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99AE0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 109u, 0x08A94754u>(ctx, &aot_mem) && ctx.pc == 0x08A99AE0u) goto L_08A99AE0;
    return;
L_08A99AE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99AE8;
    }
L_08A99AE8:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99AF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27183));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99AF8u) goto L_08A99AF8;
    return;
L_08A99AF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99B14;
      }
      goto L_08A99B00;
    }
L_08A99B00:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99B0Cu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 126u, 0x08A94880u>(ctx, &aot_mem) && ctx.pc == 0x08A99B0Cu) goto L_08A99B0C;
    return;
L_08A99B0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99B14;
    }
L_08A99B14:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99B24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27174));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99B24u) goto L_08A99B24;
    return;
L_08A99B24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99B40;
      }
      goto L_08A99B2C;
    }
L_08A99B2C:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99B38u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 154u, 0x08A94A98u>(ctx, &aot_mem) && ctx.pc == 0x08A99B38u) goto L_08A99B38;
    return;
L_08A99B38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99B40;
    }
L_08A99B40:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99B50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27165));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99B50u) goto L_08A99B50;
    return;
L_08A99B50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99B6C;
      }
      goto L_08A99B58;
    }
L_08A99B58:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99B64u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 169u, 0x08A94BA4u>(ctx, &aot_mem) && ctx.pc == 0x08A99B64u) goto L_08A99B64;
    return;
L_08A99B64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99B6C;
    }
L_08A99B6C:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99B7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27156));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99B7Cu) goto L_08A99B7C;
    return;
L_08A99B7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99B98;
      }
      goto L_08A99B84;
    }
L_08A99B84:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99B90u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 181u, 0x08A94C84u>(ctx, &aot_mem) && ctx.pc == 0x08A99B90u) goto L_08A99B90;
    return;
L_08A99B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99B98;
    }
L_08A99B98:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99BA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27147));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99BA8u) goto L_08A99BA8;
    return;
L_08A99BA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99BC4;
      }
      goto L_08A99BB0;
    }
L_08A99BB0:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99BBCu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 190u, 0x08A94D38u>(ctx, &aot_mem) && ctx.pc == 0x08A99BBCu) goto L_08A99BBC;
    return;
L_08A99BBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99BC4;
    }
L_08A99BC4:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99BD4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27138));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99BD4u) goto L_08A99BD4;
    return;
L_08A99BD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99BF0;
      }
      goto L_08A99BDC;
    }
L_08A99BDC:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99BE8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 201u, 0x08A94E10u>(ctx, &aot_mem) && ctx.pc == 0x08A99BE8u) goto L_08A99BE8;
    return;
L_08A99BE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99BF0;
    }
L_08A99BF0:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99C00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27129));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99C00u) goto L_08A99C00;
    return;
L_08A99C00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99C14;
      }
      goto L_08A99C08;
    }
L_08A99C08:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99C14;
    }
L_08A99C14:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99C24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27120));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99C24u) goto L_08A99C24;
    return;
L_08A99C24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99C40;
      }
      goto L_08A99C2C;
    }
L_08A99C2C:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99C38u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 314u, 0x08A95630u>(ctx, &aot_mem) && ctx.pc == 0x08A99C38u) goto L_08A99C38;
    return;
L_08A99C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99C40;
    }
L_08A99C40:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99C50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27111));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99C50u) goto L_08A99C50;
    return;
L_08A99C50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99C6C;
      }
      goto L_08A99C58;
    }
L_08A99C58:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99C64u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 368u, 0x08A95A68u>(ctx, &aot_mem) && ctx.pc == 0x08A99C64u) goto L_08A99C64;
    return;
L_08A99C64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99C6C;
    }
L_08A99C6C:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99C7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27102));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99C7Cu) goto L_08A99C7C;
    return;
L_08A99C7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99C90;
      }
      goto L_08A99C84;
    }
L_08A99C84:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99C90;
    }
L_08A99C90:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99CA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27093));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99CA0u) goto L_08A99CA0;
    return;
L_08A99CA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99CBC;
      }
      goto L_08A99CA8;
    }
L_08A99CA8:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99CB4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 377u, 0x08A95B14u>(ctx, &aot_mem) && ctx.pc == 0x08A99CB4u) goto L_08A99CB4;
    return;
L_08A99CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99CBC;
    }
L_08A99CBC:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99CCCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27084));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99CCCu) goto L_08A99CCC;
    return;
L_08A99CCC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99CE8;
      }
      goto L_08A99CD4;
    }
L_08A99CD4:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99CE0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 388u, 0x08A95BE0u>(ctx, &aot_mem) && ctx.pc == 0x08A99CE0u) goto L_08A99CE0;
    return;
L_08A99CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99CE8;
    }
L_08A99CE8:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99CF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27075));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99CF8u) goto L_08A99CF8;
    return;
L_08A99CF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99D14;
      }
      goto L_08A99D00;
    }
L_08A99D00:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99D0Cu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 397u, 0x08A95C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A99D0Cu) goto L_08A99D0C;
    return;
L_08A99D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99D14;
    }
L_08A99D14:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99D24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27066));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99D24u) goto L_08A99D24;
    return;
L_08A99D24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99D40;
      }
      goto L_08A99D2C;
    }
L_08A99D2C:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99D38u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 406u, 0x08A95D38u>(ctx, &aot_mem) && ctx.pc == 0x08A99D38u) goto L_08A99D38;
    return;
L_08A99D38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99D40;
    }
L_08A99D40:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99D50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27057));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99D50u) goto L_08A99D50;
    return;
L_08A99D50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99D6C;
      }
      goto L_08A99D58;
    }
L_08A99D58:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99D64u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 415u, 0x08A95DECu>(ctx, &aot_mem) && ctx.pc == 0x08A99D64u) goto L_08A99D64;
    return;
L_08A99D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99D6C;
    }
L_08A99D6C:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99D7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27048));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99D7Cu) goto L_08A99D7C;
    return;
L_08A99D7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99D98;
      }
      goto L_08A99D84;
    }
L_08A99D84:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99D90u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 107u, 0x08A94738u>(ctx, &aot_mem) && ctx.pc == 0x08A99D90u) goto L_08A99D90;
    return;
L_08A99D90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99D98;
    }
L_08A99D98:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99DA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26994));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99DA8u) goto L_08A99DA8;
    return;
L_08A99DA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08A99E28;
      }
      goto L_08A99DB0;
    }
L_08A99DB0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13696)));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13696), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[16] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-20544));
      if (branch_taken) {
          goto L_08A99E00;
      }
      goto L_08A99DD8;
    }
L_08A99DD8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A99DE4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A99DE4u) goto L_08A99DE4;
    return;
L_08A99DE4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A99DFC;
      }
      goto L_08A99DF0;
    }
L_08A99DF0:
    ctx.gpr[31] = (0x08A99DF8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A99DF8u) goto L_08A99DF8;
    return;
L_08A99DF8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08A99DFC;
L_08A99DFC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    goto L_08A99E00;
L_08A99E00:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A99E0Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A99E0Cu) goto L_08A99E0C;
    return;
L_08A99E0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A99E20u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A99E20u) goto L_08A99E20;
    return;
L_08A99E20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99E28;
    }
L_08A99E28:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99E38u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26985));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99E38u) goto L_08A99E38;
    return;
L_08A99E38:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08A99EB8;
      }
      goto L_08A99E40;
    }
L_08A99E40:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13696)));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13696), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[16] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-20544));
      if (branch_taken) {
          goto L_08A99E90;
      }
      goto L_08A99E68;
    }
L_08A99E68:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A99E74u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A99E74u) goto L_08A99E74;
    return;
L_08A99E74:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A99E8C;
      }
      goto L_08A99E80;
    }
L_08A99E80:
    ctx.gpr[31] = (0x08A99E88u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A99E88u) goto L_08A99E88;
    return;
L_08A99E88:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08A99E8C;
L_08A99E8C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    goto L_08A99E90;
L_08A99E90:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A99E9Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A99E9Cu) goto L_08A99E9C;
    return;
L_08A99E9C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A99EB0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A99EB0u) goto L_08A99EB0;
    return;
L_08A99EB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99EB8;
    }
L_08A99EB8:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99EC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27039));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99EC8u) goto L_08A99EC8;
    return;
L_08A99EC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99EE4;
      }
      goto L_08A99ED0;
    }
L_08A99ED0:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99EDCu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 424u, 0x08A95EA0u>(ctx, &aot_mem) && ctx.pc == 0x08A99EDCu) goto L_08A99EDC;
    return;
L_08A99EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99EE4;
    }
L_08A99EE4:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99EF4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27030));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99EF4u) goto L_08A99EF4;
    return;
L_08A99EF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99F10;
      }
      goto L_08A99EFC;
    }
L_08A99EFC:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99F08u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 433u, 0x08A95F54u>(ctx, &aot_mem) && ctx.pc == 0x08A99F08u) goto L_08A99F08;
    return;
L_08A99F08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99F10;
    }
L_08A99F10:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99F20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27021));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99F20u) goto L_08A99F20;
    return;
L_08A99F20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99F34;
      }
      goto L_08A99F28;
    }
L_08A99F28:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99F34;
    }
L_08A99F34:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99F44u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27012));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99F44u) goto L_08A99F44;
    return;
L_08A99F44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99F60;
      }
      goto L_08A99F4C;
    }
L_08A99F4C:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99F58u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 459u, 0x08A960F8u>(ctx, &aot_mem) && ctx.pc == 0x08A99F58u) goto L_08A99F58;
    return;
L_08A99F58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99F60;
    }
L_08A99F60:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99F70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27003));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99F70u) goto L_08A99F70;
    return;
L_08A99F70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99F8C;
      }
      goto L_08A99F78;
    }
L_08A99F78:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99F84u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 323u, 0x08A956E4u>(ctx, &aot_mem) && ctx.pc == 0x08A99F84u) goto L_08A99F84;
    return;
L_08A99F84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99F8C;
    }
L_08A99F8C:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99F9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26976));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99F9Cu) goto L_08A99F9C;
    return;
L_08A99F9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99FB8;
      }
      goto L_08A99FA4;
    }
L_08A99FA4:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99FB0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 332u, 0x08A95798u>(ctx, &aot_mem) && ctx.pc == 0x08A99FB0u) goto L_08A99FB0;
    return;
L_08A99FB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99FB8;
    }
L_08A99FB8:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99FC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26967));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99FC8u) goto L_08A99FC8;
    return;
L_08A99FC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99FE4;
      }
      goto L_08A99FD0;
    }
L_08A99FD0:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99FDCu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 341u, 0x08A9584Cu>(ctx, &aot_mem) && ctx.pc == 0x08A99FDCu) goto L_08A99FDC;
    return;
L_08A99FDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A99FE4;
    }
L_08A99FE4:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99FF4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26958));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99FF4u) goto L_08A99FF4;
    return;
L_08A99FF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A010;
      }
      goto L_08A99FFC;
    }
L_08A99FFC:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A9A008u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 350u, 0x08A95900u>(ctx, &aot_mem) && ctx.pc == 0x08A9A008u) goto L_08A9A008;
    return;
L_08A9A008:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A9A010;
    }
L_08A9A010:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9A020u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26949));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A020u) goto L_08A9A020;
    return;
L_08A9A020:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A03C;
      }
      goto L_08A9A028;
    }
L_08A9A028:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A9A034u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 359u, 0x08A959B4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A034u) goto L_08A9A034;
    return;
L_08A9A034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A9A03C;
    }
L_08A9A03C:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9A04Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26940));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A04Cu) goto L_08A9A04C;
    return;
L_08A9A04C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A068;
      }
      goto L_08A9A054;
    }
L_08A9A054:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A9A060u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 11u, 0x08A94078u>(ctx, &aot_mem) && ctx.pc == 0x08A9A060u) goto L_08A9A060;
    return;
L_08A9A060:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A9A068;
    }
L_08A9A068:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9A078u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26921));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A078u) goto L_08A9A078;
    return;
L_08A9A078:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A094;
      }
      goto L_08A9A080;
    }
L_08A9A080:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A9A08Cu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 35u, 0x08A94240u>(ctx, &aot_mem) && ctx.pc == 0x08A9A08Cu) goto L_08A9A08C;
    return;
L_08A9A08C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A9A094;
    }
L_08A9A094:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9A0A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26930));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 468u, 0x08A961A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A0A4u) goto L_08A9A0A4;
    return;
L_08A9A0A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A0BC;
      }
      goto L_08A9A0AC;
    }
L_08A9A0AC:
    ctx.gpr[4] = (0u | 32u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A9A0BCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 556u, 0x08A8EA68u>(ctx, &aot_mem) && ctx.pc == 0x08A9A0BCu) goto L_08A9A0BC;
    return;
L_08A9A0BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A0D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25252)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25248)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] | 14571u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25256), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25276)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[3] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25288)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25284)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25292), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(25300), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(25264), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(25260), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.gpr[14] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[7] = (16281u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[3] = (ctx.gpr[7] | 39322u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(25268), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(25272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[24] = (2229u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(25280), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[25] = (2229u << 16u);
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[18] = (2225u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25440));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-31752));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 192u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(25296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9A1E8u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25304), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x08A9A1E8u) goto L_08A9A1E8;
    return;
L_08A9A1E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A200:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7004), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A20C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A214:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-8092), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A220:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A228:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A230:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A238:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25372)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25368)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25396)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[3] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(25376), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(25384), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(25380), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(25400), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A2CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    ctx.gpr[2] = (0u | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A2F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (0u | 20u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(19968));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17220), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A9A334;
L_08A9A334:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(17285), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(17286), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(18245), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(18246), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(19168), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(19188), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A9A334;
      }
      goto L_08A9A360;
    }
L_08A9A360:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19208), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19209), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19210), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19469), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19470), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (2225u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19468), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(19472));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[31] = (0x08A9A390u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-31708));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x08A9A390u) goto L_08A9A390;
    return;
L_08A9A390:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31676));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x08A9A3ACu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x08A9A3ACu) goto L_08A9A3AC;
    return;
L_08A9A3AC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20864));
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x08A9A3C0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x08A9A3C0u) goto L_08A9A3C0;
    return;
L_08A9A3C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21776), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21780), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21784), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21785), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21792), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21788), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21808), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21812), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21816), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21824), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[18]);
    goto L_08A9A3F4;
L_08A9A3F4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(21760), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A9A3F4;
      }
      goto L_08A9A40C;
    }
L_08A9A40C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21774), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16694u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 61167u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21944), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[31] = (0x08A9A444u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B520;
L_08A9A444:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A9A450u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B520;
L_08A9A450:
    ctx.gpr[31] = (0x08A9A458u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B36C;
L_08A9A458:
    ctx.gpr[31] = (0x08A9A460u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B568;
L_08A9A460:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A9A478;
L_08A9A478:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5960), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(15952), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[17] < static_cast<std::uint32_t>(250) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9A478;
      }
      goto L_08A9A494;
    }
L_08A9A494:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16952), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21948), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21956), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17224), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21952), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A4D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A9A528;
      }
      goto L_08A9A4F4;
    }
L_08A9A4F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A508;
      }
      goto L_08A9A500;
    }
L_08A9A500:
    ctx.gpr[31] = (0x08A9A508u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A9A5B8;
L_08A9A508:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(17060));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17220), 0u);
        goto L_08A9A514;
    }
    goto L_08A9A514;
L_08A9A514:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A528;
      }
      goto L_08A9A520;
    }
L_08A9A520:
    ctx.gpr[31] = (0x08A9A528u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08A9A528u) goto L_08A9A528;
    return;
L_08A9A528:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A53C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9A5A8;
      }
      goto L_08A9A554;
    }
L_08A9A554:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A9A560u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20288));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9A560u) goto L_08A9A560;
    return;
L_08A9A560:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A9A56Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 248u, 0x088B5A14u>(ctx, &aot_mem) && ctx.pc == 0x08A9A56Cu) goto L_08A9A56C;
    return;
L_08A9A56C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A5A8;
      }
      goto L_08A9A57C;
    }
L_08A9A57C:
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A9A58Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 290u, 0x08A5DDD4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A58Cu) goto L_08A9A58C;
    return;
L_08A9A58C:
    ctx.gpr[31] = (0x08A9A594u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 356u, 0x08842744u>(ctx, &aot_mem) && ctx.pc == 0x08A9A594u) goto L_08A9A594;
    return;
L_08A9A594:
    ctx.gpr[31] = (0x08A9A59Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 373u, 0x088428ECu>(ctx, &aot_mem) && ctx.pc == 0x08A9A59Cu) goto L_08A9A59C;
    return;
L_08A9A59C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A9A5A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 133u, 0x088BC70Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9A5A8u) goto L_08A9A5A8;
    return;
L_08A9A5A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A5B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9A678;
      }
      goto L_08A9A5DC;
    }
L_08A9A5DC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A9A5E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 455u, 0x088BA7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A9A5E8u) goto L_08A9A5E8;
    return;
L_08A9A5E8:
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25456));
    goto L_08A9A600;
L_08A9A600:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(5960), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15952), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[18] < static_cast<std::uint32_t>(250) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9A600;
      }
      goto L_08A9A61C;
    }
L_08A9A61C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16952), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17220), 0u);
    ctx.gpr[31] = (0x08A9A62Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 321u, 0x08A5DFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A9A62Cu) goto L_08A9A62C;
    return;
L_08A9A62C:
    ctx.gpr[18] = (0u | 0u);
    goto L_08A9A630;
L_08A9A630:
    ctx.gpr[19] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9A640u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A640u) goto L_08A9A640;
    return;
L_08A9A640:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A654;
      }
      goto L_08A9A648;
    }
L_08A9A648:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9A654u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 303u, 0x088B5DCCu>(ctx, &aot_mem) && ctx.pc == 0x08A9A654u) goto L_08A9A654;
    return;
L_08A9A654:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(67) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A630;
      }
      goto L_08A9A664;
    }
L_08A9A664:
    ctx.gpr[31] = (0x08A9A66Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 269u, 0x088B5B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9A66Cu) goto L_08A9A66C;
    return;
L_08A9A66C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A9A678u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 349u, 0x08A5E130u>(ctx, &aot_mem) && ctx.pc == 0x08A9A678u) goto L_08A9A678;
    return;
L_08A9A678:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A694:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9A6A8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A9B568;
L_08A9A6A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A6D4;
      }
      goto L_08A9A6B4;
    }
L_08A9A6B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A9A6C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DCB8u>(ctx, &aot_mem) && ctx.pc == 0x08A9A6C0u) goto L_08A9A6C0;
    return;
L_08A9A6C0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A9A6D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 557u, 0x088BACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A9A6D0u) goto L_08A9A6D0;
    return;
L_08A9A6D0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    goto L_08A9A6D4;
L_08A9A6D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A734;
      }
      goto L_08A9A6E0;
    }
L_08A9A6E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21945)));
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21946), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-28728)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(305)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7200)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21945), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A9A720u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9BAE8;
L_08A9A720:
    ctx.gpr[31] = (0x08A9A728u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9AB88;
L_08A9A728:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A9A734u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 164u, 0x088BCA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9A734u) goto L_08A9A734;
    return;
L_08A9A734:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A744:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9A800;
      }
      goto L_08A9A750;
    }
L_08A9A750:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A774;
      }
      goto L_08A9A758;
    }
L_08A9A758:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A76C;
      }
      goto L_08A9A764;
    }
L_08A9A764:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9A77C;
      }
      goto L_08A9A76C;
    }
L_08A9A76C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A9A804;
      }
      goto L_08A9A774;
    }
L_08A9A774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A9A804;
      }
      goto L_08A9A77C;
    }
L_08A9A77C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(5960)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A7E8;
      }
      goto L_08A9A788;
    }
L_08A9A788:
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(5960), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(5961), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(5952), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(5956), ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 209u);
    goto L_08A9A7A4;
L_08A9A7A4:
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(5962), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A7A4;
      }
      goto L_08A9A7C4;
    }
L_08A9A7C4:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(5988), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16952));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15952), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9A804;
      }
      goto L_08A9A7E8;
    }
L_08A9A7E8:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[2] < static_cast<std::uint32_t>(250) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08A9A77C;
      }
      goto L_08A9A7F8;
    }
L_08A9A7F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_08A9A804;
      }
      goto L_08A9A800;
    }
L_08A9A800:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-4));
    goto L_08A9A804;
L_08A9A804:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A80C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9A8D8;
      }
      goto L_08A9A824;
    }
L_08A9A824:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9A8D8;
      }
      goto L_08A9A82C;
    }
L_08A9A82C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A8D8;
      }
      goto L_08A9A834;
    }
L_08A9A834:
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(5960)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A8D8;
      }
      goto L_08A9A850;
    }
L_08A9A850:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(5960), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16952)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A9A8D8;
      }
      goto L_08A9A868;
    }
L_08A9A868:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(15952)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A9A8C8;
      }
      goto L_08A9A874;
    }
L_08A9A874:
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(249) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A8AC;
      }
      goto L_08A9A880;
    }
L_08A9A880:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(15952));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15952));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.gpr[31] = (0x08A9A8A8u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A9A8A8u) goto L_08A9A8A8;
    return;
L_08A9A8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16952)));
    goto L_08A9A8AC;
L_08A9A8AC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16952), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15952), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A9A8D8;
      }
      goto L_08A9A8C8;
    }
L_08A9A8C8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9A868;
      }
      goto L_08A9A8D8;
    }
L_08A9A8D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A8E8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A9A924;
      }
      goto L_08A9A8F4;
    }
L_08A9A8F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9A924;
      }
      goto L_08A9A8FC;
    }
L_08A9A8FC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A924;
      }
      goto L_08A9A904;
    }
L_08A9A904:
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5960)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A924;
      }
      goto L_08A9A920;
    }
L_08A9A920:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5961), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08A9A924;
L_08A9A924:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A92C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A9AA38;
      }
      goto L_08A9A950;
    }
L_08A9A950:
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[31] = (0x08A9A964u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B520;
L_08A9A964:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(17452));
      if (branch_taken) {
          goto L_08A9A988;
      }
      goto L_08A9A974;
    }
L_08A9A974:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[31] = (0x08A9A980u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B520;
L_08A9A980:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9A998;
      }
      goto L_08A9A988;
    }
L_08A9A988:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A9A994u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B520;
L_08A9A994:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08A9A998;
L_08A9A998:
    ctx.gpr[31] = (0x08A9A9A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B36C;
L_08A9A9A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9A9ACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 294u, 0x08A6D488u>(ctx, &aot_mem) && ctx.pc == 0x08A9A9ACu) goto L_08A9A9AC;
    return;
L_08A9A9AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9A9B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 294u, 0x08A6D488u>(ctx, &aot_mem) && ctx.pc == 0x08A9A9B8u) goto L_08A9A9B8;
    return;
L_08A9A9B8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9A9CCu);
    ctx.gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9A9CCu) goto L_08A9A9CC;
    return;
L_08A9A9CC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9A9D8u);
    ctx.gpr[5] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9A9D8u) goto L_08A9A9D8;
    return;
L_08A9A9D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9A9E4u);
    ctx.gpr[5] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9A9E4u) goto L_08A9A9E4;
    return;
L_08A9A9E4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9A9F0u);
    ctx.gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9A9F0u) goto L_08A9A9F0;
    return;
L_08A9A9F0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9A9FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 374u, 0x088B6224u>(ctx, &aot_mem) && ctx.pc == 0x08A9A9FCu) goto L_08A9A9FC;
    return;
L_08A9A9FC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9AA08u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 375u, 0x088B622Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9AA08u) goto L_08A9AA08;
    return;
L_08A9AA08:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A9AA14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 223u, 0x088BCD50u>(ctx, &aot_mem) && ctx.pc == 0x08A9AA14u) goto L_08A9AA14;
    return;
L_08A9AA14:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17224), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A9AA20u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 270u, 0x088B5B54u>(ctx, &aot_mem) && ctx.pc == 0x08A9AA20u) goto L_08A9AA20;
    return;
L_08A9AA20:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A9AA24;
L_08A9AA24:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 56 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A9AA24;
      }
      goto L_08A9AA38;
    }
L_08A9AA38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AA50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9AAD8;
      }
      goto L_08A9AA70;
    }
L_08A9AA70:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A9AA78;
L_08A9AA78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5960)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AAC4;
      }
      goto L_08A9AA84;
    }
L_08A9AA84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5952)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AAC4;
      }
      goto L_08A9AA94;
    }
L_08A9AA94:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20216)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AAAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5956)));
    ctx.gpr[31] = (0x08A9AAB8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 630u, 0x0896EE78u>(ctx, &aot_mem) && ctx.pc == 0x08A9AAB8u) goto L_08A9AAB8;
    return;
L_08A9AAB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9AAC4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A9A80C;
L_08A9AAC4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(250) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08A9AA78;
      }
      goto L_08A9AAD4;
    }
L_08A9AAD4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17220), 0u);
    goto L_08A9AAD8;
L_08A9AAD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AAF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9AB08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 372u, 0x088B6214u>(ctx, &aot_mem) && ctx.pc == 0x08A9AB08u) goto L_08A9AB08;
    return;
L_08A9AB08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AB14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9AB2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 373u, 0x088B621Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9AB2Cu) goto L_08A9AB2C;
    return;
L_08A9AB2C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AB38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9AB50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 374u, 0x088B6224u>(ctx, &aot_mem) && ctx.pc == 0x08A9AB50u) goto L_08A9AB50;
    return;
L_08A9AB50:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AB5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9AB74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 375u, 0x088B622Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9AB74u) goto L_08A9AB74;
    return;
L_08A9AB74:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AB80:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AB88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(21948));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A9ABD4;
      }
      goto L_08A9ABC8;
    }
L_08A9ABC8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A9ABD8;
      }
      goto L_08A9ABD4;
    }
L_08A9ABD4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_08A9ABD8;
L_08A9ABD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9ACD4;
      }
      goto L_08A9ABE4;
    }
L_08A9ABE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21946)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9ACD4;
      }
      goto L_08A9ABF0;
    }
L_08A9ABF0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_08A9ABF8;
L_08A9ABF8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A9AC08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9AC08u) goto L_08A9AC08;
    return;
L_08A9AC08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9ABF8;
      }
      goto L_08A9AC20;
    }
L_08A9AC20:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[31] = (0x08A9AC30u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 359u, 0x088B60FCu>(ctx, &aot_mem) && ctx.pc == 0x08A9AC30u) goto L_08A9AC30;
    return;
L_08A9AC30:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[31] = (0x08A9AC40u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 359u, 0x088B60FCu>(ctx, &aot_mem) && ctx.pc == 0x08A9AC40u) goto L_08A9AC40;
    return;
L_08A9AC40:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x08A9AC50u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 359u, 0x088B60FCu>(ctx, &aot_mem) && ctx.pc == 0x08A9AC50u) goto L_08A9AC50;
    return;
L_08A9AC50:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9AC5Cu);
    ctx.gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9AC5Cu) goto L_08A9AC5C;
    return;
L_08A9AC5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AC74;
      }
      goto L_08A9AC68;
    }
L_08A9AC68:
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 20u);
      if (branch_taken) {
          goto L_08A9AC7C;
      }
      goto L_08A9AC74;
    }
L_08A9AC74:
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[4] = (0u | 22u);
    goto L_08A9AC7C;
L_08A9AC7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A9AC88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9AC88u) goto L_08A9AC88;
    return;
L_08A9AC88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A9AC94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9AC94u) goto L_08A9AC94;
    return;
L_08A9AC94:
    ctx.gpr[31] = (0x08A9AC9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B520;
L_08A9AC9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9ACBC;
      }
      goto L_08A9ACA8;
    }
L_08A9ACA8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[31] = (0x08A9ACB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B520;
L_08A9ACB4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9ACCC;
      }
      goto L_08A9ACBC;
    }
L_08A9ACBC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A9ACC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B520;
L_08A9ACC8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08A9ACCC;
L_08A9ACCC:
    ctx.gpr[31] = (0x08A9ACD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B36C;
L_08A9ACD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9ACEC;
      }
      goto L_08A9ACE4;
    }
L_08A9ACE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9ACF4;
      }
      goto L_08A9ACEC;
    }
L_08A9ACEC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A9ACF4;
L_08A9ACF4:
    ctx.gpr[31] = (0x08A9ACFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 367u, 0x08A6DB80u>(ctx, &aot_mem) && ctx.pc == 0x08A9ACFCu) goto L_08A9ACFC;
    return;
L_08A9ACFC:
    ctx.gpr[31] = (0x08A9AD04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B520;
L_08A9AD04:
    ctx.gpr[31] = (0x08A9AD0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B054;
L_08A9AD0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AD38;
      }
      goto L_08A9AD18;
    }
L_08A9AD18:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AD30;
      }
      goto L_08A9AD28;
    }
L_08A9AD28:
    ctx.gpr[31] = (0x08A9AD30u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(17248));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 322u, 0x08A6D67Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9AD30u) goto L_08A9AD30;
    return;
L_08A9AD30:
    ctx.gpr[31] = (0x08A9AD38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 313u, 0x08AB6200u>(ctx, &aot_mem) && ctx.pc == 0x08A9AD38u) goto L_08A9AD38;
    return;
L_08A9AD38:
    ctx.gpr[31] = (0x08A9AD40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 28u, 0x08A9C264u>(ctx, &aot_mem) && ctx.pc == 0x08A9AD40u) goto L_08A9AD40;
    return;
L_08A9AD40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AD54;
      }
      goto L_08A9AD4C;
    }
L_08A9AD4C:
    ctx.gpr[31] = (0x08A9AD54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 309u, 0x08A6D568u>(ctx, &aot_mem) && ctx.pc == 0x08A9AD54u) goto L_08A9AD54;
    return;
L_08A9AD54:
    ctx.gpr[31] = (0x08A9AD5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 65u, 0x08A9C52Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9AD5Cu) goto L_08A9AD5C;
    return;
L_08A9AD5C:
    ctx.gpr[31] = (0x08A9AD64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 270u, 0x088B5B54u>(ctx, &aot_mem) && ctx.pc == 0x08A9AD64u) goto L_08A9AD64;
    return;
L_08A9AD64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17220)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A9ADB8;
      }
      goto L_08A9AD78;
    }
L_08A9AD78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17060)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5956)));
    ctx.gpr[31] = (0x08A9AD98u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 630u, 0x0896EE78u>(ctx, &aot_mem) && ctx.pc == 0x08A9AD98u) goto L_08A9AD98;
    return;
L_08A9AD98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17060)));
    ctx.gpr[31] = (0x08A9ADA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9A80C;
L_08A9ADA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17220)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9AD78;
      }
      goto L_08A9ADB8;
    }
L_08A9ADB8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17220), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9ADD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9AE10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 119u, 0x088ED058u>(ctx, &aot_mem) && ctx.pc == 0x08A9AE10u) goto L_08A9AE10;
    return;
L_08A9AE10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AE94;
      }
      goto L_08A9AE18;
    }
L_08A9AE18:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9AE94;
      }
      goto L_08A9AE2C;
    }
L_08A9AE2C:
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[12])) && ctx.fpr[24] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9AE94;
      }
      goto L_08A9AE44;
    }
L_08A9AE44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21944)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9AE8C;
      }
      goto L_08A9AE70;
    }
L_08A9AE70:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9AE9C;
      }
      goto L_08A9AE84;
    }
L_08A9AE84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AF24;
      }
      goto L_08A9AE8C;
    }
L_08A9AE8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A9AFAC;
      }
      goto L_08A9AE94;
    }
L_08A9AE94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A9AFAC;
      }
      goto L_08A9AE9C;
    }
L_08A9AE9C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A9AEB4;
      }
      goto L_08A9AEA8;
    }
L_08A9AEA8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A9AEB4;
L_08A9AEB4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16320u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A9AED4;
    }
    goto L_08A9AED4;
L_08A9AED4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A9AF04;
      }
      goto L_08A9AEF8;
    }
L_08A9AEF8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A9AF1C;
      }
      goto L_08A9AF04;
    }
L_08A9AF04:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[2] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    goto L_08A9AF1C;
L_08A9AF1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AFAC;
      }
      goto L_08A9AF24;
    }
L_08A9AF24:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A9AF3C;
      }
      goto L_08A9AF30;
    }
L_08A9AF30:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A9AF3C;
L_08A9AF3C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49088u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A9AF5C;
    }
    goto L_08A9AF5C;
L_08A9AF5C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A9AF8C;
      }
      goto L_08A9AF80;
    }
L_08A9AF80:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A9AFA4;
      }
      goto L_08A9AF8C;
    }
L_08A9AF8C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[2] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    goto L_08A9AFA4;
L_08A9AFA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AFAC;
      }
      goto L_08A9AFAC;
    }
L_08A9AFAC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AFCC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[8] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A9B024;
      }
      goto L_08A9AFD4;
    }
L_08A9AFD4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(25752)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[7]);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25748)));
    ctx.gpr[10] = (ctx.hi);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(25752), ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[6] = (ctx.gpr[2] & 1u);
      if (branch_taken) {
          goto L_08A9B02C;
      }
      goto L_08A9B01C;
    }
L_08A9B01C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A9B02C;
      }
      goto L_08A9B024;
    }
L_08A9B024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9B04C;
      }
      goto L_08A9B02C;
    }
L_08A9B02C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B040;
      }
      goto L_08A9B034;
    }
L_08A9B034:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25748), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25748)));
    goto L_08A9B040;
L_08A9B040:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B04C;
      }
      goto L_08A9B048;
    }
L_08A9B048:
    ctx.gpr[2] = (0u - ctx.gpr[2]);
    goto L_08A9B04C;
L_08A9B04C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B054:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16952)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A9B0B8;
      }
      goto L_08A9B080;
    }
L_08A9B080:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15952)));
    ctx.gpr[31] = (0x08A9B08Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 358u, 0x08A5E1A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9B08Cu) goto L_08A9B08C;
    return;
L_08A9B08C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15952)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5988), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16952)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9B080;
      }
      goto L_08A9B0B8;
    }
L_08A9B0B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B0D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(5661) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9B158;
      }
      goto L_08A9B100;
    }
L_08A9B100:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4024)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_08A9B16C;
    }
    goto L_08A9B134;
L_08A9B134:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4024)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[18] << 5u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4024), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A9B1BC;
      }
      goto L_08A9B158;
    }
L_08A9B158:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A9B164u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20256));
    goto L_08A9A2CC;
L_08A9B164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B34C;
      }
      goto L_08A9B16C;
    }
L_08A9B16C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[8] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3983)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[18] << 5u);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(220)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B1D8;
      }
      goto L_08A9B1BC;
    }
L_08A9B1BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B1F0;
      }
      goto L_08A9B1D0;
    }
L_08A9B1D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B1E0;
      }
      goto L_08A9B1D8;
    }
L_08A9B1D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B34C;
      }
      goto L_08A9B1E0;
    }
L_08A9B1E0:
    ctx.gpr[31] = (0x08A9B1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 432u, 0x08ACA9B0u>(ctx, &aot_mem) && ctx.pc == 0x08A9B1E8u) goto L_08A9B1E8;
    return;
L_08A9B1E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B1F8;
      }
      goto L_08A9B1F0;
    }
L_08A9B1F0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    goto L_08A9B1F8;
L_08A9B1F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B218;
      }
      goto L_08A9B204;
    }
L_08A9B204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B218;
      }
      goto L_08A9B210;
    }
L_08A9B210:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(97)));
      if (branch_taken) {
          goto L_08A9B220;
      }
      goto L_08A9B218;
    }
L_08A9B218:
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    goto L_08A9B220;
L_08A9B220:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B244;
      }
      goto L_08A9B230;
    }
L_08A9B230:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B244;
      }
      goto L_08A9B23C;
    }
L_08A9B23C:
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A9B244;
L_08A9B244:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(97)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(98)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(99)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(105)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(112))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(113)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9B33Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A9B430;
L_08A9B33C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B34C;
      }
      goto L_08A9B344;
    }
L_08A9B344:
    ctx.gpr[31] = (0x08A9B34Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9BF3C;
L_08A9B34C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B36C:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[12] = (17224u << 16u);
      if (branch_taken) {
          goto L_08A9B428;
      }
      goto L_08A9B380;
    }
L_08A9B380:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-5));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[12]);
    ctx.gpr[10] = (0u | 5662u);
    ctx.gpr[9] = (0u | 68u);
    ctx.gpr[8] = (0u | 5u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (0u | 63u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[3] << 5u);
    goto L_08A9B3A8;
L_08A9B3A8:
    ctx.gpr[13] = (ctx.gpr[12] + ctx.gpr[12]);
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[12] = (ctx.gpr[4] + ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4032), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4036), 0u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4040), ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4044), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4045), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4048), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4052), 0u);
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4056), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4060), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4104), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4105), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4064), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4068), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4098), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4076), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4108), 0u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4100), 0u);
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4112), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4080), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4084), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4088), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4096), static_cast<std::uint8_t>(0u));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4097), static_cast<std::uint8_t>(0u));
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[12] = (ctx.gpr[3] << 5u);
      if (branch_taken) {
          goto L_08A9B3A8;
      }
      goto L_08A9B428;
    }
L_08A9B428:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B430:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[6] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A9B504;
      }
      goto L_08A9B470;
    }
L_08A9B470:
    ctx.gpr[6] = (ctx.gpr[6] << 7u);
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[18] << 5u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(220)));
    goto L_08A9B498;
L_08A9B498:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3984)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(220)));
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B4F0;
      }
      goto L_08A9B4BC;
    }
L_08A9B4BC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(3984));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3985));
    ctx.gpr[31] = (0x08A9B4D4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A9B4D4u) goto L_08A9B4D4;
    return;
L_08A9B4D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A9B504;
      }
      goto L_08A9B4F0;
    }
L_08A9B4F0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A9B498;
      }
      goto L_08A9B504;
    }
L_08A9B504:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3984), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B520:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_08A9B55C;
      }
      goto L_08A9B534;
    }
L_08A9B534:
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[9] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08A9B544;
L_08A9B544:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(3984), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B544;
      }
      goto L_08A9B55C;
    }
L_08A9B55C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4024), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B568:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    goto L_08A9B580;
L_08A9B580:
    ctx.gpr[31] = (0x08A9B588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A9B588u) goto L_08A9B588;
    return;
L_08A9B588:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21924), ctx.gpr[2]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9B580;
      }
      goto L_08A9B59C;
    }
L_08A9B59C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B5B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25456));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9B5D8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A9B5D8u) goto L_08A9B5D8;
    return;
L_08A9B5D8:
    ctx.gpr[4] = (ctx.gpr[2] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B5FC;
      }
      goto L_08A9B5E8;
    }
L_08A9B5E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9B5F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 298u, 0x088B5D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9B5F4u) goto L_08A9B5F4;
    return;
L_08A9B5F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9B600;
      }
      goto L_08A9B5FC;
    }
L_08A9B5FC:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A9B600;
L_08A9B600:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B614:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (15488u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 63u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A9B64Cu);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 254u, 0x08AECD04u>(ctx, &aot_mem) && ctx.pc == 0x08A9B64Cu) goto L_08A9B64C;
    return;
L_08A9B64C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25684));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 63u);
        goto L_08A9B664;
    }
    goto L_08A9B664;
L_08A9B664:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A9B6A4;
      }
      goto L_08A9B680;
    }
L_08A9B680:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(63));
    ctx.gpr[16] = (0u | 107u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 107 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08A9B694;
    }
    goto L_08A9B694;
L_08A9B694:
    ctx.gpr[4] = (ctx.gpr[16] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08A9B6C8;
      }
      goto L_08A9B6A4;
    }
L_08A9B6A4:
    ctx.gpr[4] = (0u | 63u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[16] = (0u | 20u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08A9B6BC;
    }
    goto L_08A9B6BC;
L_08A9B6BC:
    ctx.gpr[4] = (ctx.gpr[16] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    goto L_08A9B6C8;
L_08A9B6C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B6DC:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A9B718;
      }
      goto L_08A9B6F0;
    }
L_08A9B6F0:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
        goto L_08A9B720;
    }
    goto L_08A9B710;
L_08A9B710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B760;
      }
      goto L_08A9B718;
    }
L_08A9B718:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9B760;
      }
      goto L_08A9B720;
    }
L_08A9B720:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[2] = (0u | 127u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
        goto L_08A9B758;
    }
    goto L_08A9B758;
L_08A9B758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08A9B760;
      }
      goto L_08A9B760;
    }
L_08A9B760:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B768:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A9B7CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x08A9B7CCu) goto L_08A9B7CC;
    return;
L_08A9B7CC:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B840;
      }
      goto L_08A9B82C;
    }
L_08A9B82C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B840;
      }
      goto L_08A9B838;
    }
L_08A9B838:
    ctx.gpr[31] = (0x08A9B840u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A9B840u) goto L_08A9B840;
    return;
L_08A9B840:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10384));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9B8BCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A9B0D0;
L_08A9B8BC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B8CC;
      }
      goto L_08A9B8C4;
    }
L_08A9B8C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B8E0;
      }
      goto L_08A9B8CC;
    }
L_08A9B8CC:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9B8E0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A9B0D0;
L_08A9B8E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B8F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(17332)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A9B940;
      }
      goto L_08A9B92C;
    }
L_08A9B92C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B948;
      }
      goto L_08A9B938;
    }
L_08A9B938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BAC4;
      }
      goto L_08A9B940;
    }
L_08A9B940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BAC4;
      }
      goto L_08A9B948;
    }
L_08A9B948:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9BAC4;
      }
      goto L_08A9B950;
    }
L_08A9B950:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BAC4;
      }
      goto L_08A9B958;
    }
L_08A9B958:
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5960)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BAC4;
      }
      goto L_08A9B974;
    }
L_08A9B974:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < 208 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BAC4;
      }
      goto L_08A9B980;
    }
L_08A9B980:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5952)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A9B9E4;
      }
      goto L_08A9B990;
    }
L_08A9B990:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17220)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B9CC;
      }
      goto L_08A9B9A0;
    }
L_08A9B9A0:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(5962), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5988), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(17220));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17060), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A9BAC4;
      }
      goto L_08A9B9CC;
    }
L_08A9B9CC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BAC4;
      }
      goto L_08A9B9DC;
    }
L_08A9B9DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BAC4;
      }
      goto L_08A9B9E4;
    }
L_08A9B9E4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5988)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A9BA98;
      }
      goto L_08A9B9F8;
    }
L_08A9B9F8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(25476));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[4]);
    goto L_08A9BA08;
L_08A9BA08:
    ctx.gpr[16] = (ctx.gpr[17] + ctx.gpr[16]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BA84;
      }
      goto L_08A9BA24;
    }
L_08A9BA24:
    ctx.gpr[19] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A9BA64;
      }
      goto L_08A9BA34;
    }
L_08A9BA34:
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(5964));
    ctx.gpr[20] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(5962));
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08A9BA50u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A9BA50u) goto L_08A9BA50;
    return;
L_08A9BA50:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(5976));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(5972));
    ctx.gpr[31] = (0x08A9BA60u);
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A9BA60u) goto L_08A9BA60;
    return;
L_08A9BA60:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5988)));
    goto L_08A9BA64;
L_08A9BA64:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(5962), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(5972), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A9BA7C;
      }
      goto L_08A9BA74;
    }
L_08A9BA74:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5988), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A9BA7C;
L_08A9BA7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BAC4;
      }
      goto L_08A9BA84;
    }
L_08A9BA84:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9BA08;
      }
      goto L_08A9BA98;
    }
L_08A9BA98:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BAC4;
      }
      goto L_08A9BAA4;
    }
L_08A9BAA4:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(5962), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5972), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5988), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A9BAC4;
L_08A9BAC4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9BAE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21948)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BBE0;
      }
      goto L_08A9BB10;
    }
L_08A9BB10:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16960));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16964), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A9BB80u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9BB80u) goto L_08A9BB80;
    return;
L_08A9BB80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BBD8;
      }
      goto L_08A9BB88;
    }
L_08A9BB88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17040), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BF24;
      }
      goto L_08A9BBD8;
    }
L_08A9BBD8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17040), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A9BF24;
      }
      goto L_08A9BBE0;
    }
L_08A9BBE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BCC4;
      }
      goto L_08A9BBF4;
    }
L_08A9BBF4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16976));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16980), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A9BC64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9BC64u) goto L_08A9BC64;
    return;
L_08A9BC64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BCBC;
      }
      goto L_08A9BC6C;
    }
L_08A9BC6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17044), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BF24;
      }
      goto L_08A9BCBC;
    }
L_08A9BCBC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17044), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A9BF24;
      }
      goto L_08A9BCC4;
    }
L_08A9BCC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BDA8;
      }
      goto L_08A9BCD8;
    }
L_08A9BCD8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16992));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16992), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A9BD48u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9BD48u) goto L_08A9BD48;
    return;
L_08A9BD48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BDA0;
      }
      goto L_08A9BD50;
    }
L_08A9BD50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17048), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BF24;
      }
      goto L_08A9BDA0;
    }
L_08A9BDA0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17048), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A9BF24;
      }
      goto L_08A9BDA8;
    }
L_08A9BDA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BE8C;
      }
      goto L_08A9BDBC;
    }
L_08A9BDBC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(17008));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17008), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A9BE2Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9BE2Cu) goto L_08A9BE2C;
    return;
L_08A9BE2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BE84;
      }
      goto L_08A9BE34;
    }
L_08A9BE34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17052), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BF24;
      }
      goto L_08A9BE84;
    }
L_08A9BE84:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17052), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A9BF24;
      }
      goto L_08A9BE8C;
    }
L_08A9BE8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BF24;
      }
      goto L_08A9BEA0;
    }
L_08A9BEA0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(17024));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17032), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A9BF04u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9BF04u) goto L_08A9BF04;
    return;
L_08A9BF04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BF20;
      }
      goto L_08A9BF0C;
    }
L_08A9BF0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17056), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A9BF24;
      }
      goto L_08A9BF20;
    }
L_08A9BF20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17056), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A9BF24;
L_08A9BF24:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9BF3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A9BFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 758u, 0x0891B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9BFACu) goto L_08A9BFAC;
    return;
L_08A9BFAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BFC8;
      }
      goto L_08A9BFB4;
    }
L_08A9BFB4:
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 4u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] >> 1u);
      if (branch_taken) {
          goto L_08A9BFE4;
      }
      goto L_08A9BFC8;
    }
L_08A9BFC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (0u >> 1u);
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 4u));
    goto L_08A9BFE4;
L_08A9BFE4:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (16347u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 34079u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.pc = 0x08A9C000u; return;
}

void recomp_unit_0165(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0165_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_165(Runtime &runtime) {
    runtime.register_generated_unit(165u, 0x08A98000u, 16384u, &recomp_unit_0165, &recomp_unit_0165_entry);
    runtime.register_function(0x08A98004u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9800Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98014u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9801Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98024u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98030u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98034u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98038u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98040u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9804Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98058u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98060u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98068u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98070u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98074u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9807Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98088u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98094u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9809Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98110u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98118u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98120u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98128u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98130u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98138u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98140u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98148u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98154u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9815Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98164u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98170u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98178u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98180u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98188u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9818Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9819Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98200u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9820Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98220u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9822Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98234u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9823Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98244u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9824Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98258u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9826Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98278u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98280u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98288u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98290u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98298u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98308u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98310u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98318u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98324u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9832Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98330u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98340u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98358u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98360u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98368u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98374u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9837Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98384u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9838Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98398u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9839Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98408u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9840Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98410u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98418u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98424u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98430u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98438u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98440u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98448u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98450u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98458u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98478u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98480u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9848Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98494u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9849Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A984B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A984BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A984D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A984E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A984ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A984F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A984FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98504u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9850Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98514u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98528u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9853Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98550u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98560u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98578u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98594u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98600u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98618u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98624u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9862Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98634u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98638u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9864Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98660u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9866Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98674u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9867Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98684u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9868Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98690u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9869Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98704u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98714u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98724u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98730u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98738u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98744u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98754u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9875Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9876Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9877Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98788u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98790u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9879Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98804u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9880Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9881Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9882Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98838u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98840u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9884Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98858u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98864u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9886Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98874u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98880u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98884u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98888u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98890u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A988A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A988B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A988B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A988C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A988C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A988D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A988E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A988E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A988F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98900u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98910u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9891Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98924u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9892Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98934u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9893Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98948u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9897Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98984u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9898Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98994u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9899Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A10u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A48u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A94u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AB0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AC0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AC8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B60u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B94u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98BB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98BD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98BF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98BFCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C44u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C54u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C68u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C6Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CD0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D3Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D6Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DA4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DD0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E3Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E6Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E98u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98EACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98EB0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98EB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98ECCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98EE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98EF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98EF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F1Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FFCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99004u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99010u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99018u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99020u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9904Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99054u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99058u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9909Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99104u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9910Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99114u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9911Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9912Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99160u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99198u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A991A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A991DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99214u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99228u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99230u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99238u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9927Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99284u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9928Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A992DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A992F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99304u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99318u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99328u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99330u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99334u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9934Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9935Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99364u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99368u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99380u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99398u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99400u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99408u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9940Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99424u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99434u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9943Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99440u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99458u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99468u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99470u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99474u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9948Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9949Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99500u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99508u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9950Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99524u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99534u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9953Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99540u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99558u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99568u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99570u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99574u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99598u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99600u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9960Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99614u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99620u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99624u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9962Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99638u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99644u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99650u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9965Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99668u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99674u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99680u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9968Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99698u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99704u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99710u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9971Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99734u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99738u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99740u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99754u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99768u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99778u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99780u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9978Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99794u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99804u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99818u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9982Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99834u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99840u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99848u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99850u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99860u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99868u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99874u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9987Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9988Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99894u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99900u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99910u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99918u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99928u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99930u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99940u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99948u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99954u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9995Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9996Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99974u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99980u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99988u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99998u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A04u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A1Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A48u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99ABCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99ACCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B6Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B98u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BB0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C6Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CCCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D6Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D98u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DB0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DE4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DFCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E68u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E80u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EB0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EC8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99ED0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EE4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EFCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F10u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F44u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F60u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FA4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FB0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FC8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FD0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FE4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FFCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A008u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A010u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A020u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A028u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A034u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A03Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A04Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A054u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A060u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A068u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A078u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A080u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A08Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A094u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A0A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A0ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A0BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A0D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A1E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A200u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A20Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A214u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A220u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A228u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A230u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A238u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A2CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A2F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A334u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A360u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A390u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A3ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A3C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A3F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A40Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A444u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A450u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A458u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A460u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A478u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A494u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A4D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A4F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A500u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A508u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A514u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A520u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A528u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A53Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A554u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A560u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A56Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A57Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A58Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A594u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A59Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A5A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A5B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A5DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A5E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A600u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A61Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A62Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A630u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A640u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A648u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A654u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A664u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A66Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A678u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A694u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A720u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A728u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A734u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A744u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A750u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A758u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A764u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A76Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A774u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A77Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A788u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A7A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A7C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A7E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A7F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A800u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A804u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A80Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A824u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A82Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A834u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A850u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A868u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A874u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A880u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A904u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A920u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A924u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A92Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A950u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A964u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A974u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A980u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A988u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A994u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A998u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA94u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AAACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AAB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AAC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AAD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AAD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AAF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB80u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABC8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABE4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC68u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC94u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACC8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACCCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACE4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACFCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD04u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD18u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD54u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD98u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADA4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE10u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE18u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE44u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE94u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AEA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AEB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AED4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AEF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF04u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF1Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF3Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF80u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFA4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFCCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B01Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B024u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B02Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B034u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B040u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B048u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B04Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B054u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B080u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B08Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B0B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B0D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B100u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B134u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B158u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B164u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B16Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B1BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B1D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B1D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B1E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B1E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B1F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B1F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B204u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B210u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B218u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B220u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B230u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B23Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B244u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B33Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B344u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B34Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B36Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B380u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B3A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B428u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B430u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B470u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B498u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B4BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B4D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B4F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B504u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B520u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B534u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B544u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B55Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B568u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B580u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B588u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B59Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B600u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B614u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B64Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B664u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B680u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B694u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B6A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B6BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B6C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B6DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B6F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B710u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B718u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B720u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B758u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B760u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B768u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B7CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B82Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B838u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B840u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B858u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B92Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B938u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B940u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B948u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B950u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B958u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B974u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B980u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B990u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA60u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA98u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BAA4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BAC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BAE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB10u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB80u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BBD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BBE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BBF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC6Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BCBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BCC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BCD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BD48u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BD50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BDA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BDA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BDBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BEA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF04u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF3Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BFACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BFB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BFC8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BFE4u, &recomp_unit_0165, "recomp_unit_0165");
}
} // namespace psprecomp
