#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_trainer.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0055[4095] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0,
    12, 0, 13, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18,
    0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 36,
    0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0,
    0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0,
    0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 0, 0, 79,
    0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 90, 0, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 0,
    0, 95, 0, 0, 96, 0, 0, 97, 0, 98, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 0, 106, 0, 107, 0,
    0, 108, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0, 113, 0, 114, 115, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120,
    0, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0,
    130, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 139,
    0, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 146, 147, 0, 0, 0, 148, 0, 149, 0,
    0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0,
    0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0, 174,
    175, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 186, 187, 0, 0, 188, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 0,
    213, 0, 0, 0, 214, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228,
    0, 229, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 233, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 237, 0, 238, 0, 0, 239, 0,
    0, 0, 240, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 247, 0, 248,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0,
    0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 265, 0,
    0, 266, 0, 0, 0, 267, 268, 0, 0, 269, 0, 0, 270, 271, 0, 0, 272, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 278, 0, 279, 0, 280, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 284, 0, 285, 286, 0, 0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 292, 0, 293,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    296, 0, 0, 0, 297, 0, 298, 299, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 305, 306, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 310, 311, 0, 312,
    0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0,
    318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 0, 323, 324, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 327, 0,
    0, 0, 0, 328, 0, 329, 0, 330, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 335, 0, 0, 0, 0, 0,
    336, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 343, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0,
    0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0,
    352, 0, 353, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359,
    0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366,
    0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 371,
    0, 0, 0, 372, 0, 0, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0,
    0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 387, 0, 0, 388, 0, 389,
    0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 394, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 399,
    0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 411,
    0, 0, 0, 0, 0, 412, 0, 413, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0,
    0, 0, 419, 0, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 427, 0, 0,
    428, 0, 0, 0, 429, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 434, 0, 0, 435, 0, 436, 0, 0, 437, 0, 438,
    0, 439, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 446, 447, 0, 448, 0, 0, 0, 449, 0, 0, 450, 0, 451,
    0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    457, 0, 458, 0, 459, 0, 460, 0, 0, 461, 0, 462, 0, 463, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468,
    0, 0, 0, 0, 469, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 474, 475, 0,
    0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0,
    481, 0, 0, 0, 482, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 487, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490,
    0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 494, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0,
    0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0,
    0, 0, 0, 0, 517, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 521, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 530, 531,
    0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0,
    538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 544, 0, 0, 0, 545, 0,
    0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 552,
    553, 0, 0, 0, 554, 0, 0, 555, 556, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0,
    0, 0, 564, 0, 0, 0, 0, 0, 565, 566, 0, 0, 0, 0, 567, 0, 568, 0, 569, 0, 0, 0, 0, 570, 571, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0,
    0, 578, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 582, 583, 0, 584, 0, 585, 0, 586, 0, 0, 0, 587, 0, 0, 588, 0, 0,
    0, 0, 589, 590, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 596,
    0, 0, 0, 597, 0, 598, 0, 599, 0, 0, 600, 0, 601, 0, 602, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 607,
    0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 612, 0, 0, 613, 0, 0, 614, 0, 0, 0, 615,
    616, 0, 0, 617, 0, 0, 0, 618, 0, 0, 619, 0, 0, 620, 621, 0, 622, 0, 0, 623, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 0, 0, 628, 0, 629, 0, 630, 0, 0, 0, 0, 0,
    0, 0, 631, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0, 637, 0, 0, 0,
    0, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0,
    644, 0, 0, 0, 0, 0, 645, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 650, 0, 651,
    0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 656, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0,
    0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 661, 0, 0, 662, 663, 0, 664, 0, 0, 0, 0, 665, 0, 0, 666, 0, 667, 0, 0, 0,
    0, 668, 0, 0, 0, 669, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 672, 0, 673, 0, 0, 0, 0, 674, 0, 0, 675, 0, 676, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 677, 678, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 681, 0, 682, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 683, 684, 0, 0, 0, 0, 0, 0, 685, 686, 0, 0, 0, 687, 0, 688, 0, 0, 0, 689, 690, 691, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 695, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 701, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0, 0,
    0, 708, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0, 714,
    0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0,
    0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 722, 723, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 726, 0,
    727, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 730, 0, 0, 0, 0, 0, 0, 0, 0,
    731, 0, 732, 0, 733, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0,
    0, 0, 0, 738, 0, 0, 0, 739, 0, 740, 0, 741, 0, 742, 0, 743, 0, 744, 0, 0, 0, 745, 746, 0, 747, 0, 0, 0, 748, 749, 0, 0,
    750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 753, 0, 754, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 756, 0, 757,
    0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 762, 0, 763, 0,
    0, 0, 764, 765, 0, 766, 0, 0, 0, 767, 768, 0, 0, 769, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 772, 0, 773,
    0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 775, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0, 0,
    0, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 785, 0, 0, 0, 0, 0, 0, 786, 0, 0, 787, 0, 788, 0, 0, 789, 0, 790, 0, 0, 0, 0,
    0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 0, 793, 0, 0, 794, 0, 0, 0, 0, 0, 0, 795, 0, 0, 796, 0, 0, 0, 797, 0, 0, 0,
    798, 0, 0, 799, 0, 800, 0, 0, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 0, 0, 0, 0, 0, 804, 0, 0, 805, 0, 0, 0, 806, 0,
    0, 0, 807, 0, 808, 0, 0, 809, 0, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0, 0, 812, 0, 0, 0, 813, 0, 0, 0, 814, 0, 0, 815,
    0, 816, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 820, 0,
    0, 821, 0, 0, 822, 0, 0, 823, 824, 0, 825, 0, 0, 826, 827, 0, 828, 0, 0, 829, 830, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 832,
    0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 836, 0, 0, 0,
    0, 837, 0, 0, 0, 0, 838, 0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 841, 0, 842, 0, 0, 0, 843, 0, 844, 0,
    0, 0, 845, 0, 846, 0, 847, 848, 0, 849, 850, 0, 851, 0, 0, 0, 852, 0, 0, 0, 853, 0, 0, 0, 0, 0, 0, 0, 854, 855, 0, 0,
    0, 856, 857, 0, 858, 859, 0, 860, 0, 0, 0, 861, 0, 0, 0, 0, 0, 0, 862, 0, 0, 0, 863, 0, 864, 0, 0, 0, 0, 865, 0, 0,
    0, 866, 0, 867, 0, 0, 0, 868, 0, 869, 870, 0, 871, 0, 0, 0, 872, 0, 0, 0, 0, 0, 0, 873, 874, 0, 0, 0, 875, 876, 0, 877,
    878, 0, 879, 0, 0, 0, 880, 0, 0, 0, 0, 0, 0, 881, 0, 0, 0, 882, 0, 883, 0, 0, 0, 0, 884, 0, 0, 0, 885, 0, 886,
};
void recomp_unit_0055_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088E0000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0055[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E0000;
    case 2u: goto L_088E000C;
    case 3u: goto L_088E0014;
    case 4u: goto L_088E002C;
    case 5u: goto L_088E0034;
    case 6u: goto L_088E003C;
    case 7u: goto L_088E0044;
    case 8u: goto L_088E004C;
    case 9u: goto L_088E0058;
    case 10u: goto L_088E0070;
    case 11u: goto L_088E0078;
    case 12u: goto L_088E0080;
    case 13u: goto L_088E0088;
    case 14u: goto L_088E0090;
    case 15u: goto L_088E0098;
    case 16u: goto L_088E00A8;
    case 17u: goto L_088E00F4;
    case 18u: goto L_088E00FC;
    case 19u: goto L_088E0108;
    case 20u: goto L_088E0114;
    case 21u: goto L_088E0128;
    case 22u: goto L_088E0130;
    case 23u: goto L_088E0140;
    case 24u: goto L_088E014C;
    case 25u: goto L_088E0154;
    case 26u: goto L_088E015C;
    case 27u: goto L_088E0168;
    case 28u: goto L_088E0184;
    case 29u: goto L_088E0194;
    case 30u: goto L_088E01A4;
    case 31u: goto L_088E01B4;
    case 32u: goto L_088E01CC;
    case 33u: goto L_088E01D8;
    case 34u: goto L_088E01E8;
    case 35u: goto L_088E01F0;
    case 36u: goto L_088E01FC;
    case 37u: goto L_088E020C;
    case 38u: goto L_088E021C;
    case 39u: goto L_088E0228;
    case 40u: goto L_088E0248;
    case 41u: goto L_088E0258;
    case 42u: goto L_088E0264;
    case 43u: goto L_088E0278;
    case 44u: goto L_088E0284;
    case 45u: goto L_088E0294;
    case 46u: goto L_088E02A4;
    case 47u: goto L_088E02B0;
    case 48u: goto L_088E02B8;
    case 49u: goto L_088E02C8;
    case 50u: goto L_088E02D0;
    case 51u: goto L_088E02DC;
    case 52u: goto L_088E02E4;
    case 53u: goto L_088E02EC;
    case 54u: goto L_088E0304;
    case 55u: goto L_088E0318;
    case 56u: goto L_088E0320;
    case 57u: goto L_088E0328;
    case 58u: goto L_088E0338;
    case 59u: goto L_088E0344;
    case 60u: goto L_088E034C;
    case 61u: goto L_088E0354;
    case 62u: goto L_088E0364;
    case 63u: goto L_088E036C;
    case 64u: goto L_088E0378;
    case 65u: goto L_088E0388;
    case 66u: goto L_088E0398;
    case 67u: goto L_088E03A8;
    case 68u: goto L_088E03C4;
    case 69u: goto L_088E03CC;
    case 70u: goto L_088E03D4;
    case 71u: goto L_088E03E0;
    case 72u: goto L_088E03F0;
    case 73u: goto L_088E040C;
    case 74u: goto L_088E042C;
    case 75u: goto L_088E0430;
    case 76u: goto L_088E0458;
    case 77u: goto L_088E0464;
    case 78u: goto L_088E046C;
    case 79u: goto L_088E047C;
    case 80u: goto L_088E0484;
    case 81u: goto L_088E0494;
    case 82u: goto L_088E04A4;
    case 83u: goto L_088E04AC;
    case 84u: goto L_088E04C4;
    case 85u: goto L_088E04D8;
    case 86u: goto L_088E04E0;
    case 87u: goto L_088E04E8;
    case 88u: goto L_088E04F0;
    case 89u: goto L_088E0534;
    case 90u: goto L_088E0538;
    case 91u: goto L_088E054C;
    case 92u: goto L_088E0558;
    case 93u: goto L_088E0560;
    case 94u: goto L_088E056C;
    case 95u: goto L_088E0584;
    case 96u: goto L_088E0590;
    case 97u: goto L_088E059C;
    case 98u: goto L_088E05A4;
    case 99u: goto L_088E05B0;
    case 100u: goto L_088E05B8;
    case 101u: goto L_088E05C0;
    case 102u: goto L_088E05C8;
    case 103u: goto L_088E05D0;
    case 104u: goto L_088E05D8;
    case 105u: goto L_088E05E8;
    case 106u: goto L_088E05F0;
    case 107u: goto L_088E05F8;
    case 108u: goto L_088E0604;
    case 109u: goto L_088E0614;
    case 110u: goto L_088E061C;
    case 111u: goto L_088E0624;
    case 112u: goto L_088E0634;
    case 113u: goto L_088E063C;
    case 114u: goto L_088E0644;
    case 115u: goto L_088E0648;
    case 116u: goto L_088E064C;
    case 117u: goto L_088E0694;
    case 118u: goto L_088E06DC;
    case 119u: goto L_088E06EC;
    case 120u: goto L_088E06FC;
    case 121u: goto L_088E0704;
    case 122u: goto L_088E070C;
    case 123u: goto L_088E0724;
    case 124u: goto L_088E0738;
    case 125u: goto L_088E0740;
    case 126u: goto L_088E0748;
    case 127u: goto L_088E0760;
    case 128u: goto L_088E0768;
    case 129u: goto L_088E0778;
    case 130u: goto L_088E0780;
    case 131u: goto L_088E0788;
    case 132u: goto L_088E07A0;
    case 133u: goto L_088E07B4;
    case 134u: goto L_088E07C4;
    case 135u: goto L_088E07CC;
    case 136u: goto L_088E07D4;
    case 137u: goto L_088E07E4;
    case 138u: goto L_088E07F4;
    case 139u: goto L_088E07FC;
    case 140u: goto L_088E0810;
    case 141u: goto L_088E081C;
    case 142u: goto L_088E0824;
    case 143u: goto L_088E082C;
    case 144u: goto L_088E0840;
    case 145u: goto L_088E0848;
    case 146u: goto L_088E085C;
    case 147u: goto L_088E0860;
    case 148u: goto L_088E0870;
    case 149u: goto L_088E0878;
    case 150u: goto L_088E0888;
    case 151u: goto L_088E0894;
    case 152u: goto L_088E08A8;
    case 153u: goto L_088E08BC;
    case 154u: goto L_088E08CC;
    case 155u: goto L_088E08D4;
    case 156u: goto L_088E08EC;
    case 157u: goto L_088E08F4;
    case 158u: goto L_088E0904;
    case 159u: goto L_088E090C;
    case 160u: goto L_088E0914;
    case 161u: goto L_088E092C;
    case 162u: goto L_088E0940;
    case 163u: goto L_088E0954;
    case 164u: goto L_088E0968;
    case 165u: goto L_088E0978;
    case 166u: goto L_088E0988;
    case 167u: goto L_088E09A0;
    case 168u: goto L_088E09B4;
    case 169u: goto L_088E09BC;
    case 170u: goto L_088E09C4;
    case 171u: goto L_088E09E0;
    case 172u: goto L_088E09E8;
    case 173u: goto L_088E09F0;
    case 174u: goto L_088E09FC;
    case 175u: goto L_088E0A00;
    case 176u: goto L_088E0A08;
    case 177u: goto L_088E0A24;
    case 178u: goto L_088E0A3C;
    case 179u: goto L_088E0A5C;
    case 180u: goto L_088E0A64;
    case 181u: goto L_088E0A6C;
    case 182u: goto L_088E0A78;
    case 183u: goto L_088E0A94;
    case 184u: goto L_088E0A9C;
    case 185u: goto L_088E0AA4;
    case 186u: goto L_088E0AAC;
    case 187u: goto L_088E0AB0;
    case 188u: goto L_088E0ABC;
    case 189u: goto L_088E0AC4;
    case 190u: goto L_088E0ACC;
    case 191u: goto L_088E0ADC;
    case 192u: goto L_088E0AEC;
    case 193u: goto L_088E0AF4;
    case 194u: goto L_088E0AFC;
    case 195u: goto L_088E0B1C;
    case 196u: goto L_088E0B24;
    case 197u: goto L_088E0B30;
    case 198u: goto L_088E0B40;
    case 199u: goto L_088E0B48;
    case 200u: goto L_088E0B6C;
    case 201u: goto L_088E0B74;
    case 202u: goto L_088E0B80;
    case 203u: goto L_088E0BA0;
    case 204u: goto L_088E0BAC;
    case 205u: goto L_088E0BBC;
    case 206u: goto L_088E0BC4;
    case 207u: goto L_088E0BCC;
    case 208u: goto L_088E0BEC;
    case 209u: goto L_088E0C50;
    case 210u: goto L_088E0C58;
    case 211u: goto L_088E0C60;
    case 212u: goto L_088E0C70;
    case 213u: goto L_088E0C80;
    case 214u: goto L_088E0C90;
    case 215u: goto L_088E0C94;
    case 216u: goto L_088E0CA8;
    case 217u: goto L_088E0CC0;
    case 218u: goto L_088E0CCC;
    case 219u: goto L_088E0CD4;
    case 220u: goto L_088E0CE4;
    case 221u: goto L_088E0CF4;
    case 222u: goto L_088E0D24;
    case 223u: goto L_088E0D2C;
    case 224u: goto L_088E0D34;
    case 225u: goto L_088E0D3C;
    case 226u: goto L_088E0D44;
    case 227u: goto L_088E0D4C;
    case 228u: goto L_088E0D7C;
    case 229u: goto L_088E0D84;
    case 230u: goto L_088E0D90;
    case 231u: goto L_088E0DA0;
    case 232u: goto L_088E0DA8;
    case 233u: goto L_088E0DB0;
    case 234u: goto L_088E0DBC;
    case 235u: goto L_088E0DCC;
    case 236u: goto L_088E0DDC;
    case 237u: goto L_088E0DE4;
    case 238u: goto L_088E0DEC;
    case 239u: goto L_088E0DF8;
    case 240u: goto L_088E0E08;
    case 241u: goto L_088E0E10;
    case 242u: goto L_088E0E20;
    case 243u: goto L_088E0E30;
    case 244u: goto L_088E0E48;
    case 245u: goto L_088E0E58;
    case 246u: goto L_088E0E6C;
    case 247u: goto L_088E0E74;
    case 248u: goto L_088E0E7C;
    case 249u: goto L_088E0EA0;
    case 250u: goto L_088E0EA8;
    case 251u: goto L_088E0EB8;
    case 252u: goto L_088E0ED0;
    case 253u: goto L_088E0EE0;
    case 254u: goto L_088E0EF4;
    case 255u: goto L_088E0F04;
    case 256u: goto L_088E0F20;
    case 257u: goto L_088E0F28;
    case 258u: goto L_088E0F30;
    case 259u: goto L_088E0F38;
    case 260u: goto L_088E0F54;
    case 261u: goto L_088E0F5C;
    case 262u: goto L_088E0F64;
    case 263u: goto L_088E0F6C;
    case 264u: goto L_088E0F74;
    case 265u: goto L_088E0F78;
    case 266u: goto L_088E0F84;
    case 267u: goto L_088E0F94;
    case 268u: goto L_088E0F98;
    case 269u: goto L_088E0FA4;
    case 270u: goto L_088E0FB0;
    case 271u: goto L_088E0FB4;
    case 272u: goto L_088E0FC0;
    case 273u: goto L_088E0FCC;
    case 274u: goto L_088E0FD4;
    case 275u: goto L_088E0FF4;
    case 276u: goto L_088E1014;
    case 277u: goto L_088E1040;
    case 278u: goto L_088E1088;
    case 279u: goto L_088E1090;
    case 280u: goto L_088E1098;
    case 281u: goto L_088E109C;
    case 282u: goto L_088E10A4;
    case 283u: goto L_088E110C;
    case 284u: goto L_088E1114;
    case 285u: goto L_088E111C;
    case 286u: goto L_088E1120;
    case 287u: goto L_088E1130;
    case 288u: goto L_088E1138;
    case 289u: goto L_088E1140;
    case 290u: goto L_088E1158;
    case 291u: goto L_088E116C;
    case 292u: goto L_088E1174;
    case 293u: goto L_088E117C;
    case 294u: goto L_088E11A8;
    case 295u: goto L_088E11F0;
    case 296u: goto L_088E1200;
    case 297u: goto L_088E1210;
    case 298u: goto L_088E1218;
    case 299u: goto L_088E121C;
    case 300u: goto L_088E1224;
    case 301u: goto L_088E122C;
    case 302u: goto L_088E1294;
    case 303u: goto L_088E12A4;
    case 304u: goto L_088E12B4;
    case 305u: goto L_088E12BC;
    case 306u: goto L_088E12C0;
    case 307u: goto L_088E12C8;
    case 308u: goto L_088E12D8;
    case 309u: goto L_088E12E8;
    case 310u: goto L_088E12F0;
    case 311u: goto L_088E12F4;
    case 312u: goto L_088E12FC;
    case 313u: goto L_088E1304;
    case 314u: goto L_088E131C;
    case 315u: goto L_088E1334;
    case 316u: goto L_088E1360;
    case 317u: goto L_088E1378;
    case 318u: goto L_088E1380;
    case 319u: goto L_088E1390;
    case 320u: goto L_088E13A0;
    case 321u: goto L_088E13AC;
    case 322u: goto L_088E13B8;
    case 323u: goto L_088E13C8;
    case 324u: goto L_088E13CC;
    case 325u: goto L_088E13E0;
    case 326u: goto L_088E13E8;
    case 327u: goto L_088E13F8;
    case 328u: goto L_088E140C;
    case 329u: goto L_088E1414;
    case 330u: goto L_088E141C;
    case 331u: goto L_088E1424;
    case 332u: goto L_088E1434;
    case 333u: goto L_088E1458;
    case 334u: goto L_088E1460;
    case 335u: goto L_088E1468;
    case 336u: goto L_088E1480;
    case 337u: goto L_088E1494;
    case 338u: goto L_088E149C;
    case 339u: goto L_088E14B4;
    case 340u: goto L_088E14D4;
    case 341u: goto L_088E1518;
    case 342u: goto L_088E1530;
    case 343u: goto L_088E1538;
    case 344u: goto L_088E1540;
    case 345u: goto L_088E1548;
    case 346u: goto L_088E1574;
    case 347u: goto L_088E1588;
    case 348u: goto L_088E1598;
    case 349u: goto L_088E15C4;
    case 350u: goto L_088E15D8;
    case 351u: goto L_088E15E8;
    case 352u: goto L_088E1600;
    case 353u: goto L_088E1608;
    case 354u: goto L_088E1610;
    case 355u: goto L_088E1620;
    case 356u: goto L_088E1638;
    case 357u: goto L_088E165C;
    case 358u: goto L_088E166C;
    case 359u: goto L_088E167C;
    case 360u: goto L_088E168C;
    case 361u: goto L_088E16B0;
    case 362u: goto L_088E16B8;
    case 363u: goto L_088E16C4;
    case 364u: goto L_088E16E4;
    case 365u: goto L_088E16F0;
    case 366u: goto L_088E16FC;
    case 367u: goto L_088E1704;
    case 368u: goto L_088E171C;
    case 369u: goto L_088E1764;
    case 370u: goto L_088E176C;
    case 371u: goto L_088E177C;
    case 372u: goto L_088E178C;
    case 373u: goto L_088E179C;
    case 374u: goto L_088E17A4;
    case 375u: goto L_088E17AC;
    case 376u: goto L_088E17B4;
    case 377u: goto L_088E17BC;
    case 378u: goto L_088E17C4;
    case 379u: goto L_088E17D0;
    case 380u: goto L_088E18C0;
    case 381u: goto L_088E18EC;
    case 382u: goto L_088E1908;
    case 383u: goto L_088E1920;
    case 384u: goto L_088E193C;
    case 385u: goto L_088E1950;
    case 386u: goto L_088E1958;
    case 387u: goto L_088E1968;
    case 388u: goto L_088E1974;
    case 389u: goto L_088E197C;
    case 390u: goto L_088E1984;
    case 391u: goto L_088E198C;
    case 392u: goto L_088E199C;
    case 393u: goto L_088E19AC;
    case 394u: goto L_088E19B0;
    case 395u: goto L_088E19B8;
    case 396u: goto L_088E19C8;
    case 397u: goto L_088E19E4;
    case 398u: goto L_088E19EC;
    case 399u: goto L_088E19FC;
    case 400u: goto L_088E1A14;
    case 401u: goto L_088E1A28;
    case 402u: goto L_088E1A34;
    case 403u: goto L_088E1A48;
    case 404u: goto L_088E1A50;
    case 405u: goto L_088E1A60;
    case 406u: goto L_088E1ACC;
    case 407u: goto L_088E1B48;
    case 408u: goto L_088E1B50;
    case 409u: goto L_088E1B58;
    case 410u: goto L_088E1B60;
    case 411u: goto L_088E1B7C;
    case 412u: goto L_088E1B94;
    case 413u: goto L_088E1B9C;
    case 414u: goto L_088E1BA4;
    case 415u: goto L_088E1BB0;
    case 416u: goto L_088E1BCC;
    case 417u: goto L_088E1BE4;
    case 418u: goto L_088E1BEC;
    case 419u: goto L_088E1C08;
    case 420u: goto L_088E1C1C;
    case 421u: goto L_088E1C24;
    case 422u: goto L_088E1C30;
    case 423u: goto L_088E1C38;
    case 424u: goto L_088E1C40;
    case 425u: goto L_088E1C64;
    case 426u: goto L_088E1C6C;
    case 427u: goto L_088E1C74;
    case 428u: goto L_088E1C80;
    case 429u: goto L_088E1C90;
    case 430u: goto L_088E1C98;
    case 431u: goto L_088E1CA0;
    case 432u: goto L_088E1CBC;
    case 433u: goto L_088E1CCC;
    case 434u: goto L_088E1CD4;
    case 435u: goto L_088E1CE0;
    case 436u: goto L_088E1CE8;
    case 437u: goto L_088E1CF4;
    case 438u: goto L_088E1CFC;
    case 439u: goto L_088E1D04;
    case 440u: goto L_088E1D18;
    case 441u: goto L_088E1D24;
    case 442u: goto L_088E1D48;
    case 443u: goto L_088E1DA0;
    case 444u: goto L_088E1DB0;
    case 445u: goto L_088E1DBC;
    case 446u: goto L_088E1DCC;
    case 447u: goto L_088E1DD0;
    case 448u: goto L_088E1DD8;
    case 449u: goto L_088E1DE8;
    case 450u: goto L_088E1DF4;
    case 451u: goto L_088E1DFC;
    case 452u: goto L_088E1E04;
    case 453u: goto L_088E1E20;
    case 454u: goto L_088E1E34;
    case 455u: goto L_088E1E3C;
    case 456u: goto L_088E1E44;
    case 457u: goto L_088E1E80;
    case 458u: goto L_088E1E88;
    case 459u: goto L_088E1E90;
    case 460u: goto L_088E1E98;
    case 461u: goto L_088E1EA4;
    case 462u: goto L_088E1EAC;
    case 463u: goto L_088E1EB4;
    case 464u: goto L_088E1EC0;
    case 465u: goto L_088E1ED4;
    case 466u: goto L_088E1EFC;
    case 467u: goto L_088E1F54;
    case 468u: goto L_088E1F7C;
    case 469u: goto L_088E1F90;
    case 470u: goto L_088E1F94;
    case 471u: goto L_088E1FC8;
    case 472u: goto L_088E201C;
    case 473u: goto L_088E206C;
    case 474u: goto L_088E2074;
    case 475u: goto L_088E2078;
    case 476u: goto L_088E2088;
    case 477u: goto L_088E20A0;
    case 478u: goto L_088E20A8;
    case 479u: goto L_088E20D0;
    case 480u: goto L_088E20F0;
    case 481u: goto L_088E2100;
    case 482u: goto L_088E2110;
    case 483u: goto L_088E211C;
    case 484u: goto L_088E2124;
    case 485u: goto L_088E2180;
    case 486u: goto L_088E21C8;
    case 487u: goto L_088E21D0;
    case 488u: goto L_088E21D4;
    case 489u: goto L_088E21E4;
    case 490u: goto L_088E21FC;
    case 491u: goto L_088E2204;
    case 492u: goto L_088E2220;
    case 493u: goto L_088E222C;
    case 494u: goto L_088E2234;
    case 495u: goto L_088E2238;
    case 496u: goto L_088E22AC;
    case 497u: goto L_088E2314;
    case 498u: goto L_088E2328;
    case 499u: goto L_088E2344;
    case 500u: goto L_088E2354;
    case 501u: goto L_088E2368;
    case 502u: goto L_088E23A0;
    case 503u: goto L_088E23DC;
    case 504u: goto L_088E23E4;
    case 505u: goto L_088E2438;
    case 506u: goto L_088E246C;
    case 507u: goto L_088E2478;
    case 508u: goto L_088E2490;
    case 509u: goto L_088E24A8;
    case 510u: goto L_088E24B8;
    case 511u: goto L_088E24CC;
    case 512u: goto L_088E24D8;
    case 513u: goto L_088E2544;
    case 514u: goto L_088E2550;
    case 515u: goto L_088E256C;
    case 516u: goto L_088E2578;
    case 517u: goto L_088E2590;
    case 518u: goto L_088E2594;
    case 519u: goto L_088E25B0;
    case 520u: goto L_088E25BC;
    case 521u: goto L_088E25C4;
    case 522u: goto L_088E25D0;
    case 523u: goto L_088E25D8;
    case 524u: goto L_088E25F0;
    case 525u: goto L_088E2658;
    case 526u: goto L_088E26B8;
    case 527u: goto L_088E26F8;
    case 528u: goto L_088E2724;
    case 529u: goto L_088E2770;
    case 530u: goto L_088E2778;
    case 531u: goto L_088E277C;
    case 532u: goto L_088E278C;
    case 533u: goto L_088E27A4;
    case 534u: goto L_088E27C0;
    case 535u: goto L_088E27D0;
    case 536u: goto L_088E27E0;
    case 537u: goto L_088E27F8;
    case 538u: goto L_088E2800;
    case 539u: goto L_088E2818;
    case 540u: goto L_088E2828;
    case 541u: goto L_088E2838;
    case 542u: goto L_088E2854;
    case 543u: goto L_088E285C;
    case 544u: goto L_088E2868;
    case 545u: goto L_088E2878;
    case 546u: goto L_088E2894;
    case 547u: goto L_088E289C;
    case 548u: goto L_088E28B8;
    case 549u: goto L_088E28C0;
    case 550u: goto L_088E28DC;
    case 551u: goto L_088E28EC;
    case 552u: goto L_088E28FC;
    case 553u: goto L_088E2900;
    case 554u: goto L_088E2910;
    case 555u: goto L_088E291C;
    case 556u: goto L_088E2920;
    case 557u: goto L_088E2930;
    case 558u: goto L_088E2944;
    case 559u: goto L_088E2958;
    case 560u: goto L_088E299C;
    case 561u: goto L_088E29D4;
    case 562u: goto L_088E29E0;
    case 563u: goto L_088E29E8;
    case 564u: goto L_088E2A08;
    case 565u: goto L_088E2A20;
    case 566u: goto L_088E2A24;
    case 567u: goto L_088E2A38;
    case 568u: goto L_088E2A40;
    case 569u: goto L_088E2A48;
    case 570u: goto L_088E2A5C;
    case 571u: goto L_088E2A60;
    case 572u: goto L_088E2A90;
    case 573u: goto L_088E2A9C;
    case 574u: goto L_088E2AB0;
    case 575u: goto L_088E2ABC;
    case 576u: goto L_088E2ADC;
    case 577u: goto L_088E2AE4;
    case 578u: goto L_088E2B04;
    case 579u: goto L_088E2B18;
    case 580u: goto L_088E2B24;
    case 581u: goto L_088E2B30;
    case 582u: goto L_088E2B3C;
    case 583u: goto L_088E2B40;
    case 584u: goto L_088E2B48;
    case 585u: goto L_088E2B50;
    case 586u: goto L_088E2B58;
    case 587u: goto L_088E2B68;
    case 588u: goto L_088E2B74;
    case 589u: goto L_088E2B88;
    case 590u: goto L_088E2B8C;
    case 591u: goto L_088E2BAC;
    case 592u: goto L_088E2BBC;
    case 593u: goto L_088E2BEC;
    case 594u: goto L_088E2C38;
    case 595u: goto L_088E2C70;
    case 596u: goto L_088E2C7C;
    case 597u: goto L_088E2C8C;
    case 598u: goto L_088E2C94;
    case 599u: goto L_088E2C9C;
    case 600u: goto L_088E2CA8;
    case 601u: goto L_088E2CB0;
    case 602u: goto L_088E2CB8;
    case 603u: goto L_088E2CC4;
    case 604u: goto L_088E2D08;
    case 605u: goto L_088E2D60;
    case 606u: goto L_088E2D74;
    case 607u: goto L_088E2D7C;
    case 608u: goto L_088E2D84;
    case 609u: goto L_088E2DA8;
    case 610u: goto L_088E2DB8;
    case 611u: goto L_088E2DC8;
    case 612u: goto L_088E2DD4;
    case 613u: goto L_088E2DE0;
    case 614u: goto L_088E2DEC;
    case 615u: goto L_088E2DFC;
    case 616u: goto L_088E2E00;
    case 617u: goto L_088E2E0C;
    case 618u: goto L_088E2E1C;
    case 619u: goto L_088E2E28;
    case 620u: goto L_088E2E34;
    case 621u: goto L_088E2E38;
    case 622u: goto L_088E2E40;
    case 623u: goto L_088E2E4C;
    case 624u: goto L_088E2E50;
    case 625u: goto L_088E2E9C;
    case 626u: goto L_088E2EB4;
    case 627u: goto L_088E2EC0;
    case 628u: goto L_088E2ED8;
    case 629u: goto L_088E2EE0;
    case 630u: goto L_088E2EE8;
    case 631u: goto L_088E2F08;
    case 632u: goto L_088E2F14;
    case 633u: goto L_088E2F28;
    case 634u: goto L_088E2F3C;
    case 635u: goto L_088E2F58;
    case 636u: goto L_088E2F60;
    case 637u: goto L_088E2F70;
    case 638u: goto L_088E2F94;
    case 639u: goto L_088E2FA0;
    case 640u: goto L_088E2FBC;
    case 641u: goto L_088E2FD4;
    case 642u: goto L_088E2FE0;
    case 643u: goto L_088E2FF8;
    case 644u: goto L_088E3000;
    case 645u: goto L_088E3018;
    case 646u: goto L_088E3024;
    case 647u: goto L_088E303C;
    case 648u: goto L_088E3054;
    case 649u: goto L_088E3068;
    case 650u: goto L_088E3074;
    case 651u: goto L_088E307C;
    case 652u: goto L_088E3090;
    case 653u: goto L_088E30A4;
    case 654u: goto L_088E30C0;
    case 655u: goto L_088E30C8;
    case 656u: goto L_088E30D4;
    case 657u: goto L_088E30DC;
    case 658u: goto L_088E30EC;
    case 659u: goto L_088E3104;
    case 660u: goto L_088E311C;
    case 661u: goto L_088E3130;
    case 662u: goto L_088E313C;
    case 663u: goto L_088E3140;
    case 664u: goto L_088E3148;
    case 665u: goto L_088E315C;
    case 666u: goto L_088E3168;
    case 667u: goto L_088E3170;
    case 668u: goto L_088E3184;
    case 669u: goto L_088E3194;
    case 670u: goto L_088E31A0;
    case 671u: goto L_088E31B4;
    case 672u: goto L_088E31C0;
    case 673u: goto L_088E31C8;
    case 674u: goto L_088E31DC;
    case 675u: goto L_088E31E8;
    case 676u: goto L_088E31F0;
    case 677u: goto L_088E3220;
    case 678u: goto L_088E3224;
    case 679u: goto L_088E322C;
    case 680u: goto L_088E325C;
    case 681u: goto L_088E3260;
    case 682u: goto L_088E3268;
    case 683u: goto L_088E3298;
    case 684u: goto L_088E329C;
    case 685u: goto L_088E32B8;
    case 686u: goto L_088E32BC;
    case 687u: goto L_088E32CC;
    case 688u: goto L_088E32D4;
    case 689u: goto L_088E32E4;
    case 690u: goto L_088E32E8;
    case 691u: goto L_088E32EC;
    case 692u: goto L_088E3340;
    case 693u: goto L_088E3354;
    case 694u: goto L_088E335C;
    case 695u: goto L_088E336C;
    case 696u: goto L_088E3394;
    case 697u: goto L_088E33A8;
    case 698u: goto L_088E33BC;
    case 699u: goto L_088E33D0;
    case 700u: goto L_088E33E4;
    case 701u: goto L_088E33E8;
    case 702u: goto L_088E3410;
    case 703u: goto L_088E3420;
    case 704u: goto L_088E3434;
    case 705u: goto L_088E3448;
    case 706u: goto L_088E345C;
    case 707u: goto L_088E3470;
    case 708u: goto L_088E3484;
    case 709u: goto L_088E3488;
    case 710u: goto L_088E34B4;
    case 711u: goto L_088E34C0;
    case 712u: goto L_088E34DC;
    case 713u: goto L_088E34F4;
    case 714u: goto L_088E34FC;
    case 715u: goto L_088E3518;
    case 716u: goto L_088E3530;
    case 717u: goto L_088E354C;
    case 718u: goto L_088E3554;
    case 719u: goto L_088E3568;
    case 720u: goto L_088E3578;
    case 721u: goto L_088E3594;
    case 722u: goto L_088E35B0;
    case 723u: goto L_088E35B4;
    case 724u: goto L_088E35C8;
    case 725u: goto L_088E35F4;
    case 726u: goto L_088E35F8;
    case 727u: goto L_088E3600;
    case 728u: goto L_088E3608;
    case 729u: goto L_088E3658;
    case 730u: goto L_088E365C;
    case 731u: goto L_088E3680;
    case 732u: goto L_088E3688;
    case 733u: goto L_088E3690;
    case 734u: goto L_088E369C;
    case 735u: goto L_088E36B4;
    case 736u: goto L_088E36C0;
    case 737u: goto L_088E36F0;
    case 738u: goto L_088E370C;
    case 739u: goto L_088E371C;
    case 740u: goto L_088E3724;
    case 741u: goto L_088E372C;
    case 742u: goto L_088E3734;
    case 743u: goto L_088E373C;
    case 744u: goto L_088E3744;
    case 745u: goto L_088E3754;
    case 746u: goto L_088E3758;
    case 747u: goto L_088E3760;
    case 748u: goto L_088E3770;
    case 749u: goto L_088E3774;
    case 750u: goto L_088E3780;
    case 751u: goto L_088E3794;
    case 752u: goto L_088E37B0;
    case 753u: goto L_088E37C0;
    case 754u: goto L_088E37C8;
    case 755u: goto L_088E37E4;
    case 756u: goto L_088E37F4;
    case 757u: goto L_088E37FC;
    case 758u: goto L_088E3810;
    case 759u: goto L_088E382C;
    case 760u: goto L_088E3840;
    case 761u: goto L_088E3860;
    case 762u: goto L_088E3870;
    case 763u: goto L_088E3878;
    case 764u: goto L_088E3888;
    case 765u: goto L_088E388C;
    case 766u: goto L_088E3894;
    case 767u: goto L_088E38A4;
    case 768u: goto L_088E38A8;
    case 769u: goto L_088E38B4;
    case 770u: goto L_088E38C8;
    case 771u: goto L_088E38E4;
    case 772u: goto L_088E38F4;
    case 773u: goto L_088E38FC;
    case 774u: goto L_088E3918;
    case 775u: goto L_088E3928;
    case 776u: goto L_088E3930;
    case 777u: goto L_088E3944;
    case 778u: goto L_088E3960;
    case 779u: goto L_088E3974;
    case 780u: goto L_088E3994;
    case 781u: goto L_088E39A4;
    case 782u: goto L_088E39C4;
    case 783u: goto L_088E3A04;
    case 784u: goto L_088E3A20;
    case 785u: goto L_088E3A28;
    case 786u: goto L_088E3A44;
    case 787u: goto L_088E3A50;
    case 788u: goto L_088E3A58;
    case 789u: goto L_088E3A64;
    case 790u: goto L_088E3A6C;
    case 791u: goto L_088E3A84;
    case 792u: goto L_088E3AA0;
    case 793u: goto L_088E3AAC;
    case 794u: goto L_088E3AB8;
    case 795u: goto L_088E3AD4;
    case 796u: goto L_088E3AE0;
    case 797u: goto L_088E3AF0;
    case 798u: goto L_088E3B00;
    case 799u: goto L_088E3B0C;
    case 800u: goto L_088E3B14;
    case 801u: goto L_088E3B28;
    case 802u: goto L_088E3B34;
    case 803u: goto L_088E3B40;
    case 804u: goto L_088E3B5C;
    case 805u: goto L_088E3B68;
    case 806u: goto L_088E3B78;
    case 807u: goto L_088E3B88;
    case 808u: goto L_088E3B90;
    case 809u: goto L_088E3B9C;
    case 810u: goto L_088E3BA8;
    case 811u: goto L_088E3BC4;
    case 812u: goto L_088E3BD0;
    case 813u: goto L_088E3BE0;
    case 814u: goto L_088E3BF0;
    case 815u: goto L_088E3BFC;
    case 816u: goto L_088E3C04;
    case 817u: goto L_088E3C0C;
    case 818u: goto L_088E3C40;
    case 819u: goto L_088E3C6C;
    case 820u: goto L_088E3C78;
    case 821u: goto L_088E3C84;
    case 822u: goto L_088E3C90;
    case 823u: goto L_088E3C9C;
    case 824u: goto L_088E3CA0;
    case 825u: goto L_088E3CA8;
    case 826u: goto L_088E3CB4;
    case 827u: goto L_088E3CB8;
    case 828u: goto L_088E3CC0;
    case 829u: goto L_088E3CCC;
    case 830u: goto L_088E3CD0;
    case 831u: goto L_088E3CE4;
    case 832u: goto L_088E3CFC;
    case 833u: goto L_088E3D04;
    case 834u: goto L_088E3D3C;
    case 835u: goto L_088E3D68;
    case 836u: goto L_088E3D70;
    case 837u: goto L_088E3D84;
    case 838u: goto L_088E3D98;
    case 839u: goto L_088E3DAC;
    case 840u: goto L_088E3DC8;
    case 841u: goto L_088E3DD8;
    case 842u: goto L_088E3DE0;
    case 843u: goto L_088E3DF0;
    case 844u: goto L_088E3DF8;
    case 845u: goto L_088E3E08;
    case 846u: goto L_088E3E10;
    case 847u: goto L_088E3E18;
    case 848u: goto L_088E3E1C;
    case 849u: goto L_088E3E24;
    case 850u: goto L_088E3E28;
    case 851u: goto L_088E3E30;
    case 852u: goto L_088E3E40;
    case 853u: goto L_088E3E50;
    case 854u: goto L_088E3E70;
    case 855u: goto L_088E3E74;
    case 856u: goto L_088E3E84;
    case 857u: goto L_088E3E88;
    case 858u: goto L_088E3E90;
    case 859u: goto L_088E3E94;
    case 860u: goto L_088E3E9C;
    case 861u: goto L_088E3EAC;
    case 862u: goto L_088E3EC8;
    case 863u: goto L_088E3ED8;
    case 864u: goto L_088E3EE0;
    case 865u: goto L_088E3EF4;
    case 866u: goto L_088E3F04;
    case 867u: goto L_088E3F0C;
    case 868u: goto L_088E3F1C;
    case 869u: goto L_088E3F24;
    case 870u: goto L_088E3F28;
    case 871u: goto L_088E3F30;
    case 872u: goto L_088E3F40;
    case 873u: goto L_088E3F5C;
    case 874u: goto L_088E3F60;
    case 875u: goto L_088E3F70;
    case 876u: goto L_088E3F74;
    case 877u: goto L_088E3F7C;
    case 878u: goto L_088E3F80;
    case 879u: goto L_088E3F88;
    case 880u: goto L_088E3F98;
    case 881u: goto L_088E3FB4;
    case 882u: goto L_088E3FC4;
    case 883u: goto L_088E3FCC;
    case 884u: goto L_088E3FE0;
    case 885u: goto L_088E3FF0;
    case 886u: goto L_088E3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E0000:
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E004C;
      }
      goto L_088E000C;
    }
