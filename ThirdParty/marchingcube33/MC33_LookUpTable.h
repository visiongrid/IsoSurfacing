/*
	File: MC33_LookUpTable.h
	Programed by: David Vega    - dvega@uc.edu.ve
                 Javier Abache - jabache@uc.edu.ve
	March 2012
	Modified by David Vega
	May 2018
*/

/*The second hexadecimal digit is the MC33 case number, the last two digits contain information
about the position in the respetive case array and the order of triangle vertices*/
const unsigned short int Case_Index[128] =
{
 0x0080, 0x0186, 0x0187, 0x028E, 0x0184, 0x038B, 0x0296, 0x05BC,//007
 0x0185, 0x0290, 0x038A, 0x058F, 0x028A, 0x05C5, 0x0598, 0x0800,//015
 0x0183, 0x0294, 0x0384, 0x05AD, 0x0483, 0x0697, 0x0694, 0x0B08,//023
 0x0387, 0x05A1, 0x0782, 0x0908, 0x0695, 0x0E0C, 0x0C03, 0x0509,//031
 0x0182, 0x0385, 0x0292, 0x059B, 0x0383, 0x0780, 0x058C, 0x0904,//039
 0x0482, 0x068E, 0x0691, 0x0E08, 0x068D, 0x0C02, 0x0B04, 0x0506,//047
 0x0284, 0x05BF, 0x05B0, 0x0804, 0x0693, 0x0C09, 0x0E10, 0x0527,//055
 0x068F, 0x0B14, 0x0C06, 0x0515, 0x0A01, 0x0601, 0x0609, 0x0200,//063
 0x0181, 0x0481, 0x0382, 0x0687, 0x0288, 0x068B, 0x05A4, 0x0E04,//071
 0x0381, 0x0686, 0x0786, 0x0C01, 0x059E, 0x0B00, 0x0900, 0x0503,//079
 0x0389, 0x068A, 0x0785, 0x0C0B, 0x0696, 0x0A00, 0x0C08, 0x0610,//087
 0x0781, 0x0C04, 0x0D00, 0x0703, 0x0C07, 0x0604, 0x0707, 0x0308,//095
 0x0282, 0x0688, 0x05B3, 0x0B10, 0x05C2, 0x0C0A, 0x0802, 0x052A,//103
 0x068C, 0x0A02, 0x0C05, 0x0612, 0x0E14, 0x0602, 0x0512, 0x0206,//111
 0x0580, 0x0E00, 0x090C, 0x0536, 0x0B0C, 0x0605, 0x0539, 0x020C,//119
 0x0C00, 0x0600, 0x0704, 0x0300, 0x0603, 0x0400, 0x0306, 0x0100//127
};
/*
Vertices:           Edges:
    3 __________2        _____2_____
   /|          /|      /|          /|
  / |         / |    11 |<-3     10 |
7/__________6/  |    /____6_____ /  1
|   |       |   |   |   |       |   |
|   0_______|___1   |   |_____0_|___|
|  /        |  /    7  /        5  /
| /         | /     | 8         | 9
4/__________5/      |/____4_____|/

*/
/*
Vertices order in triangles:
       0     1-----2
      / \     \ x /   o: Front surface
     / o \     \ /    x: Back surface
    1-----2     0
*/

/*position*index#vertices*/
const unsigned short int Case_1 [8*1] =
{
/* 0*127#0*/0x0380,
/* 1*064#1*/0x0091,
/* 2*032#2*/0x01A2,
/* 3*016#3*/0x02B3,
/* 4*004#5*/0x0594,
/* 5*008#4*/0x0748,
/* 6*001#7*/0x07B6,
/* 7*002#6*/0x0A56
};

const unsigned short int Case_2 [12*2] =
{
/* 0*063#01*/0x1381,0x0891,
/* 1*096#12*/0x1092,0x09A2,
/* 2*048#23*/0x11A3,0x0AB3,
/* 3*111#03*/0x12B0,0x0B80,
/* 4*068#15*/0x1105,0x0045,
/* 5*012#45*/0x1597,0x0987,
/* 6*119#04*/0x1743,0x0403,
/* 7*003#67*/0x17B5,0x0BA5,
/* 8*009#47*/0x1B68,0x0648,
/* 9*034#26*/0x1216,0x0156,
/*10*017#37*/0x1672,0x0732,
/*11*006#56*/0x194A,0x046A
};

const unsigned short int Case_3_1 [12*2] =
{
/* 0*123#05*/0x1380,0x0594,
/* 1*072#14*/0x1109,0x0748,
/* 2*066#16*/0x1091,0x06A5,
/* 3*036#25*/0x1459,0x021A,
/* 4*018#36*/0x132B,0x056A,
/* 5*033#27*/0x11A2,0x07B6,
/* 6*126#07*/0x1038,0x067B,
/* 7*024#34*/0x12B3,0x0487,
/* 8*095#02*/0x1803,0x0A21,
/* 9*080#13*/0x1B32,0x0910,
/*10*010#46*/0x1874,0x0A56,
/*11*005#57*/0x1B67,0x0945
};

const unsigned short int Case_3_2 [12*4] =
{
/* 0*123#05*/0x1390,0x1593,0x1453,0x0843,
/* 1*072#14*/0x1149,0x1741,0x1871,0x0081,
/* 2*066#16*/0x10A1,0x16A0,0x1560,0x0950,
/* 3*036#25*/0x1419,0x1214,0x1A24,0x05A4,
/* 4*018#36*/0x136B,0x1563,0x1A53,0x02A3,
/* 5*033#27*/0x11B2,0x17B1,0x1671,0x0A61,
/* 6*126#07*/0x1078,0x1670,0x1B60,0x03B0,
/* 7*024#34*/0x1283,0x1482,0x1742,0x0B72,
/* 8*095#02*/0x1823,0x1A28,0x11A8,0x0018,
/* 9*080#13*/0x1B12,0x191B,0x109B,0x030B,
/*10*010#46*/0x1854,0x1A58,0x16A8,0x0768,
/*11*005#57*/0x1B47,0x194B,0x159B,0x065B
};

const unsigned short int Case_4_1 [4*2] =
{
/* 0*125#06*/0x1380,0x06A5,
/* 1*065#17*/0x1091,0x07B6,
/* 2*040#24*/0x11A2,0x0487,
/* 3*020#35*/0x12B3,0x0594
};

//The numbers in parentheses are the diagonal (interior test)
const unsigned short int Case_4_2 [4*6] =
{
/*(0,6)*0*125#06*/0x1580,0x1A50,0x1863,0x1685,0x16A3,0x03A0,
/*(1,7)*1*065#17*/0x1691,0x1B61,0x1970,0x1796,0x17B0,0x00B1,
/*(2,4)*2*040#24*/0x17A2,0x1872,0x1A41,0x14A7,0x1481,0x0182,
/*(3,5)*3*020#35*/0x14B3,0x1943,0x1B52,0x15B4,0x1592,0x0293
};

