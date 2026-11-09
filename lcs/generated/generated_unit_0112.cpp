#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_trainer.hpp"
#include "lcs_widescreen.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0112[4090] = {
    1, 0, 2, 0, 0, 0, 0, 3, 4, 0, 0, 5, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0,
    0, 0, 17, 0, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 24, 25, 26, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0,
    32, 33, 34, 0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 41,
    0, 0, 42, 43, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 48, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0,
    0, 52, 0, 53, 0, 0, 0, 54, 55, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    59, 0, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65,
    0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 69, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 78, 0, 79, 80, 0, 81, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 96, 0, 97, 0, 98,
    0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 103, 104, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 110, 0,
    0, 111, 0, 112, 113, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 126, 127, 0, 128, 0, 0, 129, 0, 0, 130, 0, 131, 132,
    0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0,
    153, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0,
    162, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 166, 167, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0,
    173, 0, 0, 174, 0, 175, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 0,
    0, 185, 0, 0, 0, 0, 186, 0, 0, 187, 188, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0,
    194, 0, 195, 0, 196, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 209, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213,
    0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 224, 0, 225, 0, 0, 226, 0, 0, 227, 228, 0, 229, 0, 230, 0, 0,
    231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0,
    0, 237, 0, 238, 0, 239, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 0, 248, 0, 249, 0, 250,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 255, 0, 0, 0, 256, 0, 257, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 260, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0,
    0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0,
    0, 277, 278, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0,
    283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 286, 287, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 295, 0, 296, 0, 0, 297, 0, 298, 0, 299,
    0, 300, 0, 0, 0, 301, 0, 302, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    325, 0, 326, 0, 327, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 332, 0, 333, 0, 334, 0, 0, 0, 335, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345,
    0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 0, 351, 0, 352, 0, 353, 0, 0, 354, 0, 0,
    0, 355, 0, 0, 0, 356, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362,
    0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 365, 0, 366, 0, 0, 0, 0, 367, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374,
    0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381,
    0, 0, 0, 382, 0, 383, 0, 384, 0, 385, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0, 397,
    398, 0, 399, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 403, 404, 0, 405, 0, 406, 0, 0, 407, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0,
    410, 0, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 415, 0, 0, 416, 0, 417, 0, 418, 0, 0, 419, 0, 0, 0, 0, 420, 0,
    0, 421, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 425, 0, 0, 426, 0, 0, 427, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 430, 431, 0,
    0, 0, 0, 0, 0, 432, 0, 433, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442,
    0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0,
    0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0,
    0, 457, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0,
    0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0,
    0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0, 472, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0,
    479, 0, 480, 0, 0, 481, 0, 0, 482, 0, 483, 0, 484, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488,
    0, 0, 0, 489, 0, 0, 490, 0, 0, 491, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 496, 0, 497, 0, 0, 498, 0, 499, 0, 0,
    500, 0, 501, 0, 502, 0, 0, 503, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0,
    0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 0, 514, 0, 0, 515, 516, 0, 0, 517, 518, 0, 0,
    0, 519, 520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0,
    525, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 528, 0, 0, 529, 0, 530, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0,
    0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 542, 0, 543, 0, 0, 0, 544, 0, 545, 0, 546, 0, 0, 547,
    0, 548, 0, 549, 0, 550, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 558, 0, 559, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 564, 0, 0, 565, 0, 566, 0, 567, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 569, 570, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 579, 0, 0, 0, 0, 0,
    0, 580, 581, 0, 0, 0, 0, 0, 0, 582, 0, 583, 584, 0, 0, 585, 0, 586, 0, 0, 0, 587, 0, 0, 588, 589, 0, 590, 0, 591, 0, 0,
    592, 0, 0, 593, 0, 0, 594, 0, 595, 0, 596, 0, 597, 0, 0, 598, 0, 599, 0, 600, 0, 601, 0, 0, 0, 602, 603, 0, 604, 0, 0, 0,
    605, 0, 606, 0, 607, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0,
    0, 0, 612, 0, 613, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0,
    0, 0, 618, 0, 0, 0, 619, 620, 0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 0, 624, 0, 625, 0, 626, 0, 0, 627,
    0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0,
    0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 636, 637, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0,
    0, 640, 641, 0, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 0, 645, 0, 646, 0, 647, 0, 0, 648, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 652, 0, 0, 653, 654, 0, 0,
    0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 657, 658, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 661, 0, 0, 0, 0, 662, 0, 663, 0,
    664, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 0, 673, 0, 674, 0, 0, 0, 675, 0,
    676, 0, 0, 677, 0, 678, 0, 679, 0, 0, 0, 0, 680, 0, 0, 681, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 684, 0,
    0, 685, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 688, 0, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 691, 0, 692, 0, 693,
    0, 0, 694, 0, 695, 0, 696, 0, 697, 0, 698, 0, 699, 0, 700, 701, 0, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 704, 0, 0, 0,
    0, 0, 0, 705, 0, 706, 0, 707, 0, 0, 708, 0, 0, 709, 0, 710, 0, 711, 0, 712, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0,
    716, 717, 0, 0, 718, 0, 0, 0, 719, 0, 0, 720, 0, 0, 721, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0, 724, 0, 0, 0, 0,
    725, 0, 726, 0, 727, 0, 728, 0, 729, 0, 0, 0, 730, 0, 731, 0, 0, 0, 732, 0, 733, 0, 0, 734, 0, 0, 0, 0, 735, 0, 736, 0,
    737, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 744,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 747, 0, 748, 0, 0, 749, 0, 750, 0, 751, 0, 752, 0,
    753, 0, 0, 754, 0, 755, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 758, 0, 759, 0, 760, 0, 761,
    0, 762, 0, 0, 0, 0, 763, 0, 0, 764, 0, 0, 0, 765, 0, 766, 0, 0, 767, 0, 768, 0, 0, 769, 0, 0, 770, 0, 0, 771, 0, 772,
    0, 773, 0, 774, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 777, 0, 0, 778, 0, 0, 0, 0, 779, 0, 780, 0, 0, 781,
    0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 785, 0, 786, 0, 787, 0, 0, 788, 0, 0, 0, 789,
    0, 790, 0, 0, 0, 0, 0, 791, 0, 0, 792, 0, 793, 0, 794, 0, 0, 0, 795, 0, 796, 0, 797, 0, 798, 0, 799, 0, 800, 0, 801, 0,
    0, 802, 0, 803, 0, 804, 0, 0, 805, 0, 806, 807, 0, 808, 0, 0, 0, 0, 809, 0, 810, 0, 811, 0, 0, 812, 0, 0, 813, 0, 0, 0,
    0, 0, 0, 814, 0, 815, 0, 816, 0, 0, 0, 0, 0, 817, 0, 818, 0, 819, 0, 0, 0, 820, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0,
    822, 0, 823, 0, 824, 0, 0, 0, 825, 0, 826, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 828, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 830, 0, 831, 832, 0, 0, 833, 0, 0, 0, 834, 0, 0, 0, 835, 0, 0, 0, 0,
    836, 0, 0, 0, 837, 0, 0, 0, 838, 0, 0, 0, 0, 0, 839, 0, 0, 840, 0, 841, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 846, 0, 0, 0, 0, 0, 847, 0, 848, 849, 0, 850, 0, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0, 0, 853, 0, 0, 0, 854,
    0, 0, 0, 855, 0, 0, 0, 856, 0, 0, 0, 857, 0, 0, 0, 858, 0, 0, 0, 859, 0, 0, 860, 0, 0, 0, 0, 861, 0, 0, 862, 0,
    0, 863, 0, 0, 0, 0, 864, 0, 0, 0, 0, 865, 0, 866, 0, 0, 0, 867, 0, 0, 868, 0, 0, 0, 0, 869, 0, 0, 0, 870, 0, 871,
    0, 0, 872, 0, 0, 873, 0, 0, 0, 874, 0, 0, 0, 875, 0, 876, 0, 0, 877, 0, 0, 0, 878, 0, 0, 0, 0, 879, 0, 0, 0, 880,
    0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 882, 0, 0, 0, 0, 883, 0, 0, 884, 0, 0, 885, 0, 0, 886, 0, 0, 0, 887, 0, 0, 888,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 889, 0, 0, 0, 890, 0, 0, 891, 0, 0, 0, 892, 0, 0, 893, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 894, 0, 0, 0, 895, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 896, 0,
    897, 0, 898, 0, 899, 0, 0, 0, 900, 0, 0, 901, 0, 0, 902, 903, 0, 0, 904, 0, 905, 0, 906, 0, 0, 907, 0, 908, 0, 909, 0, 0,
    910, 0, 911, 0, 912, 0, 0, 0, 913, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 914,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 915, 0, 916, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 917, 0, 0, 918, 0, 919, 0,
    0, 920, 0, 0, 0, 0, 0, 0, 0, 0, 921, 0, 0, 0, 922, 0, 923, 0, 0, 924, 0, 0, 925, 0, 926, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 927, 928, 0, 0, 0, 929, 930, 0, 0, 0, 0, 0, 931, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 932, 0, 0, 0, 933, 0, 0, 0, 934, 0, 0, 0, 935, 0, 0, 936, 0, 0, 0, 937, 0, 0, 0, 0, 0, 0, 0, 938, 0, 0,
    939, 0, 940, 0, 941, 0, 942, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 943, 0, 0, 0, 944, 0, 0, 0, 945, 946, 947, 0, 0,
    0, 948, 0, 0, 949, 0, 0, 950, 0, 951, 952, 0, 953, 0, 0, 0, 0, 0, 0, 0, 0, 0, 954, 0, 955, 0, 0, 956, 0, 957, 0, 958,
    0, 959, 0, 960, 0, 0, 0, 961, 0, 962, 963, 0, 964, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 965, 0, 966, 0, 967, 0, 968, 969, 0,
    970, 0, 0, 0, 0, 971, 0, 0, 0, 972, 0, 0, 0, 973, 974, 975, 0, 976, 0, 0, 977, 0, 978, 979, 0, 980,
};
void recomp_unit_0112_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089C4000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0112[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C4000;
    case 2u: goto L_089C4008;
    case 3u: goto L_089C401C;
    case 4u: goto L_089C4020;
    case 5u: goto L_089C402C;
    case 6u: goto L_089C4030;
    case 7u: goto L_089C4040;
    case 8u: goto L_089C4054;
    case 9u: goto L_089C4108;
    case 10u: goto L_089C414C;
    case 11u: goto L_089C4150;
    case 12u: goto L_089C4168;
    case 13u: goto L_089C41A8;
    case 14u: goto L_089C41B4;
    case 15u: goto L_089C41C0;
    case 16u: goto L_089C41EC;
    case 17u: goto L_089C4208;
    case 18u: goto L_089C4210;
    case 19u: goto L_089C4214;
    case 20u: goto L_089C4248;
    case 21u: goto L_089C4298;
    case 22u: goto L_089C42A4;
    case 23u: goto L_089C42B0;
    case 24u: goto L_089C42B8;
    case 25u: goto L_089C42BC;
    case 26u: goto L_089C42C0;
    case 27u: goto L_089C42C8;
    case 28u: goto L_089C42D0;
    case 29u: goto L_089C42E0;
    case 30u: goto L_089C42EC;
    case 31u: goto L_089C42F8;
    case 32u: goto L_089C4300;
    case 33u: goto L_089C4304;
    case 34u: goto L_089C4308;
    case 35u: goto L_089C4314;
    case 36u: goto L_089C431C;
    case 37u: goto L_089C4324;
    case 38u: goto L_089C435C;
    case 39u: goto L_089C4364;
    case 40u: goto L_089C436C;
    case 41u: goto L_089C437C;
    case 42u: goto L_089C4388;
    case 43u: goto L_089C438C;
    case 44u: goto L_089C43A0;
    case 45u: goto L_089C43B0;
    case 46u: goto L_089C43C4;
    case 47u: goto L_089C43CC;
    case 48u: goto L_089C43D4;
    case 49u: goto L_089C43DC;
    case 50u: goto L_089C43EC;
    case 51u: goto L_089C43F4;
    case 52u: goto L_089C4404;
    case 53u: goto L_089C440C;
    case 54u: goto L_089C441C;
    case 55u: goto L_089C4420;
    case 56u: goto L_089C4428;
    case 57u: goto L_089C443C;
    case 58u: goto L_089C4468;
    case 59u: goto L_089C4480;
    case 60u: goto L_089C448C;
    case 61u: goto L_089C4494;
    case 62u: goto L_089C44A8;
    case 63u: goto L_089C44D0;
    case 64u: goto L_089C44E4;
    case 65u: goto L_089C44FC;
    case 66u: goto L_089C4508;
    case 67u: goto L_089C451C;
    case 68u: goto L_089C4538;
    case 69u: goto L_089C453C;
    case 70u: goto L_089C4544;
    case 71u: goto L_089C454C;
    case 72u: goto L_089C4570;
    case 73u: goto L_089C4578;
    case 74u: goto L_089C458C;
    case 75u: goto L_089C45B0;
    case 76u: goto L_089C45B8;
    case 77u: goto L_089C45CC;
    case 78u: goto L_089C4604;
    case 79u: goto L_089C460C;
    case 80u: goto L_089C4610;
    case 81u: goto L_089C4618;
    case 82u: goto L_089C462C;
    case 83u: goto L_089C4634;
    case 84u: goto L_089C463C;
    case 85u: goto L_089C4644;
    case 86u: goto L_089C464C;
    case 87u: goto L_089C4658;
    case 88u: goto L_089C467C;
    case 89u: goto L_089C4684;
    case 90u: goto L_089C4698;
    case 91u: goto L_089C46B0;
    case 92u: goto L_089C46B8;
    case 93u: goto L_089C46C0;
    case 94u: goto L_089C46D8;
    case 95u: goto L_089C46E0;
    case 96u: goto L_089C46EC;
    case 97u: goto L_089C46F4;
    case 98u: goto L_089C46FC;
    case 99u: goto L_089C4704;
    case 100u: goto L_089C4710;
    case 101u: goto L_089C471C;
    case 102u: goto L_089C4728;
    case 103u: goto L_089C4730;
    case 104u: goto L_089C4734;
    case 105u: goto L_089C473C;
    case 106u: goto L_089C4748;
    case 107u: goto L_089C475C;
    case 108u: goto L_089C4764;
    case 109u: goto L_089C476C;
    case 110u: goto L_089C4778;
    case 111u: goto L_089C4784;
    case 112u: goto L_089C478C;
    case 113u: goto L_089C4790;
    case 114u: goto L_089C4798;
    case 115u: goto L_089C47A0;
    case 116u: goto L_089C47B4;
    case 117u: goto L_089C47C4;
    case 118u: goto L_089C47D8;
    case 119u: goto L_089C47E0;
    case 120u: goto L_089C47E8;
    case 121u: goto L_089C4804;
    case 122u: goto L_089C481C;
    case 123u: goto L_089C4824;
    case 124u: goto L_089C482C;
    case 125u: goto L_089C4844;
    case 126u: goto L_089C484C;
    case 127u: goto L_089C4850;
    case 128u: goto L_089C4858;
    case 129u: goto L_089C4864;
    case 130u: goto L_089C4870;
    case 131u: goto L_089C4878;
    case 132u: goto L_089C487C;
    case 133u: goto L_089C4884;
    case 134u: goto L_089C488C;
    case 135u: goto L_089C48AC;
    case 136u: goto L_089C48B4;
    case 137u: goto L_089C48C0;
    case 138u: goto L_089C4904;
    case 139u: goto L_089C4938;
    case 140u: goto L_089C4954;
    case 141u: goto L_089C495C;
    case 142u: goto L_089C4964;
    case 143u: goto L_089C4978;
    case 144u: goto L_089C498C;
    case 145u: goto L_089C499C;
    case 146u: goto L_089C49A8;
    case 147u: goto L_089C49B0;
    case 148u: goto L_089C49C0;
    case 149u: goto L_089C49CC;
    case 150u: goto L_089C49D4;
    case 151u: goto L_089C49DC;
    case 152u: goto L_089C49E8;
    case 153u: goto L_089C4A00;
    case 154u: goto L_089C4A08;
    case 155u: goto L_089C4A1C;
    case 156u: goto L_089C4A30;
    case 157u: goto L_089C4A4C;
    case 158u: goto L_089C4A54;
    case 159u: goto L_089C4A60;
    case 160u: goto L_089C4A68;
    case 161u: goto L_089C4A78;
    case 162u: goto L_089C4A80;
    case 163u: goto L_089C4A8C;
    case 164u: goto L_089C4A94;
    case 165u: goto L_089C4AA4;
    case 166u: goto L_089C4AAC;
    case 167u: goto L_089C4AB0;
    case 168u: goto L_089C4AB8;
    case 169u: goto L_089C4ACC;
    case 170u: goto L_089C4AD4;
    case 171u: goto L_089C4AE0;
    case 172u: goto L_089C4AF0;
    case 173u: goto L_089C4B00;
    case 174u: goto L_089C4B0C;
    case 175u: goto L_089C4B14;
    case 176u: goto L_089C4B20;
    case 177u: goto L_089C4B28;
    case 178u: goto L_089C4B30;
    case 179u: goto L_089C4B38;
    case 180u: goto L_089C4B50;
    case 181u: goto L_089C4B58;
    case 182u: goto L_089C4B60;
    case 183u: goto L_089C4B6C;
    case 184u: goto L_089C4B74;
    case 185u: goto L_089C4B84;
    case 186u: goto L_089C4B98;
    case 187u: goto L_089C4BA4;
    case 188u: goto L_089C4BA8;
    case 189u: goto L_089C4BB4;
    case 190u: goto L_089C4BC8;
    case 191u: goto L_089C4BD4;
    case 192u: goto L_089C4BE0;
    case 193u: goto L_089C4BEC;
    case 194u: goto L_089C4C00;
    case 195u: goto L_089C4C08;
    case 196u: goto L_089C4C10;
    case 197u: goto L_089C4C20;
    case 198u: goto L_089C4C28;
    case 199u: goto L_089C4C30;
    case 200u: goto L_089C4C48;
    case 201u: goto L_089C4C50;
    case 202u: goto L_089C4C58;
    case 203u: goto L_089C4C60;
    case 204u: goto L_089C4C70;
    case 205u: goto L_089C4C88;
    case 206u: goto L_089C4C98;
    case 207u: goto L_089C4CB0;
    case 208u: goto L_089C4CC0;
    case 209u: goto L_089C4CC8;
    case 210u: goto L_089C4CD0;
    case 211u: goto L_089C4CDC;
    case 212u: goto L_089C4CEC;
    case 213u: goto L_089C4CFC;
    case 214u: goto L_089C4D04;
    case 215u: goto L_089C4D0C;
    case 216u: goto L_089C4D2C;
    case 217u: goto L_089C4D34;
    case 218u: goto L_089C4D38;
    case 219u: goto L_089C4D88;
    case 220u: goto L_089C4D90;
    case 221u: goto L_089C4DA0;
    case 222u: goto L_089C4DB0;
    case 223u: goto L_089C4DB8;
    case 224u: goto L_089C4DC0;
    case 225u: goto L_089C4DC8;
    case 226u: goto L_089C4DD4;
    case 227u: goto L_089C4DE0;
    case 228u: goto L_089C4DE4;
    case 229u: goto L_089C4DEC;
    case 230u: goto L_089C4DF4;
    case 231u: goto L_089C4E00;
    case 232u: goto L_089C4E08;
    case 233u: goto L_089C4E10;
    case 234u: goto L_089C4E60;
    case 235u: goto L_089C4E68;
    case 236u: goto L_089C4E70;
    case 237u: goto L_089C4E84;
    case 238u: goto L_089C4E8C;
    case 239u: goto L_089C4E94;
    case 240u: goto L_089C4EA0;
    case 241u: goto L_089C4EB0;
    case 242u: goto L_089C4EB8;
    case 243u: goto L_089C4EC0;
    case 244u: goto L_089C4EC8;
    case 245u: goto L_089C4ED0;
    case 246u: goto L_089C4ED8;
    case 247u: goto L_089C4EE0;
    case 248u: goto L_089C4EEC;
    case 249u: goto L_089C4EF4;
    case 250u: goto L_089C4EFC;
    case 251u: goto L_089C4F10;
    case 252u: goto L_089C4F24;
    case 253u: goto L_089C4F2C;
    case 254u: goto L_089C4F34;
    case 255u: goto L_089C4F3C;
    case 256u: goto L_089C4F4C;
    case 257u: goto L_089C4F54;
    case 258u: goto L_089C4F58;
    case 259u: goto L_089C4F88;
    case 260u: goto L_089C5084;
    case 261u: goto L_089C5090;
    case 262u: goto L_089C50A4;
    case 263u: goto L_089C50C4;
    case 264u: goto L_089C50D0;
    case 265u: goto L_089C50E8;
    case 266u: goto L_089C5108;
    case 267u: goto L_089C5118;
    case 268u: goto L_089C5130;
    case 269u: goto L_089C5154;
    case 270u: goto L_089C5164;
    case 271u: goto L_089C5180;
    case 272u: goto L_089C519C;
    case 273u: goto L_089C51C0;
    case 274u: goto L_089C51D4;
    case 275u: goto L_089C51E4;
    case 276u: goto L_089C51F0;
    case 277u: goto L_089C5204;
    case 278u: goto L_089C5208;
    case 279u: goto L_089C5218;
    case 280u: goto L_089C5224;
    case 281u: goto L_089C5248;
    case 282u: goto L_089C526C;
    case 283u: goto L_089C5280;
    case 284u: goto L_089C5290;
    case 285u: goto L_089C529C;
    case 286u: goto L_089C52B0;
    case 287u: goto L_089C52B4;
    case 288u: goto L_089C52C4;
    case 289u: goto L_089C52D0;
    case 290u: goto L_089C52F4;
    case 291u: goto L_089C5310;
    case 292u: goto L_089C532C;
    case 293u: goto L_089C5338;
    case 294u: goto L_089C534C;
    case 295u: goto L_089C5358;
    case 296u: goto L_089C5360;
    case 297u: goto L_089C536C;
    case 298u: goto L_089C5374;
    case 299u: goto L_089C537C;
    case 300u: goto L_089C5384;
    case 301u: goto L_089C5394;
    case 302u: goto L_089C539C;
    case 303u: goto L_089C53A8;
    case 304u: goto L_089C53BC;
    case 305u: goto L_089C53D4;
    case 306u: goto L_089C53DC;
    case 307u: goto L_089C5408;
    case 308u: goto L_089C5410;
    case 309u: goto L_089C541C;
    case 310u: goto L_089C5430;
    case 311u: goto L_089C5444;
    case 312u: goto L_089C545C;
    case 313u: goto L_089C5464;
    case 314u: goto L_089C5498;
    case 315u: goto L_089C54A0;
    case 316u: goto L_089C54B8;
    case 317u: goto L_089C54C8;
    case 318u: goto L_089C54D4;
    case 319u: goto L_089C54E4;
    case 320u: goto L_089C550C;
    case 321u: goto L_089C5520;
    case 322u: goto L_089C5534;
    case 323u: goto L_089C5540;
    case 324u: goto L_089C5554;
    case 325u: goto L_089C5580;
    case 326u: goto L_089C5588;
    case 327u: goto L_089C5590;
    case 328u: goto L_089C55A4;
    case 329u: goto L_089C55AC;
    case 330u: goto L_089C55DC;
    case 331u: goto L_089C55F0;
    case 332u: goto L_089C5604;
    case 333u: goto L_089C560C;
    case 334u: goto L_089C5614;
    case 335u: goto L_089C5624;
    case 336u: goto L_089C5628;
    case 337u: goto L_089C564C;
    case 338u: goto L_089C5660;
    case 339u: goto L_089C5688;
    case 340u: goto L_089C5694;
    case 341u: goto L_089C56C0;
    case 342u: goto L_089C56C8;
    case 343u: goto L_089C56D0;
    case 344u: goto L_089C56F4;
    case 345u: goto L_089C56FC;
    case 346u: goto L_089C570C;
    case 347u: goto L_089C5720;
    case 348u: goto L_089C5730;
    case 349u: goto L_089C5738;
    case 350u: goto L_089C5740;
    case 351u: goto L_089C5758;
    case 352u: goto L_089C5760;
    case 353u: goto L_089C5768;
    case 354u: goto L_089C5774;
    case 355u: goto L_089C5784;
    case 356u: goto L_089C5794;
    case 357u: goto L_089C5798;
    case 358u: goto L_089C57A0;
    case 359u: goto L_089C57C0;
    case 360u: goto L_089C57CC;
    case 361u: goto L_089C57E0;
    case 362u: goto L_089C57FC;
    case 363u: goto L_089C581C;
    case 364u: goto L_089C5824;
    case 365u: goto L_089C5830;
    case 366u: goto L_089C5838;
    case 367u: goto L_089C584C;
    case 368u: goto L_089C5854;
    case 369u: goto L_089C5860;
    case 370u: goto L_089C58B4;
    case 371u: goto L_089C58CC;
    case 372u: goto L_089C58D4;
    case 373u: goto L_089C58F4;
    case 374u: goto L_089C58FC;
    case 375u: goto L_089C5908;
    case 376u: goto L_089C5920;
    case 377u: goto L_089C5934;
    case 378u: goto L_089C5954;
    case 379u: goto L_089C595C;
    case 380u: goto L_089C596C;
    case 381u: goto L_089C597C;
    case 382u: goto L_089C598C;
    case 383u: goto L_089C5994;
    case 384u: goto L_089C599C;
    case 385u: goto L_089C59A4;
    case 386u: goto L_089C59B4;
    case 387u: goto L_089C59BC;
    case 388u: goto L_089C59E0;
    case 389u: goto L_089C5A04;
    case 390u: goto L_089C5A18;
    case 391u: goto L_089C5A34;
    case 392u: goto L_089C5A54;
    case 393u: goto L_089C5A5C;
    case 394u: goto L_089C5A64;
    case 395u: goto L_089C5A6C;
    case 396u: goto L_089C5A74;
    case 397u: goto L_089C5A7C;
    case 398u: goto L_089C5A80;
    case 399u: goto L_089C5A88;
    case 400u: goto L_089C5A90;
    case 401u: goto L_089C5AA0;
    case 402u: goto L_089C5AAC;
    case 403u: goto L_089C5AB4;
    case 404u: goto L_089C5AB8;
    case 405u: goto L_089C5AC0;
    case 406u: goto L_089C5AC8;
    case 407u: goto L_089C5AD4;
    case 408u: goto L_089C5AE0;
    case 409u: goto L_089C5AE8;
    case 410u: goto L_089C5B00;
    case 411u: goto L_089C5B10;
    case 412u: goto L_089C5B1C;
    case 413u: goto L_089C5B28;
    case 414u: goto L_089C5B34;
    case 415u: goto L_089C5B3C;
    case 416u: goto L_089C5B48;
    case 417u: goto L_089C5B50;
    case 418u: goto L_089C5B58;
    case 419u: goto L_089C5B64;
    case 420u: goto L_089C5B78;
    case 421u: goto L_089C5B84;
    case 422u: goto L_089C5B8C;
    case 423u: goto L_089C5B9C;
    case 424u: goto L_089C5BA8;
    case 425u: goto L_089C5BB0;
    case 426u: goto L_089C5BBC;
    case 427u: goto L_089C5BC8;
    case 428u: goto L_089C5BD0;
    case 429u: goto L_089C5BD8;
    case 430u: goto L_089C5BF4;
    case 431u: goto L_089C5BF8;
    case 432u: goto L_089C5C14;
    case 433u: goto L_089C5C1C;
    case 434u: goto L_089C5C20;
    case 435u: goto L_089C5C2C;
    case 436u: goto L_089C5C4C;
    case 437u: goto L_089C5D04;
    case 438u: goto L_089C5D3C;
    case 439u: goto L_089C5D50;
    case 440u: goto L_089C5D5C;
    case 441u: goto L_089C5D6C;
    case 442u: goto L_089C5D7C;
    case 443u: goto L_089C5D8C;
    case 444u: goto L_089C5D9C;
    case 445u: goto L_089C5DAC;
    case 446u: goto L_089C5DBC;
    case 447u: goto L_089C5DCC;
    case 448u: goto L_089C5DE8;
    case 449u: goto L_089C5E70;
    case 450u: goto L_089C5E90;
    case 451u: goto L_089C5EA4;
    case 452u: goto L_089C5EC0;
    case 453u: goto L_089C5EC8;
    case 454u: goto L_089C5ED4;
    case 455u: goto L_089C5EE4;
    case 456u: goto L_089C5EF4;
    case 457u: goto L_089C5F04;
    case 458u: goto L_089C5F14;
    case 459u: goto L_089C5F24;
    case 460u: goto L_089C5F34;
    case 461u: goto L_089C5F44;
    case 462u: goto L_089C5F70;
    case 463u: goto L_089C5FF0;
    case 464u: goto L_089C6014;
    case 465u: goto L_089C6034;
    case 466u: goto L_089C6054;
    case 467u: goto L_089C6064;
    case 468u: goto L_089C6074;
    case 469u: goto L_089C6084;
    case 470u: goto L_089C6094;
    case 471u: goto L_089C60A4;
    case 472u: goto L_089C60AC;
    case 473u: goto L_089C60BC;
    case 474u: goto L_089C60CC;
    case 475u: goto L_089C60FC;
    case 476u: goto L_089C6124;
    case 477u: goto L_089C6164;
    case 478u: goto L_089C6174;
    case 479u: goto L_089C6180;
    case 480u: goto L_089C6188;
    case 481u: goto L_089C6194;
    case 482u: goto L_089C61A0;
    case 483u: goto L_089C61A8;
    case 484u: goto L_089C61B0;
    case 485u: goto L_089C61BC;
    case 486u: goto L_089C61D0;
    case 487u: goto L_089C61E4;
    case 488u: goto L_089C61FC;
    case 489u: goto L_089C620C;
    case 490u: goto L_089C6218;
    case 491u: goto L_089C6224;
    case 492u: goto L_089C622C;
    case 493u: goto L_089C6238;
    case 494u: goto L_089C6244;
    case 495u: goto L_089C6250;
    case 496u: goto L_089C6258;
    case 497u: goto L_089C6260;
    case 498u: goto L_089C626C;
    case 499u: goto L_089C6274;
    case 500u: goto L_089C6280;
    case 501u: goto L_089C6288;
    case 502u: goto L_089C6290;
    case 503u: goto L_089C629C;
    case 504u: goto L_089C62A4;
    case 505u: goto L_089C62AC;
    case 506u: goto L_089C62D0;
    case 507u: goto L_089C62DC;
    case 508u: goto L_089C62E8;
    case 509u: goto L_089C6304;
    case 510u: goto L_089C6324;
    case 511u: goto L_089C632C;
    case 512u: goto L_089C6338;
    case 513u: goto L_089C6344;
    case 514u: goto L_089C6354;
    case 515u: goto L_089C6360;
    case 516u: goto L_089C6364;
    case 517u: goto L_089C6370;
    case 518u: goto L_089C6374;
    case 519u: goto L_089C6384;
    case 520u: goto L_089C6388;
    case 521u: goto L_089C63A4;
    case 522u: goto L_089C63CC;
    case 523u: goto L_089C63D4;
    case 524u: goto L_089C63E4;
    case 525u: goto L_089C6400;
    case 526u: goto L_089C6414;
    case 527u: goto L_089C6424;
    case 528u: goto L_089C6430;
    case 529u: goto L_089C643C;
    case 530u: goto L_089C6444;
    case 531u: goto L_089C6450;
    case 532u: goto L_089C6464;
    case 533u: goto L_089C648C;
    case 534u: goto L_089C64C8;
    case 535u: goto L_089C64D0;
    case 536u: goto L_089C64E0;
    case 537u: goto L_089C64F8;
    case 538u: goto L_089C6504;
    case 539u: goto L_089C651C;
    case 540u: goto L_089C652C;
    case 541u: goto L_089C653C;
    case 542u: goto L_089C6548;
    case 543u: goto L_089C6550;
    case 544u: goto L_089C6560;
    case 545u: goto L_089C6568;
    case 546u: goto L_089C6570;
    case 547u: goto L_089C657C;
    case 548u: goto L_089C6584;
    case 549u: goto L_089C658C;
    case 550u: goto L_089C6594;
    case 551u: goto L_089C659C;
    case 552u: goto L_089C65AC;
    case 553u: goto L_089C65D8;
    case 554u: goto L_089C6610;
    case 555u: goto L_089C6618;
    case 556u: goto L_089C662C;
    case 557u: goto L_089C6644;
    case 558u: goto L_089C664C;
    case 559u: goto L_089C6654;
    case 560u: goto L_089C665C;
    case 561u: goto L_089C6670;
    case 562u: goto L_089C6698;
    case 563u: goto L_089C66A0;
    case 564u: goto L_089C66A8;
    case 565u: goto L_089C66B4;
    case 566u: goto L_089C66BC;
    case 567u: goto L_089C66C4;
    case 568u: goto L_089C66D8;
    case 569u: goto L_089C6718;
    case 570u: goto L_089C671C;
    case 571u: goto L_089C6734;
    case 572u: goto L_089C6748;
    case 573u: goto L_089C6750;
    case 574u: goto L_089C676C;
    case 575u: goto L_089C67A8;
    case 576u: goto L_089C67B8;
    case 577u: goto L_089C67D8;
    case 578u: goto L_089C67E0;
    case 579u: goto L_089C67E8;
    case 580u: goto L_089C6804;
    case 581u: goto L_089C6808;
    case 582u: goto L_089C6824;
    case 583u: goto L_089C682C;
    case 584u: goto L_089C6830;
    case 585u: goto L_089C683C;
    case 586u: goto L_089C6844;
    case 587u: goto L_089C6854;
    case 588u: goto L_089C6860;
    case 589u: goto L_089C6864;
    case 590u: goto L_089C686C;
    case 591u: goto L_089C6874;
    case 592u: goto L_089C6880;
    case 593u: goto L_089C688C;
    case 594u: goto L_089C6898;
    case 595u: goto L_089C68A0;
    case 596u: goto L_089C68A8;
    case 597u: goto L_089C68B0;
    case 598u: goto L_089C68BC;
    case 599u: goto L_089C68C4;
    case 600u: goto L_089C68CC;
    case 601u: goto L_089C68D4;
    case 602u: goto L_089C68E4;
    case 603u: goto L_089C68E8;
    case 604u: goto L_089C68F0;
    case 605u: goto L_089C6900;
    case 606u: goto L_089C6908;
    case 607u: goto L_089C6910;
    case 608u: goto L_089C691C;
    case 609u: goto L_089C6940;
    case 610u: goto L_089C694C;
    case 611u: goto L_089C6978;
    case 612u: goto L_089C6988;
    case 613u: goto L_089C6990;
    case 614u: goto L_089C699C;
    case 615u: goto L_089C69D4;
    case 616u: goto L_089C69E0;
    case 617u: goto L_089C69F4;
    case 618u: goto L_089C6A08;
    case 619u: goto L_089C6A18;
    case 620u: goto L_089C6A1C;
    case 621u: goto L_089C6A30;
    case 622u: goto L_089C6A40;
    case 623u: goto L_089C6A4C;
    case 624u: goto L_089C6A60;
    case 625u: goto L_089C6A68;
    case 626u: goto L_089C6A70;
    case 627u: goto L_089C6A7C;
    case 628u: goto L_089C6A98;
    case 629u: goto L_089C6AAC;
    case 630u: goto L_089C6AB8;
    case 631u: goto L_089C6AC4;
    case 632u: goto L_089C6AF4;
    case 633u: goto L_089C6B0C;
    case 634u: goto L_089C6B24;
    case 635u: goto L_089C6B40;
    case 636u: goto L_089C6B4C;
    case 637u: goto L_089C6B50;
    case 638u: goto L_089C6B60;
    case 639u: goto L_089C6B74;
    case 640u: goto L_089C6B84;
    case 641u: goto L_089C6B88;
    case 642u: goto L_089C6B9C;
    case 643u: goto L_089C6BAC;
    case 644u: goto L_089C6BB8;
    case 645u: goto L_089C6BCC;
    case 646u: goto L_089C6BD4;
    case 647u: goto L_089C6BDC;
    case 648u: goto L_089C6BE8;
    case 649u: goto L_089C6C18;
    case 650u: goto L_089C6C30;
    case 651u: goto L_089C6C48;
    case 652u: goto L_089C6C64;
    case 653u: goto L_089C6C70;
    case 654u: goto L_089C6C74;
    case 655u: goto L_089C6C84;
    case 656u: goto L_089C6C98;
    case 657u: goto L_089C6CA8;
    case 658u: goto L_089C6CAC;
    case 659u: goto L_089C6CC0;
    case 660u: goto L_089C6CD0;
    case 661u: goto L_089C6CDC;
    case 662u: goto L_089C6CF0;
    case 663u: goto L_089C6CF8;
    case 664u: goto L_089C6D00;
    case 665u: goto L_089C6D0C;
    case 666u: goto L_089C6D3C;
    case 667u: goto L_089C6D48;
    case 668u: goto L_089C6D94;
    case 669u: goto L_089C6DA8;
    case 670u: goto L_089C6DB0;
    case 671u: goto L_089C6DC0;
    case 672u: goto L_089C6DC8;
    case 673u: goto L_089C6DE0;
    case 674u: goto L_089C6DE8;
    case 675u: goto L_089C6DF8;
    case 676u: goto L_089C6E00;
    case 677u: goto L_089C6E0C;
    case 678u: goto L_089C6E14;
    case 679u: goto L_089C6E1C;
    case 680u: goto L_089C6E30;
    case 681u: goto L_089C6E3C;
    case 682u: goto L_089C6E48;
    case 683u: goto L_089C6E70;
    case 684u: goto L_089C6E78;
    case 685u: goto L_089C6E84;
    case 686u: goto L_089C6E8C;
    case 687u: goto L_089C6EB0;
    case 688u: goto L_089C6EBC;
    case 689u: goto L_089C6EC8;
    case 690u: goto L_089C6EE4;
    case 691u: goto L_089C6EEC;
    case 692u: goto L_089C6EF4;
    case 693u: goto L_089C6EFC;
    case 694u: goto L_089C6F08;
    case 695u: goto L_089C6F10;
    case 696u: goto L_089C6F18;
    case 697u: goto L_089C6F20;
    case 698u: goto L_089C6F28;
    case 699u: goto L_089C6F30;
    case 700u: goto L_089C6F38;
    case 701u: goto L_089C6F3C;
    case 702u: goto L_089C6F58;
    case 703u: goto L_089C6F64;
    case 704u: goto L_089C6F70;
    case 705u: goto L_089C6F8C;
    case 706u: goto L_089C6F94;
    case 707u: goto L_089C6F9C;
    case 708u: goto L_089C6FA8;
    case 709u: goto L_089C6FB4;
    case 710u: goto L_089C6FBC;
    case 711u: goto L_089C6FC4;
    case 712u: goto L_089C6FCC;
    case 713u: goto L_089C6FD4;
    case 714u: goto L_089C6FDC;
    case 715u: goto L_089C6FF8;
    case 716u: goto L_089C7000;
    case 717u: goto L_089C7004;
    case 718u: goto L_089C7010;
    case 719u: goto L_089C7020;
    case 720u: goto L_089C702C;
    case 721u: goto L_089C7038;
    case 722u: goto L_089C7044;
    case 723u: goto L_089C7060;
    case 724u: goto L_089C706C;
    case 725u: goto L_089C7080;
    case 726u: goto L_089C7088;
    case 727u: goto L_089C7090;
    case 728u: goto L_089C7098;
    case 729u: goto L_089C70A0;
    case 730u: goto L_089C70B0;
    case 731u: goto L_089C70B8;
    case 732u: goto L_089C70C8;
    case 733u: goto L_089C70D0;
    case 734u: goto L_089C70DC;
    case 735u: goto L_089C70F0;
    case 736u: goto L_089C70F8;
    case 737u: goto L_089C7100;
    case 738u: goto L_089C7108;
    case 739u: goto L_089C7118;
    case 740u: goto L_089C7130;
    case 741u: goto L_089C713C;
    case 742u: goto L_089C7150;
    case 743u: goto L_089C7164;
    case 744u: goto L_089C717C;
    case 745u: goto L_089C71AC;
    case 746u: goto L_089C71C4;
    case 747u: goto L_089C71CC;
    case 748u: goto L_089C71D4;
    case 749u: goto L_089C71E0;
    case 750u: goto L_089C71E8;
    case 751u: goto L_089C71F0;
    case 752u: goto L_089C71F8;
    case 753u: goto L_089C7200;
    case 754u: goto L_089C720C;
    case 755u: goto L_089C7214;
    case 756u: goto L_089C7228;
    case 757u: goto L_089C7258;
    case 758u: goto L_089C7264;
    case 759u: goto L_089C726C;
    case 760u: goto L_089C7274;
    case 761u: goto L_089C727C;
    case 762u: goto L_089C7284;
    case 763u: goto L_089C7298;
    case 764u: goto L_089C72A4;
    case 765u: goto L_089C72B4;
    case 766u: goto L_089C72BC;
    case 767u: goto L_089C72C8;
    case 768u: goto L_089C72D0;
    case 769u: goto L_089C72DC;
    case 770u: goto L_089C72E8;
    case 771u: goto L_089C72F4;
    case 772u: goto L_089C72FC;
    case 773u: goto L_089C7304;
    case 774u: goto L_089C730C;
    case 775u: goto L_089C7314;
    case 776u: goto L_089C7330;
    case 777u: goto L_089C7348;
    case 778u: goto L_089C7354;
    case 779u: goto L_089C7368;
    case 780u: goto L_089C7370;
    case 781u: goto L_089C737C;
    case 782u: goto L_089C7384;
    case 783u: goto L_089C73AC;
    case 784u: goto L_089C73C8;
    case 785u: goto L_089C73D0;
    case 786u: goto L_089C73D8;
    case 787u: goto L_089C73E0;
    case 788u: goto L_089C73EC;
    case 789u: goto L_089C73FC;
    case 790u: goto L_089C7404;
    case 791u: goto L_089C741C;
    case 792u: goto L_089C7428;
    case 793u: goto L_089C7430;
    case 794u: goto L_089C7438;
    case 795u: goto L_089C7448;
    case 796u: goto L_089C7450;
    case 797u: goto L_089C7458;
    case 798u: goto L_089C7460;
    case 799u: goto L_089C7468;
    case 800u: goto L_089C7470;
    case 801u: goto L_089C7478;
    case 802u: goto L_089C7484;
    case 803u: goto L_089C748C;
    case 804u: goto L_089C7494;
    case 805u: goto L_089C74A0;
    case 806u: goto L_089C74A8;
    case 807u: goto L_089C74AC;
    case 808u: goto L_089C74B4;
    case 809u: goto L_089C74C8;
    case 810u: goto L_089C74D0;
    case 811u: goto L_089C74D8;
    case 812u: goto L_089C74E4;
    case 813u: goto L_089C74F0;
    case 814u: goto L_089C750C;
    case 815u: goto L_089C7514;
    case 816u: goto L_089C751C;
    case 817u: goto L_089C7534;
    case 818u: goto L_089C753C;
    case 819u: goto L_089C7544;
    case 820u: goto L_089C7554;
    case 821u: goto L_089C7568;
    case 822u: goto L_089C7580;
    case 823u: goto L_089C7588;
    case 824u: goto L_089C7590;
    case 825u: goto L_089C75A0;
    case 826u: goto L_089C75A8;
    case 827u: goto L_089C75BC;
    case 828u: goto L_089C7604;
    case 829u: goto L_089C761C;
    case 830u: goto L_089C7634;
    case 831u: goto L_089C763C;
    case 832u: goto L_089C7640;
    case 833u: goto L_089C764C;
    case 834u: goto L_089C765C;
    case 835u: goto L_089C766C;
    case 836u: goto L_089C7680;
    case 837u: goto L_089C7690;
    case 838u: goto L_089C76A0;
    case 839u: goto L_089C76B8;
    case 840u: goto L_089C76C4;
    case 841u: goto L_089C76CC;
    case 842u: goto L_089C76E0;
    case 843u: goto L_089C7710;
    case 844u: goto L_089C7744;
    case 845u: goto L_089C775C;
    case 846u: goto L_089C778C;
    case 847u: goto L_089C77A4;
    case 848u: goto L_089C77AC;
    case 849u: goto L_089C77B0;
    case 850u: goto L_089C77B8;
    case 851u: goto L_089C77CC;
    case 852u: goto L_089C77DC;
    case 853u: goto L_089C77EC;
    case 854u: goto L_089C77FC;
    case 855u: goto L_089C780C;
    case 856u: goto L_089C781C;
    case 857u: goto L_089C782C;
    case 858u: goto L_089C783C;
    case 859u: goto L_089C784C;
    case 860u: goto L_089C7858;
    case 861u: goto L_089C786C;
    case 862u: goto L_089C7878;
    case 863u: goto L_089C7884;
    case 864u: goto L_089C7898;
    case 865u: goto L_089C78AC;
    case 866u: goto L_089C78B4;
    case 867u: goto L_089C78C4;
    case 868u: goto L_089C78D0;
    case 869u: goto L_089C78E4;
    case 870u: goto L_089C78F4;
    case 871u: goto L_089C78FC;
    case 872u: goto L_089C7908;
    case 873u: goto L_089C7914;
    case 874u: goto L_089C7924;
    case 875u: goto L_089C7934;
    case 876u: goto L_089C793C;
    case 877u: goto L_089C7948;
    case 878u: goto L_089C7958;
    case 879u: goto L_089C796C;
    case 880u: goto L_089C797C;
    case 881u: goto L_089C798C;
    case 882u: goto L_089C79A8;
    case 883u: goto L_089C79BC;
    case 884u: goto L_089C79C8;
    case 885u: goto L_089C79D4;
    case 886u: goto L_089C79E0;
    case 887u: goto L_089C79F0;
    case 888u: goto L_089C79FC;
    case 889u: goto L_089C7A28;
    case 890u: goto L_089C7A38;
    case 891u: goto L_089C7A44;
    case 892u: goto L_089C7A54;
    case 893u: goto L_089C7A60;
    case 894u: goto L_089C7AB0;
    case 895u: goto L_089C7AC0;
    case 896u: goto L_089C7AF8;
    case 897u: goto L_089C7B00;
    case 898u: goto L_089C7B08;
    case 899u: goto L_089C7B10;
    case 900u: goto L_089C7B20;
    case 901u: goto L_089C7B2C;
    case 902u: goto L_089C7B38;
    case 903u: goto L_089C7B3C;
    case 904u: goto L_089C7B48;
    case 905u: goto L_089C7B50;
    case 906u: goto L_089C7B58;
    case 907u: goto L_089C7B64;
    case 908u: goto L_089C7B6C;
    case 909u: goto L_089C7B74;
    case 910u: goto L_089C7B80;
    case 911u: goto L_089C7B88;
    case 912u: goto L_089C7B90;
    case 913u: goto L_089C7BA0;
    case 914u: goto L_089C7BFC;
    case 915u: goto L_089C7C30;
    case 916u: goto L_089C7C38;
    case 917u: goto L_089C7C64;
    case 918u: goto L_089C7C70;
    case 919u: goto L_089C7C78;
    case 920u: goto L_089C7C84;
    case 921u: goto L_089C7CA8;
    case 922u: goto L_089C7CB8;
    case 923u: goto L_089C7CC0;
    case 924u: goto L_089C7CCC;
    case 925u: goto L_089C7CD8;
    case 926u: goto L_089C7CE0;
    case 927u: goto L_089C7D10;
    case 928u: goto L_089C7D14;
    case 929u: goto L_089C7D24;
    case 930u: goto L_089C7D28;
    case 931u: goto L_089C7D40;
    case 932u: goto L_089C7D88;
    case 933u: goto L_089C7D98;
    case 934u: goto L_089C7DA8;
    case 935u: goto L_089C7DB8;
    case 936u: goto L_089C7DC4;
    case 937u: goto L_089C7DD4;
    case 938u: goto L_089C7DF4;
    case 939u: goto L_089C7E00;
    case 940u: goto L_089C7E08;
    case 941u: goto L_089C7E10;
    case 942u: goto L_089C7E18;
    case 943u: goto L_089C7E4C;
    case 944u: goto L_089C7E5C;
    case 945u: goto L_089C7E6C;
    case 946u: goto L_089C7E70;
    case 947u: goto L_089C7E74;
    case 948u: goto L_089C7E84;
    case 949u: goto L_089C7E90;
    case 950u: goto L_089C7E9C;
    case 951u: goto L_089C7EA4;
    case 952u: goto L_089C7EA8;
    case 953u: goto L_089C7EB0;
    case 954u: goto L_089C7ED8;
    case 955u: goto L_089C7EE0;
    case 956u: goto L_089C7EEC;
    case 957u: goto L_089C7EF4;
    case 958u: goto L_089C7EFC;
    case 959u: goto L_089C7F04;
    case 960u: goto L_089C7F0C;
    case 961u: goto L_089C7F1C;
    case 962u: goto L_089C7F24;
    case 963u: goto L_089C7F28;
    case 964u: goto L_089C7F30;
    case 965u: goto L_089C7F5C;
    case 966u: goto L_089C7F64;
    case 967u: goto L_089C7F6C;
    case 968u: goto L_089C7F74;
    case 969u: goto L_089C7F78;
    case 970u: goto L_089C7F80;
    case 971u: goto L_089C7F94;
    case 972u: goto L_089C7FA4;
    case 973u: goto L_089C7FB4;
    case 974u: goto L_089C7FB8;
    case 975u: goto L_089C7FBC;
    case 976u: goto L_089C7FC4;
    case 977u: goto L_089C7FD0;
    case 978u: goto L_089C7FD8;
    case 979u: goto L_089C7FDC;
    case 980u: goto L_089C7FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C4000:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089C4008;
    }
    goto L_089C4008;