L_088E000C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E004C;
      }
      goto L_088E0014;
    }
L_088E0014:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0648;
      }
      goto L_088E002C;
    }
L_088E002C:
    ctx.gpr[31] = (0x088E0034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0034u) goto L_088E0034;
    return;
L_088E0034:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088E0648;
      }
      goto L_088E003C;
    }
L_088E003C:
    ctx.gpr[31] = (0x088E0044u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 161u, 0x08868FD8u>(ctx, &aot_mem) && ctx.pc == 0x088E0044u) goto L_088E0044;
    return;
L_088E0044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0648;
      }
      goto L_088E004C;
    }
L_088E004C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E02D0;
      }
      goto L_088E0058;
    }
L_088E0058:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x088E0070u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 156u, 0x089B0884u>(ctx, &aot_mem) && ctx.pc == 0x088E0070u) goto L_088E0070;
    return;
L_088E0070:
    ctx.gpr[31] = (0x088E0078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0078u) goto L_088E0078;
    return;
L_088E0078:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_088E0098;
      }
      goto L_088E0080;
    }
L_088E0080:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E00FC;
      }
      goto L_088E0088;
    }
L_088E0088:
    ctx.gpr[31] = (0x088E0090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x088E0090u) goto L_088E0090;
    return;
L_088E0090:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088E00FC;
      }
      goto L_088E0098;
    }