const unsigned short int Case_5 [24*3] =
{
/* 0*112#123*/0x1930,0x19B3,0x0AB9,
/* 1*079#023*/0x1A01,0x1A80,0x0B8A,
/* 2*047#013*/0x1B12,0x1B91,0x089B,
/* 3*031#012*/0x1823,0x18A2,0x09A8,
/* 4*038#256*/0x1419,0x1421,0x0624,
/* 5*011#467*/0x1854,0x18A5,0x0BA8,
/* 6*110#037*/0x1078,0x1067,0x0260,
/* 7*059#015*/0x1584,0x1538,0x0135,
/* 8*014#456*/0x1A76,0x1A87,0x098A,
/* 9*035#267*/0x11B2,0x117B,0x0571,
/*10*076#145*/0x1708,0x1710,0x0517,
/*11*025#347*/0x1283,0x1248,0x0642,
/*12*070#156*/0x10A1,0x106A,0x0460,
/*13*055#014*/0x1149,0x1174,0x0371,
/*14*103#034*/0x14B7,0x142B,0x0024,
/*15*019#367*/0x152A,0x1532,0x0735,
/*16*050#326*/0x136B,0x1356,0x0153,
/*17*098#126*/0x1695,0x1609,0x0206,
/*18*115#045*/0x1390,0x1359,0x0753,
/*19*118#047*/0x163B,0x1603,0x0406,
/*20*007#576*/0x1B47,0x1B94,0x0A9B,
/*21*049#237*/0x17A6,0x171A,0x0317,
/*22*100#125*/0x125A,0x1245,0x0042,
/*23*013#457*/0x1965,0x19B6,0x08B9
};

const unsigned short int Case_6_1_1 [24*3] =
{
/* 0*121#056*/0x16A4,0x1A94,0x0380,
/* 1*061#016*/0x1381,0x1891,0x06A5,
/* 2*109#036*/0x180B,0x102B,0x056A,
/* 3*124#067*/0x1A5B,0x157B,0x0038,
/* 4*093#026*/0x1561,0x1621,0x0803,
/* 5*117#046*/0x1034,0x1374,0x0A56,
/* 6*073#147*/0x1B68,0x1648,0x0109,
/* 7*067#167*/0x17B5,0x1BA5,0x0091,
/* 8*097#127*/0x1092,0x19A2,0x07B6,
/* 9*062#017*/0x1918,0x1138,0x067B,
/*10*081#137*/0x1672,0x1732,0x0910,
/*11*069#157*/0x1105,0x1045,0x0B67,
/*12*104#124*/0x1A29,0x1209,0x0748,
/*13*044#245*/0x1879,0x1759,0x021A,
/*14*041#247*/0x1486,0x18B6,0x01A2,
/*15*056#234*/0x11A3,0x1AB3,0x0487,
/*16*087#024*/0x1743,0x1403,0x0A21,
/*17*042#246*/0x1216,0x1156,0x0874,
/*18*107#035*/0x12B0,0x1B80,0x0594,
/*19*052#235*/0x1B3A,0x131A,0x0459,
/*20*022#356*/0x194A,0x146A,0x032B,
/*21*028#345*/0x1597,0x1987,0x02B3,
/*22*084#135*/0x1450,0x1510,0x0B32,
/*23*021#357*/0x1327,0x1267,0x0945
};

const unsigned short int Case_6_1_2 [24*7] =
{
/*(0,6)* 0*121#056*/0x1A90,0x1094,0x1804,0x1684,0x1386,0x1A36,0x03A0,
/*(0,6)* 1*061#016*/0x1895,0x1591,0x1A51,0x13A1,0x16A3,0x1863,0x0685,
/*(0,6)* 2*109#036*/0x102A,0x1A2B,0x16AB,0x186B,0x1568,0x1058,0x050A,
/*(0,6)* 3*124#067*/0x1578,0x187B,0x138B,0x1A3B,0x103A,0x150A,0x0058,
/*(0,6)* 4*093#026*/0x1623,0x1321,0x1031,0x1501,0x1805,0x1685,0x0863,
/*(0,6)* 5*117#046*/0x1376,0x1674,0x1564,0x1054,0x1A50,0x13A0,0x0A36,
/*(1,7)* 6*073#147*/0x1649,0x1948,0x1098,0x1B08,0x110B,0x161B,0x0169,
/*(1,7)* 7*067#167*/0x1BA1,0x11A5,0x1915,0x1795,0x1097,0x1B07,0x00B1,
/*(1,7)* 8*097#127*/0x19A6,0x16A2,0x1B62,0x10B2,0x17B0,0x1970,0x0796,
/*(1,7)* 9*062#017*/0x113B,0x1B38,0x17B8,0x1978,0x1679,0x1169,0x061B,
/*(1,7)*10*081#137*/0x1730,0x1032,0x1102,0x1612,0x1916,0x1796,0x0970,
/*(1,7)*11*069#157*/0x1047,0x1745,0x1675,0x1165,0x1B61,0x10B1,0x0B07,
/*(2,4)*12*104#124*/0x1208,0x1809,0x1489,0x1A49,0x174A,0x127A,0x0728,
/*(2,4)*13*044#245*/0x175A,0x1A59,0x11A9,0x1819,0x1218,0x1728,0x027A,
/*(2,4)*14*041#247*/0x18B2,0x12B6,0x1A26,0x14A6,0x11A4,0x1814,0x0182,
/*(2,4)*15*056#234*/0x1AB7,0x17B3,0x1873,0x1183,0x1481,0x1A41,0x04A7,
/*(2,4)*16*087#024*/0x1401,0x1103,0x1213,0x1723,0x1A27,0x14A7,0x0A41,
/*(2,4)*17*042#246*/0x1154,0x1456,0x1746,0x1276,0x1872,0x1182,0x0814,
/*(3,5)*18*107#035*/0x1B84,0x1480,0x1940,0x1290,0x1592,0x1B52,0x05B4,
/*(3,5)*19*052#235*/0x1319,0x191A,0x159A,0x1B5A,0x145B,0x134B,0x0439,
/*(3,5)*20*022#356*/0x146B,0x1B6A,0x12BA,0x192A,0x1329,0x1439,0x034B,
/*(3,5)*21*028#345*/0x1983,0x1387,0x1B37,0x15B7,0x12B5,0x1925,0x0293,
/*(3,5)*22*084#135*/0x1512,0x1210,0x1320,0x1430,0x1B34,0x15B4,0x0B52,
/*(3,5)*23*021#357*/0x1265,0x1567,0x1457,0x1347,0x1943,0x1293,0x0925
};