L_089C4008:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4020;
      }
      goto L_089C401C;
    }
L_089C401C:
    ctx.gpr[4] = (0u | 256u);
    goto L_089C4020;
L_089C4020:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(125)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4030;
      }
      goto L_089C402C;
    }
L_089C402C:
    ctx.gpr[19] = (0u | 0u);
    goto L_089C4030;
L_089C4030:
    ctx.gpr[5] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C4054;
      }
      goto L_089C4040;
    }
L_089C4040:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089C4150;
      }
      goto L_089C4054;
    }
L_089C4054:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3180)));
    ctx.gpr[7] = (2227u << 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3181)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3182)));
    ctx.gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (0u | 256u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[19]);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] >> 24u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[19] = (ctx.gpr[9] - ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 0 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 0u);
        goto L_089C4108;
    }
    goto L_089C4108;
L_089C4108:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(55)));
    ctx.gpr[4] = (15232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 255u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_089C414C;
    }
    goto L_089C414C;
L_089C414C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_089C4150;
L_089C4150:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089C4168u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089C4168u) goto L_089C4168;
    return;
L_089C4168:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C41A8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C41A8u) goto L_089C41A8;
    return;
L_089C41A8:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3183)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4210;
      }
      goto L_089C41B4;
    }
L_089C41B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(125)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4210;
      }
      goto L_089C41C0;
    }