L_088E0098:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(57)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088E00A8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 37u, 0x08918288u>(ctx, &aot_mem) && ctx.pc == 0x088E00A8u) goto L_088E00A8;
    return;
L_088E00A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[6] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E00F4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088E00F4u) goto L_088E00F4;
    return;
L_088E00F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(640), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088E0108;
      }
      goto L_088E00FC;
    }
L_088E00FC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088E0108u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 64u, 0x08918440u>(ctx, &aot_mem) && ctx.pc == 0x088E0108u) goto L_088E0108;
    return;
L_088E0108:
    ctx.gpr[4] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E0140;
      }
      goto L_088E0114;
    }
L_088E0114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x088E0128u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0128u) goto L_088E0128;
    return;
L_088E0128:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088E0140;
      }
      goto L_088E0130;
    }
L_088E0130:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7688)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7688), ctx.gpr[5]);
    goto L_088E0140;
L_088E0140:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E02C8;
      }
      goto L_088E014C;
    }
L_088E014C:
    ctx.gpr[31] = (0x088E0154u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E0154u) goto L_088E0154;
    return;
L_088E0154:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E02C8;
      }
      goto L_088E015C;
    }
L_088E015C:
    ctx.gpr[4] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E02B8;
      }
      goto L_088E0168;
    }
L_088E0168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E02B8;
      }
      goto L_088E0184;
    }
L_088E0184:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
        goto L_088E01B4;
    }
    goto L_088E0194;
L_088E0194:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x088E01A4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x088E01A4u) goto L_088E01A4;
    return;
L_088E01A4:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    goto L_088E01B4;
L_088E01B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E01F0;
      }
      goto L_088E01CC;
    }
L_088E01CC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088E01D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13952));
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 55u, 0x088D450Cu>(ctx, &aot_mem) && ctx.pc == 0x088E01D8u) goto L_088E01D8;
    return;
L_088E01D8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x088E01E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 132u, 0x088A8720u>(ctx, &aot_mem) && ctx.pc == 0x088E01E8u) goto L_088E01E8;
    return;
L_088E01E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E02B0;
      }
      goto L_088E01F0;
    }
L_088E01F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
        goto L_088E021C;
    }
    goto L_088E01FC;
L_088E01FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(53));
    ctx.gpr[31] = (0x088E020Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x088E020Cu) goto L_088E020C;
    return;
L_088E020C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(53)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    goto L_088E021C;
L_088E021C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(208))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088E02B0;
      }
      goto L_088E0228;
    }
L_088E0228:
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5736));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (2225u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(13984));
      if (branch_taken) {
          goto L_088E0264;
      }
      goto L_088E0248;
    }
L_088E0248:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(54));
    ctx.gpr[31] = (0x088E0258u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x088E0258u) goto L_088E0258;
    return;
L_088E0258:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(54)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E0264;
L_088E0264:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(208))))));
    ctx.gpr[31] = (0x088E0278u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 55u, 0x088D450Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0278u) goto L_088E0278;
    return;
L_088E0278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
        goto L_088E02A4;
    }
    goto L_088E0284;
L_088E0284:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(55));
    ctx.gpr[31] = (0x088E0294u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x088E0294u) goto L_088E0294;
    return;
L_088E0294:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(55)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    goto L_088E02A4;
L_088E02A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E02B0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(208))))));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 132u, 0x088A8720u>(ctx, &aot_mem) && ctx.pc == 0x088E02B0u) goto L_088E02B0;
    return;
L_088E02B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E02C8;
      }
      goto L_088E02B8;
    }
L_088E02B8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088E02C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 122u, 0x088A8660u>(ctx, &aot_mem) && ctx.pc == 0x088E02C8u) goto L_088E02C8;
    return;
L_088E02C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088E064C;
      }
      goto L_088E02D0;
    }
L_088E02D0:
    ctx.gpr[4] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E036C;
      }
      goto L_088E02DC;
    }
L_088E02DC:
    ctx.gpr[31] = (0x088E02E4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088E02E4u) goto L_088E02E4;
    return;
L_088E02E4:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088E0304;
      }
      goto L_088E02EC;
    }
L_088E02EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 80u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_088E0304;
L_088E0304:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[31] = (0x088E0318u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 156u, 0x089B0884u>(ctx, &aot_mem) && ctx.pc == 0x088E0318u) goto L_088E0318;
    return;
L_088E0318:
    ctx.gpr[31] = (0x088E0320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0320u) goto L_088E0320;
    return;
L_088E0320:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088E0338;
      }
      goto L_088E0328;
    }
L_088E0328:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7688)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7688), ctx.gpr[5]);
    goto L_088E0338;
L_088E0338:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0364;
      }
      goto L_088E0344;
    }
L_088E0344:
    ctx.gpr[31] = (0x088E034Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E034Cu) goto L_088E034C;
    return;
L_088E034C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0364;
      }
      goto L_088E0354;
    }
L_088E0354:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088E0364u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 122u, 0x088A8660u>(ctx, &aot_mem) && ctx.pc == 0x088E0364u) goto L_088E0364;
    return;
L_088E0364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E064C;
      }
      goto L_088E036C;
    }
L_088E036C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0644;
      }
      goto L_088E0378;
    }
L_088E0378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 5u);
      if (branch_taken) {
          goto L_088E0398;
      }
      goto L_088E0388;
    }