const unsigned short int Case_6_2 [24*5] =
{
/* 0*121#056*/0x1A90,0x13A0,0x1684,0x1386,0x0A36,
/* 1*061#016*/0x1895,0x1685,0x13A1,0x16A3,0x0863,
/* 2*109#036*/0x102A,0x150A,0x186B,0x1568,0x0058,
/* 3*124#067*/0x1578,0x1058,0x1A3B,0x103A,0x050A,
/* 4*093#026*/0x1623,0x1863,0x1501,0x1805,0x0685,
/* 5*117#046*/0x1376,0x1A36,0x1054,0x1A50,0x03A0,
/* 6*073#147*/0x1649,0x1169,0x1B08,0x110B,0x061B,
/* 7*067#167*/0x1BA1,0x10B1,0x1795,0x1097,0x0B07,
/* 8*097#127*/0x19A6,0x1796,0x10B2,0x17B0,0x0970,
/* 9*062#017*/0x113B,0x161B,0x1978,0x1679,0x0169,
/*10*081#137*/0x1730,0x1970,0x1612,0x1916,0x0796,
/*11*069#157*/0x1047,0x1B07,0x1165,0x1B61,0x00B1,
/*12*104#124*/0x1208,0x1728,0x1A49,0x174A,0x027A,
/*13*044#245*/0x175A,0x127A,0x1819,0x1218,0x0728,
/*14*041#247*/0x18B2,0x1182,0x14A6,0x11A4,0x0814,
/*15*056#234*/0x1AB7,0x14A7,0x1183,0x1481,0x0A41,
/*16*087#024*/0x1401,0x1A41,0x1723,0x1A27,0x04A7,
/*17*042#246*/0x1154,0x1814,0x1276,0x1872,0x0182,
/*18*107#035*/0x1B84,0x15B4,0x1290,0x1592,0x0B52,
/*19*052#235*/0x1319,0x1439,0x1B5A,0x145B,0x034B,
/*20*022#356*/0x146B,0x134B,0x192A,0x1329,0x0439,
/*21*028#345*/0x1983,0x1293,0x15B7,0x12B5,0x0925,
/*22*084#135*/0x1512,0x1B52,0x1430,0x1B34,0x05B4,
/*23*021#357*/0x1265,0x1925,0x1347,0x1943,0x0293
};

const unsigned short int Case_7_1 [8*3] =
{
/* 0*037#257*/0x1A21,0x1945,0x07B6,
/* 1*088#134*/0x1874,0x1910,0x02B3,
/* 2*026#346*/0x1B32,0x1A56,0x0487,
/* 3*091#025*/0x1038,0x1459,0x0A21,
/* 4*122#057*/0x1803,0x1B67,0x0594,
/* 5*082#136*/0x1A56,0x1B32,0x0091,
/* 6*074#146*/0x1910,0x1874,0x06A5,
/* 7*094#027*/0x1380,0x11A2,0x067B
};
//The numbers inside of the square bracket are face test results
const unsigned short int Case_7_2_1 [8*5] =
{
/* 0*037#257*[ 0,-1,-1, 0, 0, 1]*/0x1A21,0x1B65,0x19B5,0x1947,0x0B97,
/* 1*088#134*[-1, 0, 0,-1, 1, 0]*/0x1874,0x1B30,0x19B0,0x1912,0x0B92,
/* 2*026#346*[ 0, 0,-1,-1, 0, 1]*/0x1B32,0x1876,0x1A86,0x1A54,0x08A4,
/* 3*091#025*[-1,-1, 0, 0, 1, 0]*/0x1945,0x1801,0x1A81,0x1A23,0x08A3,
/* 4*122#057*[-1, 0, 0,-1, 0, 1]*/0x1803,0x1947,0x1B97,0x1B65,0x09B5,
/* 5*082#136*[ 0,-1,-1, 0, 1, 0]*/0x1A56,0x1912,0x1B92,0x1B30,0x09B0,
/* 6*074#146*[-1,-1, 0, 0, 0, 1]*/0x1910,0x1A54,0x18A4,0x1876,0x0A86,
/* 7*094#027*[ 0, 0,-1,-1, 1, 0]*/0x1B67,0x1A23,0x18A3,0x1801,0x0A81
};

const unsigned short int Case_7_2_2 [8*5] =
{
/* 0*037#257*[ 0,-1, 1, 0, 0,-1]*/0x1594,0x11A6,0x1716,0x17B2,0x0172,
/* 1*088#134*[-1, 0, 0, 1,-1, 0]*/0x1091,0x1483,0x1243,0x12B7,0x0427,
/* 2*026#346*[ 0, 0,-1, 1, 0,-1]*/0x16A5,0x12B7,0x1427,0x1483,0x0243,
/* 3*091#025*[-1, 1, 0, 0,-1, 0]*/0x1038,0x1219,0x1429,0x145A,0x024A,
/* 4*122#057*[-1, 0, 0, 1, 0,-1]*/0x1459,0x1678,0x1068,0x103B,0x060B,
/* 5*082#136*[ 0,-1, 1, 0,-1, 0]*/0x1109,0x132A,0x153A,0x156B,0x035B,
/* 6*074#146*[-1, 1, 0, 0, 0,-1]*/0x1487,0x1095,0x1605,0x16A1,0x0061,
/* 7*094#027*[ 0, 0,-1, 1,-1, 0]*/0x121A,0x103B,0x160B,0x1678,0x0068
};

const unsigned short int Case_7_2_3 [8*5] =
{
/* 0*037#257*[ 0, 1,-1, 0, 0,-1]*/0x167B,0x145A,0x124A,0x1219,0x0429,
/* 1*088#134*[ 1, 0, 0,-1,-1, 0]*/0x132B,0x1108,0x1718,0x1749,0x0179,
/* 2*026#346*[ 0, 0, 1,-1, 0,-1]*/0x1748,0x156B,0x135B,0x132A,0x053A,
/* 3*091#025*[ 1,-1, 0, 0,-1, 0]*/0x11A2,0x1590,0x1350,0x1384,0x0534,
/* 4*122#057*[ 1, 0, 0,-1, 0,-1]*/0x17B6,0x1384,0x1534,0x1590,0x0350,
/* 5*082#136*[ 0, 1,-1, 0,-1, 0]*/0x12B3,0x16A1,0x1061,0x1095,0x0605,
/* 6*074#146*[ 1,-1, 0, 0, 0,-1]*/0x156A,0x1749,0x1179,0x1108,0x0718,
/* 7*094#027*[ 0, 0, 1,-1,-1, 0]*/0x1380,0x17B2,0x1172,0x11A6,0x0716
};

const unsigned short int Case_7_3_1 [8*9] =
{
/* 0*037#257*[ 0,-1, 1, 0, 0, 1]*/0x1C21,0x1CB2,0x1C7B,0x1C47,0x1C94,0x1C59,0x1C65,0x1CA6,0x0C1A,
/* 1*088#134*[-1, 0, 0, 1, 1, 0]*/0x1C74,0x1CB7,0x1C2B,0x1C12,0x1C91,0x1C09,0x1C30,0x1C83,0x0C48,
/* 2*026#346*[ 0, 0,-1, 1, 0, 1]*/0x1C32,0x1C83,0x1C48,0x1C54,0x1CA5,0x1C6A,0x1C76,0x1CB7,0x0C2B,
/* 3*091#025*[-1, 1, 0, 0, 1, 0]*/0x1C38,0x1C23,0x1CA2,0x1C5A,0x1C45,0x1C94,0x1C19,0x1C01,0x0C80,
/* 4*122#057*[-1, 0, 0, 1, 0, 1]*/0x1C59,0x1C65,0x1CB6,0x1C3B,0x1C03,0x1C80,0x1C78,0x1C47,0x0C94,
/* 5*082#136*[ 0,-1, 1, 0, 1, 0]*/0x1C09,0x1C30,0x1CB3,0x1C6B,0x1C56,0x1CA5,0x1C2A,0x1C12,0x0C91,
/* 6*074#146*[-1, 1, 0, 0, 0, 1]*/0x1C10,0x1CA1,0x1C6A,0x1C76,0x1C87,0x1C48,0x1C54,0x1C95,0x0C09,
/* 7*094#027*[ 0, 0,-1, 1, 1, 0]*/0x1C1A,0x1C01,0x1C80,0x1C78,0x1C67,0x1CB6,0x1C3B,0x1C23,0x0CA2
};