L_089C41C0:
    ctx.gpr[4] = (0u | 255u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[31] = (0x089C41ECu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089C41ECu) goto L_089C41EC;
    return;
L_089C41EC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C4208u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 924u, 0x08AD3C28u>(ctx, &aot_mem) && ctx.pc == 0x089C4208u) goto L_089C4208;
    return;
L_089C4208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4214;
      }
      goto L_089C4210;
    }
L_089C4210:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-28742), static_cast<std::uint8_t>(0u));
    goto L_089C4214;
L_089C4214:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C42C0;
      }
      goto L_089C4298;
    }
L_089C4298:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C42A4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C42A4u) goto L_089C42A4;
    return;
L_089C42A4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C42BC;
      }
      goto L_089C42B0;
    }
L_089C42B0:
    ctx.gpr[31] = (0x089C42B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C42B8u) goto L_089C42B8;
    return;
L_089C42B8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C42BC;
L_089C42BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_089C42C0;
L_089C42C0:
    ctx.gpr[31] = (0x089C42C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 406u, 0x08913AF8u>(ctx, &aot_mem) && ctx.pc == 0x089C42C8u) goto L_089C42C8;
    return;
L_089C42C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4364;
      }
      goto L_089C42D0;
    }
L_089C42D0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[17] = (2226u << 16u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-15524));
      if (branch_taken) {
          goto L_089C4308;
      }
      goto L_089C42E0;
    }
L_089C42E0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089C42ECu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C42ECu) goto L_089C42EC;
    return;
L_089C42EC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4304;
      }
      goto L_089C42F8;
    }
L_089C42F8:
    ctx.gpr[31] = (0x089C4300u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C4300u) goto L_089C4300;
    return;
L_089C4300:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089C4304;
L_089C4304:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    goto L_089C4308;
L_089C4308:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C4314u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 436u, 0x08913CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C4314u) goto L_089C4314;
    return;
L_089C4314:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4364;
      }
      goto L_089C431C;
    }
L_089C431C:
    ctx.gpr[31] = (0x089C4324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 512u, 0x08AC75E8u>(ctx, &aot_mem) && ctx.pc == 0x089C4324u) goto L_089C4324;
    return;
L_089C4324:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7168), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-28644)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-28644), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3180)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[30] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C436C;
      }
      goto L_089C435C;
    }
L_089C435C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C438C;
      }
      goto L_089C4364;
    }
L_089C4364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C48C0;
      }
      goto L_089C436C;
    }
L_089C436C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3181)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C438C;
      }
      goto L_089C437C;
    }
L_089C437C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3182)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C438C;
      }
      goto L_089C4388;
    }
L_089C4388:
    ctx.gpr[20] = (0u | 1u);
    goto L_089C438C;
L_089C438C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28716)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_089C44FC;
      }
      goto L_089C43A0;
    }
L_089C43A0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C44FC;
      }
      goto L_089C43B0;
    }
L_089C43B0:
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C4420;
      }
      goto L_089C43C4;
    }
L_089C43C4:
    ctx.gpr[31] = (0x089C43CCu);
    ctx.gpr[22] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089C43CCu) goto L_089C43CC;
    return;
L_089C43CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4420;
      }
      goto L_089C43D4;
    }
L_089C43D4:
    ctx.gpr[31] = (0x089C43DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089C43DCu) goto L_089C43DC;
    return;
L_089C43DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C441C;
      }
      goto L_089C43EC;
    }
L_089C43EC:
    ctx.gpr[31] = (0x089C43F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089C43F4u) goto L_089C43F4;
    return;
L_089C43F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C441C;
      }
      goto L_089C4404;
    }
L_089C4404:
    ctx.gpr[31] = (0x089C440Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089C440Cu) goto L_089C440C;
    return;
L_089C440C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C4420;
      }
      goto L_089C441C;
    }
L_089C441C:
    ctx.gpr[22] = (0u | 1u);
    goto L_089C4420;
L_089C4420:
    ctx.gpr[31] = (0x089C4428u);
    // nop
    ctx.pc = 0x08B0BCBCu;
    return;
L_089C4428:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089C443Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BCACu;
    return;
L_089C443C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28716)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[22];
      if (branch_taken) {
          goto L_089C44FC;
      }
      goto L_089C4468;
    }
L_089C4468:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C44FC;
      }
      goto L_089C4480;
    }
L_089C4480:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-28644), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089C44D0;
      }
      goto L_089C448C;
    }
L_089C448C:
    ctx.gpr[31] = (0x089C4494u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.pc = 0x08B0BCBCu;
    return;
L_089C4494:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089C44A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BCACu;
    return;
L_089C44A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-28716), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089C44D0;
L_089C44D0:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x089C44E4u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 792u, 0x089C31DCu>(ctx, &aot_mem) && ctx.pc == 0x089C44E4u) goto L_089C44E4;
    return;
L_089C44E4:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-28648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089C44FC;
L_089C44FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-28644)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C453C;
      }
      goto L_089C4508;
    }
L_089C4508:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-28648)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C453C;
      }
      goto L_089C451C;
    }
L_089C451C:
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-28648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C453C;
      }
      goto L_089C4538;
    }
L_089C4538:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-28648), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089C453C;
L_089C453C:
    ctx.gpr[31] = (0x089C4544u);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 512u, 0x08AC75E8u>(ctx, &aot_mem) && ctx.pc == 0x089C4544u) goto L_089C4544;
    return;
L_089C4544:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C460C;
      }
      goto L_089C454C;
    }
L_089C454C:
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28640)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C45B0;
      }
      goto L_089C4570;
    }
L_089C4570:
    ctx.gpr[31] = (0x089C4578u);
    // nop
    ctx.pc = 0x08B0BCBCu;
    return;
L_089C4578:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089C458Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BCACu;
    return;
L_089C458C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-28640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089C45B0;
L_089C45B0:
    ctx.gpr[31] = (0x089C45B8u);
    ctx.gpr[18] = (0u | 0u);
    ctx.pc = 0x08B0BCBCu;
    return;
L_089C45B8:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089C45CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BCACu;
    return;
L_089C45CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28640)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[18] = (0u | 1u);
        goto L_089C4604;
    }
    goto L_089C4604;