L_088E0388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E0644;
      }
      goto L_088E0398;
    }
L_088E0398:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088E03CC;
      }
      goto L_088E03A8;
    }
L_088E03A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088E03C4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 95u, 0x08A408F0u>(ctx, &aot_mem) && ctx.pc == 0x088E03C4u) goto L_088E03C4;
    return;
L_088E03C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088E0534;
      }
      goto L_088E03CC;
    }
L_088E03CC:
    ctx.gpr[31] = (0x088E03D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x088E03D4u) goto L_088E03D4;
    return;
L_088E03D4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E0458;
      }
      goto L_088E03E0;
    }
L_088E03E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E0458;
      }
      goto L_088E03F0;
    }
L_088E03F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
        goto L_088E0430;
    }
    goto L_088E040C;
L_088E040C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 48u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E042Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 218u, 0x089ED5ACu>(ctx, &aot_mem) && ctx.pc == 0x088E042Cu) goto L_088E042C;
    return;
L_088E042C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    goto L_088E0430;
L_088E0430:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    goto L_088E0458;
L_088E0458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x088E0464u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 12u, 0x088A00D8u>(ctx, &aot_mem) && ctx.pc == 0x088E0464u) goto L_088E0464;
    return;
L_088E0464:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0484;
      }
      goto L_088E046C;
    }
L_088E046C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088E047Cu);
    ctx.gpr[5] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x088E047Cu) goto L_088E047C;
    return;
L_088E047C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0534;
      }
      goto L_088E0484;
    }
L_088E0484:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E04C4;
      }
      goto L_088E0494;
    }
L_088E0494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E04C4;
      }
      goto L_088E04A4;
    }
L_088E04A4:
    ctx.gpr[31] = (0x088E04ACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 226u, 0x0899D8F0u>(ctx, &aot_mem) && ctx.pc == 0x088E04ACu) goto L_088E04AC;
    return;
L_088E04AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_088E04C4;
L_088E04C4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088E04D8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 156u, 0x089B0884u>(ctx, &aot_mem) && ctx.pc == 0x088E04D8u) goto L_088E04D8;
    return;
L_088E04D8:
    ctx.gpr[31] = (0x088E04E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088E04E0u) goto L_088E04E0;
    return;
L_088E04E0:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088E0534;
      }
      goto L_088E04E8;
    }
L_088E04E8:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[19];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088E0534;
      }
      goto L_088E04F0;
    }
L_088E04F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[6] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E0534;
L_088E0534:
    ctx.gpr[17] = (0u | 0u);
    goto L_088E0538;
L_088E0538:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E056C;
      }
      goto L_088E054C;
    }
L_088E054C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E056C;
      }
      goto L_088E0558;
    }
L_088E0558:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E056C;
      }
      goto L_088E0560;
    }
L_088E0560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (0x088E056Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 322u, 0x08899450u>(ctx, &aot_mem) && ctx.pc == 0x088E056Cu) goto L_088E056C;
    return;
L_088E056C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0538;
      }
      goto L_088E0584;
    }
L_088E0584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E05B0;
      }
      goto L_088E0590;
    }
L_088E0590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E05B0;
      }
      goto L_088E059C;
    }
L_088E059C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E05B0;
      }
      goto L_088E05A4;
    }
L_088E05A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x088E05B0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 322u, 0x08899450u>(ctx, &aot_mem) && ctx.pc == 0x088E05B0u) goto L_088E05B0;
    return;
L_088E05B0:
    ctx.gpr[31] = (0x088E05B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088E05B8u) goto L_088E05B8;
    return;
L_088E05B8:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088E05D8;
      }
      goto L_088E05C0;
    }
L_088E05C0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E05F8;
      }
      goto L_088E05C8;
    }
L_088E05C8:
    ctx.gpr[31] = (0x088E05D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x088E05D0u) goto L_088E05D0;
    return;
L_088E05D0:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088E05F8;
      }
      goto L_088E05D8;
    }
L_088E05D8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(57)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088E05E8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 37u, 0x08918288u>(ctx, &aot_mem) && ctx.pc == 0x088E05E8u) goto L_088E05E8;
    return;
L_088E05E8:
    ctx.gpr[31] = (0x088E05F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088E05F0u) goto L_088E05F0;
    return;
L_088E05F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(640), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088E0604;
      }
      goto L_088E05F8;
    }
L_088E05F8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088E0604u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 64u, 0x08918440u>(ctx, &aot_mem) && ctx.pc == 0x088E0604u) goto L_088E0604;
    return;
L_088E0604:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0634;
      }
      goto L_088E0614;
    }
L_088E0614:
    ctx.gpr[31] = (0x088E061Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E061Cu) goto L_088E061C;
    return;
L_088E061C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0634;
      }
      goto L_088E0624;
    }
L_088E0624:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088E0634u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 122u, 0x088A8660u>(ctx, &aot_mem) && ctx.pc == 0x088E0634u) goto L_088E0634;
    return;
L_088E0634:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0644;
      }
      goto L_088E063C;
    }
L_088E063C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088E064C;
      }
      goto L_088E0644;
    }
L_088E0644:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_088E0648;
L_088E0648:
    ctx.gpr[2] = (0u | 0u);
    goto L_088E064C;
L_088E064C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0694:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E06DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088E06DCu) goto L_088E06DC;
    return;
L_088E06DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E07CC;
      }
      goto L_088E06EC;
    }
L_088E06EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E07C4;
      }
      goto L_088E06FC;
    }
L_088E06FC:
    ctx.gpr[31] = (0x088E0704u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x088E0704u) goto L_088E0704;
    return;
L_088E0704:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E07C4;
      }
      goto L_088E070C;
    }
L_088E070C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[5] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0748;
      }
      goto L_088E0724;
    }
L_088E0724:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (0u | 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (0u | 204u);
        goto L_088E0738;
    }
    goto L_088E0738;
L_088E0738:
    ctx.gpr[31] = (0x088E0740u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E0740u) goto L_088E0740;
    return;
L_088E0740:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    goto L_088E0748;
L_088E0748:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E07C4;
      }
      goto L_088E0760;
    }
L_088E0760:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E07C4;
      }
      goto L_088E0768;
    }
L_088E0768:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[19] = (0u | 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (0u | 202u);
        goto L_088E0778;
    }
    goto L_088E0778;
L_088E0778:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E07C4;
      }
      goto L_088E0780;
    }
L_088E0780:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E07C4;
      }
      goto L_088E0788;
    }
L_088E0788:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E07A0u);
    ctx.gpr[6] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088E07A0u) goto L_088E07A0;
    return;
L_088E07A0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E07B4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088E07B4u) goto L_088E07B4;
    return;
L_088E07B4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088E07C4;
L_088E07C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0BCC;
      }
      goto L_088E07CC;
    }
L_088E07CC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0878;
      }
      goto L_088E07D4;
    }
L_088E07D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 203u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0878;
      }
      goto L_088E07E4;
    }
L_088E07E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0878;
      }
      goto L_088E07F4;
    }
L_088E07F4:
    ctx.gpr[31] = (0x088E07FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E07FCu) goto L_088E07FC;
    return;
L_088E07FC:
    ctx.gpr[4] = (50298u << 16u);
    ctx.gpr[18] = (2190u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1684));
      if (branch_taken) {
          goto L_088E081C;
      }
      goto L_088E0810;
    }
L_088E0810:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2964)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E082C;
      }
      goto L_088E081C;
    }
L_088E081C:
    ctx.gpr[31] = (0x088E0824u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E0824u) goto L_088E0824;
    return;
L_088E0824:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0848;
      }
      goto L_088E082C;
    }
L_088E082C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088E0840u);
    ctx.gpr[6] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0840u) goto L_088E0840;
    return;
L_088E0840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E0860;
      }
      goto L_088E0848;
    }
L_088E0848:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088E085Cu);
    ctx.gpr[6] = (0u | 202u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E085Cu) goto L_088E085C;
    return;
L_088E085C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_088E0860;
L_088E0860:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E0870u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x088E0870u) goto L_088E0870;
    return;
L_088E0870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0BCC;
      }
      goto L_088E0878;
    }
L_088E0878:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_088E0954;
      }
      goto L_088E0888;
    }
L_088E0888:
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0954;
      }
      goto L_088E0894;
    }
L_088E0894:
    ctx.gpr[5] = (ctx.gpr[4] & 32768u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E08D4;
      }
      goto L_088E08A8;
    }
L_088E08A8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 204u);
        goto L_088E08BC;
    }
    goto L_088E08BC;
L_088E08BC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088E08CCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E08CCu) goto L_088E08CC;
    return;
L_088E08CC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    goto L_088E08D4;
L_088E08D4:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0BAC;
      }
      goto L_088E08EC;
    }
L_088E08EC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E0BAC;
      }
      goto L_088E08F4;
    }
L_088E08F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[19] = (0u | 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (0u | 202u);
        goto L_088E0904;
    }
    goto L_088E0904;
L_088E0904:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E0BAC;
      }
      goto L_088E090C;
    }
L_088E090C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0BAC;
      }
      goto L_088E0914;
    }
L_088E0914:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E092Cu);
    ctx.gpr[6] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088E092Cu) goto L_088E092C;
    return;
L_088E092C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E0940u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088E0940u) goto L_088E0940;
    return;
L_088E0940:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E0BAC;
      }
      goto L_088E0954;
    }
L_088E0954:
    ctx.gpr[5] = (ctx.gpr[4] & 4096u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0AC4;
      }
      goto L_088E0968;
    }
L_088E0968:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0AC4;
      }
      goto L_088E0978;
    }
L_088E0978:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E0AC4;
      }
      goto L_088E0988;
    }
L_088E0988:
    ctx.gpr[6] = (ctx.gpr[4] & 8192u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088E09B4;
      }
      goto L_088E09A0;
    }
L_088E09A0:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    goto L_088E09B4;
L_088E09B4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E09F0;
      }
      goto L_088E09BC;
    }
L_088E09BC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 202u);
      if (branch_taken) {
          goto L_088E09E0;
      }
      goto L_088E09C4;
    }
L_088E09C4:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (0u | 205u);
        goto L_088E09E0;
    }
    goto L_088E09E0;
L_088E09E0:
    ctx.gpr[31] = (0x088E09E8u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E09E8u) goto L_088E09E8;
    return;
L_088E09E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E0A00;
      }
      goto L_088E09F0;
    }
L_088E09F0:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x088E09FCu);
    ctx.gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E09FCu) goto L_088E09FC;
    return;
L_088E09FC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_088E0A00;
L_088E0A00:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (16243u << 16u);
      if (branch_taken) {
          goto L_088E0A3C;
      }
      goto L_088E0A08;
    }
L_088E0A08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E0A64;
      }
      goto L_088E0A24;
    }
L_088E0A24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E0A64;
      }
      goto L_088E0A3C;
    }
L_088E0A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[18] = (2190u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (0u | 201u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1684));
      if (branch_taken) {
          goto L_088E0A6C;
      }
      goto L_088E0A5C;
    }
L_088E0A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0AA4;
      }
      goto L_088E0A64;
    }
L_088E0A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0BCC;
      }
      goto L_088E0A6C;
    }
L_088E0A6C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E0AA4;
      }
      goto L_088E0A78;
    }
L_088E0A78:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 4096u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 202u);
        goto L_088E0A94;
    }
    goto L_088E0A94;
L_088E0A94:
    ctx.gpr[31] = (0x088E0A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088E0A9Cu) goto L_088E0A9C;
    return;
L_088E0A9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E0AB0;
      }
      goto L_088E0AA4;
    }
L_088E0AA4:
    ctx.gpr[31] = (0x088E0AACu);
    ctx.gpr[6] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088E0AACu) goto L_088E0AAC;
    return;
L_088E0AAC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088E0AB0;
L_088E0AB0:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E0ABCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x088E0ABCu) goto L_088E0ABC;
    return;
L_088E0ABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0BCC;
      }
      goto L_088E0AC4;
    }
L_088E0AC4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0AEC;
      }
      goto L_088E0ACC;
    }
L_088E0ACC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 201u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0AEC;
      }
      goto L_088E0ADC;
    }
L_088E0ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0AFC;
      }
      goto L_088E0AEC;
    }
L_088E0AEC:
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
        goto L_088E0B24;
    }
    goto L_088E0AF4;
L_088E0AF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0BAC;
      }
      goto L_088E0AFC;
    }
L_088E0AFC:
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088E0B1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 107u, 0x088D4980u>(ctx, &aot_mem) && ctx.pc == 0x088E0B1Cu) goto L_088E0B1C;
    return;
L_088E0B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0BCC;
      }
      goto L_088E0B24;
    }
L_088E0B24:
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0BAC;
      }
      goto L_088E0B30;
    }
L_088E0B30:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (0u | 201u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 202u);
      if (branch_taken) {
          goto L_088E0B48;
      }
      goto L_088E0B40;
    }
L_088E0B40:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E0BAC;
      }
      goto L_088E0B48;
    }
L_088E0B48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088E0BAC;
      }
      goto L_088E0B6C;
    }
L_088E0B6C:
    ctx.gpr[31] = (0x088E0B74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0B74u) goto L_088E0B74;
    return;
L_088E0B74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x088E0B80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 576u, 0x0899F198u>(ctx, &aot_mem) && ctx.pc == 0x088E0B80u) goto L_088E0B80;
    return;
L_088E0B80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088E0BA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0BA0u) goto L_088E0BA0;
    return;
L_088E0BA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x088E0BACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 555u, 0x0899F044u>(ctx, &aot_mem) && ctx.pc == 0x088E0BACu) goto L_088E0BAC;
    return;
L_088E0BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0BC4;
      }
      goto L_088E0BBC;
    }
L_088E0BBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0BCC;
      }
      goto L_088E0BC4;
    }
L_088E0BC4:
    ctx.gpr[31] = (0x088E0BCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 107u, 0x088D4980u>(ctx, &aot_mem) && ctx.pc == 0x088E0BCCu) goto L_088E0BCC;
    return;
L_088E0BCC:
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
L_088E0BEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.gpr[18] = (ctx.gpr[6] ^ 2u);
    ctx.gpr[18] = (ctx.gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(428)));
    ctx.gpr[19] = (ctx.gpr[6] ^ 2u);
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088E0CD4;
      }
      goto L_088E0C50;
    }
L_088E0C50:
    ctx.gpr[31] = (0x088E0C58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E0C58u) goto L_088E0C58;
    return;
L_088E0C58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0CD4;
      }
      goto L_088E0C60;
    }
L_088E0C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0CD4;
      }
      goto L_088E0C70;
    }
L_088E0C70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E0C90;
      }
      goto L_088E0C80;
    }
L_088E0C80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E0C94;
      }
      goto L_088E0C90;
    }
L_088E0C90:
    ctx.gpr[4] = (0u | 1u);
    goto L_088E0C94;
L_088E0C94:
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E0CA8u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 385u, 0x089A1B10u>(ctx, &aot_mem) && ctx.pc == 0x088E0CA8u) goto L_088E0CA8;
    return;
L_088E0CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
      if (branch_taken) {
          goto L_088E0CCC;
      }
      goto L_088E0CC0;
    }
L_088E0CC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E0CCCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x088E0CCCu) goto L_088E0CCC;
    return;
L_088E0CCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1D24;
      }
      goto L_088E0CD4;
    }
L_088E0CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0D3C;
      }
      goto L_088E0CE4;
    }
L_088E0CE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0D2C;
      }
      goto L_088E0CF4;
    }
L_088E0CF4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088E0D4C;
      }
      goto L_088E0D24;
    }
L_088E0D24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_088E0D4C;
      }
      goto L_088E0D2C;
    }
L_088E0D2C:
    ctx.gpr[31] = (0x088E0D34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 358u, 0x089ADE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0D34u) goto L_088E0D34;
    return;
L_088E0D34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1D24;
      }
      goto L_088E0D3C;
    }
L_088E0D3C:
    ctx.gpr[31] = (0x088E0D44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 358u, 0x089ADE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0D44u) goto L_088E0D44;
    return;
L_088E0D44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1D24;
      }
      goto L_088E0D4C;
    }
L_088E0D4C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088E0D84;
      }
      goto L_088E0D7C;
    }
L_088E0D7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_088E0D84;
      }
      goto L_088E0D84;
    }
L_088E0D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0DA0;
      }
      goto L_088E0D90;
    }
L_088E0D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0F28;
      }
      goto L_088E0DA0;
    }
L_088E0DA0:
    ctx.gpr[31] = (0x088E0DA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x088E0DA8u) goto L_088E0DA8;
    return;
