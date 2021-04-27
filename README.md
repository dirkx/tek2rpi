Cursory tested against https://github.com/minvws/nl-contact-tracing-odds-and-ends/tree/master/test-vectors/tek-rpi

Compile with

        cc -I /opt/local/include -o gaen gaen.c /opt/local/lib/libmbedcrypto.a

Example:

       ./gaen  9938d3f261dc56eb6eb4e8bd5e7909dd 2631600


Output:

```
TEK     :  99 38 d3 f2 61 dc 56 eb 6e b4 e8 bd 5e 79 09 dd
Period  : 2631600
RPIs for this day:
  00000:  10 b8 bc 7c 53 38 bb 3b a7 e7 31 c1 7e 46 18 48
  00001:  bc fd b7 bc 4c b7 3d d1 51 22 4e 5b b0 a3 80 f7
  00002:  e6 83 da c1 7a f9 14 de 3e 0b 9f e0 43 27 2b de
  00003:  7c ad c0 f4 cd f5 a6 08 83 7f 41 67 8c b8 f2 0b
  00004:  68 da dd d4 a4 90 ef b0 e2 a8 dc c6 58 25 b4 82
  00005:  3c 81 d3 c5 ac 3b 74 b8 2e b9 cb 79 19 da f9 28
  00006:  d2 39 d0 d5 8a 06 0c a3 93 d8 a0 96 11 68 79 b6
  00007:  3a 31 1b 1b 39 7f 7e a6 7b 70 89 bc f9 f6 b0 3f
  00008:  df df 6e fb c8 c4 d0 8a 42 d4 1a 82 67 ad d2 8a
  00009:  a6 a5 a0 61 d1 13 a9 f1 93 38 d3 26 88 41 57 9d
  00010:  98 4b 10 25 03 65 8f 3e da 60 41 05 2e 74 1b 7a
  00011:  90 d5 e0 c9 f6 21 3d e9 c5 9c 94 f9 99 db 49 76
  00012:  5a 81 f6 cf b4 04 d6 41 b3 af ef a2 6d ea 2b b2
  00013:  0c 90 be fc ef fc 82 e7 fc 7d e4 df 65 b1 19 f4
  00014:  50 7e 92 28 91 3d dd 08 a3 7d b6 83 b7 c4 10 2f
  00015:  38 fc d5 7b 5d dd f3 75 ac f1 30 60 cb 29 cf 1d
  00016:  f9 5c cf 88 e9 3f 28 fa f8 0e c5 db 93 6f 97 c0
  00017:  3b 20 0e a8 0e 60 52 ba 05 25 a0 e8 b4 bb 0e a6
  00018:  42 de f6 d0 c3 91 83 80 c6 d3 2c 35 3b 28 95 b7
  00019:  13 f4 90 88 b7 3e 1e 30 c8 35 d6 70 09 7f 64 1e
  00020:  0c ce 15 ca 75 74 eb 45 47 48 a3 a9 e7 db b0 d7
  00021:  1a 71 48 a5 06 91 3e c0 cf 8c 52 fa d3 00 85 34
  00022:  41 23 f6 e6 3e 94 81 3e 1d da a5 d3 b9 7f d7 5a
  00023:  4b 63 22 43 17 76 a9 31 2c be c8 87 42 67 56 b6
  00024:  12 91 e2 d3 d9 29 66 29 4f 6f 06 24 55 cf e7 a0
  00025:  39 a0 b7 56 ff d4 24 f4 82 3b 89 98 eb a9 f8 f9
  00026:  9b 38 f3 04 b1 b7 77 d8 30 17 ba 5b 4c ac 1f 0f
  00027:  7a 5d 9b 7f 77 c4 8d 9a 9f a7 6f 08 cc d8 22 67
  00028:  60 51 20 15 d4 df a7 a6 6a 5b db b9 c0 62 6b e4
  00029:  dc 5e 09 ca b1 45 8a 24 cc ab f3 41 8c a8 96 87
  00030:  72 72 61 35 3f 0a 38 4e a2 3a ce b3 0f 2d f3 25
  00031:  1c cd b5 5e 5f 10 bb e2 e5 e4 28 38 e8 c2 62 7c
  00032:  ed 4a d7 98 bf c8 c1 e3 36 45 ae fa fe 8c db b0
  00033:  3e 2c d7 4f 90 30 db 83 7e ac 2e 4e ea 1c 40 c1
  00034:  88 8c c4 cd 9c 5a e4 b5 60 82 9c 81 13 6f f2 3c
  00035:  1e 9b cb 17 d0 ce 0e a5 8d 29 d3 14 64 20 5b a4
  00036:  fe 07 88 0b 4a b4 24 fb df 40 0b 4d e8 be 3a f8
  00037:  43 27 e1 fe c1 8b 3d 96 83 f3 dd 17 f5 35 d0 21
  00038:  e9 b6 b6 6d e8 c3 7e f3 58 3d a0 09 e2 21 e3 c2
  00039:  80 fa a0 26 df 2c 50 28 2e 4c b9 0c 3d 9e 56 53
  00040:  b5 d9 a6 0b 6e ac a9 39 2c 14 96 15 ca 78 5e f3
  00041:  52 32 d1 11 53 0c 45 53 26 3b cd 09 af 72 33 3f
  00042:  86 89 65 01 9c 5c 8f cc f8 85 a8 df 71 7f 5e 5f
  00043:  a9 e6 d3 5e dd 04 6b 76 df 76 23 b7 c7 77 1b bb
  00044:  35 e0 0e f6 65 9e 3e c9 41 42 56 3e 75 f7 d6 8d
  00045:  82 9b 7c 51 b3 2f 69 3f 20 09 60 44 dd f9 d7 ca
  00046:  18 80 04 1e a4 e3 e7 66 52 50 48 ae 3f dc 51 84
  00047:  55 7a c9 fe a6 28 05 4a d5 44 05 6b da 2c 66 e1
  00048:  29 ea 44 6b e6 35 43 3a 5e 42 8d 49 f9 ae a5 45
  00049:  9b 1b 96 9f aa 5e 92 49 c2 64 bb d1 40 1f 95 5d
  00050:  09 0a da 4b a5 b9 90 b6 ef 38 de 31 99 55 71 83
  00051:  4b e5 a9 5b de 27 47 bf 2c 82 4e c9 f0 42 54 71
  00052:  a0 ef 39 8a 9e c1 16 a2 4b 48 00 9a f5 16 de d5
  00053:  79 9d d7 d0 04 8b e1 64 84 73 cd ef f1 99 f7 d0
  00054:  93 b6 65 85 b4 e2 b7 bf ad ae 2f 36 67 48 a0 58
  00055:  90 30 40 79 d8 a4 73 6e a0 48 a0 bf 4e 3e 90 93
  00056:  8d 11 cc a6 d9 d5 40 c3 30 a1 cf 34 b4 66 8f a4
  00057:  1e fa f4 de c0 c5 c8 d4 62 c5 06 cb b7 e3 46 8f
  00058:  38 c7 13 c5 fb 9b 54 40 98 86 cd c9 c4 40 7a cf
  00059:  b8 ec f1 f0 ca 8e 7e 4e bf b8 b9 4d ee e3 01 9a
  00060:  f7 94 9f 05 34 d3 2b 88 7b 6e 1f f0 d2 0d 61 56
  00061:  65 e2 13 e7 6a d6 0e 30 86 a8 23 2a b7 b8 94 d6
  00062:  83 e1 ae 27 e3 af c2 22 7f 4e 9e 75 f8 bd 9f 4d
  00063:  a9 4e 41 2c cb cb 8b 69 92 98 c5 56 26 5d ee 3b
  00064:  8f f9 ff 20 37 41 13 e3 40 e2 bf 96 ff 01 d9 47
  00065:  da b6 76 21 c9 c7 0e 0c d9 2a cd c8 b5 c8 d0 85
  00066:  e2 a4 79 08 28 85 7c 97 99 49 93 66 86 2c 0b 7e
  00067:  d2 36 33 cd 3d 9d c3 81 cf ed 66 a8 df f6 17 91
  00068:  79 68 2b c1 ed 96 09 04 ca 22 56 50 02 a0 1f 94
  00069:  26 17 50 52 99 9d ce 88 c6 83 ff f7 f6 ba 8f 69
  00070:  7d 6b c0 5c d2 6c 28 5b 99 34 f2 e2 4f 2d e4 5f
  00071:  48 1b ea a1 a2 3d 4c 20 96 82 9e d3 1d fe 8d 9b
  00072:  9b 45 b8 5b 6f 21 f1 ff 6d 73 c9 41 10 2a 54 e9
  00073:  19 9d ba 59 74 6c fe e0 5c 1c f2 5e ab f8 5a fe
  00074:  b1 5c 61 17 20 73 bf 66 ee a4 1c a1 a8 10 1c e4
  00075:  18 03 88 69 2f eb f1 7a d9 ff 54 75 20 ec 7c a5
  00076:  89 85 86 9c ca dd d7 70 99 0b 3b bb b8 d2 7b 9f
  00077:  bf 55 6c 81 4d 87 5d 2e 1b b5 8e 1b 37 bc 5f 65
  00078:  be ae 03 40 3b 28 11 e6 ee a9 37 65 a3 e8 b2 8b
  00079:  5b 79 45 41 1b 88 a9 5d 30 d5 61 98 46 df 38 f7
  00080:  1a a2 5a 1d da 30 27 82 54 12 a3 50 11 0c b2 c8
  00081:  cf 0a 60 df 7a d4 83 e2 82 48 67 17 a7 6d af 80
  00082:  8e 25 b7 d6 b0 b0 6f 03 e9 2d d1 a4 bd 62 bb 75
  00083:  63 8c 52 c6 58 1b 12 b3 52 6c ea df 21 e2 b4 92
  00084:  9f eb ee de 8d d6 10 73 fb a9 9d e1 ef 03 e8 b5
  00085:  15 39 9a 42 86 98 29 56 61 53 07 dd cd 57 f1 a1
  00086:  37 33 7a 93 fb 44 a6 f7 40 0a bb 5f 30 3a 83 c9
  00087:  ae 32 d4 d9 49 f3 6e f7 d1 89 cd 17 43 d1 52 db
  00088:  a6 51 56 d1 06 49 1a fc 0f a3 98 07 04 46 28 f2
  00089:  d3 01 41 b5 9c 02 3e 59 27 79 bb ef b9 24 f6 48
  00090:  de 5d 0e 03 65 17 64 64 ae 55 31 6d 98 0a 73 e9
  00091:  02 24 5b 59 52 f2 92 9f 70 bd 73 3c 8b 99 81 e7
  00092:  8c 65 1a 61 7c b3 87 88 22 3c dc f4 08 e0 19 f6
  00093:  12 5d 59 90 91 f7 d0 cb d1 42 b2 ff fd 59 d8 5c
  00094:  88 2d 1e 01 b7 29 9e 6f c9 de f5 5d c9 91 2b a7
  00095:  9e ba c8 ad 71 99 8c c7 4c 4e 29 54 3b e7 ab 1b
  00096:  27 85 09 bf 27 a1 ec dc 4d f5 27 19 94 00 7d 66
  00097:  7a a3 1c 6d cd 43 09 0c a1 b3 6d 65 e1 75 4e 00
  00098:  71 ec 0f 6d b1 a9 c0 19 53 da 60 36 b4 fd 39 74
  00099:  f9 03 89 1b f4 75 9d 31 72 54 6f 99 10 50 94 ad
  00100:  0f 3a 02 b9 7b e3 5a 05 5e 62 e6 97 b3 82 48 2e
  00101:  90 aa 3d 3a d0 d5 47 e5 81 5e 24 03 99 21 ae 90
  00102:  36 10 86 f9 ea c7 1d 39 7f 86 54 65 be 7f 32 e0
  00103:  4c 85 4c eb 89 e0 98 f7 f1 26 68 f3 79 c0 6d 2f
  00104:  5b e7 c3 c8 60 6a 4f dd b1 e9 a5 42 60 e9 d3 da
  00105:  07 82 02 38 2a 75 df 2a 8f b3 8d 67 ce 7e b4 81
  00106:  6a dd 13 f9 ca 16 c2 5c 5d da 92 cc 0e 5b 95 e6
  00107:  1e bd 6c 34 f2 fa 2f f1 9c d4 45 df ad 8c 1a 80
  00108:  4a 17 71 fd ea 23 4c 98 f3 3b 1c ec eb 2d bc 7d
  00109:  1b 48 1d c2 09 76 20 ca d9 49 f9 ef d6 81 e9 c4
  00110:  ec 5d d4 a7 65 9f 84 b6 39 3f bf f7 61 97 db 1c
  00111:  50 11 9e 35 af bd 4d 3a 2c e7 8e 9a 69 1f 9f 7e
  00112:  55 0f 95 27 ad c6 e1 cc d0 ec 7e 87 3e fd 07 6b
  00113:  6a 37 ee d3 5b 7a c5 82 e3 73 da 92 dd 4d 64 54
  00114:  55 80 9f 54 b4 1d 71 8a 0a ec 65 ed a5 14 a0 4f
  00115:  fb 9b cc 46 3c ad fb 25 38 55 b6 a2 c2 d6 95 13
  00116:  44 98 ac 80 58 bf ea 18 02 75 72 d9 ec 1f 31 9d
  00117:  55 54 ca 70 28 d4 77 93 82 2f 84 6d 89 93 ea 62
  00118:  54 2e ab 51 5b 06 77 fe cd c6 e0 5b 32 4d d4 00
  00119:  ce 2c 0d 23 5a a2 28 ee 6d 70 2a 07 92 c2 d5 9e
  00120:  b1 64 c0 9a 9b 29 50 77 ca 51 80 fa d1 7d 6c 92
  00121:  c1 54 62 6f 96 4c 6b 48 5e 2b c0 7b a8 7e 92 0b
  00122:  e5 b2 c1 10 6a 8a b5 97 ce 29 b7 94 93 dc a1 87
  00123:  c8 3e 16 e9 02 56 c1 a2 fd 64 d2 6a c2 2e 5e fa
  00124:  51 7b 33 99 ea de 57 e9 ec 15 17 3a 11 fb e8 cf
  00125:  0e 35 ad c0 1f 64 17 10 3f 40 50 93 9d d9 93 21
  00126:  ea 9c 02 c4 b8 1e b4 ab f6 d4 da d5 ad 14 d5 ba
  00127:  0c 2d 26 14 fa 72 98 8d 41 bf 2b d9 03 3a 10 4b
  00128:  b8 8b ce 8a 7a 4f f9 fa a5 eb 68 7c 17 31 21 4a
  00129:  87 7d d8 04 bb 78 7f 2e 06 6b f7 8e f8 f0 07 a0
  00130:  4c dc 46 e6 ad d7 8e 92 3a 77 83 98 79 f7 a3 db
  00131:  d6 84 80 f8 9c 27 40 57 8a 62 be 63 31 0b e3 27
  00132:  a8 1f f5 67 1e f2 ef 4f 05 b2 77 9a de 2c 01 1d
  00133:  0b bb 05 f4 32 b3 d6 72 c7 4f 53 3a 38 a6 b0 46
  00134:  f2 bc 91 36 81 49 c3 98 31 21 03 99 5c 90 da 11
  00135:  17 37 33 70 fa 37 e6 73 1b b7 75 10 d8 39 de 32
  00136:  67 65 f7 c1 23 40 3a 14 c1 ea 50 8a 76 4d 00 61
  00137:  e7 4d 1d c0 cd fd 5f 85 71 11 6e ac 13 a3 84 86
  00138:  7e a3 9c 9c e7 7c 36 ec cc 7a de d8 27 ec 36 18
  00139:  2f 53 71 10 2f a8 9f 9b 4b d8 43 be 6a c1 dc 98
  00140:  54 85 46 ea 08 49 62 b9 1c 07 5b 54 96 be 8f 7a
  00141:  f1 37 f5 44 67 0c ae 2a 5e b1 b7 ef e9 9e 57 7a
  00142:  2a 11 74 87 f5 49 62 ce 78 23 f2 00 ec 07 67 87
  00143:  0a 4b f1 54 c7 1e b9 8f 65 eb 1b 29 00 a9 14 06
```