L_089C4604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_089C4610;
      }
      goto L_089C460C;
    }
L_089C460C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-28640), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089C4610;
L_089C4610:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C462C;
      }
      goto L_089C4618;
    }
L_089C4618:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-28648)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C48B4;
      }
      goto L_089C462C;
    }
L_089C462C:
    ctx.gpr[31] = (0x089C4634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x089C4634u) goto L_089C4634;
    return;
L_089C4634:
    ctx.gpr[31] = (0x089C463Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x089C463Cu) goto L_089C463C;
    return;
L_089C463C:
    ctx.gpr[31] = (0x089C4644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 203u, 0x08A54FCCu>(ctx, &aot_mem) && ctx.pc == 0x089C4644u) goto L_089C4644;
    return;
L_089C4644:
    ctx.gpr[31] = (0x089C464Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x089C464Cu) goto L_089C464C;
    return;
L_089C464C:
    ctx.gpr[4] = (17392u << 16u);
    ctx.gpr[31] = (0x089C4658u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4658u) goto L_089C4658;
    return;
L_089C4658:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089C467Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x089C467Cu) goto L_089C467C;
    return;
L_089C467C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C47C4;
      }
      goto L_089C4684;
    }
L_089C4684:
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17160u << 16u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C46C0;
      }
      goto L_089C4698;
    }
L_089C4698:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C46B0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089C46B0u) goto L_089C46B0;
    return;
L_089C46B0:
    ctx.gpr[31] = (0x089C46B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x089C46B8u) goto L_089C46B8;
    return;
L_089C46B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C46E0;
      }
      goto L_089C46C0;
    }
L_089C46C0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C46D8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089C46D8u) goto L_089C46D8;
    return;
L_089C46D8:
    ctx.gpr[31] = (0x089C46E0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x089C46E0u) goto L_089C46E0;
    return;
L_089C46E0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089C46ECu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x089C46ECu) goto L_089C46EC;
    return;
L_089C46EC:
    ctx.gpr[31] = (0x089C46F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x089C46F4u) goto L_089C46F4;
    return;
L_089C46F4:
    ctx.gpr[31] = (0x089C46FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 516u, 0x08AC7624u>(ctx, &aot_mem) && ctx.pc == 0x089C46FCu) goto L_089C46FC;
    return;
L_089C46FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
      if (branch_taken) {
          goto L_089C4764;
      }
      goto L_089C4704;
    }
L_089C4704:
    ctx.gpr[19] = (2226u << 16u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-10944));
      if (branch_taken) {
          goto L_089C473C;
      }
      goto L_089C4710;
    }
L_089C4710:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C471Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C471Cu) goto L_089C471C;
    return;
L_089C471C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4734;
      }
      goto L_089C4728;
    }
L_089C4728:
    ctx.gpr[31] = (0x089C4730u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C4730u) goto L_089C4730;
    return;
L_089C4730:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C4734;
L_089C4734:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_089C473C;
L_089C473C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C4748u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089C4748u) goto L_089C4748;
    return;
L_089C4748:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089C475Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089C475Cu) goto L_089C475C;
    return;
L_089C475C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C47B4;
      }
      goto L_089C4764;
    }
L_089C4764:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089C4798;
      }
      goto L_089C476C;
    }
L_089C476C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089C4778u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C4778u) goto L_089C4778;
    return;
L_089C4778:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4790;
      }
      goto L_089C4784;
    }
L_089C4784:
    ctx.gpr[31] = (0x089C478Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C478Cu) goto L_089C478C;
    return;
L_089C478C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089C4790;
L_089C4790:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C4798;
L_089C4798:
    ctx.gpr[31] = (0x089C47A0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089C47A0u) goto L_089C47A0;
    return;
L_089C47A0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089C47B4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089C47B4u) goto L_089C47B4;
    return;
L_089C47B4:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4832));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089C47C4;
L_089C47C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-28648)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C48C0;
      }
      goto L_089C47D8;
    }
L_089C47D8:
    ctx.gpr[31] = (0x089C47E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x089C47E0u) goto L_089C47E0;
    return;
L_089C47E0:
    ctx.gpr[31] = (0x089C47E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x089C47E8u) goto L_089C47E8;
    return;
L_089C47E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-28648)));
    ctx.gpr[23] = (2226u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-10944));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089C482C;
      }
      goto L_089C4804;
    }
L_089C4804:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089C481Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089C481Cu) goto L_089C481C;
    return;
L_089C481C:
    ctx.gpr[31] = (0x089C4824u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x089C4824u) goto L_089C4824;
    return;
L_089C4824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
      if (branch_taken) {
          goto L_089C4850;
      }
      goto L_089C482C;
    }
L_089C482C:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x089C4844u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089C4844u) goto L_089C4844;
    return;
L_089C4844:
    ctx.gpr[31] = (0x089C484Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x089C484Cu) goto L_089C484C;
    return;
L_089C484C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    goto L_089C4850;
L_089C4850:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089C4884;
      }
      goto L_089C4858;
    }
L_089C4858:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C4864u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C4864u) goto L_089C4864;
    return;
L_089C4864:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C487C;
      }
      goto L_089C4870;
    }
L_089C4870:
    ctx.gpr[31] = (0x089C4878u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C4878u) goto L_089C4878;
    return;
L_089C4878:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C487C;
L_089C487C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089C4884;
L_089C4884:
    ctx.gpr[31] = (0x089C488Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089C488Cu) goto L_089C488C;
    return;
L_089C488C:
    ctx.gpr[6] = (17389u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (16544u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C48ACu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089C48ACu) goto L_089C48AC;
    return;
L_089C48AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C48C0;
      }
      goto L_089C48B4;
    }
L_089C48B4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    goto L_089C48C0;
L_089C48C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4904:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C4938u);
    // nop
    ctx.pc = 0x08B0B8A4u;
    return;
L_089C4938:
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1824));
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[30] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C4AE0;
      }
      goto L_089C4954;
    }
L_089C4954:
    ctx.gpr[31] = (0x089C495Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 508u, 0x08AC75ACu>(ctx, &aot_mem) && ctx.pc == 0x089C495Cu) goto L_089C495C;
    return;
L_089C495C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4AE0;
      }
      goto L_089C4964;
    }
L_089C4964:
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10384));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C4978u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 284u, 0x08A6D404u>(ctx, &aot_mem) && ctx.pc == 0x089C4978u) goto L_089C4978;
    return;
L_089C4978:
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8107));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-28636));
      if (branch_taken) {
          goto L_089C499C;
      }
      goto L_089C498C;
    }
L_089C498C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[31] = (0x089C499Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x089C499Cu) goto L_089C499C;
    return;
L_089C499C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C49A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 284u, 0x08A6D404u>(ctx, &aot_mem) && ctx.pc == 0x089C49A8u) goto L_089C49A8;
    return;
L_089C49A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C49C0;
      }
      goto L_089C49B0;
    }
L_089C49B0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x089C49C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x089C49C0u) goto L_089C49C0;
    return;
L_089C49C0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C49CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 114u, 0x08864830u>(ctx, &aot_mem) && ctx.pc == 0x089C49CCu) goto L_089C49CC;
    return;
L_089C49CC:
    ctx.gpr[31] = (0x089C49D4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 94u, 0x088646F8u>(ctx, &aot_mem) && ctx.pc == 0x089C49D4u) goto L_089C49D4;
    return;
L_089C49D4:
    ctx.gpr[31] = (0x089C49DCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 455u, 0x089C1F48u>(ctx, &aot_mem) && ctx.pc == 0x089C49DCu) goto L_089C49DC;
    return;
L_089C49DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4A08;
      }
      goto L_089C49E8;
    }
L_089C49E8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C4A00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10772));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x089C4A00u) goto L_089C4A00;
    return;
L_089C4A00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4A1C;
      }
      goto L_089C4A08;
    }
L_089C4A08:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089C4A1Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x089C4A1Cu) goto L_089C4A1C;
    return;
L_089C4A1C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 4251u);
    ctx.gpr[31] = (0x089C4A30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10760));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 128u, 0x089C0980u>(ctx, &aot_mem) && ctx.pc == 0x089C4A30u) goto L_089C4A30;
    return;
L_089C4A30:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28620)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-10740));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28624)));
    goto L_089C4A4C;
L_089C4A4C:
    ctx.gpr[31] = (0x089C4A54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x089C4A54u) goto L_089C4A54;
    return;
L_089C4A54:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x089C4A60u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.pc = 0x08B0B89Cu;
    return;
L_089C4A60:
    ctx.gpr[31] = (0x089C4A68u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.pc = 0x08B0B8A4u;
    return;
L_089C4A68:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
      if (branch_taken) {
          goto L_089C4AB0;
      }
      goto L_089C4A78;
    }
L_089C4A78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4AB0;
      }
      goto L_089C4A80;
    }
L_089C4A80:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C4A8Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BDC4u;
    return;
L_089C4A8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C4AB0;
      }
      goto L_089C4A94;
    }
L_089C4A94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C4AB0;
      }
      goto L_089C4AA4;
    }
L_089C4AA4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089C4AB0;
      }
      goto L_089C4AAC;
    }
L_089C4AAC:
    ctx.gpr[16] = (0u | 1u);
    goto L_089C4AB0;
L_089C4AB0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4A4C;
      }
      goto L_089C4AB8;
    }
L_089C4AB8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 4280u);
    ctx.gpr[31] = (0x089C4ACCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10688));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 128u, 0x089C0980u>(ctx, &aot_mem) && ctx.pc == 0x089C4ACCu) goto L_089C4ACC;
    return;
L_089C4ACC:
    ctx.gpr[31] = (0x089C4AD4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 455u, 0x089C1F48u>(ctx, &aot_mem) && ctx.pc == 0x089C4AD4u) goto L_089C4AD4;
    return;
L_089C4AD4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C4AE0u);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 114u, 0x08864830u>(ctx, &aot_mem) && ctx.pc == 0x089C4AE0u) goto L_089C4AE0;
    return;
L_089C4AE0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089C4B00;
      }
      goto L_089C4AF0;
    }
L_089C4AF0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4B0C;
      }
      goto L_089C4B00;
    }
L_089C4B00:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(27012), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089C4B14;
      }
      goto L_089C4B0C;
    }
L_089C4B0C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(27012), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089C4B14;
L_089C4B14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4B28;
      }
      goto L_089C4B20;
    }
L_089C4B20:
    ctx.gpr[31] = (0x089C4B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 485u, 0x08AB7224u>(ctx, &aot_mem) && ctx.pc == 0x089C4B28u) goto L_089C4B28;
    return;
L_089C4B28:
    ctx.gpr[31] = (0x089C4B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 878u, 0x08AD37E0u>(ctx, &aot_mem) && ctx.pc == 0x089C4B30u) goto L_089C4B30;
    return;
L_089C4B30:
    ctx.gpr[31] = (0x089C4B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 77u, 0x08A54684u>(ctx, &aot_mem) && ctx.pc == 0x089C4B38u) goto L_089C4B38;
    return;
L_089C4B38:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8056), 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C4B50u);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x089C4B50u) goto L_089C4B50;
    return;
L_089C4B50:
    ctx.gpr[31] = (0x089C4B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 458u, 0x08AD1AE8u>(ctx, &aot_mem) && ctx.pc == 0x089C4B58u) goto L_089C4B58;
    return;
L_089C4B58:
    ctx.gpr[31] = (0x089C4B60u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x089C4B60u) goto L_089C4B60;
    return;
L_089C4B60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4B74;
      }
      goto L_089C4B6C;
    }
L_089C4B6C:
    ctx.gpr[31] = (0x089C4B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 487u, 0x08AB7244u>(ctx, &aot_mem) && ctx.pc == 0x089C4B74u) goto L_089C4B74;
    return;
L_089C4B74:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C4BA8;
      }
      goto L_089C4B84;
    }
L_089C4B84:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C4BA8;
      }
      goto L_089C4B98;
    }
L_089C4B98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x089C4BA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 94u, 0x088646F8u>(ctx, &aot_mem) && ctx.pc == 0x089C4BA4u) goto L_089C4BA4;
    return;
L_089C4BA4:
    ctx.gpr[20] = (2229u << 16u);
    goto L_089C4BA8;
L_089C4BA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-28743)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_089C4BD4;
      }
      goto L_089C4BB4;
    }
L_089C4BB4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C4C08;
      }
      goto L_089C4BC8;
    }
L_089C4BC8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16500)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C4C08;
      }
      goto L_089C4BD4;
    }
L_089C4BD4:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[31] = (0x089C4BE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7960)));
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 2u, 0x088D0018u>(ctx, &aot_mem) && ctx.pc == 0x089C4BE0u) goto L_089C4BE0;
    return;
L_089C4BE0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C4BECu);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x089C4BECu) goto L_089C4BEC;
    return;
L_089C4BEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-28743)));
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12960));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_089C4C10;
      }
      goto L_089C4C00;
    }
L_089C4C00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4C48;
      }
      goto L_089C4C08;
    }
L_089C4C08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C4F58;
      }
      goto L_089C4C10;
    }
L_089C4C10:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C4C20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x089C4C20u) goto L_089C4C20;
    return;
L_089C4C20:
    ctx.gpr[31] = (0x089C4C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 434u, 0x089C1BE8u>(ctx, &aot_mem) && ctx.pc == 0x089C4C28u) goto L_089C4C28;
    return;
L_089C4C28:
    ctx.gpr[31] = (0x089C4C30u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 394u, 0x089C1998u>(ctx, &aot_mem) && ctx.pc == 0x089C4C30u) goto L_089C4C30;
    return;
L_089C4C30:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-28743), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3183), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089C4C48;
L_089C4C48:
    ctx.gpr[31] = (0x089C4C50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 137u, 0x088ED164u>(ctx, &aot_mem) && ctx.pc == 0x089C4C50u) goto L_089C4C50;
    return;
L_089C4C50:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C4C88;
      }
      goto L_089C4C58;
    }
L_089C4C58:
    ctx.gpr[31] = (0x089C4C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 488u, 0x0887AF98u>(ctx, &aot_mem) && ctx.pc == 0x089C4C60u) goto L_089C4C60;
    return;
L_089C4C60:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28728)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4C88;
      }
      goto L_089C4C70;
    }
L_089C4C70:
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4832));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1133), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28728), static_cast<std::uint8_t>(0u));
    goto L_089C4C88;
L_089C4C88:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28718)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C4EE0;
      }
      goto L_089C4C98;
    }
L_089C4C98:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-7960));
      if (branch_taken) {
          goto L_089C4CC0;
      }
      goto L_089C4CB0;
    }
L_089C4CB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1130)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C4E08;
      }
      goto L_089C4CC0;
    }
L_089C4CC0:
    ctx.gpr[31] = (0x089C4CC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 137u, 0x088ED164u>(ctx, &aot_mem) && ctx.pc == 0x089C4CC8u) goto L_089C4CC8;
    return;
L_089C4CC8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C4E08;
      }
      goto L_089C4CD0;
    }
L_089C4CD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089C4CEC;
      }
      goto L_089C4CDC;
    }
L_089C4CDC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4E08;
      }
      goto L_089C4CEC;
    }
L_089C4CEC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C4D34;
      }
      goto L_089C4CFC;
    }
L_089C4CFC:
    ctx.gpr[31] = (0x089C4D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 436u, 0x08ACA9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C4D04u) goto L_089C4D04;
    return;
L_089C4D04:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22640)));
        goto L_089C4D38;
    }
    goto L_089C4D0C;
L_089C4D0C:
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[31] = (0x089C4D2Cu);
    ctx.gpr[10] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 281u, 0x089C1370u>(ctx, &aot_mem) && ctx.pc == 0x089C4D2Cu) goto L_089C4D2C;
    return;
L_089C4D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4D88;
      }
      goto L_089C4D34;
    }
L_089C4D34:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22640)));
    goto L_089C4D38;
L_089C4D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11068)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11072)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11076)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11080)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11084)));
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11088)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[9] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[9] = (ctx.gpr[10] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[31] = (0x089C4D88u);
    ctx.gpr[10] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 281u, 0x089C1370u>(ctx, &aot_mem) && ctx.pc == 0x089C4D88u) goto L_089C4D88;
    return;
L_089C4D88:
    ctx.gpr[31] = (0x089C4D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 216u, 0x08A4CE28u>(ctx, &aot_mem) && ctx.pc == 0x089C4D90u) goto L_089C4D90;
    return;
L_089C4D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22640)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11148)));
    ctx.gpr[31] = (0x089C4DA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 603u, 0x088735A0u>(ctx, &aot_mem) && ctx.pc == 0x089C4DA0u) goto L_089C4DA0;
    return;
L_089C4DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22640)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11152)));
    ctx.gpr[31] = (0x089C4DB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 640u, 0x08873948u>(ctx, &aot_mem) && ctx.pc == 0x089C4DB0u) goto L_089C4DB0;
    return;
L_089C4DB0:
    ctx.gpr[31] = (0x089C4DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 665u, 0x089C2AA4u>(ctx, &aot_mem) && ctx.pc == 0x089C4DB8u) goto L_089C4DB8;
    return;
L_089C4DB8:
    ctx.gpr[31] = (0x089C4DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 675u, 0x089C2B10u>(ctx, &aot_mem) && ctx.pc == 0x089C4DC0u) goto L_089C4DC0;
    return;
L_089C4DC0:
    ctx.gpr[31] = (0x089C4DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 674u, 0x089C2B08u>(ctx, &aot_mem) && ctx.pc == 0x089C4DC8u) goto L_089C4DC8;
    return;
L_089C4DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7172)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4DE0;
      }
      goto L_089C4DD4;
    }
L_089C4DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7172)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[20] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C4DE4;
      }
      goto L_089C4DE0;
    }
L_089C4DE0:
    ctx.gpr[20] = (2229u << 16u);
    goto L_089C4DE4;
L_089C4DE4:
    ctx.gpr[31] = (0x089C4DECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 496u, 0x088EF13Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4DECu) goto L_089C4DEC;
    return;
L_089C4DEC:
    ctx.gpr[31] = (0x089C4DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 703u, 0x089C2C1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4DF4u) goto L_089C4DF4;
    return;
L_089C4DF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(322)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4E84;
      }
      goto L_089C4E00;
    }
L_089C4E00:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089C4E84;
      }
      goto L_089C4E08;
    }
L_089C4E08:
    ctx.gpr[31] = (0x089C4E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 163u, 0x0883CBF8u>(ctx, &aot_mem) && ctx.pc == 0x089C4E10u) goto L_089C4E10;
    return;
L_089C4E10:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3172)));
    ctx.gpr[4] = (15374u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vrot(1u, 64u, 2u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16355u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 36409u);
    ctx.fpr[13] = lcs::lcs_widescreen_aspect(std::bit_cast<float>(ctx.gpr[5]));
    ctx.fpr[12] = lcs::lcs_widescreen_extent(ctx.fpr[12]);
    ctx.gpr[31] = (0x089C4E60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 276u, 0x08839298u>(ctx, &aot_mem) && ctx.pc == 0x089C4E60u) goto L_089C4E60;
    return;
L_089C4E60:
    ctx.gpr[31] = (0x089C4E68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 517u, 0x08926F84u>(ctx, &aot_mem) && ctx.pc == 0x089C4E68u) goto L_089C4E68;
    return;
L_089C4E68:
    ctx.gpr[31] = (0x089C4E70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 575u, 0x0891736Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4E70u) goto L_089C4E70;
    return;
L_089C4E70:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089C4E84u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6288));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 633u, 0x088738A8u>(ctx, &aot_mem) && ctx.pc == 0x089C4E84u) goto L_089C4E84;
    return;