const unsigned short int Case_7_3_2 [8*9] =
{
/* 0*037#257*[ 0, 1,-1, 0, 0, 1]*/0x1C7B,0x1C47,0x1C94,0x1C19,0x1C21,0x1CA2,0x1C5A,0x1C65,0x0CB6,
/* 1*088#134*[ 1, 0, 0,-1, 1, 0]*/0x1C2B,0x1C12,0x1C91,0x1C49,0x1C74,0x1C87,0x1C08,0x1C30,0x0CB3,
/* 2*026#346*[ 0, 0, 1,-1, 0, 1]*/0x1C48,0x1C54,0x1CA5,0x1C2A,0x1C32,0x1CB3,0x1C6B,0x1C76,0x0C87,
/* 3*091#025*[ 1,-1, 0, 0, 1, 0]*/0x1C45,0x1C84,0x1C38,0x1C23,0x1CA2,0x1C1A,0x1C01,0x1C90,0x0C59,
/* 4*122#057*[ 1, 0, 0,-1, 0, 1]*/0x1C03,0x1C90,0x1C59,0x1C65,0x1CB6,0x1C7B,0x1C47,0x1C84,0x0C38,
/* 5*082#136*[ 0, 1,-1, 0, 1, 0]*/0x1C56,0x1C95,0x1C09,0x1C30,0x1CB3,0x1C2B,0x1C12,0x1CA1,0x0C6A,
/* 6*074#146*[ 1,-1, 0, 0, 0, 1]*/0x1C6A,0x1C76,0x1C87,0x1C08,0x1C10,0x1C91,0x1C49,0x1C54,0x0CA5,
/* 7*094#027*[ 0, 0, 1,-1, 1, 0]*/0x1C67,0x1CA6,0x1C1A,0x1C01,0x1C80,0x1C38,0x1C23,0x1CB2,0x0C7B
};

const unsigned short int Case_7_3_3 [8*9] =
{
/* 0*037#257*[ 0, 1, 1, 0, 0,-1]*/0x1C94,0x1C19,0x1C21,0x1CB2,0x1C7B,0x1C67,0x1CA6,0x1C5A,0x0C45,
/* 1*088#134*[ 1, 0, 0, 1,-1, 0]*/0x1C91,0x1C49,0x1C74,0x1CB7,0x1C2B,0x1C32,0x1C83,0x1C08,0x0C10,
/* 2*026#346*[ 0, 0, 1, 1, 0,-1]*/0x1CA5,0x1C2A,0x1C32,0x1C83,0x1C48,0x1C74,0x1CB7,0x1C6B,0x0C56,
/* 3*091#025*[ 1, 1, 0, 0,-1, 0]*/0x1CA2,0x1C5A,0x1C45,0x1C84,0x1C38,0x1C03,0x1C90,0x1C19,0x0C21,
/* 4*122#057*[ 1, 0, 0, 1, 0,-1]*/0x1CB6,0x1C3B,0x1C03,0x1C90,0x1C59,0x1C45,0x1C84,0x1C78,0x0C67,
/* 5*082#136*[ 0, 1, 1, 0,-1, 0]*/0x1CB3,0x1C6B,0x1C56,0x1C95,0x1C09,0x1C10,0x1CA1,0x1C2A,0x0C32,
/* 6*074#146*[ 1, 1, 0, 0, 0,-1]*/0x1C87,0x1C08,0x1C10,0x1CA1,0x1C6A,0x1C56,0x1C95,0x1C49,0x0C74,
/* 7*094#027*[ 0, 0, 1, 1,-1, 0]*/0x1C80,0x1C78,0x1C67,0x1CA6,0x1C1A,0x1C21,0x1CB2,0x1C3B,0x0C03
};

const unsigned short int Case_7_4_1 [8*5] =
{
/* 0*037#257*/0x1B21,0x17B4,0x1941,0x14B1,0x0A65,
/* 1*088#134*/0x1B74,0x12B1,0x1914,0x11B4,0x0830,
/* 2*026#346*/0x1832,0x1485,0x1A52,0x1582,0x0B76,
/* 3*091#025*/0x1238,0x1A25,0x1458,0x1528,0x0019,
/* 4*122#057*/0x1903,0x1596,0x1B63,0x1693,0x0847,
/* 5*082#136*/0x1956,0x1093,0x1B36,0x1396,0x0A12,
/* 6*074#146*/0x1A10,0x16A7,0x1870,0x17A0,0x0954,
/* 7*094#027*/0x1780,0x167A,0x11A0,0x1A70,0x03B2
};

const unsigned short int Case_7_4_2 [8*9] =
{
/*(0,6)*0*037#257*/0x1A21,0x1AB2,0x1BA6,0x17B6,0x1465,0x1476,0x1945,0x15A1,0x0951,
/*(0,6)*1*088#134*/0x1874,0x18B7,0x1B83,0x12B3,0x1130,0x1123,0x1910,0x1084,0x0904,
/*(1,7)*2*026#346*/0x1B32,0x1B83,0x18B7,0x1487,0x1576,0x1547,0x1A56,0x16B2,0x0A62,
/*(1,7)*3*091#025*/0x1038,0x1023,0x1201,0x1A21,0x1519,0x15A1,0x1459,0x1908,0x0498,
/*(2,4)*4*122#057*/0x1803,0x1890,0x1984,0x1594,0x1647,0x1654,0x1B67,0x1783,0x0B73,
/*(2,4)*5*082#136*/0x1A56,0x1A95,0x19A1,0x1091,0x1312,0x1301,0x1B32,0x12A6,0x0B26,
/*(3,5)*6*074#146*/0x1910,0x19A1,0x1A95,0x16A5,0x1754,0x1765,0x1874,0x1490,0x0840,
/*(3,5)*7*094#027*/0x1380,0x1378,0x173B,0x167B,0x1AB2,0x1A6B,0x11A2,0x1230,0x0120
};

const unsigned short int Case_8 [3*2] =
{
/* 0*015#0123*/0x19B8,0x0AB9,
/* 1*102#0347*/0x1024,0x0426,
/* 2*051#0145*/0x1537,0x0135
};

const unsigned short int Case_9 [4*4] =
{
/* 0*078#0237*/0x1180,0x1781,0x1A71,0x07A6,
/* 1*039#0134*/0x1291,0x1492,0x1B42,0x04B7,
/* 2*027#0125*/0x13A2,0x15A3,0x1853,0x0584,
/* 3*114#0457*/0x13B0,0x10B6,0x1069,0x0596
};

const unsigned short int Case_10_1_1_1 [3*4] =
{
/* 0*085#0246*[ 0, 0, 0, 0,-1,-1]*/0x1340,0x1743,0x1521,0x0562,
/* 1*060#0167*[ 0,-1, 0,-1, 0, 0]*/0x1189,0x1381,0x17A5,0x07BA,
/* 2*105#0356*[-1, 0,-1, 0, 0, 0]*/0x14A9,0x146A,0x1028,0x082B
};

const unsigned short int Case_10_1_1_2 [3*4] =
{
/* 0*085#0246*[0, 0, 0, 0, 1, 1]*/0x1150,0x1540,0x1362,0x0763,
/* 1*060#0167*[0, 1, 0, 1, 0, 0]*/0x1579,0x1789,0x11BA,0x03B1,
/* 2*105#0356*[1, 0, 1, 0, 0, 0]*/0x1468,0x186B,0x190A,0x002A
};