L_088E0DA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0DE4;
      }
      goto L_088E0DB0;
    }
L_088E0DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0DE4;
      }
      goto L_088E0DBC;
    }
L_088E0DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0DE4;
      }
      goto L_088E0DCC;
    }
L_088E0DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
        goto L_088E0DEC;
    }
    goto L_088E0DDC;
L_088E0DDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0E6C;
      }
      goto L_088E0DE4;
    }
L_088E0DE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1D24;
      }
      goto L_088E0DEC;
    }
L_088E0DEC:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0E6C;
      }
      goto L_088E0DF8;
    }
L_088E0DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0E6C;
      }
      goto L_088E0E08;
    }
L_088E0E08:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E0E10;
    }
L_088E0E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E0E20;
    }
L_088E0E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E0E30;
    }
L_088E0E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E0E48;
    }
L_088E0E48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E0E58u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 717u, 0x089AFFC0u>(ctx, &aot_mem) && ctx.pc == 0x088E0E58u) goto L_088E0E58;
    return;
L_088E0E58:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E0E6C;
    }
L_088E0E6C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E0E74;
    }
L_088E0E74:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E0E7C;
    }
L_088E0E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E0EA0;
    }
L_088E0EA0:
    ctx.gpr[31] = (0x088E0EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088E0EA8u) goto L_088E0EA8;
    return;
L_088E0EA8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0EF4;
      }
      goto L_088E0EB8;
    }
L_088E0EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0EF4;
      }
      goto L_088E0ED0;
    }
L_088E0ED0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E0EE0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 717u, 0x089AFFC0u>(ctx, &aot_mem) && ctx.pc == 0x088E0EE0u) goto L_088E0EE0;
    return;
L_088E0EE0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E0EF4;
    }
L_088E0EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E0F04;
    }
L_088E0F04:
    ctx.gpr[4] = (0u | 2000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[31] = (0x088E0F20u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x088E0F20u) goto L_088E0F20;
    return;
L_088E0F20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E0F28;
    }
L_088E0F28:
    ctx.gpr[31] = (0x088E0F30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E0F30u) goto L_088E0F30;
    return;
L_088E0F30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16358u << 16u);
      if (branch_taken) {
          goto L_088E0F54;
      }
      goto L_088E0F38;
    }
L_088E0F38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E0FCC;
      }
      goto L_088E0F54;
    }
L_088E0F54:
    ctx.gpr[31] = (0x088E0F5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E0F5Cu) goto L_088E0F5C;
    return;
L_088E0F5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1380;
      }
      goto L_088E0F64;
    }
L_088E0F64:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
        goto L_088E0F78;
    }
    goto L_088E0F6C;
L_088E0F6C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1380;
      }
      goto L_088E0F74;
    }
L_088E0F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    goto L_088E0F78;
L_088E0F78:
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
        goto L_088E0F98;
    }
    goto L_088E0F84;
L_088E0F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1380;
      }
      goto L_088E0F94;
    }
L_088E0F94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    goto L_088E0F98;
L_088E0F98:
    ctx.gpr[5] = (0u | 15u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
        goto L_088E0FB4;
    }
    goto L_088E0FA4;
L_088E0FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E1380;
      }
      goto L_088E0FB0;
    }
L_088E0FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    goto L_088E0FB4;
L_088E0FB4:
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0FCC;
      }
      goto L_088E0FC0;
    }
L_088E0FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E1380;
      }
      goto L_088E0FCC;
    }
L_088E0FCC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1174;
      }
      goto L_088E0FD4;
    }
L_088E0FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E1174;
      }
      goto L_088E0FF4;
    }
L_088E0FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E1174;
      }
      goto L_088E1014;
    }
L_088E1014:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E10A4;
      }
      goto L_088E1040;
    }
L_088E1040:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088E1088u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x088E1088u) goto L_088E1088;
    return;
L_088E1088:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1098;
      }
      goto L_088E1090;
    }
L_088E1090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
      if (branch_taken) {
          goto L_088E109C;
      }
      goto L_088E1098;
    }
L_088E1098:
    ctx.gpr[18] = (0u | 23u);
    goto L_088E109C;
L_088E109C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1120;
      }
      goto L_088E10A4;
    }
L_088E10A4:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x088E110Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x088E110Cu) goto L_088E110C;
    return;
L_088E110C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E111C;
      }
      goto L_088E1114;
    }
L_088E1114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 28u);
      if (branch_taken) {
          goto L_088E1120;
      }
      goto L_088E111C;
    }
L_088E111C:
    ctx.gpr[18] = (0u | 24u);
    goto L_088E1120;
L_088E1120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1158;
      }
      goto L_088E1130;
    }
L_088E1130:
    ctx.gpr[31] = (0x088E1138u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x088E1138u) goto L_088E1138;
    return;
L_088E1138:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1158;
      }
      goto L_088E1140;
    }
L_088E1140:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 49u);
    ctx.gpr[31] = (0x088E1158u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1158u) goto L_088E1158;
    return;
L_088E1158:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 3000u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E116Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 106u, 0x089A07E8u>(ctx, &aot_mem) && ctx.pc == 0x088E116Cu) goto L_088E116C;
    return;
L_088E116C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1174;
    }
L_088E1174:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1224;
      }
      goto L_088E117C;
    }
L_088E117C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E1224;
      }
      goto L_088E11A8;
    }
L_088E11A8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x088E11F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x088E11F0u) goto L_088E11F0;
    return;
L_088E11F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1210;
      }
      goto L_088E1200;
    }
L_088E1200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1218;
      }
      goto L_088E1210;
    }
L_088E1210:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 30u);
      if (branch_taken) {
          goto L_088E121C;
      }
      goto L_088E1218;
    }
L_088E1218:
    ctx.gpr[18] = (0u | 34u);
    goto L_088E121C;
L_088E121C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E12F4;
      }
      goto L_088E1224;
    }
L_088E1224:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E12C8;
      }
      goto L_088E122C;
    }
L_088E122C:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x088E1294u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x088E1294u) goto L_088E1294;
    return;
L_088E1294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E12B4;
      }
      goto L_088E12A4;
    }
L_088E12A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E12BC;
      }
      goto L_088E12B4;
    }
L_088E12B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 32u);
      if (branch_taken) {
          goto L_088E12C0;
      }
      goto L_088E12BC;
    }
L_088E12BC:
    ctx.gpr[18] = (0u | 36u);
    goto L_088E12C0;
L_088E12C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E12F4;
      }
      goto L_088E12C8;
    }
L_088E12C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E12E8;
      }
      goto L_088E12D8;
    }
L_088E12D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E12F0;
      }
      goto L_088E12E8;
    }
L_088E12E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 31u);
      if (branch_taken) {
          goto L_088E12F4;
      }
      goto L_088E12F0;
    }
L_088E12F0:
    ctx.gpr[18] = (0u | 35u);
    goto L_088E12F4;
L_088E12F4:
    ctx.gpr[31] = (0x088E12FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x088E12FCu) goto L_088E12FC;
    return;
L_088E12FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1304;
    }
L_088E1304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E131C;
    }
L_088E131C:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E1334u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088E1334u) goto L_088E1334;
    return;
L_088E1334:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1360;
    }
L_088E1360:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 49u);
    ctx.gpr[31] = (0x088E1378u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1378u) goto L_088E1378;
    return;
L_088E1378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1380;
    }
L_088E1380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E13A0;
      }
      goto L_088E1390;
    }
L_088E1390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E15E8;
      }
      goto L_088E13A0;
    }
L_088E13A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E140C;
      }
      goto L_088E13AC;
    }
L_088E13AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
        goto L_088E13CC;
    }
    goto L_088E13B8;
L_088E13B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E140C;
      }
      goto L_088E13C8;
    }
L_088E13C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    goto L_088E13CC;
L_088E13CC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E140C;
      }
      goto L_088E13E0;
    }
L_088E13E0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E13E8;
    }
L_088E13E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E13F8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 717u, 0x089AFFC0u>(ctx, &aot_mem) && ctx.pc == 0x088E13F8u) goto L_088E13F8;
    return;
L_088E13F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E140C;
    }
L_088E140C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1414;
    }
L_088E1414:
    ctx.gpr[31] = (0x088E141Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x088E141Cu) goto L_088E141C;
    return;
L_088E141C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1424;
    }
L_088E1424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1434;
    }
L_088E1434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1538;
      }
      goto L_088E1458;
    }
L_088E1458:
    ctx.gpr[31] = (0x088E1460u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E1460u) goto L_088E1460;
    return;
L_088E1460:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1538;
      }
      goto L_088E1468;
    }
L_088E1468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1538;
      }
      goto L_088E1480;
    }
L_088E1480:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088E1494u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1494u) goto L_088E1494;
    return;
L_088E1494:
    ctx.gpr[31] = (0x088E149Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A000Cu>(ctx, &aot_mem) && ctx.pc == 0x088E149Cu) goto L_088E149C;
    return;
L_088E149C:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E14B4u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088E14B4u) goto L_088E14B4;
    return;
L_088E14B4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E14D4;
    }
L_088E14D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[6]);
    ctx.gpr[31] = (0x088E1518u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 349u, 0x0899E234u>(ctx, &aot_mem) && ctx.pc == 0x088E1518u) goto L_088E1518;
    return;
L_088E1518:
    ctx.gpr[6] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[31] = (0x088E1530u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 678u, 0x088DAFC4u>(ctx, &aot_mem) && ctx.pc == 0x088E1530u) goto L_088E1530;
    return;
L_088E1530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1538;
    }
L_088E1538:
    ctx.gpr[31] = (0x088E1540u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E1540u) goto L_088E1540;
    return;
L_088E1540:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1598;
      }
      goto L_088E1548;
    }
L_088E1548:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1248)));
        goto L_088E1588;
    }
    goto L_088E1574;
L_088E1574:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1588;
    }
L_088E1588:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1598;
    }
L_088E1598:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
        goto L_088E15D8;
    }
    goto L_088E15C4;
L_088E15C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E15D8;
    }
L_088E15D8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E15E8;
    }
L_088E15E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1600;
    }
L_088E1600:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1764;
      }
      goto L_088E1608;
    }
L_088E1608:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1620;
      }
      goto L_088E1610;
    }
L_088E1610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1764;
      }
      goto L_088E1620;
    }
L_088E1620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E16E4;
      }
      goto L_088E1638;
    }
L_088E1638:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E16E4;
      }
      goto L_088E165C;
    }
L_088E165C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E16E4;
      }
      goto L_088E166C;
    }
L_088E166C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E16E4;
      }
      goto L_088E167C;
    }
L_088E167C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E16E4;
      }
      goto L_088E168C;
    }
L_088E168C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E16E4;
      }
      goto L_088E16B0;
    }
L_088E16B0:
    ctx.gpr[31] = (0x088E16B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A000Cu>(ctx, &aot_mem) && ctx.pc == 0x088E16B8u) goto L_088E16B8;
    return;
L_088E16B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E16C4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 228u, 0x088D91E4u>(ctx, &aot_mem) && ctx.pc == 0x088E16C4u) goto L_088E16C4;
    return;
L_088E16C4:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E16FC;
      }
      goto L_088E16E4;
    }
L_088E16E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E16F0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 678u, 0x089A7F9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E16F0u) goto L_088E16F0;
    return;
L_088E16F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E16FCu);
    ctx.gpr[5] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x088E16FCu) goto L_088E16FC;
    return;
L_088E16FC:
    ctx.gpr[31] = (0x088E1704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088E1704u) goto L_088E1704;
    return;
L_088E1704:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21580)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21576)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E171Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x088E171Cu) goto L_088E171C;
    return;
L_088E171C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21588)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21584)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1764;
    }
L_088E1764:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E197C;
      }
      goto L_088E176C;
    }
L_088E176C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E178C;
      }
      goto L_088E177C;
    }
L_088E177C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E197C;
      }
      goto L_088E178C;
    }
L_088E178C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1958;
      }
      goto L_088E179C;
    }
L_088E179C:
    ctx.gpr[31] = (0x088E17A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E17A4u) goto L_088E17A4;
    return;
L_088E17A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E17D0;
      }
      goto L_088E17AC;
    }
L_088E17AC:
    ctx.gpr[31] = (0x088E17B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E17B4u) goto L_088E17B4;
    return;
L_088E17B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1958;
      }
      goto L_088E17BC;
    }
L_088E17BC:
    ctx.gpr[31] = (0x088E17C4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088E17C4u) goto L_088E17C4;
    return;
L_088E17C4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1958;
      }
      goto L_088E17D0;
    }
L_088E17D0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[7]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E18EC;
      }
      goto L_088E18C0;
    }
L_088E18C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16320u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E1920;
      }
      goto L_088E18EC;
    }
L_088E18EC:
    ctx.gpr[4] = (0u | 500u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088E1908u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x088E1908u) goto L_088E1908;
    return;
L_088E1908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E1950;
      }
      goto L_088E1920;
    }
L_088E1920:
    ctx.gpr[4] = (0u | 1000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088E193Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x088E193Cu) goto L_088E193C;
    return;
L_088E193C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    goto L_088E1950;
L_088E1950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1958;
    }
L_088E1958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1968;
    }
L_088E1968:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E1974u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 678u, 0x089A7F9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1974u) goto L_088E1974;
    return;
L_088E1974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E197C;
    }
L_088E197C:
    ctx.gpr[31] = (0x088E1984u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1984u) goto L_088E1984;
    return;
L_088E1984:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088E1C38;
      }
      goto L_088E198C;
    }
L_088E198C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
        goto L_088E19B0;
    }
    goto L_088E199C;
L_088E199C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1C38;
      }
      goto L_088E19AC;
    }
L_088E19AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    goto L_088E19B0;
L_088E19B0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E1C38;
      }
      goto L_088E19B8;
    }
L_088E19B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1C24;
      }
      goto L_088E19C8;
    }
L_088E19C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088E19E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850DACu>(ctx, &aot_mem) && ctx.pc == 0x088E19E4u) goto L_088E19E4;
    return;
L_088E19E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C24;
      }
      goto L_088E19EC;
    }
L_088E19EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1C24;
      }
      goto L_088E19FC;
    }
L_088E19FC:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088E1A60;
      }
      goto L_088E1A14;
    }
L_088E1A14:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3160)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E1A34;
      }
      goto L_088E1A28;
    }
L_088E1A28:
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
      if (branch_taken) {
          goto L_088E1A50;
      }
      goto L_088E1A34;
    }
L_088E1A34:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3160)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E1A50;
      }
      goto L_088E1A48;
    }
L_088E1A48:
    ctx.gpr[20] = (ctx.gpr[4] << 16u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    goto L_088E1A50;
L_088E1A50:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1A14;
      }
      goto L_088E1A60;
    }
L_088E1A60:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[7]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088E1ACCu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 57u, 0x088D4550u>(ctx, &aot_mem) && ctx.pc == 0x088E1ACCu) goto L_088E1ACC;
    return;
L_088E1ACC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088E1B48;
    }
    goto L_088E1B48;
L_088E1B48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088E1BE4;
      }
      goto L_088E1B50;
    }
L_088E1B50:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1BE4;
      }
      goto L_088E1B58;
    }
L_088E1B58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088E1B94;
      }
      goto L_088E1B60;
    }
L_088E1B60:
    ctx.gpr[4] = (0u | 300u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088E1B7Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x088E1B7Cu) goto L_088E1B7C;
    return;
L_088E1B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E1C1C;
      }
      goto L_088E1B94;
    }
L_088E1B94:
    ctx.gpr[31] = (0x088E1B9Cu);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1B9Cu) goto L_088E1B9C;
    return;
L_088E1B9C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088E1C1C;
      }
      goto L_088E1BA4;
    }
L_088E1BA4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E1BB0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 298u, 0x089454A4u>(ctx, &aot_mem) && ctx.pc == 0x088E1BB0u) goto L_088E1BB0;
    return;
L_088E1BB0:
    ctx.gpr[4] = (0u | 500u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088E1BCCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x088E1BCCu) goto L_088E1BCC;
    return;
L_088E1BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E1C1C;
      }
      goto L_088E1BE4;
    }
L_088E1BE4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C1C;
      }
      goto L_088E1BEC;
    }
L_088E1BEC:
    ctx.gpr[4] = (0u | 300u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088E1C08u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x088E1C08u) goto L_088E1C08;
    return;
L_088E1C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    goto L_088E1C1C;
L_088E1C1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1C24;
    }
L_088E1C24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E1C30u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 678u, 0x089A7F9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1C30u) goto L_088E1C30;
    return;
L_088E1C30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1C38;
    }
L_088E1C38:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CD4;
      }
      goto L_088E1C40;
    }