L_089C4E84:
    ctx.gpr[31] = (0x089C4E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 752u, 0x089C2F40u>(ctx, &aot_mem) && ctx.pc == 0x089C4E8Cu) goto L_089C4E8C;
    return;
L_089C4E8C:
    ctx.gpr[31] = (0x089C4E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 1059u, 0x089C3F1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4E94u) goto L_089C4E94;
    return;
L_089C4E94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-28743)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_089C4EB0;
      }
      goto L_089C4EA0;
    }
L_089C4EA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1133)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C4ED0;
      }
      goto L_089C4EB0;
    }
L_089C4EB0:
    ctx.gpr[31] = (0x089C4EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 765u, 0x089C306Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4EB8u) goto L_089C4EB8;
    return;
L_089C4EB8:
    ctx.gpr[31] = (0x089C4EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 472u, 0x08A8E454u>(ctx, &aot_mem) && ctx.pc == 0x089C4EC0u) goto L_089C4EC0;
    return;
L_089C4EC0:
    ctx.gpr[31] = (0x089C4EC8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 333u, 0x089C16A4u>(ctx, &aot_mem) && ctx.pc == 0x089C4EC8u) goto L_089C4EC8;
    return;
L_089C4EC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4EE0;
      }
      goto L_089C4ED0;
    }
L_089C4ED0:
    ctx.gpr[31] = (0x089C4ED8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x089C4ED8u) goto L_089C4ED8;
    return;
L_089C4ED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C4F58;
      }
      goto L_089C4EE0;
    }
L_089C4EE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-28743)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089C4F24;
      }
      goto L_089C4EEC;
    }
L_089C4EEC:
    ctx.gpr[31] = (0x089C4EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 434u, 0x089C1BE8u>(ctx, &aot_mem) && ctx.pc == 0x089C4EF4u) goto L_089C4EF4;
    return;
L_089C4EF4:
    ctx.gpr[31] = (0x089C4EFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 394u, 0x089C1998u>(ctx, &aot_mem) && ctx.pc == 0x089C4EFCu) goto L_089C4EFC;
    return;
L_089C4EFC:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C4F10u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x089C4F10u) goto L_089C4F10;
    return;
L_089C4F10:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-28743), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3183), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089C4F24;
L_089C4F24:
    ctx.gpr[31] = (0x089C4F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B3ACu>(ctx, &aot_mem) && ctx.pc == 0x089C4F2Cu) goto L_089C4F2C;
    return;
L_089C4F2C:
    ctx.gpr[31] = (0x089C4F34u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x089C4F34u) goto L_089C4F34;
    return;
L_089C4F34:
    // The game's main loop. The trainer runs its routines here, on the game's thread.
    if (lcs::trainer_frame(rt, ctx)) return;
    ctx.gpr[31] = (0x089C4F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 607u, 0x089C27A4u>(ctx, &aot_mem) && ctx.pc == 0x089C4F3Cu) goto L_089C4F3C;
    return;
L_089C4F3C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25308)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4F54;
      }
      goto L_089C4F4C;
    }
L_089C4F4C:
    ctx.gpr[31] = (0x089C4F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 572u, 0x089C25D0u>(ctx, &aot_mem) && ctx.pc == 0x089C4F54u) goto L_089C4F54;
    return;
L_089C4F54:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_089C4F58;
L_089C4F58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4F88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28812)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28816)));
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28808), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28788)));
    ctx.gpr[3] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-28776)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28780)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28772), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-28764), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-28800), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-28804), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.gpr[14] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[8] = (16281u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-28796), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-28792), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[24] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-28784), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[25] = (2229u << 16u);
    ctx.gpr[17] = (2229u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28712));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-28768), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5084u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28760), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x089C5084u) goto L_089C5084;
    return;
L_089C5084:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089C5090u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28616));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x089C5090u) goto L_089C5090;
    return;
L_089C5090:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C50A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C50C4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x089C50C4u) goto L_089C50C4;
    return;
L_089C50C4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) & 0x7FFFFFFFu);
    ctx.gpr[31] = (0x089C50D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x089C50D0u) goto L_089C50D0;
    return;
L_089C50D0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C50E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5108u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x089C5108u) goto L_089C5108;
    return;
L_089C5108:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[0]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x089C5118u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x089C5118u) goto L_089C5118;
    return;
L_089C5118:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5130:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5154u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x089C5154u) goto L_089C5154;
    return;
L_089C5154:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C5164u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x089C5164u) goto L_089C5164;
    return;
L_089C5164:
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[31] = (0x089C5180u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x089C5180u) goto L_089C5180;
    return;
L_089C5180:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C519C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C51C0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x089C51C0u) goto L_089C51C0;
    return;
L_089C51C0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C51D4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x089C51D4u) goto L_089C51D4;
    return;
L_089C51D4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_089C5218;
      }
      goto L_089C51E4;
    }
L_089C51E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C51F0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x089C51F0u) goto L_089C51F0;
    return;
L_089C51F0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C5208;
      }
      goto L_089C5204;
    }
L_089C5204:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089C5208;
L_089C5208:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C51E4;
      }
      goto L_089C5218;
    }
L_089C5218:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C5224u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x089C5224u) goto L_089C5224;
    return;
L_089C5224:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_089C5248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C526Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x089C526Cu) goto L_089C526C;
    return;
L_089C526C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C5280u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x089C5280u) goto L_089C5280;
    return;
L_089C5280:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_089C52C4;
      }
      goto L_089C5290;
    }
L_089C5290:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C529Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x089C529Cu) goto L_089C529C;
    return;
L_089C529C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C52B4;
      }
      goto L_089C52B0;
    }
L_089C52B0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089C52B4;
L_089C52B4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5290;
      }
      goto L_089C52C4;
    }
L_089C52C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C52D0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x089C52D0u) goto L_089C52D0;
    return;
L_089C52D0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_089C52F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5310u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089C5310u) goto L_089C5310;
    return;
L_089C5310:
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_089C5338;
      }
      goto L_089C532C;
    }
L_089C532C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089C5338;
L_089C5338:
    ctx.gpr[4] = (12288u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C534Cu);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x089C534Cu) goto L_089C534C;
    return;
L_089C534C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C5374;
      }
      goto L_089C5358;
    }
L_089C5358:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C5384;
      }
      goto L_089C5360;
    }
L_089C5360:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C536Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x089C536Cu) goto L_089C536C;
    return;
L_089C536C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C54A0;
      }
      goto L_089C5374;
    }
L_089C5374:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C539C;
      }
      goto L_089C537C;
    }
L_089C537C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5410;
      }
      goto L_089C5384;
    }
L_089C5384:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C5394u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10512));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 389u, 0x08A4B374u>(ctx, &aot_mem) && ctx.pc == 0x089C5394u) goto L_089C5394;
    return;
L_089C5394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C54A0;
      }
      goto L_089C539C;
    }
L_089C539C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C53A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x089C53A8u) goto L_089C53A8;
    return;
L_089C53A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
        goto L_089C53DC;
    }
    goto L_089C53BC;
L_089C53BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089C53D4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10532));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 361u, 0x08A4B144u>(ctx, &aot_mem) && ctx.pc == 0x089C53D4u) goto L_089C53D4;
    return;
L_089C53D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089C53DC;
L_089C53DC:
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x089C5408u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x089C5408u) goto L_089C5408;
    return;
L_089C5408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C536C;
      }
      goto L_089C5410;
    }
L_089C5410:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C541Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x089C541Cu) goto L_089C541C;
    return;
L_089C541C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x089C5430u);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x089C5430u) goto L_089C5430;
    return;
L_089C5430:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
        goto L_089C5464;
    }
    goto L_089C5444;
L_089C5444:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x089C545Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10532));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 361u, 0x08A4B144u>(ctx, &aot_mem) && ctx.pc == 0x089C545Cu) goto L_089C545C;
    return;
L_089C545C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    goto L_089C5464;
L_089C5464:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x089C5498u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x089C5498u) goto L_089C5498;
    return;
L_089C5498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C536C;
      }
      goto L_089C54A0;
    }
L_089C54A0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C54B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C54C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x089C54C8u) goto L_089C54C8;
    return;
L_089C54C8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089C54D4u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 339u, 0x08AED31Cu>(ctx, &aot_mem) && ctx.pc == 0x089C54D4u) goto L_089C54D4;
    return;
L_089C54D4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C54E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10484));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C550Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28600));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 488u, 0x08A4B984u>(ctx, &aot_mem) && ctx.pc == 0x089C550Cu) goto L_089C550C;
    return;
L_089C550C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089C5520u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10476));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x089C5520u) goto L_089C5520;
    return;
L_089C5520:
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C5534u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x089C5534u) goto L_089C5534;
    return;
L_089C5534:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C5540u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x089C5540u) goto L_089C5540;
    return;
L_089C5540:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5554:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5580u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28536));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 336u, 0x08A36104u>(ctx, &aot_mem) && ctx.pc == 0x089C5580u) goto L_089C5580;
    return;
L_089C5580:
    ctx.gpr[31] = (0x089C5588u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 548u, 0x08AD68E4u>(ctx, &aot_mem) && ctx.pc == 0x089C5588u) goto L_089C5588;
    return;
L_089C5588:
    ctx.gpr[31] = (0x089C5590u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x089C5590u) goto L_089C5590;
    return;
L_089C5590:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C55A4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C55AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C55DCu);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_089C55A4;
L_089C55DC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089C5624;
      }
      goto L_089C55F0;
    }
L_089C55F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x089C5604u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C5604u) goto L_089C5604;
    return;
L_089C5604:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5614;
      }
      goto L_089C560C;
    }
L_089C560C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089C5628;
      }
      goto L_089C5614;
    }
L_089C5614:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C55F0;
      }
      goto L_089C5624;
    }
L_089C5624:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_089C5628;
L_089C5628:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C564C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5688u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28536));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 296u, 0x08A35E54u>(ctx, &aot_mem) && ctx.pc == 0x089C5688u) goto L_089C5688;
    return;
L_089C5688:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5694:
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
L_089C56C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C56C8;
      }
      goto L_089C56C8;
    }
L_089C56C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C56D0:
    // LoadCollisionScreen.
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28280));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C56F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 543u, 0x089C23E4u>(ctx, &aot_mem) && ctx.pc == 0x089C56F4u) goto L_089C56F4;
    return;
L_089C56F4:
    ctx.gpr[31] = (0x089C56FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 543u, 0x089C23E4u>(ctx, &aot_mem) && ctx.pc == 0x089C56FCu) goto L_089C56FC;
    return;
L_089C56FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C570C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C5738;
      }
      goto L_089C5720;
    }
L_089C5720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5740;
      }
      goto L_089C5730;
    }
L_089C5730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5768;
      }
      goto L_089C5738;
    }
L_089C5738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5774;
      }
      goto L_089C5740;
    }
L_089C5740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089C5758u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C5758u) goto L_089C5758;
    return;
L_089C5758:
    ctx.gpr[31] = (0x089C5760u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    goto L_089C6124;
L_089C5760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5774;
      }
      goto L_089C5768;
    }
L_089C5768:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C5774u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10188));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5774u) goto L_089C5774;
    return;
L_089C5774:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5784:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089C5798;
      }
      goto L_089C5794;
    }
L_089C5794:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089C5798;
L_089C5798:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C57A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C57CC;
      }
      goto L_089C57C0;
    }
L_089C57C0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[31] = (0x089C57CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 369u, 0x0894E208u>(ctx, &aot_mem) && ctx.pc == 0x089C57CCu) goto L_089C57CC;
    return;
L_089C57CC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C57E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C57FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C581C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5824:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5838;
      }
      goto L_089C5830;
    }
L_089C5830:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C584C;
      }
      goto L_089C5838;
    }
L_089C5838:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089C584C;
L_089C584C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5854:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5860:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6276), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6272), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-8068), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6268), ctx.gpr[6]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6024));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_089C58B4;
L_089C58B4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C58B4;
      }
      goto L_089C58CC;
    }
L_089C58CC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5908;
      }
      goto L_089C58D4;
    }
L_089C58D4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(9176));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10136));
    ctx.gpr[31] = (0x089C58F4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(13477));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x089C58F4u) goto L_089C58F4;
    return;
L_089C58F4:
    ctx.gpr[31] = (0x089C58FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 414u, 0x08A8A7BCu>(ctx, &aot_mem) && ctx.pc == 0x089C58FCu) goto L_089C58FC;
    return;
L_089C58FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    goto L_089C5908;
L_089C5908:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7436)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C5920u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10108));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5920u) goto L_089C5920;
    return;
L_089C5920:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5934:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5954u);
    // nop
    goto L_089C66D8;
L_089C5954:
    ctx.gpr[31] = (0x089C595Cu);
    // nop
    goto L_089C5D04;
L_089C595C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[16] = (2229u << 16u);
    goto L_089C596C;
L_089C596C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C598C;
      }
      goto L_089C597C;
    }
L_089C597C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_089C598C;
L_089C598C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C59A4;
      }
      goto L_089C5994;
    }
L_089C5994:
    ctx.gpr[31] = (0x089C599Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089C6AC4;
L_089C599C:
    ctx.gpr[31] = (0x089C59A4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089C6BE8;
L_089C59A4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C596C;
      }
      goto L_089C59B4;
    }
L_089C59B4:
    ctx.gpr[31] = (0x089C59BCu);
    // nop
    goto L_089C63A4;
L_089C59BC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-8068), static_cast<std::uint8_t>(0u));
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
L_089C59E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5A04u);
    // nop
    goto L_089C737C;
L_089C5A04:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6268)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C5A64;
      }
      goto L_089C5A18;
    }
L_089C5A18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7200)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5A5C;
      }
      goto L_089C5A34;
    }
L_089C5A34:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[20] = (2u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-7388));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[18] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C5A74;
      }
      goto L_089C5A54;
    }
L_089C5A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5A80;
      }
      goto L_089C5A5C;
    }
L_089C5A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5C2C;
      }
      goto L_089C5A64;
    }
L_089C5A64:
    ctx.gpr[31] = (0x089C5A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 394u, 0x089C9C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5A6Cu) goto L_089C5A6C;
    return;
L_089C5A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5C2C;
      }
      goto L_089C5A74;
    }
L_089C5A74:
    ctx.gpr[31] = (0x089C5A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x089C5A7Cu) goto L_089C5A7C;
    return;
L_089C5A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20436)));
    goto L_089C5A80;
L_089C5A80:
    ctx.gpr[31] = (0x089C5A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 664u, 0x08953B30u>(ctx, &aot_mem) && ctx.pc == 0x089C5A88u) goto L_089C5A88;
    return;
L_089C5A88:
    ctx.gpr[31] = (0x089C5A90u);
    // nop
    goto L_089C7384;
L_089C5A90:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x089C5AA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 577u, 0x089CA810u>(ctx, &aot_mem) && ctx.pc == 0x089C5AA0u) goto L_089C5AA0;
    return;
L_089C5AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5AB8;
      }
      goto L_089C5AAC;
    }
L_089C5AAC:
    ctx.gpr[31] = (0x089C5AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x089C5AB4u) goto L_089C5AB4;
    return;
L_089C5AB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20436)));
    goto L_089C5AB8;
L_089C5AB8:
    ctx.gpr[31] = (0x089C5AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 67u, 0x089504D0u>(ctx, &aot_mem) && ctx.pc == 0x089C5AC0u) goto L_089C5AC0;
    return;
L_089C5AC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5AD4;
      }
      goto L_089C5AC8;
    }
L_089C5AC8:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-28268), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C5AE8;
      }
      goto L_089C5AD4;
    }
L_089C5AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28268)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5AE8;
      }
      goto L_089C5AE0;
    }
L_089C5AE0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-28268), ctx.gpr[4]);
    goto L_089C5AE8;
L_089C5AE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(680)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8068)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C5B50;
      }
      goto L_089C5B00;
    }
L_089C5B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8060)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C5B50;
      }
      goto L_089C5B10;
    }
L_089C5B10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7167)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5B50;
      }
      goto L_089C5B1C;
    }
L_089C5B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28268)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C5B50;
      }
      goto L_089C5B28;
    }
L_089C5B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5B50;
      }
      goto L_089C5B34;
    }
L_089C5B34:
    ctx.gpr[31] = (0x089C5B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 455u, 0x089CA118u>(ctx, &aot_mem) && ctx.pc == 0x089C5B3Cu) goto L_089C5B3C;
    return;
L_089C5B3C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089C5B48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089C5B48u) goto L_089C5B48;
    return;
L_089C5B48:
    ctx.gpr[31] = (0x089C5B50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 108u, 0x089CC768u>(ctx, &aot_mem) && ctx.pc == 0x089C5B50u) goto L_089C5B50;
    return;
L_089C5B50:
    ctx.gpr[31] = (0x089C5B58u);
    // nop
    goto L_089C65D8;
L_089C5B58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5BD8;
      }
      goto L_089C5B64;
    }
L_089C5B64:
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5BB0;
      }
      goto L_089C5B78;
    }
L_089C5B78:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089C5B84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089C5B84u) goto L_089C5B84;
    return;
L_089C5B84:
    ctx.gpr[31] = (0x089C5B8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 347u, 0x08986148u>(ctx, &aot_mem) && ctx.pc == 0x089C5B8Cu) goto L_089C5B8C;
    return;
L_089C5B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C5B9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 295u, 0x08985DF4u>(ctx, &aot_mem) && ctx.pc == 0x089C5B9Cu) goto L_089C5B9C;
    return;
L_089C5B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089C5BA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 346u, 0x08986140u>(ctx, &aot_mem) && ctx.pc == 0x089C5BA8u) goto L_089C5BA8;
    return;
L_089C5BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5BD8;
      }
      goto L_089C5BB0;
    }
L_089C5BB0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089C5BBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089C5BBCu) goto L_089C5BBC;
    return;
L_089C5BBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C5BC8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 295u, 0x08985DF4u>(ctx, &aot_mem) && ctx.pc == 0x089C5BC8u) goto L_089C5BC8;
    return;
L_089C5BC8:
    ctx.gpr[31] = (0x089C5BD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089C5BD0u) goto L_089C5BD0;
    return;
L_089C5BD0:
    ctx.gpr[31] = (0x089C5BD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 346u, 0x08986140u>(ctx, &aot_mem) && ctx.pc == 0x089C5BD8u) goto L_089C5BD8;
    return;
L_089C5BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7364)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    ctx.gpr[16] = (0u | 20u);
      if (branch_taken) {
          goto L_089C5C2C;
      }
      goto L_089C5BF4;
    }
L_089C5BF4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089C5BF8;
L_089C5BF8:
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(9)));
    ctx.gpr[6] = (ctx.gpr[6] & 143u);
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C5C20;
      }
      goto L_089C5C14;
    }
L_089C5C14:
    ctx.gpr[31] = (0x089C5C1Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089C6124;
L_089C5C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    goto L_089C5C20;
L_089C5C20:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C5BF8;
      }
      goto L_089C5C2C;
    }