const unsigned short int Case_10_1_2_1 [3*8] =
{
/*(0,6)(2,4)*0*085#0246*[ 0, 0, 0, 0,-1,-1]*/0x1405,0x1015,0x1021,0x1320,0x1237,0x1627,0x1675,0x0745,
/*(0,6)(1,7)*1*060#0167*[ 0,-1, 0,-1, 0, 0]*/0x1897,0x1957,0x19A5,0x11A9,0x1A13,0x1BA3,0x1B37,0x0387,
/*(0,6)(3,5)*2*105#0356*[-1, 0,-1, 0, 0, 0]*/0x1029,0x12A9,0x126A,0x1B62,0x16B8,0x1468,0x1489,0x0809
};

const unsigned short int Case_10_1_2_2 [3*8] =
{
/*(1,7)(3,5)*0*085#0246*[ 0, 0, 0, 0, 1, 1]*/0x1615,0x1621,0x1231,0x1130,0x1403,0x1437,0x1647,0x0654,
/*(3,5)(2,4)*1*060#0167*[ 0, 1, 0, 1, 0, 0]*/0x1189,0x1138,0x13B8,0x18B7,0x157B,0x15BA,0x115A,0x0195,
/*(1,7)(2,4)*2*105#0356*[ 1, 0, 1, 0, 0, 0]*/0x1A46,0x1A94,0x1904,0x1408,0x1B80,0x1B02,0x1AB2,0x0A6B
};

const unsigned short int Case_10_2_1 [3*8] =
{
/* 0*085#0246*[ 0, 0, 0, 0,-1, 1]*/0x15C1,0x1C21,0x1C62,0x1C76,0x17C3,0x1C03,0x1C40,0x04C5,
/* 1*060#0167*[ 0,-1, 0, 1, 0, 0]*/0x17C5,0x1CA5,0x1CBA,0x1C3B,0x13C1,0x1C91,0x1C89,0x08C7,
/* 2*105#0356*[-1, 0, 1, 0, 0, 0]*/0x16C4,0x1C94,0x1CA9,0x1C2A,0x12C0,0x1C80,0x1CB8,0x0BC6
};

const unsigned short int Case_10_2_2 [3*8] =
{
/* 0*085#0246*[ 0, 0, 0, 0, 1,-1]*/0x12C6,0x123C,0x137C,0x174C,0x10C4,0x101C,0x115C,0x06C5,
/* 1*060#0167*[ 0, 1, 0,-1, 0, 0]*/0x1ACB,0x1C7B,0x1C57,0x1C95,0x19C8,0x1C38,0x1C13,0x01CA,
/* 2*105#0356*[ 1, 0,-1, 0, 0, 0]*/0x19CA,0x190C,0x102C,0x12BC,0x18CB,0x184C,0x146C,0x0AC6
};

const unsigned short int Case_11 [6*4] =
{
/* 0*077#0236*/0x1B80,0x15B0,0x1150,0x06B5,
/* 1*046#0137*/0x1891,0x1681,0x1261,0x0786,
/* 2*023#0124*/0x19A2,0x1792,0x1372,0x0497,
/* 3*116#0467*/0x13BA,0x13A4,0x1340,0x04A5,
/* 4*099#0345*/0x1902,0x1927,0x1975,0x072B,
/* 5*057#0156*/0x1846,0x1861,0x1813,0x016A
};

/* _12_test_index the first two rows contains the diagonal label necessary for
 the interior test, the another used to face test comparison, Cases 12.2 */
const unsigned char _12_test_index[3][12] =
{
	{0,3,0,1,0,3,1,0,2,0,0,2},
	{2,1,2,3,1,2,2,3,3,3,1,1},
	{0,0,1,2,0,0,3,3,2,1,2,1}
};

const unsigned short int Case_12_1_1_1 [12*4] =
{
/* 0*120#0567*[-1, 0, 0,-1, 0, 0]*/0x1947,0x1B97,0x1A9B,0x0803,
/* 1*075#0235*[-1,-1, 0, 0, 0, 0]*/0x1801,0x1A81,0x1B8A,0x0945,
/* 2*045#0136*[ 0,-1,-1, 0, 0, 0]*/0x1912,0x1B92,0x189B,0x0A56,
/* 3*030#0127*[ 0, 0,-1,-1, 0, 0]*/0x1A23,0x18A3,0x19A8,0x0B67,
/* 4*089#0256*[-1, 0, 0, 0,-1, 0]*/0x1219,0x1429,0x1624,0x0038,
/* 5*106#0357*[-1, 0, 0, 0, 0,-1]*/0x1678,0x1068,0x1260,0x0459,
/* 6*058#0157*[ 0, 0, 0,-1, 0,-1]*/0x1384,0x1534,0x1135,0x07B6,
/* 7*092#0267*[ 0, 0, 0,-1,-1, 0]*/0x17B2,0x1172,0x1571,0x0380,
/* 8*086#0247*[ 0, 0,-1, 0,-1, 0]*/0x103B,0x160B,0x1406,0x021A,
/* 9*053#0146*[ 0,-1, 0, 0, 0,-1]*/0x1749,0x1179,0x1371,0x056A,
/*10*101#0346*[ 0, 0,-1, 0, 0,-1]*/0x12B7,0x1427,0x1024,0x06A5,
/*11*083#0245*[ 0,-1, 0, 0,-1, 0]*/0x1590,0x1350,0x1753,0x01A2
};

const unsigned short int Case_12_1_1_2 [12*4] =
{
/* 0*120#0567*[ 1, 0, 0, 1, 0, 0]*/0x103B,0x10B9,0x19BA,0x0478,
/* 1*075#0235*[ 1, 1, 0, 0, 0, 0]*/0x145A,0x14A8,0x18AB,0x0019,
/* 2*045#0136*[ 0, 1, 1, 0, 0, 0]*/0x156B,0x15B9,0x19B8,0x012A,
/* 3*030#0127*[ 0, 0, 1, 1, 0, 0]*/0x1678,0x168A,0x1A89,0x023B,
/* 4*089#0256*[ 1, 0, 0, 0, 1, 0]*/0x1384,0x1342,0x1246,0x0190,
/* 5*106#0357*[ 1, 0, 0, 0, 0, 1]*/0x1590,0x1506,0x1602,0x0784,
/* 6*058#0157*[ 0, 0, 0, 1, 0, 1]*/0x1B65,0x1B53,0x1351,0x0847,
/* 7*092#0267*[ 0, 0, 0, 1, 1, 0]*/0x1801,0x1817,0x1715,0x0B23,
/* 8*086#0247*[ 0, 0, 1, 0, 1, 0]*/0x11A6,0x1160,0x1064,0x03B2,
/* 9*053#0146*[ 0, 1, 0, 0, 0, 1]*/0x16A1,0x1617,0x1713,0x0495,
/*10*101#0346*[ 0, 0, 1, 0, 0, 1]*/0x1A54,0x1A42,0x1240,0x0B76,
/*11*083#0245*[ 0, 1, 0, 0, 1, 0]*/0x1A23,0x1A35,0x1537,0x0901
};

