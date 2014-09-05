
// printf "%d, ", 16384 * sin($_ * 3.14159265359 / 175) for(0 .. 350)
// we include an extra point, to simplify logic

short sin_data[] = {
0, 294, 588, 881, 1175, 1468, 1761, 2053, 2344, 2635, 2925, 3214,
3502, 3789, 4074, 4358, 4641, 4922, 5202, 5480, 5756, 6031, 6303,
6574, 6842, 7108, 7372, 7634, 7893, 8149, 8403, 8654, 8902, 9148,
9390, 9630, 9866, 10099, 10329, 10556, 10779, 10999, 11215, 11428,
11637, 11842, 12043, 12241, 12434, 12624, 12809, 12990, 13167, 13340,
13509, 13673, 13833, 13988, 14139, 14285, 14427, 14564, 14697, 14824,
14947, 15065, 15178, 15286, 15390, 15488, 15582, 15670, 15753, 15832,
15905, 15973, 16036, 16093, 16146, 16193, 16235, 16272, 16304, 16330,
16351, 16367, 16378, 16383, 16383, 16378, 16367, 16351, 16330, 16304,
16272, 16235, 16193, 16146, 16093, 16036, 15973, 15905, 15832, 15753,
15670, 15582, 15488, 15390, 15286, 15178, 15065, 14947, 14824, 14697,
14564, 14427, 14285, 14139, 13988, 13833, 13673, 13509, 13340, 13167,
12990, 12809, 12624, 12434, 12241, 12043, 11842, 11637, 11428, 11215,
10999, 10779, 10556, 10329, 10099, 9866, 9630, 9390, 9148, 8902, 8654,
8403, 8149, 7893, 7634, 7372, 7108, 6842, 6574, 6303, 6031, 5756, 5480,
5202, 4922, 4641, 4358, 4074, 3789, 3502, 3214, 2925, 2635, 2344, 2053,
1761, 1468, 1175, 881, 588, 294, 0, -294, -588, -881, -1175, -1468, -1761,
-2053, -2344, -2635, -2925, -3214, -3502, -3789, -4074, -4358, -4641,
-4922, -5202, -5480, -5756, -6031, -6303, -6574, -6842, -7108, -7372,
-7634, -7893, -8149, -8403, -8654, -8902, -9148, -9390, -9630, -9866,
-10099, -10329, -10556, -10779, -10999, -11215, -11428, -11637, -11842,
-12043, -12241, -12434, -12624, -12809, -12990, -13167, -13340, -13509,
-13673, -13833, -13988, -14139, -14285, -14427, -14564, -14697, -14824,
-14947, -15065, -15178, -15286, -15390, -15488, -15582, -15670, -15753,
-15832, -15905, -15973, -16036, -16093, -16146, -16193, -16235, -16272,
-16304, -16330, -16351, -16367, -16378, -16383, -16383, -16378, -16367,
-16351, -16330, -16304, -16272, -16235, -16193, -16146, -16093, -16036,
-15973, -15905, -15832, -15753, -15670, -15582, -15488, -15390, -15286,
-15178, -15065, -14947, -14824, -14697, -14564, -14427, -14285, -14139,
-13988, -13833, -13673, -13509, -13340, -13167, -12990, -12809, -12624,
-12434, -12241, -12043, -11842, -11637, -11428, -11215, -10999, -10779,
-10556, -10329, -10099, -9866, -9630, -9390, -9148, -8902, -8654, -8403,
-8149, -7893, -7634, -7372, -7108, -6842, -6574, -6303, -6031, -5756,
-5480, -5202, -4922, -4641, -4358, -4074, -3789, -3502, -3214, -2925,
-2635, -2344, -2053, -1761, -1468, -1175, -881, -588, -294, 0,
};