L_089C5C2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5C4C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7408));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7428), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7424), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7408), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7404), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7368));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7388), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7384), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7368), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7388));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7364), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5D04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (2227u << 16u);
    goto L_089C5D3C;
L_089C5D3C:
    ctx.gpr[16] = (ctx.gpr[19] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_089C5D50;
L_089C5D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[31] = (0x089C5D5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 147u, 0x089C8CE4u>(ctx, &aot_mem) && ctx.pc == 0x089C5D5Cu) goto L_089C5D5C;
    return;
L_089C5D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5D6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 147u, 0x089C8CE4u>(ctx, &aot_mem) && ctx.pc == 0x089C5D6Cu) goto L_089C5D6C;
    return;
L_089C5D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5D7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 147u, 0x089C8CE4u>(ctx, &aot_mem) && ctx.pc == 0x089C5D7Cu) goto L_089C5D7C;
    return;
L_089C5D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5D8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 147u, 0x089C8CE4u>(ctx, &aot_mem) && ctx.pc == 0x089C5D8Cu) goto L_089C5D8C;
    return;
L_089C5D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5D9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 147u, 0x089C8CE4u>(ctx, &aot_mem) && ctx.pc == 0x089C5D9Cu) goto L_089C5D9C;
    return;
L_089C5D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5DACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 147u, 0x089C8CE4u>(ctx, &aot_mem) && ctx.pc == 0x089C5DACu) goto L_089C5DAC;
    return;
L_089C5DAC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4400));
      if (branch_taken) {
          goto L_089C5D50;
      }
      goto L_089C5DBC;
    }
L_089C5DBC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5D3C;
      }
      goto L_089C5DCC;
    }
L_089C5DCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5DE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[15] / ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (2227u << 16u);
    goto L_089C5E70;
L_089C5E70:
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[19]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[19] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[19]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_089C5E90;
L_089C5E90:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_089C5EC0;
      }
      goto L_089C5EA4;
    }
L_089C5EA4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C5EC8;
      }
      goto L_089C5EC0;
    }
L_089C5EC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5F24;
      }
      goto L_089C5EC8;
    }
L_089C5EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[31] = (0x089C5ED4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 147u, 0x089C8CE4u>(ctx, &aot_mem) && ctx.pc == 0x089C5ED4u) goto L_089C5ED4;
    return;
L_089C5ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5EE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 147u, 0x089C8CE4u>(ctx, &aot_mem) && ctx.pc == 0x089C5EE4u) goto L_089C5EE4;
    return;
L_089C5EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5EF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 147u, 0x089C8CE4u>(ctx, &aot_mem) && ctx.pc == 0x089C5EF4u) goto L_089C5EF4;
    return;
L_089C5EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5F04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 147u, 0x089C8CE4u>(ctx, &aot_mem) && ctx.pc == 0x089C5F04u) goto L_089C5F04;
    return;
L_089C5F04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5F14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 147u, 0x089C8CE4u>(ctx, &aot_mem) && ctx.pc == 0x089C5F14u) goto L_089C5F14;
    return;
L_089C5F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5F24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 147u, 0x089C8CE4u>(ctx, &aot_mem) && ctx.pc == 0x089C5F24u) goto L_089C5F24;
    return;
L_089C5F24:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4400));
      if (branch_taken) {
          goto L_089C5E90;
      }
      goto L_089C5F34;
    }
L_089C5F34:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5E70;
      }
      goto L_089C5F44;
    }
L_089C5F44:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5F70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[18] - ctx.fpr[14];
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.fpr[14] = ctx.fpr[18] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_089C5FF0;
    }
    goto L_089C5FF0;
L_089C5FF0:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
        goto L_089C6014;
    }
    goto L_089C6014;
L_089C6014:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[17] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_089C6034;
    }
    goto L_089C6034;
L_089C6034:
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[18] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_089C6054;
    }
    goto L_089C6054;
L_089C6054:
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
      if (branch_taken) {
          goto L_089C60CC;
      }
      goto L_089C6064;
    }
L_089C6064:
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[5] << 2u);
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[4]);
    ctx.gpr[21] = (2227u << 16u);
    goto L_089C6074;
L_089C6074:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_089C60BC;
      }
      goto L_089C6084;
    }
L_089C6084:
    ctx.gpr[23] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[23] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[23] = (ctx.gpr[4] - ctx.gpr[23]);
    goto L_089C6094;
L_089C6094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[31] = (0x089C60A4u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 169u, 0x089C8EB8u>(ctx, &aot_mem) && ctx.pc == 0x089C60A4u) goto L_089C60A4;
    return;
L_089C60A4:
    ctx.gpr[31] = (0x089C60ACu);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 169u, 0x089C8EB8u>(ctx, &aot_mem) && ctx.pc == 0x089C60ACu) goto L_089C60AC;
    return;
L_089C60AC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089C6094;
      }
      goto L_089C60BC;
    }
L_089C60BC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_089C6074;
      }
      goto L_089C60CC;
    }
L_089C60CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C60FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C61A8;
      }
      goto L_089C6164;
    }
L_089C6164:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6188;
      }
      goto L_089C6174;
    }
L_089C6174:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C61B0;
      }
      goto L_089C6180;
    }
L_089C6180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C62D0;
      }
      goto L_089C6188;
    }
L_089C6188:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C6194u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10060));
    goto L_089C5694;
L_089C6194:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C61A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10000));
    goto L_089C5694;
L_089C61A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6388;
      }
      goto L_089C61A8;
    }
L_089C61A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6388;
      }
      goto L_089C61B0;
    }
L_089C61B0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6218;
      }
      goto L_089C61BC;
    }
L_089C61BC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089C61E4;
      }
      goto L_089C61D0;
    }
L_089C61D0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C61E4;
L_089C61E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089C61FCu);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C61FCu) goto L_089C61FC;
    return;
L_089C61FC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C620Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9984));
    goto L_089C60FC;
L_089C620C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089C62A4;
      }
      goto L_089C6218;
    }
L_089C6218:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6100 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C6244;
      }
      goto L_089C6224;
    }
L_089C6224:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6244;
      }
      goto L_089C622C;
    }
L_089C622C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4900));
    ctx.gpr[31] = (0x089C6238u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 616u, 0x0892FBD0u>(ctx, &aot_mem) && ctx.pc == 0x089C6238u) goto L_089C6238;
    return;
L_089C6238:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089C62A4;
      }
      goto L_089C6244;
    }
L_089C6244:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6115 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C626C;
      }
      goto L_089C6250;
    }
L_089C6250:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C626C;
      }
      goto L_089C6258;
    }
L_089C6258:
    ctx.gpr[31] = (0x089C6260u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6100));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 261u, 0x08985B98u>(ctx, &aot_mem) && ctx.pc == 0x089C6260u) goto L_089C6260;
    return;
L_089C6260:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089C62A4;
      }
      goto L_089C626C;
    }
L_089C626C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C62A4;
      }
      goto L_089C6274;
    }
L_089C6274:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6115));
    ctx.gpr[31] = (0x089C6280u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 315u, 0x089C9758u>(ctx, &aot_mem) && ctx.pc == 0x089C6280u) goto L_089C6280;
    return;
L_089C6280:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C629C;
      }
      goto L_089C6288;
    }
L_089C6288:
    ctx.gpr[31] = (0x089C6290u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 446u, 0x08A8AB50u>(ctx, &aot_mem) && ctx.pc == 0x089C6290u) goto L_089C6290;
    return;
L_089C6290:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089C62A4;
      }
      goto L_089C629C;
    }
L_089C629C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6388;
      }
      goto L_089C62A4;
    }
L_089C62A4:
    ctx.gpr[31] = (0x089C62ACu);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_089C581C;
L_089C62AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[2] << 11u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089C62D0;
L_089C62D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6338;
      }
      goto L_089C62DC;
    }
L_089C62DC:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C6324;
      }
      goto L_089C62E8;
    }
L_089C62E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8060)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8060), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_089C6324;
      }
      goto L_089C6304;
    }
L_089C6304:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6280)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6280), ctx.gpr[5]);
    goto L_089C6324;
L_089C6324:
    ctx.gpr[31] = (0x089C632Cu);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_089C57FC;
L_089C632C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089C6384;
      }
      goto L_089C6338;
    }
L_089C6338:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C6384;
      }
      goto L_089C6344;
    }
L_089C6344:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6024));
    goto L_089C6354;
L_089C6354:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C6364;
      }
      goto L_089C6360;
    }
L_089C6360:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089C6364;
L_089C6364:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C6374;
      }
      goto L_089C6370;
    }
L_089C6370:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_089C6374;
L_089C6374:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C6354;
      }
      goto L_089C6384;
    }
L_089C6384:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    goto L_089C6388;
L_089C6388:
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
L_089C63A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    goto L_089C63CC;
L_089C63CC:
    ctx.gpr[31] = (0x089C63D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 25u, 0x089C81E0u>(ctx, &aot_mem) && ctx.pc == 0x089C63D4u) goto L_089C63D4;
    return;
L_089C63D4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C63CC;
      }
      goto L_089C63E4;
    }
L_089C63E4:
    ctx.gpr[22] = (0u | 300u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[21] = (0u | 6000u);
    ctx.gpr[17] = (0u | 1200u);
    ctx.gpr[20] = (2229u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[16] = (2229u << 16u);
    goto L_089C6400;
L_089C6400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089C6450;
      }
      goto L_089C6414;
    }
L_089C6414:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6430;
      }
      goto L_089C6424;
    }
L_089C6424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C6430;
L_089C6430:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6450;
      }
      goto L_089C643C;
    }
L_089C643C:
    ctx.gpr[31] = (0x089C6444u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089C6124;
L_089C6444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    goto L_089C6450;
L_089C6450:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C6400;
      }
      goto L_089C6464;
    }
L_089C6464:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C648C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[17] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[18] = (0u | 0u);
    goto L_089C64C8;
L_089C64C8:
    ctx.gpr[31] = (0x089C64D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 25u, 0x089C81E0u>(ctx, &aot_mem) && ctx.pc == 0x089C64D0u) goto L_089C64D0;
    return;
L_089C64D0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C64C8;
      }
      goto L_089C64E0;
    }
L_089C64E0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[17]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7404)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[20] = (0u | 20u);
      if (branch_taken) {
          goto L_089C65AC;
      }
      goto L_089C64F8;
    }
L_089C64F8:
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_089C6504;
L_089C6504:
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[21] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C6560;
      }
      goto L_089C651C;
    }
L_089C651C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C653C;
      }
      goto L_089C652C;
    }
L_089C652C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C653C;
L_089C653C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C659C;
      }
      goto L_089C6548;
    }
L_089C6548:
    ctx.gpr[31] = (0x089C6550u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_089C6124;
L_089C6550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7404)));
      if (branch_taken) {
          goto L_089C659C;
      }
      goto L_089C6560;
    }
L_089C6560:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 6100 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C659C;
      }
      goto L_089C6568;
    }
L_089C6568:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C659C;
      }
      goto L_089C6570;
    }
L_089C6570:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-4900));
    ctx.gpr[31] = (0x089C657Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 665u, 0x0892FF6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C657Cu) goto L_089C657C;
    return;
L_089C657C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C659C;
      }
      goto L_089C6584;
    }
L_089C6584:
    ctx.gpr[31] = (0x089C658Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 289u, 0x089C9610u>(ctx, &aot_mem) && ctx.pc == 0x089C658Cu) goto L_089C658C;
    return;
L_089C658C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C659C;
      }
      goto L_089C6594;
    }
L_089C6594:
    ctx.gpr[31] = (0x089C659Cu);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4900));
    goto L_089C6124;
L_089C659C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C6504;
      }
      goto L_089C65AC;
    }
L_089C65AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C65D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6024));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C6618;
      }
      goto L_089C6610;
    }
L_089C6610:
    ctx.gpr[31] = (0x089C6618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 358u, 0x089C9A18u>(ctx, &aot_mem) && ctx.pc == 0x089C6618u) goto L_089C6618;
    return;
L_089C6618:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6268)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C664C;
      }
      goto L_089C662C;
    }
L_089C662C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28264)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6654;
      }
      goto L_089C6644;
    }
L_089C6644:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C665C;
      }
      goto L_089C664C;
    }
L_089C664C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C665C;
      }
      goto L_089C6654;
    }
L_089C6654:
    ctx.gpr[31] = (0x089C665Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 33u, 0x089CC200u>(ctx, &aot_mem) && ctx.pc == 0x089C665Cu) goto L_089C665C;
    return;
L_089C665C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6670:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2277u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6024));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C66A8;
      }
      goto L_089C6698;
    }
L_089C6698:
    ctx.gpr[31] = (0x089C66A0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 354u, 0x08A8A3F0u>(ctx, &aot_mem) && ctx.pc == 0x089C66A0u) goto L_089C66A0;
    return;
L_089C66A0:
    ctx.gpr[31] = (0x089C66A8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 358u, 0x089C9A18u>(ctx, &aot_mem) && ctx.pc == 0x089C66A8u) goto L_089C66A8;
    return;
L_089C66A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C66C4;
      }
      goto L_089C66B4;
    }
L_089C66B4:
    ctx.gpr[31] = (0x089C66BCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 354u, 0x08A8A3F0u>(ctx, &aot_mem) && ctx.pc == 0x089C66BCu) goto L_089C66BC;
    return;
L_089C66BC:
    ctx.gpr[31] = (0x089C66C4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 358u, 0x089C9A18u>(ctx, &aot_mem) && ctx.pc == 0x089C66C4u) goto L_089C66C4;
    return;
L_089C66C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C66D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (2u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7388)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7368));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[16] = (0u | 20u);
      if (branch_taken) {
          goto L_089C6748;
      }
      goto L_089C6718;
    }
L_089C6718:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_089C671C;
L_089C671C:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[31] = (0x089C6734u);
    // nop
    goto L_089C6124;
L_089C6734:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C671C;
      }
      goto L_089C6748;
    }
L_089C6748:
    ctx.gpr[31] = (0x089C6750u);
    // nop
    goto L_089C6670;
L_089C6750:
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
L_089C676C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C67A8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 282u, 0x08871B18u>(ctx, &aot_mem) && ctx.pc == 0x089C67A8u) goto L_089C67A8;
    return;
L_089C67A8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C67B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9960));
    goto L_089C5694;
L_089C67B8:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-19824)));
    ctx.gpr[19] = (2u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-7388));
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[22] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C67E0;
      }
      goto L_089C67D8;
    }
L_089C67D8:
    ctx.gpr[31] = (0x089C67E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 144u, 0x08B00A0Cu>(ctx, &aot_mem) && ctx.pc == 0x089C67E0u) goto L_089C67E0;
    return;
L_089C67E0:
    ctx.gpr[31] = (0x089C67E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-19824)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 117u, 0x088B479Cu>(ctx, &aot_mem) && ctx.pc == 0x089C67E8u) goto L_089C67E8;
    return;
L_089C67E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7364)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[5];
    ctx.gpr[20] = (0u | 20u);
      if (branch_taken) {
          goto L_089C683C;
      }
      goto L_089C6804;
    }
L_089C6804:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089C6808;
L_089C6808:
    ctx.gpr[5] = (ctx.gpr[21] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(9)));
    ctx.gpr[6] = (ctx.gpr[6] & 143u);
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C6830;
      }
      goto L_089C6824;
    }
L_089C6824:
    ctx.gpr[31] = (0x089C682Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089C6124;
L_089C682C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    goto L_089C6830;
L_089C6830:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C6808;
      }
      goto L_089C683C;
    }
L_089C683C:
    ctx.gpr[31] = (0x089C6844u);
    // nop
    goto L_089C66D8;
L_089C6844:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x089C6854u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7167), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089C5D04;
L_089C6854:
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
      if (branch_taken) {
          goto L_089C6864;
      }
      goto L_089C6860;
    }
L_089C6860:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7340)));
    goto L_089C6864;
L_089C6864:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6874;
      }
      goto L_089C686C;
    }
L_089C686C:
    ctx.gpr[31] = (0x089C6874u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C6978;
L_089C6874:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-7340), ctx.gpr[17]);
    ctx.gpr[31] = (0x089C6880u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089C7568;
L_089C6880:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C688Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089C7514;
L_089C688C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089C6898u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089C7514;
L_089C6898:
    ctx.gpr[31] = (0x089C68A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089C7710;
L_089C68A0:
    ctx.gpr[31] = (0x089C68A8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x089C68A8u) goto L_089C68A8;
    return;
L_089C68A8:
    ctx.gpr[31] = (0x089C68B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 134u, 0x08968C80u>(ctx, &aot_mem) && ctx.pc == 0x089C68B0u) goto L_089C68B0;
    return;
L_089C68B0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089C68CC;
      }
      goto L_089C68BC;
    }
L_089C68BC:
    ctx.gpr[31] = (0x089C68C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x089C68C4u) goto L_089C68C4;
    return;
L_089C68C4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089C68CC;
L_089C68CC:
    ctx.gpr[31] = (0x089C68D4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 496u, 0x08952C90u>(ctx, &aot_mem) && ctx.pc == 0x089C68D4u) goto L_089C68D4;
    return;
L_089C68D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6900;
      }
      goto L_089C68E4;
    }
L_089C68E4:
    ctx.gpr[17] = (0u | 0u);
    goto L_089C68E8;
L_089C68E8:
    ctx.gpr[31] = (0x089C68F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 12u, 0x089C8108u>(ctx, &aot_mem) && ctx.pc == 0x089C68F0u) goto L_089C68F0;
    return;
L_089C68F0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C68E8;
      }
      goto L_089C6900;
    }
L_089C6900:
    ctx.gpr[31] = (0x089C6908u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x089C6908u) goto L_089C6908;
    return;
L_089C6908:
    ctx.gpr[31] = (0x089C6910u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C5F70;
L_089C6910:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (0u | 0u);
    goto L_089C691C;
L_089C691C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(13)));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6175 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089C691C;
      }
      goto L_089C6940;
    }
L_089C6940:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C694Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9940));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C694Cu) goto L_089C694C;
    return;
L_089C694C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6978:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C6988u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 295u, 0x08985DF4u>(ctx, &aot_mem) && ctx.pc == 0x089C6988u) goto L_089C6988;
    return;
L_089C6988:
    ctx.gpr[31] = (0x089C6990u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x089C6990u) goto L_089C6990;
    return;
L_089C6990:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C699C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4900 ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[9] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_089C69E0;
      }
      goto L_089C69D4;
    }
L_089C69D4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6100 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
        goto L_089C6A1C;
    }
    goto L_089C69E0;
L_089C69E0:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6A08;
      }
      goto L_089C69F4;
    }
L_089C69F4:
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_089C6A08;
L_089C6A08:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089C6A70;
      }
      goto L_089C6A18;
    }
L_089C6A18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    goto L_089C6A1C;
L_089C6A1C:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(13)));
    ctx.gpr[7] = (ctx.gpr[7] & 130u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6A70;
      }
      goto L_089C6A30;
    }
L_089C6A30:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089C6A68;
      }
      goto L_089C6A40;
    }
L_089C6A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6A70;
      }
      goto L_089C6A4C;
    }