const unsigned short int Case_12_1_2_1 [12*8] =
{
/*(0,6)* 0*120#0567*[-1, 0, 0,-1, 0, 0]*/0x17B3,0x1738,0x13BA,0x1784,0x13A0,0x10A9,0x1409,0x0480,
/*(3,5)* 1*075#0235*[-1,-1, 0, 0, 0, 0]*/0x11A5,0x1159,0x15AB,0x1190,0x15B4,0x14B8,0x1048,0x0094,
/*(0,6)* 2*045#0136*[ 0,-1,-1, 0, 0, 0]*/0x12B6,0x126A,0x16B8,0x12A1,0x1685,0x1589,0x1159,0x01A5,
/*(1,7)* 3*030#0127*[ 0, 0,-1,-1, 0, 0]*/0x1387,0x137B,0x1789,0x13B2,0x1796,0x169A,0x126A,0x02B6,
/*(0,6)* 4*089#0256*[-1, 0, 0, 0,-1, 0]*/0x1948,0x1980,0x1846,0x1901,0x1863,0x1362,0x1132,0x0103,
/*(3,5)* 5*106#0357*[-1, 0, 0, 0, 0,-1]*/0x1809,0x1894,0x1902,0x1847,0x1925,0x1526,0x1756,0x0745,
/*(1,7)* 6*058#0157*[ 0, 0, 0,-1, 0,-1]*/0x1456,0x1467,0x1651,0x1478,0x161B,0x1B13,0x18B3,0x087B,
/*(0,6)* 7*092#0267*[ 0, 0, 0,-1,-1, 0]*/0x1210,0x1203,0x1015,0x123B,0x1058,0x1857,0x1B87,0x0B38,
/*(2,4)* 8*086#0247*[ 0, 0,-1, 0,-1, 0]*/0x1B6A,0x1BA2,0x1A64,0x1B23,0x1A41,0x1140,0x1310,0x0321,
/*(0,6)* 9*053#0146*[ 0,-1, 0, 0, 0,-1]*/0x191A,0x19A5,0x1A13,0x1954,0x1A36,0x1637,0x1467,0x0456,
/*(0,6)*10*101#0346*[ 0, 0,-1, 0, 0,-1]*/0x1745,0x1756,0x1540,0x176B,0x150A,0x1A02,0x1BA2,0x0B6A,
/*(2,4)*11*083#0245*[ 0,-1, 0, 0,-1, 0]*/0x1032,0x1021,0x1237,0x1019,0x127A,0x1A75,0x19A5,0x091A
};

const unsigned short int Case_12_1_2_2 [12*8] =
{
/*(2,4)* 0*120#0567*[ 1, 0, 0, 1, 0, 0]*/0x1490,0x1840,0x1A94,0x1380,0x17A4,0x1BA7,0x1B73,0x0783,
/*(1,7)* 1*075#0235*[ 1, 1, 0, 0, 0, 0]*/0x1084,0x1904,0x1B80,0x1594,0x11B0,0x1AB1,0x1A15,0x0195,
/*(2,4)* 2*045#0136*[ 0, 1, 1, 0, 0, 0]*/0x1195,0x1A15,0x1891,0x16A5,0x1281,0x1B82,0x1B26,0x02A6,
/*(3,5)* 3*030#0127*[ 0, 0, 1, 1, 0, 0]*/0x12A6,0x1B26,0x19A2,0x17B6,0x1392,0x1893,0x1837,0x03B7,
/*(1,7)* 4*089#0256*[ 1, 0, 0, 0, 1, 0]*/0x1123,0x1013,0x1621,0x1803,0x1961,0x1469,0x1498,0x0908,
/*(2,4)* 5*106#0357*[ 1, 0, 0, 0, 0, 1]*/0x1765,0x1475,0x1267,0x1945,0x1827,0x1028,0x1089,0x0849,
/*(2,4)* 6*058#0157*[ 0, 0, 0, 1, 0, 1]*/0x183B,0x178B,0x1138,0x167B,0x1418,0x1514,0x1546,0x0476,
/*(3,5)* 7*092#0267*[ 0, 0, 0, 1, 1, 0]*/0x1B78,0x13B8,0x157B,0x1038,0x125B,0x1152,0x1120,0x0230,
/*(3,5)* 8*086#0247*[ 0, 0, 1, 0, 1, 0]*/0x1301,0x1231,0x1403,0x1A21,0x1B43,0x164B,0x16BA,0x0B2A,
/*(3,5)* 9*053#0146*[ 0, 1, 0, 0, 0, 1]*/0x1476,0x1546,0x1374,0x1A56,0x1934,0x1139,0x119A,0x095A,
/*(1,7)*10*101#0346*[ 0, 0, 1, 0, 0, 1]*/0x1B2A,0x16BA,0x102B,0x156A,0x170B,0x1407,0x1475,0x0765,
/*(1,7)*11*083#0245*[ 0, 1, 0, 0, 1, 0]*/0x195A,0x119A,0x1759,0x121A,0x1079,0x1370,0x1302,0x0012
};

const unsigned short int Case_12_2_1[12*8] =
{
/* 0*120#0567*[-1, 0, 0, 1, 0, 0]*/0x1C80,0x1C94,0x18C7,0x1C47,0x1CA9,0x1BC3,0x1CBA,0x03C0,
/* 1*075#0235*[-1, 1, 0, 0, 0, 0]*/0x119C,0x15AC,0x14C9,0x145C,0x1ABC,0x10C8,0x1B8C,0x01C0,
/* 2*045#0136*[ 0,-1, 1, 0, 0, 0]*/0x12AC,0x16BC,0x15CA,0x156C,0x1B8C,0x11C9,0x189C,0x02C1,
/* 3*030#0127*[ 0, 0,-1, 1, 0, 0]*/0x13BC,0x178C,0x16CB,0x167C,0x189C,0x12CA,0x19AC,0x03C2,
/* 4*089#0256*[-1, 0, 0, 0, 1, 0]*/0x11C0,0x13C2,0x180C,0x18C3,0x162C,0x194C,0x146C,0x09C1,
/* 5*106#0357*[-1, 0, 0, 0, 0, 1]*/0x17C4,0x15C6,0x194C,0x19C5,0x126C,0x180C,0x102C,0x08C7,
/* 6*058#0157*[ 0, 0, 0,-1, 0, 1]*/0x147C,0x165C,0x1BC7,0x1B6C,0x151C,0x18C3,0x113C,0x04C8,
/* 7*092#0267*[ 0, 0, 0,-1, 1, 0]*/0x123C,0x101C,0x18C3,0x180C,0x115C,0x1BC7,0x157C,0x02CB,
/* 8*086#0247*[ 0, 0,-1, 0, 1, 0]*/0x12CA,0x16CB,0x1C23,0x1BC3,0x1C64,0x1C01,0x1C40,0x0AC1,
/* 9*053#0146*[ 0,-1, 0, 0, 0, 1]*/0x14C5,0x16C7,0x1A5C,0x1AC6,0x137C,0x191C,0x113C,0x09C4,
/*10*101#0346*[ 0, 0,-1, 0, 0, 1]*/0x176C,0x154C,0x1AC6,0x1A5C,0x140C,0x1BC2,0x102C,0x07CB,
/*11*083#0245*[ 0,-1, 0, 0, 1, 0]*/0x1C1A,0x1C59,0x11C0,0x1C90,0x1C75,0x13C2,0x1C37,0x02CA
};