L_088E1C40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CD4;
      }
      goto L_088E1C64;
    }
L_088E1C64:
    ctx.gpr[31] = (0x088E1C6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E1C6Cu) goto L_088E1C6C;
    return;
L_088E1C6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C90;
      }
      goto L_088E1C74;
    }
L_088E1C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C90;
      }
      goto L_088E1C80;
    }
L_088E1C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1CBC;
      }
      goto L_088E1C90;
    }
L_088E1C90:
    ctx.gpr[31] = (0x088E1C98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E1C98u) goto L_088E1C98;
    return;
L_088E1C98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CD4;
      }
      goto L_088E1CA0;
    }
L_088E1CA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E1CD4;
      }
      goto L_088E1CBC;
    }
L_088E1CBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E1CCCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 717u, 0x089AFFC0u>(ctx, &aot_mem) && ctx.pc == 0x088E1CCCu) goto L_088E1CCC;
    return;
L_088E1CCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1CD4;
    }
L_088E1CD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E1CE0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 678u, 0x089A7F9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1CE0u) goto L_088E1CE0;
    return;
L_088E1CE0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CF4;
      }
      goto L_088E1CE8;
    }
L_088E1CE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E1CF4u);
    ctx.gpr[5] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x088E1CF4u) goto L_088E1CF4;
    return;
L_088E1CF4:
    ctx.gpr[31] = (0x088E1CFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E1CFCu) goto L_088E1CFC;
    return;
L_088E1CFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1D24;
      }
      goto L_088E1D04;
    }
L_088E1D04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E1D18u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1D18u) goto L_088E1D18;
    return;
L_088E1D18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E1D24u);
    ctx.gpr[5] = (0u | 800u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1D24u) goto L_088E1D24;
    return;
L_088E1D24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E1D48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1008));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(940), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(960), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(964), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (0u | 42u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(948), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(952), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(956), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(968), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(972), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(976), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(980), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(984), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(992), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(996), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[16];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088E1DB0;
      }
      goto L_088E1DA0;
    }
L_088E1DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[21] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088E1DD8;
      }
      goto L_088E1DB0;
    }
L_088E1DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1412)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1DCC;
      }
      goto L_088E1DBC;
    }
L_088E1DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1DD0;
      }
      goto L_088E1DCC;
    }
L_088E1DCC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1412), ctx.gpr[18]);
    goto L_088E1DD0;
L_088E1DD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2CC4;
      }
      goto L_088E1DD8;
    }
L_088E1DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[22] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088E1DFC;
      }
      goto L_088E1DE8;
    }
L_088E1DE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1296)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1296)));
        goto L_088E1E04;
    }
    goto L_088E1DF4;
L_088E1DF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1E44;
      }
      goto L_088E1DFC;
    }
L_088E1DFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2CC4;
      }
      goto L_088E1E04;
    }
L_088E1E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1E44;
      }
      goto L_088E1E20;
    }
L_088E1E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1296)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1E90;
      }
      goto L_088E1E34;
    }
L_088E1E34:
    ctx.gpr[31] = (0x088E1E3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E1E3Cu) goto L_088E1E3C;
    return;
L_088E1E3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1E88;
      }
      goto L_088E1E44;
    }
L_088E1E44:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(916), ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(920), ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E1EA4;
      }
      goto L_088E1E80;
    }
L_088E1E80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
      if (branch_taken) {
          goto L_088E1E98;
      }
      goto L_088E1E88;
    }
L_088E1E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2CC4;
      }
      goto L_088E1E90;
    }
L_088E1E90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2CC4;
      }
      goto L_088E1E98;
    }
L_088E1E98:
    ctx.gpr[5] = (0u | 197u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E29E8;
      }
      goto L_088E1EA4;
    }
L_088E1EA4:
    ctx.gpr[31] = (0x088E1EACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E1EACu) goto L_088E1EAC;
    return;
L_088E1EAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E29E8;
      }
      goto L_088E1EB4;
    }
L_088E1EB4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088E1EC0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(924), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088E1EC0u) goto L_088E1EC0;
    return;
L_088E1EC0:
    ctx.gpr[30] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (0u | 39u);
    ctx.gpr[30] = (ctx.gpr[30] & 3u);
    ctx.gpr[31] = (0x088E1ED4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(928), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x088E1ED4u) goto L_088E1ED4;
    return;
L_088E1ED4:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 197u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    ctx.gpr[22] = (2229u << 16u);
      if (branch_taken) {
          goto L_088E1F94;
      }
      goto L_088E1EFC;
    }
L_088E1EFC:
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17658u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[16];
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088E1F54;
    }
    goto L_088E1F54;
L_088E1F54:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 40000u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(932), ctx.gpr[20]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x088E1F7Cu);
    ctx.gpr[20] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088E1F7Cu) goto L_088E1F7C;
    return;
L_088E1F7C:
    ctx.gpr[5] = (ctx.gpr[20] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E1F90u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 656u, 0x08A96CF8u>(ctx, &aot_mem) && ctx.pc == 0x088E1F90u) goto L_088E1F90;
    return;
L_088E1F90:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(932)));
    goto L_088E1F94;
L_088E1F94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x088E1FC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 349u, 0x0899E234u>(ctx, &aot_mem) && ctx.pc == 0x088E1FC8u) goto L_088E1FC8;
    return;
L_088E1FC8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(920)));
      if (branch_taken) {
          goto L_088E20A8;
      }
      goto L_088E201C;
    }
L_088E201C:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 40u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(924), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(928), ctx.gpr[5]);
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088E2074;
      }
      goto L_088E206C;
    }
L_088E206C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E2078;
      }
      goto L_088E2074;
    }
L_088E2074:
    ctx.gpr[19] = (0u | 2u);
    goto L_088E2078;
L_088E2078:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E20A0;
      }
      goto L_088E2088;
    }
L_088E2088:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 165u);
    ctx.gpr[31] = (0x088E20A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088E20A0u) goto L_088E20A0;
    return;
L_088E20A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E27A4;
      }
      goto L_088E20A8;
    }
L_088E20A8:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E27A4;
      }
      goto L_088E20D0;
    }
L_088E20D0:
    ctx.gpr[5] = (16253u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[5] | 28836u);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
        goto L_088E20F0;
    }
    goto L_088E20F0;
L_088E20F0:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E2204;
      }
      goto L_088E2100;
    }
L_088E2100:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E211C;
      }
      goto L_088E2110;
    }
L_088E2110:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(924), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E2124;
      }
      goto L_088E211C;
    }
L_088E211C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(924), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E2124;
L_088E2124:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E27A4;
      }
      goto L_088E2180;
    }
L_088E2180:
    ctx.gpr[4] = (0u | 40u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(928), ctx.gpr[4]);
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088E21D0;
      }
      goto L_088E21C8;
    }
L_088E21C8:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E21D4;
      }
      goto L_088E21D0;
    }
L_088E21D0:
    ctx.gpr[19] = (0u | 2u);
    goto L_088E21D4;
L_088E21D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E21FC;
      }
      goto L_088E21E4;
    }
L_088E21E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 165u);
    ctx.gpr[31] = (0x088E21FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088E21FCu) goto L_088E21FC;
    return;
L_088E21FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E27A4;
      }
      goto L_088E2204;
    }
L_088E2204:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_088E222C;
      }
      goto L_088E2220;
    }
L_088E2220:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
        goto L_088E2238;
    }
    goto L_088E222C;
L_088E222C:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2724;
      }
      goto L_088E2234;
    }
L_088E2234:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    goto L_088E2238;
L_088E2238:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(924), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (48716u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[6] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_088E2314;
      }
      goto L_088E22AC;
    }
L_088E22AC:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(936), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088E2438;
      }
      goto L_088E2314;
    }
L_088E2314:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E23E4;
      }
      goto L_088E2328;
    }
L_088E2328:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(932), ctx.gpr[16]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088E2344u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 58u, 0x088D4568u>(ctx, &aot_mem) && ctx.pc == 0x088E2344u) goto L_088E2344;
    return;
L_088E2344:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(920)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088E2354u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 56u, 0x088D4538u>(ctx, &aot_mem) && ctx.pc == 0x088E2354u) goto L_088E2354;
    return;
L_088E2354:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088E2368u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 58u, 0x088D4568u>(ctx, &aot_mem) && ctx.pc == 0x088E2368u) goto L_088E2368;
    return;
L_088E2368:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(932)));
      if (branch_taken) {
          goto L_088E23DC;
      }
      goto L_088E23A0;
    }
L_088E23A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_088E23DC;
L_088E23DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(936), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088E2438;
      }
      goto L_088E23E4;
    }
L_088E23E4:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(936), ctx.gpr[17]);
    goto L_088E2438;
L_088E2438:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(932), ctx.gpr[16]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[20] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[31] = (0x088E246Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088E246Cu) goto L_088E246C;
    return;
L_088E246C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[31] = (0x088E2478u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 528u, 0x08AF68D0u>(ctx, &aot_mem) && ctx.pc == 0x088E2478u) goto L_088E2478;
    return;
L_088E2478:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21592)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088E2490u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x088E2490u) goto L_088E2490;
    return;
L_088E2490:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21604)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21600)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088E24A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x088E24A8u) goto L_088E24A8;
    return;
L_088E24A8:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E24B8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x088E24B8u) goto L_088E24B8;
    return;
L_088E24B8:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088E24CCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x088E24CCu) goto L_088E24CC;
    return;
L_088E24CC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088E24D8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x088E24D8u) goto L_088E24D8;
    return;
L_088E24D8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(932)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(936)));
      if (branch_taken) {
          goto L_088E2550;
      }
      goto L_088E2544;
    }
L_088E2544:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E256C;
      }
      goto L_088E2550;
    }
L_088E2550:
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E2578;
      }
      goto L_088E256C;
    }
L_088E256C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E2578;
L_088E2578:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2594;
      }
      goto L_088E2590;
    }
L_088E2590:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    goto L_088E2594;
L_088E2594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E26F8;
      }
      goto L_088E25B0;
    }
L_088E25B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(912), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088E26F8;
      }
      goto L_088E25BC;
    }
L_088E25BC:
    ctx.gpr[31] = (0x088E25C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 476u, 0x0880B82Cu>(ctx, &aot_mem) && ctx.pc == 0x088E25C4u) goto L_088E25C4;
    return;
L_088E25C4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(912)));
      if (branch_taken) {
          goto L_088E26F8;
      }
      goto L_088E25D0;
    }
L_088E25D0:
    ctx.gpr[31] = (0x088E25D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088E25D8u) goto L_088E25D8;
    return;
L_088E25D8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_088E2658;
      }
      goto L_088E25F0;
    }
L_088E25F0:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E26B8;
      }
      goto L_088E2658;
    }
L_088E2658:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088E26B8;
L_088E26B8:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088E26F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x088E26F8u) goto L_088E26F8;
    return;
L_088E26F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(920)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E27A4;
      }
      goto L_088E2724;
    }
L_088E2724:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 40u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(924), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(928), ctx.gpr[5]);
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088E2778;
      }
      goto L_088E2770;
    }
L_088E2770:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E277C;
      }
      goto L_088E2778;
    }
L_088E2778:
    ctx.gpr[19] = (0u | 2u);
    goto L_088E277C;
L_088E277C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E27A4;
      }
      goto L_088E278C;
    }
L_088E278C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 165u);
    ctx.gpr[31] = (0x088E27A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088E27A4u) goto L_088E27A4;
    return;
L_088E27A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_088E2818;
      }
      goto L_088E27C0;
    }
L_088E27C0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2818;
      }
      goto L_088E27D0;
    }
L_088E27D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E2800;
      }
      goto L_088E27E0;
    }
L_088E27E0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E27F8u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 556u, 0x08A927F0u>(ctx, &aot_mem) && ctx.pc == 0x088E27F8u) goto L_088E27F8;
    return;
L_088E27F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2818;
      }
      goto L_088E2800;
    }
L_088E2800:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E2818u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 556u, 0x08A927F0u>(ctx, &aot_mem) && ctx.pc == 0x088E2818u) goto L_088E2818;
    return;
L_088E2818:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
        goto L_088E285C;
    }
    goto L_088E2828;
L_088E2828:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E28C0;
      }
      goto L_088E2838;
    }
L_088E2838:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(928)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[31] = (0x088E2854u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x088E2854u) goto L_088E2854;
    return;
L_088E2854:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E28DC;
      }
      goto L_088E285C;
    }
L_088E285C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E289C;
      }
      goto L_088E2868;
    }
L_088E2868:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E28C0;
      }
      goto L_088E2878;
    }
L_088E2878:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(928)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[31] = (0x088E2894u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x088E2894u) goto L_088E2894;
    return;
L_088E2894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E28DC;
      }
      goto L_088E289C;
    }
L_088E289C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(928)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x088E28B8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x088E28B8u) goto L_088E28B8;
    return;
L_088E28B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E28DC;
      }
      goto L_088E28C0;
    }
L_088E28C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(928)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x088E28DCu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x088E28DCu) goto L_088E28DC;
    return;
L_088E28DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
        goto L_088E2900;
    }
    goto L_088E28EC;
L_088E28EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E2920;
      }
      goto L_088E28FC;
    }
L_088E28FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    goto L_088E2900;
L_088E2900:
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2920;
      }
      goto L_088E2910;
    }
L_088E2910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1412)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2920;
      }
      goto L_088E291C;
    }
L_088E291C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1412), ctx.gpr[18]);
    goto L_088E2920;
L_088E2920:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E2944;
      }
      goto L_088E2930;
    }
L_088E2930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E2958;
      }
      goto L_088E2944;
    }
L_088E2944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_088E2958;
L_088E2958:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (17583u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_088E299C;
    }
    goto L_088E299C;
L_088E299C:
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x088E29D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x088E29D4u) goto L_088E29D4;
    return;
L_088E29D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E29E0u);
    ctx.gpr[5] = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x088E29E0u) goto L_088E29E0;
    return;
L_088E29E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2C7C;
      }
      goto L_088E29E8;
    }
L_088E29E8:
    ctx.gpr[4] = (48972u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16576u << 16u);
      if (branch_taken) {
          goto L_088E2A24;
      }
      goto L_088E2A08;
    }
L_088E2A08:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
        goto L_088E2A60;
    }
    goto L_088E2A20;
L_088E2A20:
    ctx.gpr[4] = (16576u << 16u);
    goto L_088E2A24;
L_088E2A24:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E2C7C;
      }
      goto L_088E2A38;
    }
L_088E2A38:
    ctx.gpr[31] = (0x088E2A40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E2A40u) goto L_088E2A40;
    return;
L_088E2A40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16672u << 16u);
      if (branch_taken) {
          goto L_088E2A5C;
      }
      goto L_088E2A48;
    }
L_088E2A48:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E2C7C;
      }
      goto L_088E2A5C;
    }
L_088E2A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    goto L_088E2A60;
L_088E2A60:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088E2A90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 349u, 0x0899E234u>(ctx, &aot_mem) && ctx.pc == 0x088E2A90u) goto L_088E2A90;
    return;
L_088E2A90:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E2A9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E2A9Cu) goto L_088E2A9C;
    return;
L_088E2A9C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 197u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_088E2AE4;
      }
      goto L_088E2AB0;
    }
L_088E2AB0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E2AE4;
      }
      goto L_088E2ABC;
    }
L_088E2ABC:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (17174u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 39u);
    ctx.gpr[31] = (0x088E2ADCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x088E2ADCu) goto L_088E2ADC;
    return;
L_088E2ADC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2B04;
      }
      goto L_088E2AE4;
    }
L_088E2AE4:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (16880u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 39u);
    ctx.gpr[31] = (0x088E2B04u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x088E2B04u) goto L_088E2B04;
    return;
L_088E2B04:
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(25));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x088E2B18u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 106u, 0x089A07E8u>(ctx, &aot_mem) && ctx.pc == 0x088E2B18u) goto L_088E2B18;
    return;
L_088E2B18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[4] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1412)));
        goto L_088E2B40;
    }
    goto L_088E2B24;
L_088E2B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[4] == ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1412)));
        goto L_088E2B40;
    }
    goto L_088E2B30;
L_088E2B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088E2B8C;
      }
      goto L_088E2B3C;
    }
L_088E2B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1412)));
    goto L_088E2B40;
L_088E2B40:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2B8C;
      }
      goto L_088E2B48;
    }
L_088E2B48:
    ctx.gpr[31] = (0x088E2B50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E2B50u) goto L_088E2B50;
    return;
L_088E2B50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2B88;
      }
      goto L_088E2B58;
    }
L_088E2B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2B88;
      }
      goto L_088E2B68;
    }