L_089C6A4C:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[31] = (0x089C6A60u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_089C57E0;
L_089C6A60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6A70;
      }
      goto L_089C6A68;
    }
L_089C6A68:
    ctx.gpr[31] = (0x089C6A70u);
    // nop
    goto L_089C6124;
L_089C6A70:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6A7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6AAC;
      }
      goto L_089C6A98;
    }
L_089C6A98:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C6AAC;
L_089C6AAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[31] = (0x089C6AB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4900));
    goto L_089C699C;
L_089C6AB8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6AC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[8] & 2u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6B24;
      }
      goto L_089C6AF4;
    }
L_089C6AF4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[31] = (0x089C6B0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9924));
    goto L_089C60FC;
L_089C6B0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089C6B24;
L_089C6B24:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C6B50;
      }
      goto L_089C6B40;
    }
L_089C6B40:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6100 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
        goto L_089C6B88;
    }
    goto L_089C6B4C;
L_089C6B4C:
    ctx.gpr[7] = (2230u << 16u);
    goto L_089C6B50;
L_089C6B50:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6B74;
      }
      goto L_089C6B60;
    }
L_089C6B60:
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_089C6B74;
L_089C6B74:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089C6BDC;
      }
      goto L_089C6B84;
    }
L_089C6B84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    goto L_089C6B88;
L_089C6B88:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    ctx.gpr[6] = (ctx.gpr[6] & 129u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6BDC;
      }
      goto L_089C6B9C;
    }
L_089C6B9C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089C6BD4;
      }
      goto L_089C6BAC;
    }
L_089C6BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6BDC;
      }
      goto L_089C6BB8;
    }
L_089C6BB8:
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089C6BCCu);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_089C57E0;
L_089C6BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6BDC;
      }
      goto L_089C6BD4;
    }
L_089C6BD4:
    ctx.gpr[31] = (0x089C6BDCu);
    // nop
    goto L_089C6124;
L_089C6BDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6BE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[8] & 128u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6C48;
      }
      goto L_089C6C18;
    }
L_089C6C18:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[31] = (0x089C6C30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9880));
    goto L_089C60FC;
L_089C6C30:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089C6C48;
L_089C6C48:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C6C74;
      }
      goto L_089C6C64;
    }
L_089C6C64:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6100 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
        goto L_089C6CAC;
    }
    goto L_089C6C70;
L_089C6C70:
    ctx.gpr[7] = (2230u << 16u);
    goto L_089C6C74;
L_089C6C74:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6C98;
      }
      goto L_089C6C84;
    }
L_089C6C84:
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_089C6C98;
L_089C6C98:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089C6D00;
      }
      goto L_089C6CA8;
    }
L_089C6CA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    goto L_089C6CAC;
L_089C6CAC:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6D00;
      }
      goto L_089C6CC0;
    }
L_089C6CC0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089C6CF8;
      }
      goto L_089C6CD0;
    }
L_089C6CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6D00;
      }
      goto L_089C6CDC;
    }
L_089C6CDC:
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089C6CF0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_089C57E0;
L_089C6CF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6D00;
      }
      goto L_089C6CF8;
    }
L_089C6CF8:
    ctx.gpr[31] = (0x089C6D00u);
    // nop
    goto L_089C6124;
L_089C6D00:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6D0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C6D3Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_089C5824;
L_089C6D3C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6D48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[23] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089C6DA8;
      }
      goto L_089C6D94;
    }
L_089C6D94:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C6DA8;
L_089C6DA8:
    ctx.gpr[31] = (0x089C6DB0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x089C6DB0u) goto L_089C6DB0;
    return;
L_089C6DB0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C6DC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9828));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x089C6DC0u) goto L_089C6DC0;
    return;
L_089C6DC0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C6E30;
      }
      goto L_089C6DC8;
    }
L_089C6DC8:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28376));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C6E30;
      }
      goto L_089C6DE0;
    }
L_089C6DE0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28444));
    ctx.gpr[17] = (2229u << 16u);
    goto L_089C6DE8;
L_089C6DE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6E00;
      }
      goto L_089C6DF8;
    }
L_089C6DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C6E00;
L_089C6E00:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089C6E0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x089C6E0Cu) goto L_089C6E0C;
    return;
L_089C6E0C:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C6E1C;
      }
      goto L_089C6E14;
    }
L_089C6E14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C6E30;
      }
      goto L_089C6E1C;
    }
L_089C6E1C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C6DE8;
      }
      goto L_089C6E30;
    }
L_089C6E30:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[31] = (0x089C6E3Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x089C6E3Cu) goto L_089C6E3C;
    return;
L_089C6E3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C6E78;
      }
      goto L_089C6E48;
    }
L_089C6E48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.gpr[19] = (ctx.gpr[22] << 4u);
    ctx.gpr[5] = (ctx.gpr[22] << 2u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[30] = (2229u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[18] = (2u << 16u);
      if (branch_taken) {
          goto L_089C6E8C;
      }
      goto L_089C6E70;
    }
L_089C6E70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7010;
      }
      goto L_089C6E78;
    }
L_089C6E78:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C6E84u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089C6E84u) goto L_089C6E84;
    return;
L_089C6E84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C717C;
      }
      goto L_089C6E8C;
    }
L_089C6E8C:
    ctx.gpr[20] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(3248));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[23] = (2229u << 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089C6EB0;
L_089C6EB0:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-3248));
      if (branch_taken) {
          goto L_089C6F38;
      }
      goto L_089C6EBC;
    }
L_089C6EBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(28))))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15300)));
        goto L_089C6F3C;
    }
    goto L_089C6EC8;
L_089C6EC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089C6EEC;
      }
      goto L_089C6EE4;
    }
L_089C6EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6EF4;
      }
      goto L_089C6EEC;
    }
L_089C6EEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[18]);
    goto L_089C6EF4;
L_089C6EF4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6F30;
      }
      goto L_089C6EFC;
    }
L_089C6EFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089C6F30;
      }
      goto L_089C6F08;
    }
L_089C6F08:
    ctx.gpr[31] = (0x089C6F10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089C6F10u) goto L_089C6F10;
    return;
L_089C6F10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6F30;
      }
      goto L_089C6F18;
    }
L_089C6F18:
    ctx.gpr[31] = (0x089C6F20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 708u, 0x089A2ED8u>(ctx, &aot_mem) && ctx.pc == 0x089C6F20u) goto L_089C6F20;
    return;
L_089C6F20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6F30;
      }
      goto L_089C6F28;
    }
L_089C6F28:
    ctx.gpr[31] = (0x089C6F30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 135u, 0x0887C9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C6F30u) goto L_089C6F30;
    return;
L_089C6F30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089C6EB0;
      }
      goto L_089C6F38;
    }
L_089C6F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15300)));
    goto L_089C6F3C;
L_089C6F3C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[19] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C6F58;
L_089C6F58:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-544));
      if (branch_taken) {
          goto L_089C7000;
      }
      goto L_089C6F64;
    }
L_089C6F64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(28))))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
        goto L_089C7004;
    }
    goto L_089C6F70;
L_089C6F70:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089C6F94;
      }
      goto L_089C6F8C;
    }
L_089C6F8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6F9C;
      }
      goto L_089C6F94;
    }
L_089C6F94:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_089C6F9C;
L_089C6F9C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6FF8;
      }
      goto L_089C6FA8;
    }
L_089C6FA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089C6FF8;
      }
      goto L_089C6FB4;
    }
L_089C6FB4:
    ctx.gpr[31] = (0x089C6FBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 244u, 0x0883D410u>(ctx, &aot_mem) && ctx.pc == 0x089C6FBCu) goto L_089C6FBC;
    return;
L_089C6FBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6FF8;
      }
      goto L_089C6FC4;
    }
L_089C6FC4:
    ctx.gpr[31] = (0x089C6FCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x089C6FCCu) goto L_089C6FCC;
    return;
L_089C6FCC:
    ctx.gpr[31] = (0x089C6FD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 476u, 0x088C3124u>(ctx, &aot_mem) && ctx.pc == 0x089C6FD4u) goto L_089C6FD4;
    return;
L_089C6FD4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6FF8;
      }
      goto L_089C6FDC;
    }
L_089C6FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089C6FF8u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6FF8u) goto L_089C6FF8;
    return;
L_089C6FF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089C6F58;
      }
      goto L_089C7000;
    }
L_089C7000:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    goto L_089C7004;
L_089C7004:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (2u << 16u);
    goto L_089C7010;
L_089C7010:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C7020u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 240u, 0x08A7D564u>(ctx, &aot_mem) && ctx.pc == 0x089C7020u) goto L_089C7020;
    return;
L_089C7020:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C702Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 101u, 0x08A28D3Cu>(ctx, &aot_mem) && ctx.pc == 0x089C702Cu) goto L_089C702C;
    return;
L_089C702C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C70C8;
      }
      goto L_089C7038;
    }
L_089C7038:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[20];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C70B0;
      }
      goto L_089C7044;
    }
L_089C7044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27840)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_089C706C;
    }
    goto L_089C7060;
L_089C7060:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C7080;
      }
      goto L_089C706C;
    }
L_089C706C:
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[6] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C7080;
L_089C7080:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C70B0;
      }
      goto L_089C7088;
    }
L_089C7088:
    ctx.gpr[31] = (0x089C7090u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 633u, 0x0892FD10u>(ctx, &aot_mem) && ctx.pc == 0x089C7090u) goto L_089C7090;
    return;
L_089C7090:
    ctx.gpr[31] = (0x089C7098u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089C6124;
L_089C7098:
    ctx.gpr[31] = (0x089C70A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 661u, 0x0892FF24u>(ctx, &aot_mem) && ctx.pc == 0x089C70A0u) goto L_089C70A0;
    return;
L_089C70A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7432)));
      if (branch_taken) {
          goto L_089C70DC;
      }
      goto L_089C70B0;
    }
L_089C70B0:
    ctx.gpr[31] = (0x089C70B8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089C6124;
L_089C70B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7432)));
      if (branch_taken) {
          goto L_089C70DC;
      }
      goto L_089C70C8;
    }
L_089C70C8:
    ctx.gpr[31] = (0x089C70D0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089C6124;
L_089C70D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7432)));
    goto L_089C70DC;
L_089C70DC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C70F0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 8u, 0x088B8108u>(ctx, &aot_mem) && ctx.pc == 0x089C70F0u) goto L_089C70F0;
    return;
L_089C70F0:
    ctx.gpr[31] = (0x089C70F8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 254u, 0x08A7D650u>(ctx, &aot_mem) && ctx.pc == 0x089C70F8u) goto L_089C70F8;
    return;
L_089C70F8:
    ctx.gpr[31] = (0x089C7100u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7100u) goto L_089C7100;
    return;
L_089C7100:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089C7130;
      }
      goto L_089C7108;
    }
L_089C7108:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C7118u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9816));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 249u, 0x08A7D5FCu>(ctx, &aot_mem) && ctx.pc == 0x089C7118u) goto L_089C7118;
    return;
L_089C7118:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089C7150;
      }
      goto L_089C7130;
    }
L_089C7130:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C713Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 249u, 0x08A7D5FCu>(ctx, &aot_mem) && ctx.pc == 0x089C713Cu) goto L_089C713C;
    return;
L_089C713C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089C7150;
L_089C7150:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089C7164u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_089C5854;
L_089C7164:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x089C717Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089C717Cu) goto L_089C717C;
    return;
L_089C717C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C71AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C71C4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 670u, 0x08AB3B3Cu>(ctx, &aot_mem) && ctx.pc == 0x089C71C4u) goto L_089C71C4;
    return;
L_089C71C4:
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-26768));
    goto L_089C71CC;
L_089C71CC:
    ctx.gpr[31] = (0x089C71D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x089C71D4u) goto L_089C71D4;
    return;
L_089C71D4:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C71F8;
      }
      goto L_089C71E0;
    }
L_089C71E0:
    ctx.gpr[31] = (0x089C71E8u);
    ctx.gpr[4] = (0u | 163u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 183u, 0x089C8F74u>(ctx, &aot_mem) && ctx.pc == 0x089C71E8u) goto L_089C71E8;
    return;
L_089C71E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7200;
      }
      goto L_089C71F0;
    }
L_089C71F0:
    ctx.gpr[31] = (0x089C71F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 207u, 0x089CCDC0u>(ctx, &aot_mem) && ctx.pc == 0x089C71F8u) goto L_089C71F8;
    return;
L_089C71F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7214;
      }
      goto L_089C7200;
    }
L_089C7200:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C720Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089C7228;
L_089C720C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C71CC;
      }
      goto L_089C7214;
    }
L_089C7214:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C7258u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x089C7258u) goto L_089C7258;
    return;
L_089C7258:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7274;
      }
      goto L_089C7264;
    }
L_089C7264:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C727C;
      }
      goto L_089C726C;
    }
L_089C726C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7298;
      }
      goto L_089C7274;
    }
L_089C7274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7314;
      }
      goto L_089C727C;
    }
L_089C727C:
    ctx.gpr[31] = (0x089C7284u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 838u, 0x08AA3F6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7284u) goto L_089C7284;
    return;
L_089C7284:
    ctx.gpr[4] = (6u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6784));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7314;
      }
      goto L_089C7298;
    }
L_089C7298:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C72A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 748u, 0x08AA37C0u>(ctx, &aot_mem) && ctx.pc == 0x089C72A4u) goto L_089C72A4;
    return;
L_089C72A4:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8184)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7304;
      }
      goto L_089C72B4;
    }
L_089C72B4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C72FC;
      }
      goto L_089C72BC;
    }
L_089C72BC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C72C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9808));
    goto L_089C5694;
L_089C72C8:
    ctx.gpr[31] = (0x089C72D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 638u, 0x08AB3900u>(ctx, &aot_mem) && ctx.pc == 0x089C72D0u) goto L_089C72D0;
    return;
L_089C72D0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C72DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 748u, 0x08AA37C0u>(ctx, &aot_mem) && ctx.pc == 0x089C72DCu) goto L_089C72DC;
    return;
L_089C72DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8184)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7304;
      }
      goto L_089C72E8;
    }
L_089C72E8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C72F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9748));
    goto L_089C5694;
L_089C72F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7314;
      }
      goto L_089C72FC;
    }
L_089C72FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7314;
      }
      goto L_089C7304;
    }
L_089C7304:
    ctx.gpr[31] = (0x089C730Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 764u, 0x089CB354u>(ctx, &aot_mem) && ctx.pc == 0x089C730Cu) goto L_089C730C;
    return;
L_089C730C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7314;
      }
      goto L_089C7314;
    }
L_089C7314:
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
L_089C7330:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C7348u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1824));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x089C7348u) goto L_089C7348;
    return;
L_089C7348:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C7368u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1824));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x089C7368u) goto L_089C7368;
    return;
L_089C7368:
    ctx.gpr[31] = (0x089C7370u);
    // nop
    goto L_089C737C;
L_089C7370:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C737C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C73D0;
      }
      goto L_089C73AC;
    }
L_089C73AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C73D8;
      }
      goto L_089C73C8;
    }
L_089C73C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C74F0;
      }
      goto L_089C73D0;
    }
L_089C73D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C74F0;
      }
      goto L_089C73D8;
    }
L_089C73D8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C74F0;
      }
      goto L_089C73E0;
    }
L_089C73E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7340)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C74F0;
      }
      goto L_089C73EC;
    }
L_089C73EC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C73FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9696));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C73FCu) goto L_089C73FC;
    return;
L_089C73FC:
    ctx.gpr[31] = (0x089C7404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 754u, 0x0891B6F8u>(ctx, &aot_mem) && ctx.pc == 0x089C7404u) goto L_089C7404;
    return;
L_089C7404:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-7340), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C741Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 151u, 0x08864AD0u>(ctx, &aot_mem) && ctx.pc == 0x089C741Cu) goto L_089C741C;
    return;
L_089C741C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C7428u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 114u, 0x08864830u>(ctx, &aot_mem) && ctx.pc == 0x089C7428u) goto L_089C7428;
    return;
L_089C7428:
    ctx.gpr[31] = (0x089C7430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 540u, 0x08A96588u>(ctx, &aot_mem) && ctx.pc == 0x089C7430u) goto L_089C7430;
    return;
L_089C7430:
    ctx.gpr[31] = (0x089C7438u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7340)));
    goto L_089C56D0;
L_089C7438:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-19824)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C7450;
      }
      goto L_089C7448;
    }
L_089C7448:
    ctx.gpr[31] = (0x089C7450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 144u, 0x08B00A0Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7450u) goto L_089C7450;
    return;
L_089C7450:
    ctx.gpr[31] = (0x089C7458u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-19824)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 117u, 0x088B479Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7458u) goto L_089C7458;
    return;
L_089C7458:
    ctx.gpr[31] = (0x089C7460u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 94u, 0x088646F8u>(ctx, &aot_mem) && ctx.pc == 0x089C7460u) goto L_089C7460;
    return;
L_089C7460:
    ctx.gpr[31] = (0x089C7468u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7340)));
    goto L_089C7568;
L_089C7468:
    ctx.gpr[31] = (0x089C7470u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7340)));
    goto L_089C751C;
L_089C7470:
    ctx.gpr[31] = (0x089C7478u);
    // nop
    goto L_089C648C;
L_089C7478:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7340)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7494;
      }
      goto L_089C7484;
    }
L_089C7484:
    ctx.gpr[31] = (0x089C748Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 440u, 0x089C1C8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C748Cu) goto L_089C748C;
    return;
L_089C748C:
    ctx.gpr[31] = (0x089C7494u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 394u, 0x089C1998u>(ctx, &aot_mem) && ctx.pc == 0x089C7494u) goto L_089C7494;
    return;
L_089C7494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20436)));
        goto L_089C74AC;
    }
    goto L_089C74A0;
L_089C74A0:
    ctx.gpr[31] = (0x089C74A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x089C74A8u) goto L_089C74A8;
    return;
L_089C74A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20436)));
    goto L_089C74AC;
L_089C74AC:
    ctx.gpr[31] = (0x089C74B4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7340)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 460u, 0x0895293Cu>(ctx, &aot_mem) && ctx.pc == 0x089C74B4u) goto L_089C74B4;
    return;
L_089C74B4:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7340)));
    ctx.gpr[31] = (0x089C74C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    goto L_089C7514;
L_089C74C8:
    ctx.gpr[31] = (0x089C74D0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x089C74D0u) goto L_089C74D0;
    return;
L_089C74D0:
    ctx.gpr[31] = (0x089C74D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 756u, 0x0891B71Cu>(ctx, &aot_mem) && ctx.pc == 0x089C74D8u) goto L_089C74D8;
    return;
L_089C74D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C74E4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 151u, 0x08864AD0u>(ctx, &aot_mem) && ctx.pc == 0x089C74E4u) goto L_089C74E4;
    return;
L_089C74E4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C74F0u);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 114u, 0x08864830u>(ctx, &aot_mem) && ctx.pc == 0x089C74F0u) goto L_089C74F0;
    return;
L_089C74F0:
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
L_089C750C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7514:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C751C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 1u);
    goto L_089C7534;
L_089C7534:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C7544;
      }
      goto L_089C753C;
    }
L_089C753C:
    ctx.gpr[31] = (0x089C7544u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 855u, 0x089CBA14u>(ctx, &aot_mem) && ctx.pc == 0x089C7544u) goto L_089C7544;
    return;