const unsigned short int Case_12_2_2[12*8] =
{
/* 0*120#0567*[ 1, 0, 0,-1, 0, 0]*/0x18C3,0x1BC7,0x1C84,0x17C4,0x1CBA,0x1C90,0x1CA9,0x03C0,
/* 1*075#0235*[ 1,-1, 0, 0, 0, 0]*/0x10C9,0x14C8,0x159C,0x15C4,0x1B8C,0x11AC,0x1ABC,0x01C0,
/* 2*045#0136*[ 0, 1,-1, 0, 0, 0]*/0x11CA,0x15C9,0x16AC,0x16C5,0x189C,0x12BC,0x1B8C,0x02C1,
/* 3*030#0127*[ 0, 0, 1,-1, 0, 0]*/0x12CB,0x16CA,0x17BC,0x17C6,0x19AC,0x138C,0x189C,0x03C2,
/* 4*089#0256*[ 1, 0, 0, 0,-1, 0]*/0x190C,0x184C,0x13C0,0x138C,0x146C,0x11C2,0x162C,0x09C1,
/* 5*106#0357*[ 1, 0, 0, 0, 0,-1]*/0x184C,0x190C,0x15C4,0x159C,0x102C,0x17C6,0x126C,0x08C7,
/* 6*058#0157*[ 0, 0, 0, 1, 0,-1]*/0x18C7,0x1BC3,0x167C,0x16CB,0x113C,0x145C,0x151C,0x04C8,
/* 7*092#0267*[ 0, 0, 0, 1,-1, 0]*/0x1BC3,0x18C7,0x103C,0x10C8,0x157C,0x121C,0x115C,0x02CB,
/* 8*086#0247*[ 0, 0, 1, 0,-1, 0]*/0x1C21,0x1C03,0x12CB,0x1C3B,0x1C40,0x16CA,0x1C64,0x0AC1,
/* 9*053#0146*[ 0, 1, 0, 0, 0,-1]*/0x195C,0x1A1C,0x16C5,0x16AC,0x113C,0x14C7,0x137C,0x09C4,
/*10*101#0346*[ 0, 0, 1, 0, 0,-1]*/0x1BC6,0x1AC2,0x156C,0x15CA,0x102C,0x174C,0x140C,0x07CB,
/*11*083#0245*[ 0, 1, 0, 0,-1, 0]*/0x11C2,0x13C0,0x1C19,0x10C9,0x1C37,0x1C5A,0x1C75,0x02CA
};

const unsigned short int Case_13_1 [2*4] =
{
/* 0*090#0257-[-1,-1,-1,-1,-1,-1]*/0x1380,0x1459,0x121A,0x067B,
/* 1*090#0257+[ 1, 1, 1, 1, 1, 1]*/0x1190,0x1A65,0x1B23,0x0847
};

const unsigned short int Case_13_2 [12*6] =
{
/* 0*090#0257*[ 1,-1,-1,-1,-1,-1]*/0x1A21,0x167B,0x1350,0x1590,0x1345,0x0384,
/* 1*090#0257*[-1, 1,-1,-1,-1,-1]*/0x1380,0x1B67,0x1429,0x1219,0x14A2,0x045A,
/* 2*090#0257*[-1,-1, 1,-1,-1,-1]*/0x1803,0x1459,0x1172,0x17B2,0x1167,0x01A6,
/* 3*090#0257*[-1,-1,-1, 1,-1,-1]*/0x11A2,0x1945,0x160B,0x103B,0x1680,0x0678,
/* 4*090#0257*[-1,-1,-1,-1, 1,-1]*/0x1459,0x17B6,0x1A81,0x1801,0x1A38,0x0A23,
/* 5*090#0257*[-1,-1,-1,-1,-1, 1]*/0x1038,0x11A2,0x1B97,0x1947,0x1B59,0x0B65,
/* 6*090#0257*[-1, 1, 1, 1, 1, 1]*/0x13B2,0x165A,0x1817,0x1801,0x1197,0x0947,
/* 7*090#0257*[ 1,-1, 1, 1, 1, 1]*/0x1478,0x1B23,0x1506,0x1590,0x1016,0x01A6,
/* 8*090#0257*[ 1, 1,-1, 1, 1, 1]*/0x1784,0x1019,0x1B53,0x1B65,0x15A3,0x0A23,
/* 9*090#0257*[ 1, 1, 1,-1, 1, 1]*/0x1019,0x1A65,0x1342,0x1384,0x1472,0x07B2,
/*10*090#0257*[ 1, 1, 1, 1,-1, 1]*/0x1847,0x15A6,0x10B9,0x103B,0x1B29,0x0219,
/*11*090#0257*[ 1, 1, 1, 1, 1,-1]*/0x1901,0x13B2,0x14A8,0x145A,0x1A68,0x0678
};