L_088E2B68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E2B88;
      }
      goto L_088E2B74;
    }
L_088E2B74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(312)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E2B8C;
      }
      goto L_088E2B88;
    }
L_088E2B88:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1412), ctx.gpr[18]);
    goto L_088E2B8C;
L_088E2B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E2BEC;
      }
      goto L_088E2BAC;
    }
L_088E2BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2BEC;
      }
      goto L_088E2BBC;
    }
L_088E2BBC:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
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
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088E2BEC;
L_088E2BEC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (17583u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088E2C38;
    }
    goto L_088E2C38;
L_088E2C38:
    ctx.gpr[5] = (49776u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[31] = (0x088E2C70u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x088E2C70u) goto L_088E2C70;
    return;
L_088E2C70:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E2C7Cu);
    ctx.gpr[5] = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x088E2C7Cu) goto L_088E2C7C;
    return;
L_088E2C7C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2CC4;
      }
      goto L_088E2C8C;
    }
L_088E2C8C:
    ctx.gpr[31] = (0x088E2C94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 845u, 0x089A38C0u>(ctx, &aot_mem) && ctx.pc == 0x088E2C94u) goto L_088E2C94;
    return;
L_088E2C94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2CC4;
      }
      goto L_088E2C9C;
    }
L_088E2C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2CC4;
      }
      goto L_088E2CA8;
    }
L_088E2CA8:
    ctx.gpr[31] = (0x088E2CB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E2CB0u) goto L_088E2CB0;
    return;
L_088E2CB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2CC4;
      }
      goto L_088E2CB8;
    }
L_088E2CB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x088E2CC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 412u, 0x08899988u>(ctx, &aot_mem) && ctx.pc == 0x088E2CC4u) goto L_088E2CC4;
    return;
L_088E2CC4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(940)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(944)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(948)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(952)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(956)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(960)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(964)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(968)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(972)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(976)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(980)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(996)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2D08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 2048u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2D7C;
      }
      goto L_088E2D60;
    }
L_088E2D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E2D84;
      }
      goto L_088E2D74;
    }
L_088E2D74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3A58;
      }
      goto L_088E2D7C;
    }
L_088E2D7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 6u, 0x088E4028u>(ctx, &aot_mem); return;
      }
      goto L_088E2D84;
    }
L_088E2D84:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x088E2DA8u);
    ctx.gpr[5] = (0u | 185u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E2DA8u) goto L_088E2DA8;
    return;
L_088E2DA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E2DB8u);
    ctx.gpr[5] = (0u | 186u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E2DB8u) goto L_088E2DB8;
    return;
L_088E2DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E2DC8u);
    ctx.gpr[5] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E2DC8u) goto L_088E2DC8;
    return;
L_088E2DC8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E2DD4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E2DD4u) goto L_088E2DD4;
    return;
L_088E2DD4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E2E00;
      }
      goto L_088E2DE0;
    }
L_088E2DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E2DECu);
    ctx.gpr[5] = (0u | 188u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E2DECu) goto L_088E2DEC;
    return;
L_088E2DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E2DFCu);
    ctx.gpr[5] = (0u | 187u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E2DFCu) goto L_088E2DFC;
    return;
L_088E2DFC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_088E2E00;
L_088E2E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E2E0Cu);
    ctx.gpr[5] = (0u | 189u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E2E0Cu) goto L_088E2E0C;
    return;
L_088E2E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E2E1Cu);
    ctx.gpr[5] = (0u | 197u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E2E1Cu) goto L_088E2E1C;
    return;
L_088E2E1C:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2E38;
      }
      goto L_088E2E28;
    }
L_088E2E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E2E34u);
    ctx.gpr[5] = (0u | 198u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E2E34u) goto L_088E2E34;
    return;
L_088E2E34:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    goto L_088E2E38;
L_088E2E38:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2E50;
      }
      goto L_088E2E40;
    }
L_088E2E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E2E4Cu);
    ctx.gpr[5] = (0u | 199u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E2E4Cu) goto L_088E2E4C;
    return;
L_088E2E4C:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    goto L_088E2E50;
L_088E2E50:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15800u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E2EE0;
      }
      goto L_088E2E9C;
    }
L_088E2E9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 44u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E2EB4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 95u, 0x08A408F0u>(ctx, &aot_mem) && ctx.pc == 0x088E2EB4u) goto L_088E2EB4;
    return;
L_088E2EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2ED8;
      }
      goto L_088E2EC0;
    }
L_088E2EC0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 44u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E2ED8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 95u, 0x08A408F0u>(ctx, &aot_mem) && ctx.pc == 0x088E2ED8u) goto L_088E2ED8;
    return;
L_088E2ED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 6u, 0x088E4028u>(ctx, &aot_mem); return;
      }
      goto L_088E2EE0;
    }
L_088E2EE0:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2F60;
      }
      goto L_088E2EE8;
    }
L_088E2EE8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E2F60;
      }
      goto L_088E2F08;
    }
L_088E2F08:
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E2F3C;
      }
      goto L_088E2F14;
    }
L_088E2F14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088E31E8;
      }
      goto L_088E2F28;
    }
L_088E2F28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088E31E8;
      }
      goto L_088E2F3C;
    }
L_088E2F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (16384u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1012)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x088E2F58u);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088E2F58u) goto L_088E2F58;
    return;
L_088E2F58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E31E8;
      }
      goto L_088E2F60;
    }
L_088E2F60:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088E3194;
      }
      goto L_088E2F70;
    }
L_088E2F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (16480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3000;
      }
      goto L_088E2F94;
    }
L_088E2F94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1445)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088E2FBC;
      }
      goto L_088E2FA0;
    }
L_088E2FA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3000;
      }
      goto L_088E2FBC;
    }
L_088E2FBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 44u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E2FD4u);
    ctx.gpr[8] = (0u | 0u);
    if (lcs::trainer_keep_on_bike()) goto L_088E2FD4;
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 95u, 0x08A408F0u>(ctx, &aot_mem) && ctx.pc == 0x088E2FD4u) goto L_088E2FD4;
    return;
L_088E2FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2FF8;
      }
      goto L_088E2FE0;
    }
L_088E2FE0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 44u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E2FF8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 95u, 0x08A408F0u>(ctx, &aot_mem) && ctx.pc == 0x088E2FF8u) goto L_088E2FF8;
    return;
L_088E2FF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 6u, 0x088E4028u>(ctx, &aot_mem); return;
      }
      goto L_088E3000;
    }
L_088E3000:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.gpr[4] = (49024u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E30C8;
      }
      goto L_088E3018;
    }
L_088E3018:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    ctx.gpr[31] = (0x088E3024u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x088E3024u) goto L_088E3024;
    return;
L_088E3024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E303Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x088E303Cu) goto L_088E303C;
    return;
L_088E303C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21604)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21600)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088E3054u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x088E3054u) goto L_088E3054;
    return;
L_088E3054:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088E3068u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x088E3068u) goto L_088E3068;
    return;
L_088E3068:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088E30C8;
      }
      goto L_088E3074;
    }
L_088E3074:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E30A4;
      }
      goto L_088E307C;
    }
L_088E307C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088E31E8;
      }
      goto L_088E3090;
    }
L_088E3090:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088E31E8;
      }
      goto L_088E30A4;
    }
L_088E30A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1012)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x088E30C0u);
    ctx.gpr[6] = (0u | 189u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088E30C0u) goto L_088E30C0;
    return;
L_088E30C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E31E8;
      }
      goto L_088E30C8;
    }
L_088E30C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088E30D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E30D4u) goto L_088E30D4;
    return;
L_088E30D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3140;
      }
      goto L_088E30DC;
    }
L_088E30DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088E30ECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x088E30ECu) goto L_088E30EC;
    return;
L_088E30EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E3104u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x088E3104u) goto L_088E3104;
    return;
L_088E3104:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21604)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21600)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088E311Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x088E311Cu) goto L_088E311C;
    return;
L_088E311C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088E3130u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x088E3130u) goto L_088E3130;
    return;
L_088E3130:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088E3140;
      }
      goto L_088E313C;
    }
L_088E313C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088E3140;
L_088E3140:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3168;
      }
      goto L_088E3148;
    }
L_088E3148:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3168;
      }
      goto L_088E315C;
    }
L_088E315C:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E3168;
L_088E3168:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E31E8;
      }
      goto L_088E3170;
    }
L_088E3170:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E31E8;
      }
      goto L_088E3184;
    }
L_088E3184:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E31E8;
      }
      goto L_088E3194;
    }
L_088E3194:
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E31C0;
      }
      goto L_088E31A0;
    }
L_088E31A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E31C0;
      }
      goto L_088E31B4;
    }
L_088E31B4:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E31C0;
L_088E31C0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E31E8;
      }
      goto L_088E31C8;
    }
L_088E31C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E31E8;
      }
      goto L_088E31DC;
    }
L_088E31DC:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E31E8;
L_088E31E8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088E3224;
      }
      goto L_088E31F0;
    }
L_088E31F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8120)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[28] = ctx.fpr[28] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
        goto L_088E3220;
    }
    goto L_088E3220;
L_088E3220:
    ctx.fpr[28] = ctx.fpr[30] - ctx.fpr[28];
    goto L_088E3224;
L_088E3224:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088E3260;
      }
      goto L_088E322C;
    }
L_088E322C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8120)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_088E325C;
    }
    goto L_088E325C;
L_088E325C:
    ctx.fpr[28] = ctx.fpr[28] - ctx.fpr[12];
    goto L_088E3260;
L_088E3260:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088E329C;
      }
      goto L_088E3268;
    }
L_088E3268:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8120)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_088E3298;
    }
    goto L_088E3298;
L_088E3298:
    ctx.fpr[28] = ctx.fpr[28] - ctx.fpr[12];
    goto L_088E329C;
L_088E329C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1008)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[26])) && ctx.fpr[24] == ctx.fpr[26]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1308)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_088E32BC;
      }
      goto L_088E32B8;
    }
L_088E32B8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088E32BC;
L_088E32BC:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E32D4;
      }
      goto L_088E32CC;
    }
L_088E32CC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_088E32E8;
      }
      goto L_088E32D4;
    }
L_088E32D4:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_088E32EC;
      }
      goto L_088E32E4;
    }
L_088E32E4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088E32E8;
L_088E32E8:
    ctx.gpr[17] = (2230u << 16u);
    goto L_088E32EC;
L_088E32EC:
    ctx.gpr[4] = (16220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 10486u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[12];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088E3340u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E3340u) goto L_088E3340;
    return;
L_088E3340:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E335C;
      }
      goto L_088E3354;
    }
L_088E3354:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088E35F8;
      }
      goto L_088E335C;
    }
L_088E335C:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_088E35F8;
      }
      goto L_088E336C;
    }
L_088E336C:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088E3420;
      }
      goto L_088E3394;
    }
L_088E3394:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1188)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3420;
      }
      goto L_088E33A8;
    }
L_088E33A8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3420;
      }
      goto L_088E33BC;
    }
L_088E33BC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1192)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1008)));
        goto L_088E33E8;
    }
    goto L_088E33D0;
L_088E33D0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3420;
      }
      goto L_088E33E4;
    }
L_088E33E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1008)));
    goto L_088E33E8;
L_088E33E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E34C0;
      }
      goto L_088E3410;
    }
L_088E3410:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E34C0;
      }
      goto L_088E3420;
    }
L_088E3420:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1192)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E34C0;
      }
      goto L_088E3434;
    }
L_088E3434:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E34C0;
      }
      goto L_088E3448;
    }
L_088E3448:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E34C0;
      }
      goto L_088E345C;
    }
L_088E345C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1008)));
        goto L_088E3488;
    }
    goto L_088E3470;
L_088E3470:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1188)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E34C0;
      }
      goto L_088E3484;
    }
L_088E3484:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1008)));
    goto L_088E3488;
L_088E3488:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E34C0;
      }
      goto L_088E34B4;
    }
L_088E34B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E34C0;
L_088E34C0:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E34FC;
      }
      goto L_088E34DC;
    }
L_088E34DC:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_088E34F4;
    }
    goto L_088E34F4;
L_088E34F4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E35B4;
      }
      goto L_088E34FC;
    }
L_088E34FC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (15395u << 16u);
      if (branch_taken) {
          goto L_088E3554;
      }
      goto L_088E3518;
    }
L_088E3518:
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3554;
      }
      goto L_088E3530;
    }
L_088E3530:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_088E354C;
    }
    goto L_088E354C;
L_088E354C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E35B4;
      }
      goto L_088E3554;
    }
L_088E3554:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E35B4;
      }
      goto L_088E3568;
    }
L_088E3568:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E35B4;
      }
      goto L_088E3578;
    }
L_088E3578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E35B4;
      }
      goto L_088E3594;
    }
L_088E3594:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_088E35B0;
    }
    goto L_088E35B0;
L_088E35B0:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E35B4;
L_088E35B4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E35F8;
      }
      goto L_088E35C8;
    }
L_088E35C8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16005u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[22] = ctx.fpr[30] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088E35F4;
    }
    goto L_088E35F4;
L_088E35F4:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_088E35F8;
L_088E35F8:
    ctx.gpr[31] = (0x088E3600u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E3600u) goto L_088E3600;
    return;
L_088E3600:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3658;
      }
      goto L_088E3608;
    }
L_088E3608:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[12];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E365C;
      }
      goto L_088E3658;
    }
L_088E3658:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1324), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088E365C;
L_088E365C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16143u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3690;
      }
      goto L_088E3680;
    }
L_088E3680:
    ctx.gpr[31] = (0x088E3688u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E3688u) goto L_088E3688;
    return;
L_088E3688:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E369C;
      }
      goto L_088E3690;
    }
L_088E3690:
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088E371C;
      }
      goto L_088E369C;
    }
L_088E369C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
        goto L_088E36C0;
    }
    goto L_088E36B4;
L_088E36B4:
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088E371C;
      }
      goto L_088E36C0;
    }
L_088E36C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[22] = std::sqrt(ctx.fpr[22]);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E370C;
      }
      goto L_088E36F0;
    }
L_088E36F0:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088E371C;
      }
      goto L_088E370C;
    }
L_088E370C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_088E371C;
L_088E371C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E372C;
      }
      goto L_088E3724;
    }
L_088E3724:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088E372C;
L_088E372C:
    ctx.gpr[31] = (0x088E3734u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E3734u) goto L_088E3734;
    return;
L_088E3734:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3870;
      }
      goto L_088E373C;
    }
L_088E373C:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3758;
      }
      goto L_088E3744;
    }
L_088E3744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[31] = (0x088E3754u);
    ctx.gpr[6] = (0u | 188u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3754u) goto L_088E3754;
    return;
L_088E3754:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_088E3758;
L_088E3758:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3774;
      }
      goto L_088E3760;
    }
L_088E3760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[31] = (0x088E3770u);
    ctx.gpr[6] = (0u | 187u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3770u) goto L_088E3770;
    return;
L_088E3770:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_088E3774;
L_088E3774:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E37FC;
      }
      goto L_088E3780;
    }
L_088E3780:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088E37C8;
    }
    goto L_088E3794;
L_088E3794:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088E37B0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088E37B0u) goto L_088E37B0;
    return;
L_088E37B0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088E37C0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088E37C0u) goto L_088E37C0;
    return;
L_088E37C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3870;
      }
      goto L_088E37C8;
    }
L_088E37C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088E37E4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088E37E4u) goto L_088E37E4;
    return;
L_088E37E4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088E37F4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088E37F4u) goto L_088E37F4;
    return;
L_088E37F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3870;
      }
      goto L_088E37FC;
    }
L_088E37FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_088E3840;
      }
      goto L_088E3810;
    }
L_088E3810:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088E382Cu);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088E382Cu) goto L_088E382C;
    return;
L_088E382C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088E3870;
      }
      goto L_088E3840;
    }
L_088E3840:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088E3860u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088E3860u) goto L_088E3860;
    return;
L_088E3860:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088E3870;
L_088E3870:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E388C;
      }
      goto L_088E3878;
    }
L_088E3878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[31] = (0x088E3888u);
    ctx.gpr[6] = (0u | 185u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3888u) goto L_088E3888;
    return;
L_088E3888:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    goto L_088E388C;
L_088E388C:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E38A8;
      }
      goto L_088E3894;
    }
L_088E3894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[31] = (0x088E38A4u);
    ctx.gpr[6] = (0u | 186u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E38A4u) goto L_088E38A4;
    return;
L_088E38A4:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_088E38A8;
L_088E38A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3930;
      }
      goto L_088E38B4;
    }
L_088E38B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_088E38FC;
    }
    goto L_088E38C8;