L_089C7544:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7534;
      }
      goto L_089C7554;
    }
L_089C7554:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7568:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 1u);
    goto L_089C7580;
L_089C7580:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C7590;
      }
      goto L_089C7588;
    }
L_089C7588:
    ctx.gpr[31] = (0x089C7590u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089C75BC;
L_089C7590:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7580;
      }
      goto L_089C75A0;
    }
L_089C75A0:
    ctx.gpr[31] = (0x089C75A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C7710;
L_089C75A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C75BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15308)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089C76E0;
      }
      goto L_089C7604;
    }
L_089C7604:
    ctx.gpr[19] = (ctx.gpr[18] << 5u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[30] = (128u << 16u);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[22] = (2229u << 16u);
    goto L_089C761C;
L_089C761C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089C763C;
    }
    goto L_089C7634;
L_089C7634:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7640;
      }
      goto L_089C763C;
    }
L_089C763C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_089C7640;
L_089C7640:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C76CC;
      }
      goto L_089C764C;
    }
L_089C764C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C76CC;
      }
      goto L_089C765C;
    }
L_089C765C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(90)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C76CC;
      }
      goto L_089C766C;
    }
L_089C766C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7690;
      }
      goto L_089C7680;
    }
L_089C7680:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089C7690;
L_089C7690:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C76CC;
      }
      goto L_089C76A0;
    }
L_089C76A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089C76B8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C76B8u) goto L_089C76B8;
    return;
L_089C76B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C76CC;
      }
      goto L_089C76C4;
    }
L_089C76C4:
    ctx.gpr[31] = (0x089C76CCu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    goto L_089C6124;
L_089C76CC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_089C761C;
      }
      goto L_089C76E0;
    }
L_089C76E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7710:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7328)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C786C;
      }
      goto L_089C7744;
    }
L_089C7744:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-15308)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_089C786C;
      }
      goto L_089C775C;
    }
L_089C775C:
    ctx.gpr[11] = (ctx.gpr[9] << 5u);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[2] = (2u << 16u);
    ctx.gpr[3] = (2u << 16u);
    ctx.gpr[31] = (2u << 16u);
    ctx.gpr[12] = (2u << 16u);
    ctx.gpr[13] = (2u << 16u);
    ctx.gpr[14] = (2u << 16u);
    ctx.gpr[25] = (2u << 16u);
    ctx.gpr[15] = (2u << 16u);
    ctx.gpr[24] = (2u << 16u);
    goto L_089C778C;
L_089C778C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] & 128u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_089C77AC;
    }
    goto L_089C77A4;
L_089C77A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_089C77B0;
      }
      goto L_089C77AC;
    }
L_089C77AC:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    goto L_089C77B0;
L_089C77B0:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7858;
      }
      goto L_089C77B8;
    }
L_089C77B8:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7348)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C77DC;
      }
      goto L_089C77CC;
    }
L_089C77CC:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7328), ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
      if (branch_taken) {
          goto L_089C7858;
      }
      goto L_089C77DC;
    }
L_089C77DC:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[3]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7344)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C77FC;
      }
      goto L_089C77EC;
    }
L_089C77EC:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7324), ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
      if (branch_taken) {
          goto L_089C7858;
      }
      goto L_089C77FC;
    }
L_089C77FC:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[12]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7340)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C781C;
      }
      goto L_089C780C;
    }
L_089C780C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7320), ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
      if (branch_taken) {
          goto L_089C7858;
      }
      goto L_089C781C;
    }
L_089C781C:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[14]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7336)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C783C;
      }
      goto L_089C782C;
    }
L_089C782C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7316), ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
      if (branch_taken) {
          goto L_089C7858;
      }
      goto L_089C783C;
    }
L_089C783C:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[15]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7332)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C7858;
      }
      goto L_089C784C;
    }
L_089C784C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7312), ctx.gpr[10]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    goto L_089C7858;
L_089C7858:
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_089C778C;
      }
      goto L_089C786C;
    }
L_089C786C:
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089C78B4;
      }
      goto L_089C7878;
    }
L_089C7878:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089C7884u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7328)));
    goto L_089C570C;
L_089C7884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089C7898u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7320)));
    goto L_089C570C;
L_089C7898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089C78ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7312)));
    goto L_089C570C;
L_089C78AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C798C;
      }
      goto L_089C78B4;
    }
L_089C78B4:
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[17] = (2u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[18] = (2u << 16u);
      if (branch_taken) {
          goto L_089C78FC;
      }
      goto L_089C78C4;
    }
L_089C78C4:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[31] = (0x089C78D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7324)));
    goto L_089C570C;
L_089C78D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089C78E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7320)));
    goto L_089C570C;
L_089C78E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x089C78F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7316)));
    goto L_089C570C;
L_089C78F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C798C;
      }
      goto L_089C78FC;
    }
L_089C78FC:
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[19] = (2u << 16u);
      if (branch_taken) {
          goto L_089C793C;
      }
      goto L_089C7908;
    }
L_089C7908:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[31] = (0x089C7914u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7316)));
    goto L_089C570C;
L_089C7914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x089C7924u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7312)));
    goto L_089C570C;
L_089C7924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x089C7934u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7324)));
    goto L_089C570C;
L_089C7934:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C798C;
      }
      goto L_089C793C;
    }
L_089C793C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089C7948u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7328)));
    goto L_089C570C;
L_089C7948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x089C7958u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7324)));
    goto L_089C570C;
L_089C7958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089C796Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7320)));
    goto L_089C570C;
L_089C796C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x089C797Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7316)));
    goto L_089C570C;
L_089C797C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x089C798Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7312)));
    goto L_089C570C;
L_089C798C:
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
L_089C79A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C79BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089C79BCu) goto L_089C79BC;
    return;
L_089C79BC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089C79C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089C79C8u) goto L_089C79C8;
    return;
L_089C79C8:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x089C79D4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089C79D4u) goto L_089C79D4;
    return;
L_089C79D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C79E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C79F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(109));
    goto L_089C6D48;
L_089C79F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C79FC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(109));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 1u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7A28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C7A38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(109));
    goto L_089C6AC4;
L_089C7A38:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7A44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C7A54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(109));
    goto L_089C6BE8;
L_089C7A54:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7A60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7448)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[23] = (2277u << 16u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-5960));
      if (branch_taken) {
          goto L_089C7B20;
      }
      goto L_089C7AB0;
    }
L_089C7AB0:
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (2u << 16u);
    ctx.gpr[20] = (2229u << 16u);
    goto L_089C7AC0;
L_089C7AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7472), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(25804)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7448)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C7B00;
      }
      goto L_089C7AF8;
    }
L_089C7AF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7B10;
      }
      goto L_089C7B00;
    }
L_089C7B00:
    ctx.gpr[31] = (0x089C7B08u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089C699C;
L_089C7B08:
    ctx.gpr[31] = (0x089C7B10u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089C6A7C;
L_089C7B10:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C7AC0;
      }
      goto L_089C7B20;
    }
L_089C7B20:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x089C7B2Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089C7B2Cu) goto L_089C7B2C;
    return;
L_089C7B2C:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x089C7B38u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089C7B38u) goto L_089C7B38;
    return;
L_089C7B38:
    ctx.gpr[19] = (0u | 0u);
    goto L_089C7B3C;
L_089C7B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C7B58;
      }
      goto L_089C7B48;
    }
L_089C7B48:
    ctx.gpr[31] = (0x089C7B50u);
    // nop
    goto L_089C699C;
L_089C7B50:
    ctx.gpr[31] = (0x089C7B58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    goto L_089C6A7C;
L_089C7B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C7B74;
      }
      goto L_089C7B64;
    }
L_089C7B64:
    ctx.gpr[31] = (0x089C7B6Cu);
    // nop
    goto L_089C699C;
L_089C7B6C:
    ctx.gpr[31] = (0x089C7B74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    goto L_089C6A7C;
L_089C7B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C7B90;
      }
      goto L_089C7B80;
    }
L_089C7B80:
    ctx.gpr[31] = (0x089C7B88u);
    // nop
    goto L_089C699C;
L_089C7B88:
    ctx.gpr[31] = (0x089C7B90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_089C6A7C;
L_089C7B90:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089C7B3C;
      }
      goto L_089C7BA0;
    }
L_089C7BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7448), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7444), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7442), static_cast<std::uint16_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7BFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7448)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C7C38;
      }
      goto L_089C7C30;
    }
L_089C7C30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7D28;
      }
      goto L_089C7C38;
    }
L_089C7C38:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(25804)));
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[18] = (2u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-11604)));
    goto L_089C7C64;
L_089C7C64:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C7C78;
      }
      goto L_089C7C70;
    }
L_089C7C70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C7D14;
      }
      goto L_089C7C78;
    }
L_089C7C78:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-7472)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_089C7D10;
      }
      goto L_089C7C84;
    }
L_089C7C84:
    ctx.gpr[2] = (ctx.gpr[7] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7D10;
      }
      goto L_089C7CA8;
    }
L_089C7CA8:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(13)));
    ctx.gpr[9] = (ctx.gpr[9] & 131u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089C7D10;
      }
      goto L_089C7CB8;
    }
L_089C7CB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7CCC;
      }
      goto L_089C7CC0;
    }
L_089C7CC0:
    ctx.gpr[9] = (ctx.gpr[7] << 2u);
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_089C7CCC;
L_089C7CCC:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7D10;
      }
      goto L_089C7CD8;
    }
L_089C7CD8:
    ctx.gpr[31] = (0x089C7CE0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_089C6124;
L_089C7CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7472), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7452)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7452), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C7D28;
      }
      goto L_089C7D10;
    }
L_089C7D10:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089C7D14;
L_089C7D14:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C7C64;
      }
      goto L_089C7D24;
    }
L_089C7D24:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C7D28;
L_089C7D28:
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
L_089C7D40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C7D88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9668));
    goto L_089C5694;
L_089C7D88:
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28452));
      if (branch_taken) {
          goto L_089C7DA8;
      }
      goto L_089C7D98;
    }
L_089C7D98:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C7DA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9644));
    goto L_089C5694;
L_089C7DA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_089C7DB8;
L_089C7DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089C7DC4u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089C7DC4u) goto L_089C7DC4;
    return;
L_089C7DC4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C7DB8;
      }
      goto L_089C7DD4;
    }
L_089C7DD4:
    ctx.gpr[23] = (2227u << 16u);
    ctx.gpr[20] = (0u | 109u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(18892));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[30] = (2229u << 16u);
    goto L_089C7DF4;
L_089C7DF4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089C7E10;
      }
      goto L_089C7E00;
    }
L_089C7E00:
    ctx.gpr[31] = (0x089C7E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7E08u) goto L_089C7E08;
    return;
L_089C7E08:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C7E10;
L_089C7E10:
    ctx.gpr[31] = (0x089C7E18u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 139u, 0x08A0899Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7E18u) goto L_089C7E18;
    return;
L_089C7E18:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7E70;
      }
      goto L_089C7E4C;
    }
L_089C7E4C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_089C7E74;
    }
    goto L_089C7E5C;
L_089C7E5C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089C7E74;
      }
      goto L_089C7E6C;
    }
L_089C7E6C:
    ctx.gpr[4] = (0u | 1u);
    goto L_089C7E70;
L_089C7E70:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089C7E74;
L_089C7E74:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 5u, 0x089C8028u>(ctx, &aot_mem); return;
      }
      goto L_089C7E84;
    }
L_089C7E84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[31] = (0x089C7E90u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089C6124;
L_089C7E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7EA8;
      }
      goto L_089C7E9C;
    }
L_089C7E9C:
    ctx.gpr[31] = (0x089C7EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7EA4u) goto L_089C7EA4;
    return;
L_089C7EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    goto L_089C7EA8;
L_089C7EA8:
    ctx.gpr[31] = (0x089C7EB0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 139u, 0x08A0899Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7EB0u) goto L_089C7EB0;
    return;
L_089C7EB0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089C7ED8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28CB4u>(ctx, &aot_mem) && ctx.pc == 0x089C7ED8u) goto L_089C7ED8;
    return;
L_089C7ED8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7F0C;
      }
      goto L_089C7EE0;
    }
L_089C7EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 109 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C7F0C;
      }
      goto L_089C7EEC;
    }
L_089C7EEC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 120 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C7EFC;
      }
      goto L_089C7EF4;
    }
L_089C7EF4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7F0C;
      }
      goto L_089C7EFC;
    }
L_089C7EFC:
    ctx.gpr[31] = (0x089C7F04u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089C7F04u) goto L_089C7F04;
    return;
L_089C7F04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
      if (branch_taken) {
          goto L_089C7F64;
      }
      goto L_089C7F0C;
    }
L_089C7F0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089C7F28;
      }
      goto L_089C7F1C;
    }
L_089C7F1C:
    ctx.gpr[31] = (0x089C7F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7F24u) goto L_089C7F24;
    return;
L_089C7F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    goto L_089C7F28;
L_089C7F28:
    ctx.gpr[31] = (0x089C7F30u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 139u, 0x08A0899Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7F30u) goto L_089C7F30;
    return;
L_089C7F30:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089C7F5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C6D48;
L_089C7F5C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    goto L_089C7F64;
L_089C7F64:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7F78;
      }
      goto L_089C7F6C;
    }
L_089C7F6C:
    ctx.gpr[31] = (0x089C7F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7F74u) goto L_089C7F74;
    return;
L_089C7F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    goto L_089C7F78;
L_089C7F78:
    ctx.gpr[31] = (0x089C7F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 302u, 0x08A09374u>(ctx, &aot_mem) && ctx.pc == 0x089C7F80u) goto L_089C7F80;
    return;
L_089C7F80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7FB8;
      }
      goto L_089C7F94;
    }
L_089C7F94:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_089C7FBC;
    }
    goto L_089C7FA4;
L_089C7FA4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089C7FBC;
      }
      goto L_089C7FB4;
    }
L_089C7FB4:
    ctx.gpr[5] = (0u | 1u);
    goto L_089C7FB8;
L_089C7FB8:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_089C7FBC;
L_089C7FBC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 5u, 0x089C8028u>(ctx, &aot_mem); return;
      }
      goto L_089C7FC4;
    }
L_089C7FC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7FDC;
      }
      goto L_089C7FD0;
    }
L_089C7FD0:
    ctx.gpr[31] = (0x089C7FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7FD8u) goto L_089C7FD8;
    return;
L_089C7FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    goto L_089C7FDC;
L_089C7FDC:
    ctx.gpr[31] = (0x089C7FE4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 139u, 0x08A0899Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7FE4u) goto L_089C7FE4;
    return;
L_089C7FE4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(27456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 3u, 0x089C8010u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 1u, 0x089C8004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0112(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0112_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_112(Runtime &runtime) {
    runtime.register_generated_unit(112u, 0x089C4000u, 16384u, &recomp_unit_0112, &recomp_unit_0112_entry);
    runtime.register_function(0x089C4000u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4008u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C401Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4020u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C402Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4030u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4040u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4054u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4108u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C414Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4150u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4168u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4208u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4210u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4214u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4248u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4298u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4300u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4304u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4308u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4314u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C431Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4324u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C435Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4364u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C436Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C437Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4388u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C438Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4404u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C440Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C441Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4420u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4428u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C443Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4468u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4480u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C448Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4494u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4508u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C451Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4538u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C453Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4544u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C454Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4570u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4578u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C458Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4604u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C460Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4610u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4618u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C462Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4634u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C463Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4644u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C464Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4658u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C467Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4684u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4698u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4704u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4710u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C471Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4728u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4730u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4734u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C473Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4748u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C475Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4764u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C476Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4778u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4784u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C478Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4790u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4798u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4804u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C481Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4824u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C482Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4844u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C484Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4850u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4858u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4864u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4870u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4878u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C487Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4884u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C488Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4904u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4938u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4954u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C495Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4964u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4978u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C498Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C499Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A60u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4ACCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B60u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C60u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CD0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D34u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D90u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E60u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4ED0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4ED8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F34u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5084u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5090u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C50A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C50C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C50D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C50E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5108u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5118u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5130u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5154u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5164u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5180u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C519Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5204u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5208u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5218u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5224u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5248u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C526Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5280u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5290u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C529Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5310u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C532Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5338u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C534Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5358u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5360u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C536Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5374u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C537Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5384u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5394u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C539Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C53A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C53BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C53D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C53DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5408u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5410u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C541Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5430u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5444u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C545Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5464u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5498u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C550Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5520u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5534u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5540u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5554u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5580u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5588u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5590u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5604u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C560Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5614u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5624u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5628u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C564Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5660u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5688u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5694u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C570Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5720u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5730u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5738u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5740u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5758u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5760u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5768u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5774u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5784u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5794u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5798u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C581Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5824u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5830u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5838u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C584Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5854u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5860u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5908u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5920u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5934u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5954u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C595Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C596Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C597Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C598Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5994u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C599Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A34u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A5Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A90u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B34u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5BA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5BB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5BBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5BC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5BD0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5BD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5BF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5BF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D5Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5DACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5DBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5DCCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5DE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E90u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5EA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5EC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5EC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5ED4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5EE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5EF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F34u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5FF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6014u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6034u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6054u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6064u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6074u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6084u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6094u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6124u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6164u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6174u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6180u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6188u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6194u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C620Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6218u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6224u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C622Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6238u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6244u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6250u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6258u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6260u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C626Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6274u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6280u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6288u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6290u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C629Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6304u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6324u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C632Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6338u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6344u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6354u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6360u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6364u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6370u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6374u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6384u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6388u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C63A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C63CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C63D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C63E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6400u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6414u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6424u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6430u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C643Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6444u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6450u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6464u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C648Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6504u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C651Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C652Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C653Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6548u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6550u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6560u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6568u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6570u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C657Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6584u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C658Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6594u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C659Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6610u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6618u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C662Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6644u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C664Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6654u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C665Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6670u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6698u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6718u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C671Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6734u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6748u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6750u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C676Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6804u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6808u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6824u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C682Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6830u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C683Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6844u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6854u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6860u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6864u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C686Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6874u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6880u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C688Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6898u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6900u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6908u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6910u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C691Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6940u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C694Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6978u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6988u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6990u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C699Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A60u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B60u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BCCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CD0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FCCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7000u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7004u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7010u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7020u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C702Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7038u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7044u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7060u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C706Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7080u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7088u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7090u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7098u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7100u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7108u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7118u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7130u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C713Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7150u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7164u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C717Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7200u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C720Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7214u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7228u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7258u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7264u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C726Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7274u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C727Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7284u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7298u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7304u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C730Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7314u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7330u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7348u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7354u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7368u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7370u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C737Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7384u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7404u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C741Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7428u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7430u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7438u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7448u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7450u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7458u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7460u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7468u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7470u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7478u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7484u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C748Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7494u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C750Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7514u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C751Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7534u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C753Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7544u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7554u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7568u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7580u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7588u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7590u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7604u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C761Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7634u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C763Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7640u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C764Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C765Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C766Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7680u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7690u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C76A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C76B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C76C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C76CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C76E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7710u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7744u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C775Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C778Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C780Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C781Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C782Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C783Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C784Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7858u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C786Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7878u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7884u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7898u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7908u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7914u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7924u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7934u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C793Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7948u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7958u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C796Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C797Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C798Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A60u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7AB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7AC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7AF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B90u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CCCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E5Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E90u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7ED8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F5Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FD0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FE4u, &recomp_unit_0112, "recomp_unit_0112");
}
} // namespace psprecomp