const unsigned short int Case_13_3 [24*10] =
{
/* 0*090#0257*[-1,-1,-1, 1,-1, 1]*/0x14C9,0x10C8,0x1C78,0x1C47,0x1C59,0x1C65,0x1C3B,0x16CB,0x1C03,0x021A,
/* 1*090#0257*[-1,-1,-1, 1, 1,-1]*/0x12CA,0x16CB,0x1C3B,0x1C23,0x1C1A,0x1C01,0x1C78,0x10C8,0x1C67,0x0459,
/* 2*090#0257*[-1,-1, 1,-1,-1, 1]*/0x1AC1,0x19C5,0x1C65,0x1CA6,0x1C21,0x1CB2,0x1C47,0x1BC7,0x1C94,0x0803,
/* 3*090#0257*[-1,-1, 1,-1, 1,-1]*/0x1BC7,0x18C3,0x1C23,0x1CB2,0x1C67,0x1CA6,0x1C01,0x1AC1,0x1C80,0x0945,
/* 4*090#0257*[-1,-1, 1, 1,-1,-1]*/0x13C0,0x11C2,0x1CB2,0x1C3B,0x1C80,0x1C78,0x1CA6,0x17C6,0x1C1A,0x0594,
/* 5*090#0257*[-1,-1, 1, 1, 1, 1]*/0x17C4,0x15C6,0x159C,0x194C,0x178C,0x180C,0x11AC,0x11C0,0x1A6C,0x03B2,
/* 6*090#0257*[-1, 1,-1,-1,-1, 1]*/0x16CB,0x12CA,0x1C5A,0x1C65,0x1C7B,0x1C47,0x1C19,0x14C9,0x1C21,0x0038,
/* 7*090#0257*[-1, 1,-1,-1, 1,-1]*/0x10C8,0x14C9,0x1C19,0x1C01,0x1C38,0x1C23,0x1C5A,0x12CA,0x1C45,0x067B,
/* 8*090#0257*[-1, 1, 1,-1,-1,-1]*/0x15C4,0x17C6,0x1CA6,0x1C5A,0x1C94,0x1C19,0x1CB2,0x11C2,0x1C7B,0x0380,
/* 9*090#0257*[-1, 1, 1,-1, 1, 1]*/0x11C0,0x13C2,0x138C,0x180C,0x119C,0x194C,0x17BC,0x17C4,0x1B2C,0x05A6,
/*10*090#0257*[-1, 1, 1, 1,-1, 1]*/0x1BC3,0x18C7,0x180C,0x103C,0x1B2C,0x121C,0x194C,0x19C1,0x147C,0x0A65,
/*11*090#0257*[-1, 1, 1, 1, 1,-1]*/0x1AC5,0x19C1,0x194C,0x145C,0x1A6C,0x167C,0x180C,0x18C7,0x101C,0x0B23,
/*12*090#0257*[ 1,-1,-1,-1,-1, 1]*/0x18C3,0x1BC7,0x1C47,0x1C84,0x1C03,0x1C90,0x1C65,0x19C5,0x1CB6,0x0A21,
/*13*090#0257*[ 1,-1,-1,-1, 1,-1]*/0x19C5,0x1AC1,0x1C01,0x1C90,0x1C45,0x1C84,0x1C23,0x18C3,0x1CA2,0x0B67,
/*14*090#0257*[ 1,-1,-1, 1,-1,-1]*/0x17C6,0x15C4,0x1C84,0x1C78,0x1CB6,0x1C3B,0x1C90,0x13C0,0x1C59,0x01A2,
/*15*090#0257*[ 1,-1,-1, 1, 1, 1]*/0x13C2,0x11C0,0x11AC,0x1A2C,0x13BC,0x1B6C,0x159C,0x15C6,0x190C,0x0784,
/*16*090#0257*[ 1,-1, 1, 1,-1, 1]*/0x16CA,0x12CB,0x121C,0x11AC,0x165C,0x159C,0x103C,0x10C9,0x13BC,0x0478,
/*17*090#0257*[ 1,-1, 1, 1, 1,-1]*/0x10C9,0x14C8,0x145C,0x159C,0x101C,0x11AC,0x167C,0x16CA,0x178C,0x023B,
/*18*090#0257*[ 1, 1,-1,-1,-1,-1]*/0x11C2,0x13C0,0x1C90,0x1C19,0x1CA2,0x1C5A,0x1C84,0x15C4,0x1C38,0x07B6,
/*19*090#0257*[ 1, 1,-1,-1, 1, 1]*/0x15C6,0x17C4,0x17BC,0x1B6C,0x15AC,0x1A2C,0x138C,0x13C2,0x184C,0x0190,
/*20*090#0257*[ 1, 1,-1, 1,-1, 1]*/0x19C1,0x1AC5,0x1A2C,0x121C,0x190C,0x103C,0x1B6C,0x1BC3,0x165C,0x0847,
/*21*090#0257*[ 1, 1,-1, 1, 1,-1]*/0x18C7,0x1BC3,0x1B6C,0x167C,0x184C,0x145C,0x1A2C,0x1AC5,0x123C,0x0901,
/*22*090#0257*[ 1, 1, 1,-1,-1, 1]*/0x14C8,0x10C9,0x103C,0x138C,0x147C,0x17BC,0x121C,0x12CB,0x119C,0x065A,
/*23*090#0257*[ 1, 1, 1,-1, 1,-1]*/0x12CB,0x16CA,0x167C,0x17BC,0x123C,0x138C,0x145C,0x14C8,0x15AC,0x0019
};

const unsigned short int Case_13_4 [4*12] =
{
/* 0*090#0257*[ 1, 1,-1,-1,-1, 1]*/0x1C90,0x1C03,0x1C38,0x1C84,0x1C47,0x1C7B,0x1CB6,0x1C65,0x1C5A,0x1CA2,0x1C21,0x0C19,
/* 1*090#0257*[-1, 1, 1,-1, 1,-1]*/0x138C,0x123C,0x1B2C,0x17BC,0x167C,0x1A6C,0x15AC,0x145C,0x194C,0x119C,0x101C,0x080C,
/* 2*090#0257*[-1,-1, 1, 1,-1, 1]*/0x1CB2,0x1C21,0x1C1A,0x1CA6,0x1C65,0x1C59,0x1C94,0x1C47,0x1C78,0x1C80,0x1C03,0x0C3B,
/* 3*090#0257*[ 1,-1,-1, 1, 1,-1]*/0x11AC,0x101C,0x190C,0x159C,0x145C,0x184C,0x178C,0x167C,0x1B6C,0x13BC,0x123C,0x0A2C
};

const unsigned short int Case_13_5_1 [4*6] =
{
/* 0*090#0257*[-1, 1, 1,-1,-1, 1]*/0x1380,0x1921,0x1942,0x14B2,0x17B4,0x0A65,
/* 1*090#0257*[ 1, 1,-1,-1, 1,-1]*/0x1190,0x123A,0x135A,0x1385,0x1584,0x067B,
/* 2*090#0257*[ 1,-1,-1, 1,-1, 1]*/0x11A2,0x1B03,0x1B60,0x1690,0x1596,0x0847,
/* 3*090#0257*[-1,-1, 1, 1, 1,-1]*/0x13B2,0x1018,0x1178,0x11A7,0x17A6,0x0459
};

const unsigned short int Case_13_5_2 [8*10] =
{
/*(0,6)*0*090#0257.0[-1, 1, 1,-1,-1, 1]*/0x1847,0x1B87,0x18B3,0x1804,0x1094,0x1190,0x1310,0x1213,0x1B23,0x05A6,
/*(1,7)*1*090#0257.1[ 1, 1,-1,-1, 1,-1]*/0x1038,0x1302,0x1012,0x1908,0x1498,0x1945,0x1951,0x15A1,0x1A21,0x067B,
/*(2,4)*2*090#0257.2[ 1,-1,-1, 1,-1, 1]*/0x1A65,0x19A5,0x1A91,0x1A26,0x12B6,0x13B2,0x1132,0x1031,0x1901,0x0784,
/*(3,5)*3*090#0257.3[-1,-1, 1, 1, 1,-1]*/0x1380,0x1837,0x13B7,0x1230,0x1120,0x121A,0x12AB,0x1A6B,0x167B,0x0594,
/*(0,6)*4*090#0257.6[-1, 1, 1,-1,-1, 1]*/0x1A21,0x12AB,0x1A6B,0x15A1,0x1951,0x1594,0x1546,0x1476,0x17B6,0x0803,
/*(1,7)*5*090#0257.7[ 1, 1,-1,-1, 1,-1]*/0x1B23,0x18B3,0x1B87,0x1B62,0x16A2,0x15A6,0x1756,0x1457,0x1847,0x0190,
/*(2,4)*6*090#0257.4[ 1,-1,-1, 1,-1, 1]*/0x1803,0x1089,0x1849,0x1783,0x1B73,0x17B6,0x1764,0x1654,0x1594,0x0A21,
/*(3,5)*7*090#0257.5[-1,-1, 1, 1, 1,-1]*/0x1901,0x1A91,0x19A5,0x1940,0x1480,0x1784,0x1574,0x1675,0x1A65,0x03B2
};

const unsigned short int Case_14 [6*4] =
{
/* 0*113#0456*/0x1370,0x17A0,0x1A90,0x0A76,
/* 1*071#0234*/0x1140,0x11B4,0x11AB,0x074B,
/* 2*043#0135*/0x1251,0x1285,0x12B8,0x0458,
/* 3*029#0126*/0x1362,0x1396,0x1389,0x0569,
/* 4*054#0147*/0x1139,0x1369,0x1649,0x063B,
/* 5*108#0367*/0x1857,0x1825,0x1802,0x0A52
};