L_088E38C8:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088E38E4u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088E38E4u) goto L_088E38E4;
    return;
L_088E38E4:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088E38F4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088E38F4u) goto L_088E38F4;
    return;
L_088E38F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E39A4;
      }
      goto L_088E38FC;
    }
L_088E38FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088E3918u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088E3918u) goto L_088E3918;
    return;
L_088E3918:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088E3928u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088E3928u) goto L_088E3928;
    return;
L_088E3928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E39A4;
      }
      goto L_088E3930;
    }
L_088E3930:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_088E3974;
      }
      goto L_088E3944;
    }
L_088E3944:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088E3960u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088E3960u) goto L_088E3960;
    return;
L_088E3960:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088E39A4;
      }
      goto L_088E3974;
    }
L_088E3974:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088E3994u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088E3994u) goto L_088E3994;
    return;
L_088E3994:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088E39A4;
L_088E39A4:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3A50;
      }
      goto L_088E39C4;
    }
L_088E39C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(676)));
    ctx.gpr[5] = (49344u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x088E3A04u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x088E3A04u) goto L_088E3A04;
    return;
L_088E3A04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[6] = (0u | 2u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088E3A20u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 193u, 0x0890D0E0u>(ctx, &aot_mem) && ctx.pc == 0x088E3A20u) goto L_088E3A20;
    return;
L_088E3A20:
    ctx.gpr[31] = (0x088E3A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x088E3A28u) goto L_088E3A28;
    return;
L_088E3A28:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[6] = (0u | 2u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088E3A44u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 193u, 0x0890D0E0u>(ctx, &aot_mem) && ctx.pc == 0x088E3A44u) goto L_088E3A44;
    return;
L_088E3A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_088E3A50;
L_088E3A50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 6u, 0x088E4028u>(ctx, &aot_mem); return;
      }
      goto L_088E3A58;
    }
L_088E3A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x088E3A64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088E3A64u) goto L_088E3A64;
    return;
L_088E3A64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 6u, 0x088E4028u>(ctx, &aot_mem); return;
      }
      goto L_088E3A6C;
    }
L_088E3A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[16] = (0u | 1u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(584)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E3B14;
      }
      goto L_088E3A84;
    }
L_088E3A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3B14;
      }
      goto L_088E3AA0;
    }
L_088E3AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3AACu);
    ctx.gpr[5] = (0u | 110u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E3AACu) goto L_088E3AAC;
    return;
L_088E3AAC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3B0C;
      }
      goto L_088E3AB8;
    }
L_088E3AB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3B0C;
      }
      goto L_088E3AD4;
    }
L_088E3AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3AE0u);
    ctx.gpr[5] = (0u | 111u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E3AE0u) goto L_088E3AE0;
    return;
L_088E3AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E3AF0u);
    ctx.gpr[5] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E3AF0u) goto L_088E3AF0;
    return;
L_088E3AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E3B00u);
    ctx.gpr[5] = (0u | 113u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E3B00u) goto L_088E3B00;
    return;
L_088E3B00:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088E3C04;
      }
      goto L_088E3B0C;
    }
L_088E3B0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 6u, 0x088E4028u>(ctx, &aot_mem); return;
      }
      goto L_088E3B14;
    }
L_088E3B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3B90;
      }
      goto L_088E3B28;
    }
L_088E3B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3B34u);
    ctx.gpr[5] = (0u | 98u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E3B34u) goto L_088E3B34;
    return;
L_088E3B34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3B88;
      }
      goto L_088E3B40;
    }
L_088E3B40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3B88;
      }
      goto L_088E3B5C;
    }
L_088E3B5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3B68u);
    ctx.gpr[5] = (0u | 103u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E3B68u) goto L_088E3B68;
    return;
L_088E3B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E3B78u);
    ctx.gpr[5] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E3B78u) goto L_088E3B78;
    return;
L_088E3B78:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088E3C04;
      }
      goto L_088E3B88;
    }
L_088E3B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 6u, 0x088E4028u>(ctx, &aot_mem); return;
      }
      goto L_088E3B90;
    }
L_088E3B90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3B9Cu);
    ctx.gpr[5] = (0u | 97u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E3B9Cu) goto L_088E3B9C;
    return;
L_088E3B9C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3BFC;
      }
      goto L_088E3BA8;
    }
L_088E3BA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3BFC;
      }
      goto L_088E3BC4;
    }
L_088E3BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3BD0u);
    ctx.gpr[5] = (0u | 101u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E3BD0u) goto L_088E3BD0;
    return;
L_088E3BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E3BE0u);
    ctx.gpr[5] = (0u | 102u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E3BE0u) goto L_088E3BE0;
    return;
L_088E3BE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E3BF0u);
    ctx.gpr[5] = (0u | 109u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E3BF0u) goto L_088E3BF0;
    return;
L_088E3BF0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088E3C04;
      }
      goto L_088E3BFC;
    }
L_088E3BFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 6u, 0x088E4028u>(ctx, &aot_mem); return;
      }
      goto L_088E3C04;
    }
L_088E3C04:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088E3C78;
      }
      goto L_088E3C0C;
    }
L_088E3C0C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E3C78;
      }
      goto L_088E3C40;
    }
L_088E3C40:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E3C78;
      }
      goto L_088E3C6C;
    }
L_088E3C6C:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E3C78;
L_088E3C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3C84u);
    ctx.gpr[5] = (0u | 105u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E3C84u) goto L_088E3C84;
    return;
L_088E3C84:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3CA0;
      }
      goto L_088E3C90;
    }
L_088E3C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3C9Cu);
    ctx.gpr[5] = (0u | 106u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E3C9Cu) goto L_088E3C9C;
    return;
L_088E3C9C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088E3CA0;
L_088E3CA0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3CB8;
      }
      goto L_088E3CA8;
    }
L_088E3CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3CB4u);
    ctx.gpr[5] = (0u | 108u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E3CB4u) goto L_088E3CB4;
    return;
L_088E3CB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088E3CB8;
L_088E3CB8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3CD0;
      }
      goto L_088E3CC0;
    }
L_088E3CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3CCCu);
    ctx.gpr[5] = (0u | 108u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088E3CCCu) goto L_088E3CCC;
    return;
L_088E3CCC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088E3CD0;
L_088E3CD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3DF8;
      }
      goto L_088E3CE4;
    }
L_088E3CE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(588)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3DF8;
      }
      goto L_088E3CFC;
    }
L_088E3CFC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3DF8;
      }
      goto L_088E3D04;
    }
L_088E3D04:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E3D68;
      }
      goto L_088E3D3C;
    }
L_088E3D3C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 6u, 0x088E4028u>(ctx, &aot_mem); return;
      }
      goto L_088E3D68;
    }
L_088E3D68:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3D98;
      }
      goto L_088E3D70;
    }
L_088E3D70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 6u, 0x088E4028u>(ctx, &aot_mem); return;
      }
      goto L_088E3D84;
    }
L_088E3D84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 6u, 0x088E4028u>(ctx, &aot_mem); return;
      }
      goto L_088E3D98;
    }
L_088E3D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088E3DE0;
      }
      goto L_088E3DAC;
    }
L_088E3DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3DE0;
      }
      goto L_088E3DC8;
    }
L_088E3DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E3DD8u);
    ctx.gpr[6] = (0u | 113u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088E3DD8u) goto L_088E3DD8;
    return;
L_088E3DD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 6u, 0x088E4028u>(ctx, &aot_mem); return;
      }
      goto L_088E3DE0;
    }
L_088E3DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E3DF0u);
    ctx.gpr[6] = (0u | 109u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088E3DF0u) goto L_088E3DF0;
    return;
L_088E3DF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 6u, 0x088E4028u>(ctx, &aot_mem); return;
      }
      goto L_088E3DF8;
    }
L_088E3DF8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[22])) && ctx.fpr[24] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3E10;
      }
      goto L_088E3E08;
    }
L_088E3E08:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3E40;
      }
      goto L_088E3E10;
    }
L_088E3E10:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3E1C;
      }
      goto L_088E3E18;
    }
L_088E3E18:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088E3E1C;
L_088E3E1C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3E28;
      }
      goto L_088E3E24;
    }
L_088E3E24:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088E3E28;
L_088E3E28:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 6u, 0x088E4028u>(ctx, &aot_mem); return;
      }
      goto L_088E3E30;
    }
L_088E3E30:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 6u, 0x088E4028u>(ctx, &aot_mem); return;
      }
      goto L_088E3E40;
    }
L_088E3E40:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (48924u << 16u);
      if (branch_taken) {
          goto L_088E3F40;
      }
      goto L_088E3E50;
    }
L_088E3E50:
    ctx.gpr[4] = (16156u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 10486u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3E74;
      }
      goto L_088E3E70;
    }
L_088E3E70:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088E3E74;
L_088E3E74:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3E88;
      }
      goto L_088E3E84;
    }
L_088E3E84:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088E3E88;
L_088E3E88:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3E94;
      }
      goto L_088E3E90;
    }
L_088E3E90:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088E3E94;
L_088E3E94:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3F24;
      }
      goto L_088E3E9C;
    }
L_088E3E9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E3EE0;
      }
      goto L_088E3EAC;
    }
L_088E3EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3EE0;
      }
      goto L_088E3EC8;
    }
L_088E3EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E3ED8u);
    ctx.gpr[6] = (0u | 111u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3ED8u) goto L_088E3ED8;
    return;
L_088E3ED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3F28;
      }
      goto L_088E3EE0;
    }
L_088E3EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3F0C;
      }
      goto L_088E3EF4;
    }
L_088E3EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E3F04u);
    ctx.gpr[6] = (0u | 103u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3F04u) goto L_088E3F04;
    return;
L_088E3F04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3F28;
      }
      goto L_088E3F0C;
    }
L_088E3F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E3F1Cu);
    ctx.gpr[6] = (0u | 101u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3F1Cu) goto L_088E3F1C;
    return;
L_088E3F1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3F28;
      }
      goto L_088E3F24;
    }
L_088E3F24:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E3F28;
L_088E3F28:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 6u, 0x088E4028u>(ctx, &aot_mem); return;
      }
      goto L_088E3F30;
    }
L_088E3F30:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 6u, 0x088E4028u>(ctx, &aot_mem); return;
      }
      goto L_088E3F40;
    }
L_088E3F40:
    ctx.gpr[4] = (ctx.gpr[4] | 10486u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3F60;
      }
      goto L_088E3F5C;
    }
L_088E3F5C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088E3F60;
L_088E3F60:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3F74;
      }
      goto L_088E3F70;
    }
L_088E3F70:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088E3F74;
L_088E3F74:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3F80;
      }
      goto L_088E3F7C;
    }
L_088E3F7C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088E3F80;
L_088E3F80:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 3u, 0x088E4010u>(ctx, &aot_mem); return;
      }
      goto L_088E3F88;
    }
L_088E3F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E3FCC;
      }
      goto L_088E3F98;
    }
L_088E3F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FCC;
      }
      goto L_088E3FB4;
    }
L_088E3FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E3FC4u);
    ctx.gpr[6] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3FC4u) goto L_088E3FC4;
    return;
L_088E3FC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 4u, 0x088E4014u>(ctx, &aot_mem); return;
      }
      goto L_088E3FCC;
    }
L_088E3FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FF8;
      }
      goto L_088E3FE0;
    }
L_088E3FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E3FF0u);
    ctx.gpr[6] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3FF0u) goto L_088E3FF0;
    return;
L_088E3FF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 4u, 0x088E4014u>(ctx, &aot_mem); return;
      }
      goto L_088E3FF8;
    }
L_088E3FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x088E4000u; return;
}

void recomp_unit_0055(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0055_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_55(Runtime &runtime) {
    runtime.register_generated_unit(55u, 0x088E0000u, 16384u, &recomp_unit_0055, &recomp_unit_0055_entry);
    runtime.register_function(0x088E0000u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E000Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0014u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E002Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0034u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E003Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0044u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E004Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0058u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0070u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0078u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0080u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0088u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0090u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0098u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0108u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0114u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0128u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0130u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0140u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E014Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0154u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E015Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0168u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0184u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0194u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E020Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E021Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0228u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0248u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0258u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0264u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0278u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0284u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0294u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0304u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0318u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0320u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0328u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0338u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0344u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E034Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0354u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0364u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E036Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0378u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0388u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0398u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E040Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E042Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0430u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0458u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0464u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E046Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E047Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0484u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0494u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0534u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0538u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E054Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0558u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0560u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E056Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0584u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0590u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E059Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0604u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0614u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E061Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0624u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0634u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E063Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0644u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0648u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E064Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0694u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0704u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E070Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0724u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0738u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0740u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0748u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0760u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0768u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0778u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0780u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0788u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0810u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E081Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0824u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E082Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0840u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0848u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E085Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0860u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0870u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0878u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0888u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0894u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0904u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E090Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0914u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E092Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0940u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0954u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0968u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0978u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0988u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A5Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A78u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AA4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0ABCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0ACCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0ADCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B1Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BBCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BCCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C60u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C70u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CCCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CD4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D2Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DBCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DCCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DDCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0ED0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F04u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F54u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F5Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F78u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0FA4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0FB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0FB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0FC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0FCCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0FD4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0FF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1014u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1040u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1088u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1090u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1098u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E109Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E10A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E110Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1114u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E111Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1120u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1130u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1138u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1140u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1158u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E116Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1174u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E117Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E11A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E11F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1200u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1210u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1218u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E121Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1224u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E122Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1294u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1304u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E131Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1334u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1360u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1378u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1380u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1390u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E140Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1414u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E141Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1424u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1434u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1458u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1460u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1468u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1480u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1494u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E149Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E14B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E14D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1518u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1530u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1538u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1540u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1548u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1574u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1588u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1598u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1600u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1608u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1610u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1620u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1638u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E165Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E166Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E167Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E168Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E16B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E16B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E16C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E16E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E16F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E16FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1704u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E171Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1764u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E176Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E177Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E178Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E179Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1908u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1920u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E193Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1950u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1958u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1968u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1974u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E197Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1984u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E198Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E199Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A60u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1ACCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B60u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BA4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BCCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C1Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1CA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1CBCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1CCCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1CD4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1CE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1CE8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1CF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1CFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D04u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DBCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DCCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DD0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DD8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DE8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E04u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1EA4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1EACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1EB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1EC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1ED4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1EFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F54u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1FC8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E201Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E206Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2074u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2078u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2088u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E20A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E20A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E20D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E20F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2100u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2110u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E211Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2124u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2180u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E21C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E21D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E21D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E21E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E21FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2204u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2220u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E222Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2234u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2238u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E22ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2314u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2328u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2344u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2354u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2368u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E23A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E23DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E23E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2438u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E246Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2478u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2490u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E24A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E24B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E24CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E24D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2544u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2550u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E256Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2578u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2590u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2594u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E25B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E25BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E25C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E25D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E25D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E25F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2658u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E26B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E26F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2724u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2770u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2778u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E277Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E278Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2800u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2818u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2828u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2838u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2854u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E285Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2868u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2878u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2894u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E289Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E28B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E28C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E28DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E28ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E28FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2900u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2910u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E291Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2920u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2930u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2944u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2958u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E299Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E29D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E29E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E29E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A5Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A60u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2AB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2ABCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2ADCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2AE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B04u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B68u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B8Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2BACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2BBCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2BECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C70u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C8Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2CA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2CB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2CB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2CC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D60u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DC8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DD4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E0Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E1Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2EB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2EC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2ED8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2EE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2EE8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F60u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F70u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FBCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FD4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3000u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3018u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3024u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E303Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3054u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3068u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3074u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E307Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3090u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3104u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E311Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3130u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E313Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3140u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3148u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E315Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3168u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3170u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3184u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3194u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3220u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3224u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E322Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E325Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3260u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3268u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3298u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E329Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3340u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3354u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E335Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E336Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3394u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3410u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3420u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3434u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3448u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E345Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3470u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3484u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3488u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E34B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E34C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E34DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E34F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E34FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3518u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3530u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E354Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3554u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3568u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3578u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3594u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3600u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3608u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3658u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E365Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3680u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3688u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3690u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E369Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E370Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E371Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3724u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E372Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3734u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E373Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3744u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3754u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3758u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3760u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3770u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3774u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3780u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3794u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3810u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E382Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3840u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3860u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3870u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3878u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3888u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E388Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3894u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3918u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3928u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3930u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3944u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3960u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3974u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3994u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E39A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E39C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A04u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AD4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AF0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B0Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B5Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B68u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B78u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BD0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BF0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C04u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C0Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C78u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CCCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CD0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D04u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D68u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D70u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DC8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DD8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DF0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E1Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E70u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3EACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3EC8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3ED8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3EE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3EF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F04u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F0Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F1Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F5Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F60u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F70u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3FB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3FC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3FCCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3FE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3FF0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3FF8u, &recomp_unit_0055, "recomp_unit_0055");
}
} // namespace psprecomp
