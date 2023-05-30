int __fastcall sub_53952(_DWORD *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // r8
  int v4; // r0
  unsigned int v5; // r3
  __int64 v6; // r4
  unsigned int v7; // r11
  int v8; // kr90_4
  __int64 v9; // r0
  __int64 v10; // r2
  unsigned __int64 v11; // krC0_8
  unsigned __int64 v12; // krF8_8
  unsigned __int64 v13; // kr130_8
  int v14; // kr14_4
  unsigned __int64 v15; // kr1D0_8
  __int64 v16; // kr1D8_8
  unsigned __int64 v17; // kr220_8
  signed __int64 v18; // kr250_8
  signed __int64 v19; // kr258_8
  int result; // r0
  unsigned int v21; // [sp+4h] [bp-A8h]
  int v22; // [sp+8h] [bp-A4h]
  unsigned int v23; // [sp+Ch] [bp-A0h]
  unsigned int v24; // [sp+10h] [bp-9Ch]
  unsigned int v25; // [sp+18h] [bp-94h]
  unsigned int v26; // [sp+24h] [bp-88h]
  unsigned int v27; // [sp+30h] [bp-7Ch]
  unsigned int v29; // [sp+3Ch] [bp-70h]
  int v30; // [sp+40h] [bp-6Ch]
  unsigned int v31; // [sp+54h] [bp-58h]
  unsigned int v32; // [sp+5Ch] [bp-50h]
  unsigned int v33; // [sp+60h] [bp-4Ch]
  unsigned int v34; // [sp+64h] [bp-48h]
  unsigned int v35; // [sp+68h] [bp-44h]
  unsigned int v36; // [sp+6Ch] [bp-40h]
  unsigned int v37; // [sp+70h] [bp-3Ch]
  unsigned int v38; // [sp+74h] [bp-38h]
  unsigned int v39; // [sp+78h] [bp-34h]
  unsigned int v40; // [sp+7Ch] [bp-30h]
  unsigned int v41; // [sp+84h] [bp-28h]
  unsigned int v42; // [sp+88h] [bp-24h]
  unsigned int v43; // [sp+8Ch] [bp-20h]

  v42 = *a3;
  v35 = a3[1];
  v3 = a2[8];
  v31 = a3[2];
  v4 = 38 * a3[3];
  v32 = a3[3];
  v41 = a2[9];
  v5 = a2[7];
  v30 = v4;
  HIDWORD(v6) = (v3 * (unsigned __int64)(19 * v31) + 38 * v35 * (unsigned __int64)v41) >> 32;
  v40 = v5;
  v7 = a3[5];
  LODWORD(v6) = v5 * v4;
  v29 = a3[4];
  v39 = a2[6];
  v36 = *a2;
  v8 = v39 * 19 * v29 + v3 * 19 * v31 + 38 * v35 * v41 + v5 * v4;
  HIDWORD(v6) = (v39 * (unsigned __int64)(19 * v29)
               + __PAIR64__((v5 * (unsigned __int64)(unsigned int)v4) >> 32, v3 * 19 * v31 + 38 * v35 * v41)
               + v6) >> 32;
  v33 = a2[5];
  v23 = a3[7];
  LODWORD(v6) = v33 * 38 * v7;
  v24 = a3[6];
  v38 = a2[4];
  v43 = a2[2];
  v34 = a2[3];
  v37 = a2[1];
  v25 = a3[8];
  v27 = a3[9];
  HIDWORD(v10) = (v43 * (unsigned __int64)(19 * v25)
                + v38 * (unsigned __int64)(19 * v24)
                + __PAIR64__((v33 * (unsigned __int64)(38 * v7)) >> 32, v8)
                + v6
                + v34 * (unsigned __int64)(38 * v23)) >> 32;
  LODWORD(v9) = v43 * 19 * v25 + v38 * 19 * v24 + v8 + v6 + v34 * 38 * v23;
  HIDWORD(v9) = (v37 * (unsigned __int64)(38 * v27)) >> 32;
  LODWORD(v10) = v37 * 38 * v27;
  v11 = v36 * (unsigned __int64)v42 + v9 + v10;
  v12 = v36 * (unsigned __int64)v35
      + v43 * (unsigned __int64)(19 * v27)
      + v38 * (unsigned __int64)(19 * v23)
      + v39 * (unsigned __int64)(19 * v7)
      + v3 * (unsigned __int64)(19 * v32)
      + 19 * v31 * (unsigned __int64)v41
      + v40 * (unsigned __int64)(19 * v29)
      + v33 * (unsigned __int64)(19 * v24)
      + v34 * (unsigned __int64)(19 * v25)
      + v42 * (unsigned __int64)v37;
  v13 = v36 * (unsigned __int64)v31
      + v37 * (unsigned __int64)(2 * v35)
      + v38 * (unsigned __int64)(19 * v25)
      + v39 * (unsigned __int64)(19 * v24)
      + v3 * (unsigned __int64)(19 * v29)
      + (unsigned int)v30 * (unsigned __int64)v41
      + v40 * (unsigned __int64)(38 * v7)
      + v33 * (unsigned __int64)(38 * v23)
      + v34 * (unsigned __int64)(38 * v27)
      + v42 * (unsigned __int64)v43;
  v14 = (__int64)(v12 + (v11 >> 26)) >> 25;
  v21 = (v13 + ((v12 + (v11 >> 26)) >> 25)) >> 32;
  a1[3] = (v36 * v32
         + v37 * v31
         + v38 * 19 * v27
         + v39 * 19 * v23
         + v3 * 19 * v7
         + 19 * v29 * v41
         + v40 * 19 * v24
         + v33 * 19 * v25
         + v43 * v35
         + v42 * v34
         + (((unsigned int)(v13 + v14) >> 26) | (v21 << 6))) & 0x1FFFFFF;
  HIDWORD(v9) = v36 * v29
              + v37 * 2 * v32
              + v34 * 2 * v35
              + v39 * 19 * v25
              + v3 * 19 * v24
              + 38 * v7 * v41
              + v40 * 38 * v23
              + v33 * 38 * v27
              + v43 * v31
              + v42 * v38
              + ((__int64)(v36 * (unsigned __int64)v32
                         + v37 * (unsigned __int64)v31
                         + v38 * (unsigned __int64)(19 * v27)
                         + v39 * (unsigned __int64)(19 * v23)
                         + v3 * (unsigned __int64)(19 * v7)
                         + 19 * v29 * (unsigned __int64)v41
                         + v40 * (unsigned __int64)(19 * v24)
                         + v33 * (unsigned __int64)(19 * v25)
                         + v43 * (unsigned __int64)v35
                         + v42 * (unsigned __int64)v34
                         + __PAIR64__(v21 >> 26, ((unsigned int)(v13 + v14) >> 26) | (v21 << 6))) >> 25);
  a1[4] = HIDWORD(v9) & 0x3FFFFFF;
  v26 = (v36 * (unsigned __int64)v29
       + v37 * (unsigned __int64)(2 * v32)
       + v34 * (unsigned __int64)(2 * v35)
       + v39 * (unsigned __int64)(19 * v25)
       + v3 * (unsigned __int64)(19 * v24)
       + 38 * v7 * (unsigned __int64)v41
       + v40 * (unsigned __int64)(38 * v23)
       + v33 * (unsigned __int64)(38 * v27)
       + v43 * (unsigned __int64)v31
       + v42 * (unsigned __int64)v38
       + ((v36 * (unsigned __int64)v32
         + v37 * (unsigned __int64)v31
         + v38 * (unsigned __int64)(19 * v27)
         + v39 * (unsigned __int64)(19 * v23)
         + v3 * (unsigned __int64)(19 * v7)
         + 19 * v29 * (unsigned __int64)v41
         + v40 * (unsigned __int64)(19 * v24)
         + v33 * (unsigned __int64)(19 * v25)
         + v43 * (unsigned __int64)v35
         + v42 * (unsigned __int64)v34
         + __PAIR64__(v21 >> 26, ((unsigned int)(v13 + v14) >> 26) | (v21 << 6))) >> 25)) >> 32;
  v22 = (HIDWORD(v9) >> 26) | (v26 << 6);
  a1[5] = (v36 * v7
         + v37 * v29
         + v34 * v31
         + v39 * 19 * v27
         + v3 * 19 * v23
         + 19 * v24 * v41
         + v40 * 19 * v25
         + v38 * v35
         + v43 * v32
         + v42 * v33
         + v22) & 0x1FFFFFF;
  v15 = v36 * (unsigned __int64)v24
      + v37 * (unsigned __int64)(2 * v7)
      + v34 * (unsigned __int64)(2 * v32)
      + v33 * (unsigned __int64)(2 * v35)
      + v3 * (unsigned __int64)(19 * v25)
      + 38 * v23 * (unsigned __int64)v41
      + v40 * (unsigned __int64)(38 * v27)
      + v38 * (unsigned __int64)v31
      + v43 * (unsigned __int64)v29
      + v42 * (unsigned __int64)v39;
  a1[6] = (v15
         + ((__int64)(v36 * (unsigned __int64)v7
                    + v37 * (unsigned __int64)v29
                    + v34 * (unsigned __int64)v31
                    + v39 * (unsigned __int64)(19 * v27)
                    + v3 * (unsigned __int64)(19 * v23)
                    + 19 * v24 * (unsigned __int64)v41
                    + v40 * (unsigned __int64)(19 * v25)
                    + v38 * (unsigned __int64)v35
                    + v43 * (unsigned __int64)v32
                    + v42 * (unsigned __int64)v33
                    + __PAIR64__(v26 >> 26, v22)) >> 25)) & 0x3FFFFFF;
  v16 = v15
      + ((v36 * (unsigned __int64)v7
        + v37 * (unsigned __int64)v29
        + v34 * (unsigned __int64)v31
        + v39 * (unsigned __int64)(19 * v27)
        + v3 * (unsigned __int64)(19 * v23)
        + 19 * v24 * (unsigned __int64)v41
        + v40 * (unsigned __int64)(19 * v25)
        + v38 * (unsigned __int64)v35
        + v43 * (unsigned __int64)v32
        + v42 * (unsigned __int64)v33
        + __PAIR64__(v26 >> 26, v22)) >> 25);
  v17 = v36 * (unsigned __int64)v25
      + v37 * (unsigned __int64)(2 * v23)
      + v34 * (unsigned __int64)(2 * v7)
      + v33 * (unsigned __int64)(2 * v32)
      + v39 * (unsigned __int64)v31
      + v40 * (unsigned __int64)(2 * v35)
      + 38 * v27 * (unsigned __int64)v41
      + v38 * (unsigned __int64)v29
      + v43 * (unsigned __int64)v24
      + v42 * (unsigned __int64)v3
      + ((((unsigned __int64)v16 >> 26)
        + v36 * (unsigned __int64)v23
        + v37 * (unsigned __int64)v24
        + v34 * (unsigned __int64)v29
        + v33 * (unsigned __int64)v31
        + v3 * (unsigned __int64)(19 * v27)
        + 19 * v25 * (unsigned __int64)v41
        + v39 * (unsigned __int64)v35
        + v38 * (unsigned __int64)v32
        + v43 * (unsigned __int64)v7
        + v42 * (unsigned __int64)v40) >> 25);
  v18 = v36 * (unsigned __int64)v27
      + v37 * (unsigned __int64)v25
      + v34 * (unsigned __int64)v24
      + v33 * (unsigned __int64)v29
      + v40 * (unsigned __int64)v31
      + v3 * (unsigned __int64)v35
      + v39 * (unsigned __int64)v32
      + v38 * (unsigned __int64)v7
      + v43 * (unsigned __int64)v23
      + v42 * (unsigned __int64)v41
      + (v17 >> 26);
  v19 = 19LL * (unsigned int)(v18 >> 25) + __PAIR64__(19 * (HIDWORD(v18) >> 25), (v36 * v42 + v9 + v10) & 0x3FFFFFF);
  a1[8] = v17 & 0x3FFFFFF;
  a1[9] = v18 & 0x1FFFFFF;
  *a1 = v19 & 0x3FFFFFF;
  a1[7] = ((v16 >> 26)
         + v36 * v23
         + v37 * v24
         + v34 * v29
         + v33 * v31
         + v3 * 19 * v27
         + 19 * v25 * v41
         + v39 * v35
         + v38 * v32
         + v43 * v7
         + v42 * v40) & 0x1FFFFFF;
  LODWORD(v9) = (v19 >> 26) + ((v12 + ((__int64)v11 >> 26)) & 0x1FFFFFF);
  a1[1] = v9 & 0x1FFFFFF;
  result = ((v13 + v14) & 0x3FFFFFF) + ((unsigned int)v9 >> 25);
  a1[2] = result;
  return result;
}

int __fastcall sub_53EE4(_DWORD *a1, unsigned int *a2)
{
  unsigned int v2; // r11
  unsigned int v3; // r0
  unsigned int v4; // r9
  unsigned int v5; // r10
  unsigned __int64 v6; // krA8_8
  __int64 v7; // r2
  unsigned __int64 v8; // krB8_8
  unsigned __int64 v9; // krC0_8
  unsigned __int64 v10; // krE0_8
  __int64 v11; // r4
  __int64 v12; // kr108_8
  unsigned __int64 v13; // kr128_8
  unsigned __int64 v14; // kr148_8
  unsigned __int64 v15; // kr158_8
  unsigned __int64 v16; // kr198_8
  signed __int64 v17; // r0
  signed __int64 v18; // kr1B8_8
  int result; // r0
  unsigned int v20; // [sp+18h] [bp-64h]
  unsigned int v21; // [sp+24h] [bp-58h]
  unsigned int v22; // [sp+30h] [bp-4Ch]
  unsigned int v23; // [sp+34h] [bp-48h]
  unsigned int v24; // [sp+38h] [bp-44h]
  unsigned int v25; // [sp+3Ch] [bp-40h]
  unsigned int v26; // [sp+44h] [bp-38h]
  unsigned int v28; // [sp+50h] [bp-2Ch]
  unsigned int v29; // [sp+58h] [bp-24h]
  unsigned int v30; // [sp+5Ch] [bp-20h]

  v24 = a2[8];
  v29 = a2[1];
  v30 = a2[2];
  v2 = a2[3];
  v26 = a2[4];
  v3 = a2[6];
  v4 = a2[5];
  v25 = (19 * v24) >> 31;
  v23 = a2[7];
  v5 = (19 * v3) >> 31;
  v20 = a2[9];
  v28 = *a2;
  v21 = v2;
  v6 = *a2 * (unsigned __int64)(2 * v29)
     + v30 * (unsigned __int64)(38 * v20)
     + v26 * (unsigned __int64)(38 * v23)
     + __PAIR64__(v5, 38 * v3) * v4
     + __PAIR64__(v25, 38 * v24) * v2;
  LODWORD(v7) = 76 * v23 * v2;
  HIDWORD(v7) = (38 * v4 * (unsigned __int64)v4 + __PAIR64__(v5, 38 * v3) * v26) >> 32;
  v8 = v7
     + __PAIR64__((__PAIR64__((38 * v23) >> 31, 76 * v23) * v2) >> 32, 38 * v4 * v4 + 38 * v3 * v26)
     + __PAIR64__(v30, 38 * v24) * v30;
  v22 = (38 * v20) >> 31;
  v9 = v28 * (unsigned __int64)v28 + __PAIR64__(v22, 76 * v20) * v29 + v8;
  v10 = 2 * v29 * (unsigned __int64)v29
      + 19 * v3 * (unsigned __int64)v3
      + __PAIR64__((38 * v23) >> 31, 76 * v23) * v4
      + __PAIR64__(v25, 38 * v24) * v26
      + __PAIR64__(v22, 76 * v20) * v2
      + *a2 * (unsigned __int64)(2 * v30);
  HIDWORD(v11) = (v29 * (unsigned __int64)(2 * v30)
                + v3 * (unsigned __int64)(38 * v23)
                + __PAIR64__(v25, 38 * v24) * v4
                + v26 * (unsigned __int64)(38 * v20)) >> 32;
  LODWORD(v11) = *a2 * 2 * v2;
  v12 = __PAIR64__(
          (*a2 * (unsigned __int64)(2 * v2)) >> 32,
          v29 * 2 * v30 + v3 * 38 * v23 + 38 * v24 * v4 + v26 * 38 * v20)
      + v11;
  a1[3] = (v29 * 2 * v30
         + v3 * 38 * v23
         + 38 * v24 * v4
         + v26 * 38 * v20
         + v11
         + ((__int64)(v10 + (((v9 >> 26) + v6) >> 25)) >> 26)) & 0x1FFFFFF;
  v13 = v28 * (unsigned __int64)(2 * v26)
      + v30 * (unsigned __int64)v30
      + 38 * v23 * (unsigned __int64)v23
      + __PAIR64__(v25, 38 * v24) * v3
      + __PAIR64__(v22, 76 * v20) * v4
      + v29 * (unsigned __int64)(4 * v2);
  a1[4] = (v13 + ((__int64)(v12 + ((v10 + (((v9 >> 26) + v6) >> 25)) >> 26)) >> 25)) & 0x3FFFFFF;
  v14 = ((v13 + ((v12 + ((v10 + (((v9 >> 26) + v6) >> 25)) >> 26)) >> 25)) >> 26)
      + v28 * (unsigned __int64)(2 * v4)
      + v29 * (unsigned __int64)(2 * v26)
      + v3 * (unsigned __int64)(38 * v20)
      + __PAIR64__(v25, 38 * v24) * v23
      + v30 * (unsigned __int64)(2 * v2);
  a1[5] = v14 & 0x1FFFFFF;
  v15 = v28 * (unsigned __int64)(2 * v3)
      + v30 * (unsigned __int64)(2 * v26)
      + 19 * v24 * (unsigned __int64)v24
      + __PAIR64__(v22, 76 * v20) * v23
      + 2 * v21 * (unsigned __int64)v21
      + v29 * (unsigned __int64)(4 * v4);
  a1[6] = (v15 + ((__int64)v14 >> 25)) & 0x3FFFFFF;
  HIDWORD(v7) = v28 * 2 * v23 + v29 * 2 * v3 + v30 * 2 * v4 + v2 * 2 * v26 + v24 * 38 * v20;
  v16 = v28 * (unsigned __int64)(2 * v24)
      + v30 * (unsigned __int64)(2 * v3)
      + v26 * (unsigned __int64)v26
      + 38 * v20 * (unsigned __int64)v20
      + v21 * (unsigned __int64)(4 * v4)
      + v29 * (unsigned __int64)(4 * v23)
      + ((((v15 + (v14 >> 25)) >> 26)
        + v28 * (unsigned __int64)(2 * v23)
        + v29 * (unsigned __int64)(2 * v3)
        + v30 * (unsigned __int64)(2 * v4)
        + v21 * (unsigned __int64)(2 * v26)
        + v24 * (unsigned __int64)(38 * v20)) >> 25);
  v17 = v29 * (unsigned __int64)(2 * v24)
      + v30 * (unsigned __int64)(2 * v23)
      + v2 * (unsigned __int64)(2 * v3)
      + v26 * (unsigned __int64)(2 * v4)
      + v28 * (unsigned __int64)(2 * v20)
      + (v16 >> 26);
  v18 = 19LL * (unsigned int)(v17 >> 25)
      + __PAIR64__(19 * (HIDWORD(v17) >> 25), (v28 * v28 + 76 * v20 * v29 + v8) & 0x3FFFFFF);
  a1[7] = (((__int64)(v15 + (v14 >> 25)) >> 26) + HIDWORD(v7)) & 0x1FFFFFF;
  a1[8] = v16 & 0x3FFFFFF;
  a1[9] = v17 & 0x1FFFFFF;
  *a1 = v18 & 0x3FFFFFF;
  LODWORD(v17) = (v18 >> 26) + ((((__int64)v9 >> 26) + v6) & 0x1FFFFFF);
  a1[1] = v17 & 0x1FFFFFF;
  result = ((v10 + ((__int64)((v9 >> 26) + v6) >> 25)) & 0x3FFFFFF) + ((unsigned int)v17 >> 25);
  a1[2] = result;
  return result;
}

int __fastcall sub_52A1C(unsigned __int16 *a1, _BYTE *a2)
{
  unsigned int v2; // r11
  unsigned int v3; // r5
  int v4; // r10
  int v5; // r9
  int v6; // r8
  unsigned int v7; // r3
  int v8; // r4
  unsigned int v9; // r12
  int v10; // lr
  unsigned int v11; // r2
  int v12; // r6
  int v13; // r0
  unsigned int v14; // r1
  int v15; // r4
  int v16; // r0
  int v17; // r11
  int v18; // r6
  int v19; // r1
  int v20; // r12
  int v21; // r0
  int v22; // r3
  __int64 v23; // r0
  unsigned int v24; // r5
  int v25; // r2
  int v26; // r2
  int v27; // r2
  int v28; // r2
  int v29; // r2
  int v30; // r2
  int v31; // r2
  int v32; // r2
  int v33; // r2
  int v34; // r2
  int v35; // r2
  int v36; // r2
  int v37; // r12
  int v38; // r2
  int v39; // r3
  int v40; // r11
  int v41; // r8
  int v42; // r4
  int v43; // r11
  int v44; // r10
  int v45; // r9
  int v46; // lr
  unsigned int v47; // r0
  unsigned int v48; // r8
  unsigned __int64 v49; // kr10_8
  unsigned __int64 v50; // kr18_8
  unsigned __int64 v51; // kr20_8
  unsigned __int64 v52; // r0
  signed __int64 v53; // kr28_8
  int v54; // kr30_4
  signed __int64 v55; // kr38_8
  int v56; // r5
  int v57; // r9
  unsigned int v58; // r5
  int v59; // r3
  int v60; // r1
  int v61; // r2
  int v62; // r1
  int v63; // r1
  int v64; // r6
  int v65; // r1
  int v66; // r3
  int v67; // r3
  int v68; // r3
  int v69; // r3
  int v70; // r3
  int v71; // r3
  int v72; // r3
  int v73; // r3
  int v74; // r3
  int v75; // r3
  int v76; // r3
  int v77; // r3
  int v78; // r3
  int v79; // r3
  int v80; // r0
  int v81; // r4
  int v82; // r5
  int v83; // r5
  int v84; // r5
  int v85; // lr
  int v86; // r11
  int v87; // r10
  int v88; // r9
  int v89; // r8
  int v90; // r0
  int v91; // r1
  unsigned int v92; // r3
  unsigned int v93; // r4
  unsigned int v94; // r5
  unsigned int v95; // r4
  unsigned int v96; // r5
  unsigned int v97; // r5
  unsigned int v98; // r2
  unsigned int v99; // r6
  unsigned int v100; // r2
  unsigned int v101; // r0
  int v104; // [sp+50h] [bp-350h]
  int v105; // [sp+58h] [bp-348h]
  int v106; // [sp+64h] [bp-33Ch]
  int v107; // [sp+6Ch] [bp-334h]
  int v108; // [sp+70h] [bp-330h]
  int v109; // [sp+74h] [bp-32Ch]
  int v110; // [sp+74h] [bp-32Ch]
  int v111; // [sp+78h] [bp-328h]
  int v112; // [sp+78h] [bp-328h]
  int v113; // [sp+7Ch] [bp-324h]
  int v114; // [sp+7Ch] [bp-324h]
  int v115; // [sp+80h] [bp-320h]
  int v116; // [sp+80h] [bp-320h]
  unsigned int v117; // [sp+84h] [bp-31Ch]
  int v118; // [sp+84h] [bp-31Ch]
  int v119; // [sp+88h] [bp-318h]
  int v120; // [sp+88h] [bp-318h]
  int v121; // [sp+88h] [bp-318h]
  int v122; // [sp+8Ch] [bp-314h]
  int v123; // [sp+8Ch] [bp-314h]
  int v124; // [sp+90h] [bp-310h]
  int v125; // [sp+90h] [bp-310h]
  int v126; // [sp+94h] [bp-30Ch]
  int v127; // [sp+94h] [bp-30Ch]
  int v128; // [sp+98h] [bp-308h]
  int v129; // [sp+98h] [bp-308h]
  unsigned int v130; // [sp+9Ch] [bp-304h]
  int v131; // [sp+9Ch] [bp-304h]
  unsigned int v132; // [sp+A0h] [bp-300h]
  int v133; // [sp+A0h] [bp-300h]
  int v134; // [sp+A4h] [bp-2FCh]
  int v135; // [sp+A4h] [bp-2FCh]
  char v136; // [sp+A8h] [bp-2F8h]
  int v137; // [sp+A8h] [bp-2F8h]
  int v138; // [sp+A8h] [bp-2F8h]
  int v139; // [sp+ACh] [bp-2F4h]
  int v140; // [sp+ACh] [bp-2F4h]
  int v141; // [sp+ACh] [bp-2F4h]
  int v142; // [sp+B0h] [bp-2F0h]
  int v143; // [sp+B0h] [bp-2F0h]
  int v144; // [sp+B0h] [bp-2F0h]
  int v145; // [sp+B0h] [bp-2F0h]
  int v146; // [sp+B4h] [bp-2ECh]
  unsigned int v147; // [sp+B4h] [bp-2ECh]
  int v148; // [sp+B4h] [bp-2ECh]
  _QWORD v149[3]; // [sp+B8h] [bp-2E8h]
  __int64 v150; // [sp+D0h] [bp-2D0h]
  int v151; // [sp+D8h] [bp-2C8h] BYREF
  int v152; // [sp+DCh] [bp-2C4h]
  int v153; // [sp+E0h] [bp-2C0h]
  int v154; // [sp+E4h] [bp-2BCh]
  int v155; // [sp+E8h] [bp-2B8h]
  int v156; // [sp+ECh] [bp-2B4h]
  int v157; // [sp+F0h] [bp-2B0h]
  int v158; // [sp+F4h] [bp-2ACh]
  int v159; // [sp+F8h] [bp-2A8h]
  int v160; // [sp+FCh] [bp-2A4h]
  int v161; // [sp+100h] [bp-2A0h] BYREF
  unsigned int v162; // [sp+104h] [bp-29Ch]
  unsigned int v163; // [sp+108h] [bp-298h]
  int v164; // [sp+10Ch] [bp-294h]
  int v165; // [sp+110h] [bp-290h]
  int v166; // [sp+114h] [bp-28Ch]
  int v167; // [sp+118h] [bp-288h]
  int v168; // [sp+11Ch] [bp-284h]
  int v169; // [sp+120h] [bp-280h]
  int v170; // [sp+124h] [bp-27Ch]
  int v171[10]; // [sp+128h] [bp-278h] BYREF
  int v172; // [sp+150h] [bp-250h] BYREF
  int v173; // [sp+154h] [bp-24Ch]
  int v174; // [sp+158h] [bp-248h]
  int v175; // [sp+15Ch] [bp-244h]
  int v176; // [sp+160h] [bp-240h]
  int v177; // [sp+164h] [bp-23Ch]
  int v178; // [sp+168h] [bp-238h]
  int v179; // [sp+16Ch] [bp-234h]
  int v180; // [sp+170h] [bp-230h]
  int v181; // [sp+174h] [bp-22Ch]
  int v182[10]; // [sp+178h] [bp-228h] BYREF
  _DWORD v183[10]; // [sp+1A0h] [bp-200h] BYREF
  int v184; // [sp+1C8h] [bp-1D8h] BYREF
  int v185; // [sp+1CCh] [bp-1D4h]
  int v186; // [sp+1D0h] [bp-1D0h]
  int v187; // [sp+1D4h] [bp-1CCh]
  int v188; // [sp+1D8h] [bp-1C8h]
  int v189; // [sp+1DCh] [bp-1C4h]
  int v190; // [sp+1E0h] [bp-1C0h]
  int v191; // [sp+1E4h] [bp-1BCh]
  int v192; // [sp+1E8h] [bp-1B8h]
  int v193; // [sp+1ECh] [bp-1B4h]
  int v194; // [sp+1F0h] [bp-1B0h] BYREF
  __int64 v195; // [sp+1F4h] [bp-1ACh]
  __int64 v196; // [sp+1FCh] [bp-1A4h]
  __int64 v197; // [sp+204h] [bp-19Ch]
  __int64 v198; // [sp+20Ch] [bp-194h]
  int v199; // [sp+214h] [bp-18Ch]
  __int64 v200; // [sp+218h] [bp-188h] BYREF
  __int64 v201; // [sp+220h] [bp-180h]
  __int64 v202; // [sp+228h] [bp-178h]
  __int64 v203; // [sp+230h] [bp-170h]
  double v204; // [sp+238h] [bp-168h]
  double v205; // [sp+240h] [bp-160h] BYREF
  double v206; // [sp+248h] [bp-158h]
  double v207; // [sp+250h] [bp-150h]
  double v208; // [sp+258h] [bp-148h]
  double v209; // [sp+260h] [bp-140h]
  int v210; // [sp+268h] [bp-138h] BYREF
  unsigned __int64 v211; // [sp+26Ch] [bp-134h]
  __int64 v212; // [sp+274h] [bp-12Ch]
  __int64 v213; // [sp+27Ch] [bp-124h]
  __int64 v214; // [sp+284h] [bp-11Ch]
  int v215; // [sp+28Ch] [bp-114h]
  __int64 v216; // [sp+290h] [bp-110h] BYREF
  __int64 v217; // [sp+298h] [bp-108h]
  __int64 v218; // [sp+2A0h] [bp-100h]
  __int64 v219; // [sp+2A8h] [bp-F8h]
  double v220; // [sp+2B0h] [bp-F0h]
  double v221[5]; // [sp+2B8h] [bp-E8h] BYREF
  unsigned int v222[10]; // [sp+2E0h] [bp-C0h] BYREF
  unsigned int v223[10]; // [sp+308h] [bp-98h] BYREF
  unsigned int v224[10]; // [sp+330h] [bp-70h] BYREF
  unsigned int v225[10]; // [sp+358h] [bp-48h] BYREF
  int v226; // [sp+380h] [bp-20h]

  v2 = *((unsigned __int8 *)a1 + 9);
  v149[2] = qword_56728[2];
  v150 = qword_56728[3];
  v149[0] = qword_56728[0];
  v149[1] = qword_56728[1];
  HIBYTE(v150) = HIBYTE(qword_56728[3]) & 0x3F | 0x40;
  LOBYTE(v149[0]) = qword_56728[0] & 0xF8;
  v142 = *((unsigned __int8 *)a1 + 26);
  v136 = *((_BYTE *)a1 + 31);
  v134 = *((unsigned __int8 *)a1 + 30);
  v132 = *((unsigned __int8 *)a1 + 28);
  v124 = *((unsigned __int8 *)a1 + 29);
  v122 = *a1;
  v119 = *((unsigned __int8 *)a1 + 8);
  v117 = *((unsigned __int8 *)a1 + 6);
  v115 = *((unsigned __int8 *)a1 + 7);
  v113 = *((unsigned __int8 *)a1 + 11);
  v111 = *((unsigned __int8 *)a1 + 10);
  v139 = *((unsigned __int8 *)a1 + 2);
  v109 = *((unsigned __int8 *)a1 + 15);
  v130 = *((unsigned __int8 *)a1 + 3);
  v108 = *((unsigned __int8 *)a1 + 14);
  v126 = *((unsigned __int8 *)a1 + 4);
  v107 = *((unsigned __int8 *)a1 + 13);
  v128 = *((unsigned __int8 *)a1 + 5);
  v146 = *((unsigned __int8 *)a1 + 27);
  v3 = *((unsigned __int8 *)a1 + 12);
  v4 = *((unsigned __int8 *)a1 + 18);
  v5 = a1[8];
  v6 = *((unsigned __int8 *)a1 + 21);
  v7 = *((unsigned __int8 *)a1 + 19);
  v8 = *((unsigned __int8 *)a1 + 20);
  v9 = *((unsigned __int8 *)a1 + 25);
  v10 = *((unsigned __int8 *)a1 + 24);
  v11 = *((unsigned __int8 *)a1 + 22);
  v12 = *((unsigned __int8 *)a1 + 23);
  v211 = 0LL;
  v212 = 0LL;
  v213 = 0LL;
  v214 = 0LL;
  v207 = 0.0;
  v208 = 0.0;
  v205 = 0.0;
  v206 = 0.0;
  v13 = 0;
  HIDWORD(v219) = (32 * v12) | (v11 >> 3) | (v10 << 13) | ((v9 & 0xF) << 21);
  v215 = 0;
  LODWORD(v219) = (v8 << 7) | (v7 >> 1) | (v6 << 15) | ((v11 & 7) << 23);
  HIDWORD(v218) = v5 | (v4 << 16) | ((v7 & 1) << 24);
  v209 = 0.0;
  v199 = 0;
  LODWORD(v218) = (4 * v107) | (v3 >> 6) | (v108 << 10) | (v109 << 18);
  v202 = v218;
  v203 = v219;
  HIDWORD(v217) = (8 * v111) | (v2 >> 5) | (v113 << 11) | ((v3 & 0x3F) << 19);
  LODWORD(v217) = (32 * v115) | (v117 >> 3) | (v119 << 13) | ((v2 & 0x1F) << 21);
  HIDWORD(v216) = (v126 << 6) | (v130 >> 2) | (v128 << 14) | ((v117 & 7) << 22);
  LODWORD(v216) = v122 | (v139 << 16) | ((v130 & 3) << 24);
  HIDWORD(v220) = (4 * v124) | (v132 >> 6) | (v134 << 10) | ((v136 & 0x7F) << 18);
  v210 = 1;
  v194 = 1;
  LODWORD(v220) = (16 * v142) | (v9 >> 4) | (v146 << 12) | ((v132 & 0x3F) << 20);
  v200 = v216;
  v201 = v217;
  v204 = v220;
  v197 = 0LL;
  v198 = 0LL;
  v195 = 0LL;
  v196 = 0LL;
  v14 = 254;
  do
  {
    v147 = v14;
    v106 = (*((unsigned __int8 *)v149 + (v14 >> 3)) >> (v14 & 7)) & 1;
    v15 = -(v13 ^ v106);
    v16 = (v202 ^ HIDWORD(v212)) & v15;
    v17 = v16 ^ HIDWORD(v212);
    v143 = v202 ^ v16;
    v18 = (HIDWORD(v201) ^ v212) & v15;
    v104 = v16 ^ HIDWORD(v212);
    v19 = (v201 ^ HIDWORD(v211)) & v15;
    v20 = v19 ^ v201;
    v21 = (HIDWORD(v200) ^ v211) & v15;
    v22 = v19 ^ HIDWORD(v211);
    HIDWORD(v23) = v21 ^ HIDWORD(v200);
    v24 = v21 ^ v211;
    v140 = v21 ^ HIDWORD(v200);
    LODWORD(v23) = (v200 ^ v210) & v15;
    v210 ^= v23;
    v211 = __PAIR64__(v22, v24);
    LODWORD(v212) = v18 ^ v212;
    HIDWORD(v212) = v17;
    v200 = v23 ^ (unsigned int)v200;
    LODWORD(v202) = v143;
    v25 = (HIDWORD(v202) ^ v213) & v15;
    v137 = v20;
    HIDWORD(v202) ^= v25;
    LODWORD(v213) = v213 ^ v25;
    LODWORD(v201) = v20;
    HIDWORD(v201) ^= v18;
    v105 = v22;
    v26 = (v203 ^ HIDWORD(v213)) & v15;
    LODWORD(v203) = v203 ^ v26;
    HIDWORD(v213) ^= v26;
    v27 = (HIDWORD(v203) ^ v214) & v15;
    HIDWORD(v203) ^= v27;
    LODWORD(v214) = v214 ^ v27;
    v28 = (LODWORD(v204) ^ HIDWORD(v214)) & v15;
    LODWORD(v204) ^= v28;
    HIDWORD(v214) ^= v28;
    v29 = (HIDWORD(v204) ^ v215) & v15;
    HIDWORD(v204) ^= v29;
    v215 ^= v29;
    v30 = (v194 ^ LODWORD(v205)) & v15;
    v194 ^= v30;
    LODWORD(v205) ^= v30;
    v31 = (v195 ^ HIDWORD(v205)) & v15;
    LODWORD(v195) = v195 ^ v31;
    HIDWORD(v205) ^= v31;
    v32 = (HIDWORD(v195) ^ LODWORD(v206)) & v15;
    HIDWORD(v195) ^= v32;
    LODWORD(v206) ^= v32;
    v33 = (v196 ^ HIDWORD(v206)) & v15;
    LODWORD(v196) = v196 ^ v33;
    HIDWORD(v206) ^= v33;
    v34 = (HIDWORD(v196) ^ LODWORD(v207)) & v15;
    LODWORD(v207) ^= v34;
    HIDWORD(v196) ^= v34;
    v35 = (v197 ^ HIDWORD(v207)) & v15;
    HIDWORD(v207) ^= v35;
    LODWORD(v197) = v35 ^ v197;
    v36 = (HIDWORD(v197) ^ LODWORD(v208)) & v15;
    v37 = v36 ^ HIDWORD(v197);
    LODWORD(v208) ^= v36;
    v38 = (v198 ^ HIDWORD(v208)) & v15;
    HIDWORD(v197) = v37;
    LODWORD(v198) = v198 ^ v38;
    HIDWORD(v208) ^= v38;
    v39 = (HIDWORD(v198) ^ LODWORD(v209)) & v15;
    HIDWORD(v198) ^= v39;
    v40 = (v199 ^ HIDWORD(v209)) & v15;
    LODWORD(v209) ^= v39;
    HIDWORD(v209) ^= v40;
    v170 = HIDWORD(v204) + 67108862 - (v40 ^ v199);
    v199 ^= v40;
    v169 = LODWORD(v204) + 134217726 - HIDWORD(v198);
    v168 = HIDWORD(v203) + 67108862 - v198;
    v167 = v203 + 134217726 - v37;
    v166 = HIDWORD(v202) + 67108862 - v197;
    v165 = v143 + 134217726 - HIDWORD(v196);
    v164 = HIDWORD(v201) + 67108862 - v196;
    v163 = v137 + 134217726 - HIDWORD(v195);
    v162 = v140 + 67108862 - v195;
    v161 = v200 + 134217690 - v194;
    v160 = v215 + 67108862 - HIDWORD(v209);
    v159 = HIDWORD(v214) + 134217726 - LODWORD(v209);
    v158 = v214 + 67108862 - HIDWORD(v208);
    v157 = HIDWORD(v213) + 134217726 - LODWORD(v208);
    v156 = v213 + 67108862 - HIDWORD(v207);
    v155 = v104 + 134217726 - LODWORD(v207);
    v154 = v212 + 67108862 - HIDWORD(v206);
    v153 = v105 + 134217726 - LODWORD(v206);
    v152 = v24 + 67108862 - HIDWORD(v205);
    v151 = v210 + 134217690 - LODWORD(v205);
    v182[9] = v215 + HIDWORD(v209);
    v182[8] = HIDWORD(v214) + LODWORD(v209);
    v182[7] = v214 + HIDWORD(v208);
    v182[6] = HIDWORD(v213) + LODWORD(v208);
    v182[5] = HIDWORD(v207) + v213;
    v182[4] = LODWORD(v207) + v104;
    v182[3] = HIDWORD(v206) + v212;
    v182[2] = LODWORD(v206) + v105;
    v182[1] = HIDWORD(v205) + v24;
    v182[0] = LODWORD(v205) + v210;
    v181 = HIDWORD(v204) + v199;
    v180 = LODWORD(v204) + HIDWORD(v198);
    v179 = HIDWORD(v203) + v198;
    v178 = v203 + v37;
    v177 = HIDWORD(v202) + v197;
    v176 = v143 + HIDWORD(v196);
    v175 = HIDWORD(v201) + v196;
    v174 = v137 + HIDWORD(v195);
    v173 = v140 + v195;
    v172 = v200 + v194;
    sub_53952(&v194, (unsigned int *)&v161, (unsigned int *)v182);
    sub_53952(&v205, (unsigned int *)&v172, (unsigned int *)&v151);
    sub_53EE4(&v184, (unsigned int *)&v151);
    sub_53EE4(v183, (unsigned int *)v182);
    v171[8] = LODWORD(v209) + HIDWORD(v198);
    v171[7] = HIDWORD(v208) + v198;
    v171[6] = LODWORD(v208) + HIDWORD(v197);
    v171[5] = HIDWORD(v207) + v197;
    v171[4] = LODWORD(v207) + HIDWORD(v196);
    v171[3] = HIDWORD(v206) + v196;
    v171[2] = LODWORD(v206) + HIDWORD(v195);
    v171[1] = HIDWORD(v205) + v195;
    v171[9] = HIDWORD(v209) + v199;
    v171[0] = LODWORD(v205) + v194;
    v181 = v199 + 67108862 - HIDWORD(v209);
    v180 = HIDWORD(v198) + 134217726 - LODWORD(v209);
    v179 = v198 + 67108862 - HIDWORD(v208);
    v178 = HIDWORD(v197) + 134217726 - LODWORD(v208);
    v177 = v197 + 67108862 - HIDWORD(v207);
    v176 = HIDWORD(v196) + 134217726 - LODWORD(v207);
    v175 = v196 + 67108862 - HIDWORD(v206);
    v174 = HIDWORD(v195) + 134217726 - LODWORD(v206);
    v173 = v195 + 67108862 - HIDWORD(v205);
    v172 = v194 + 134217690 - LODWORD(v205);
    sub_53952(&v210, v183, (unsigned int *)&v184);
    v41 = v183[0] + 134217690 - v184;
    v144 = v184;
    v42 = v183[1] + 67108862 - v185;
    v43 = v183[2] + 134217726 - v186;
    v44 = v183[3] + 67108862 - v187;
    v133 = v188;
    v131 = v189;
    v141 = v185;
    v129 = v190;
    v138 = v186;
    v127 = v191;
    v135 = v187;
    v125 = v192;
    v123 = v193;
    v120 = v183[9] + 67108862 - v193;
    v110 = v183[4] + 134217726 - v188;
    v159 = v183[8] + 134217726 - v192;
    v160 = v120;
    v112 = v183[5] + 67108862 - v189;
    v114 = v183[6] + 134217726 - v190;
    v116 = v183[7] + 67108862 - v191;
    v118 = v159;
    v157 = v114;
    v158 = v116;
    v155 = v110;
    v156 = v112;
    v153 = v43;
    v154 = v44;
    v151 = v41;
    v152 = v42;
    sub_53EE4(&v205, (unsigned int *)&v172);
    v45 = v41 * (_DWORD)&loc_1DB42;
    v46 = v42 * (_DWORD)&loc_1DB42 + (((unsigned int)v41 * (unsigned __int64)(unsigned int)&loc_1DB42) >> 26);
    v47 = ((unsigned int)v43 * (unsigned __int64)(unsigned int)&loc_1DB42
         + (((unsigned int)v42 * (unsigned __int64)(unsigned int)&loc_1DB42
           + (((unsigned int)v41 * (unsigned __int64)(unsigned int)&loc_1DB42) >> 26)) >> 25)) >> 32;
    v48 = v43 * (_DWORD)&loc_1DB42
        + (((unsigned int)v42 * (unsigned __int64)(unsigned int)&loc_1DB42
          + (((unsigned int)v41 * (unsigned __int64)(unsigned int)&loc_1DB42) >> 26)) >> 25);
    v49 = (unsigned int)v44 * (unsigned __int64)(unsigned int)&loc_1DB42 + (__PAIR64__(v47, v48) >> 26);
    v50 = (unsigned int)v110 * (unsigned __int64)(unsigned int)&loc_1DB42 + (v49 >> 25);
    v51 = (unsigned int)v112 * (unsigned __int64)(unsigned int)&loc_1DB42 + (v50 >> 26);
    v52 = (unsigned int)v114 * (unsigned __int64)(unsigned int)&loc_1DB42 + (v51 >> 25);
    v53 = (unsigned int)v116 * (unsigned __int64)(unsigned int)&loc_1DB42 + (v52 >> 26);
    v54 = v118 * (_DWORD)&loc_1DB42 + (v53 >> 25);
    v55 = (unsigned int)v120 * (unsigned __int64)(unsigned int)&loc_1DB42
        + (((unsigned int)v118 * (unsigned __int64)(unsigned int)&loc_1DB42 + ((unsigned __int64)v53 >> 25)) >> 26);
    v56 = v45 & 0x3FFFFFE;
    v57 = v52 & 0x3FFFFFF;
    HIDWORD(v52) = v56 + 19 * (v55 >> 25);
    LODWORD(v196) = v49 & 0x1FFFFFF;
    HIDWORD(v196) = v50 & 0x3FFFFFF;
    LODWORD(v197) = v51 & 0x1FFFFFF;
    HIDWORD(v197) = v52 & 0x3FFFFFF;
    v58 = (v46 & 0x1FFFFFF) + (HIDWORD(v52) >> 26);
    v121 = HIDWORD(v52) & 0x3FFFFFF;
    v194 = HIDWORD(v52) & 0x3FFFFFF;
    LODWORD(v195) = v58 & 0x1FFFFFF;
    HIDWORD(v195) = (v48 & 0x3FFFFFF) + (v58 >> 25);
    LODWORD(v198) = v53 & 0x1FFFFFF;
    HIDWORD(v198) = v54 & 0x3FFFFFF;
    v199 = v55 & 0x1FFFFFF;
    sub_53EE4(&v200, (unsigned int *)v171);
    v170 = v123 + (v55 & 0x1FFFFFF);
    v169 = v125 + (v54 & 0x3FFFFFF);
    v168 = v127 + (v53 & 0x1FFFFFF);
    v167 = v129 + v57;
    v166 = v131 + (v51 & 0x1FFFFFF);
    v165 = v133 + (v50 & 0x3FFFFFF);
    v164 = v135 + (v49 & 0x1FFFFFF);
    v163 = v138 + (v48 & 0x3FFFFFF) + (v58 >> 25);
    v162 = v141 + (v58 & 0x1FFFFFF);
    v161 = v144 + v121;
    sub_53952(&v194, (unsigned int *)&v216, (unsigned int *)&v205);
    sub_53952(&v205, (unsigned int *)&v151, (unsigned int *)&v161);
    v14 = v147 - 1;
    v13 = v106;
  }
  while ( v147 );
  v59 = (v200 ^ v210) & -v106;
  v210 ^= v59;
  LODWORD(v200) = v59 ^ v200;
  v60 = (HIDWORD(v200) ^ v211) & -v106;
  v61 = v211 ^ v60;
  HIDWORD(v200) ^= v60;
  v62 = (v201 ^ HIDWORD(v211)) & -v106;
  LODWORD(v211) = v61;
  LODWORD(v201) = v62 ^ v201;
  HIDWORD(v211) ^= v62;
  v63 = (HIDWORD(v201) ^ v212) & -v106;
  v64 = v63 ^ v212;
  HIDWORD(v201) ^= v63;
  v65 = (v202 ^ HIDWORD(v212)) & -v106;
  LODWORD(v212) = v64;
  HIDWORD(v212) ^= v65;
  LODWORD(v202) = v65 ^ v202;
  v66 = (HIDWORD(v202) ^ v213) & -v106;
  LODWORD(v213) = v213 ^ v66;
  HIDWORD(v202) ^= v66;
  v67 = (v203 ^ HIDWORD(v213)) & -v106;
  HIDWORD(v213) ^= v67;
  LODWORD(v203) = v67 ^ v203;
  v68 = (HIDWORD(v203) ^ v214) & -v106;
  LODWORD(v214) = v214 ^ v68;
  HIDWORD(v203) ^= v68;
  v69 = (LODWORD(v204) ^ HIDWORD(v214)) & -v106;
  HIDWORD(v214) ^= v69;
  LODWORD(v204) ^= v69;
  v70 = (HIDWORD(v204) ^ v215) & -v106;
  v215 ^= v70;
  HIDWORD(v204) ^= v70;
  v71 = (v194 ^ LODWORD(v205)) & -v106;
  LODWORD(v205) ^= v71;
  v194 ^= v71;
  v72 = (v195 ^ HIDWORD(v205)) & -v106;
  HIDWORD(v205) ^= v72;
  LODWORD(v195) = v72 ^ v195;
  v73 = (HIDWORD(v195) ^ LODWORD(v206)) & -v106;
  LODWORD(v206) ^= v73;
  HIDWORD(v195) ^= v73;
  v74 = (v196 ^ HIDWORD(v206)) & -v106;
  HIDWORD(v206) ^= v74;
  LODWORD(v196) = v74 ^ v196;
  v75 = (HIDWORD(v196) ^ LODWORD(v207)) & -v106;
  LODWORD(v207) ^= v75;
  HIDWORD(v196) ^= v75;
  v76 = (v197 ^ HIDWORD(v207)) & -v106;
  HIDWORD(v207) ^= v76;
  LODWORD(v197) = v76 ^ v197;
  v77 = (HIDWORD(v197) ^ LODWORD(v208)) & -v106;
  LODWORD(v208) ^= v77;
  HIDWORD(v197) ^= v77;
  v78 = (v198 ^ HIDWORD(v208)) & -v106;
  HIDWORD(v208) ^= v78;
  LODWORD(v198) = v78 ^ v198;
  v79 = (HIDWORD(v198) ^ LODWORD(v209)) & -v106;
  LODWORD(v209) ^= v79;
  HIDWORD(v198) ^= v79;
  v80 = -v106 & (v199 ^ HIDWORD(v209));
  v199 ^= v80;
  HIDWORD(v209) ^= v80;
  v221[2] = v207;
  v221[3] = v208;
  v221[0] = v205;
  v221[1] = v206;
  v221[4] = v209;
  sub_53EE4(v225, (unsigned int *)v221);
  sub_53EE4(v224, v225);
  sub_53EE4(v224, v224);
  sub_53952(v224, (unsigned int *)v221, v224);
  sub_53952(v225, v225, v224);
  sub_53EE4(v223, v225);
  sub_53952(v224, v224, v223);
  sub_53EE4(v223, v224);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53952(v224, v223, v224);
  sub_53EE4(v223, v224);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53952(v223, v223, v224);
  sub_53EE4(v222, v223);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53EE4(v222, v222);
  sub_53952(v223, v222, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53EE4(v223, v223);
  sub_53952(v224, v223, v224);
  sub_53EE4(v223, v224);
  v81 = 49;
  do
  {
    sub_53EE4(v223, v223);
    --v81;
  }
  while ( v81 );
  sub_53952(v223, v223, v224);
  sub_53EE4(v222, v223);
  v82 = 99;
  do
  {
    sub_53EE4(v222, v222);
    --v82;
  }
  while ( v82 );
  sub_53952(v223, v222, v223);
  sub_53EE4(v223, v223);
  v83 = 49;
  do
  {
    sub_53EE4(v223, v223);
    --v83;
  }
  while ( v83 );
  sub_53952(v224, v223, v224);
  sub_53EE4(v224, v224);
  sub_53EE4(v224, v224);
  sub_53EE4(v224, v224);
  sub_53EE4(v224, v224);
  sub_53EE4(v224, v224);
  sub_53952(&v205, v224, v225);
  sub_53952(&v210, (unsigned int *)&v210, (unsigned int *)&v205);
  v84 = v211 - (unsigned __int8)-((v210 - 0x3FFFFED) >> 26) - 0x1FFFFFF;
  v85 = HIDWORD(v211) - (unsigned __int8)-(v84 >> 25) - 0x3FFFFFF;
  v86 = v212 - (unsigned __int8)-(v85 >> 26) - 0x1FFFFFF;
  v87 = HIDWORD(v212) - (unsigned __int8)-(v86 >> 25) - 0x3FFFFFF;
  v88 = v213 - (unsigned __int8)-(v87 >> 26) - 0x1FFFFFF;
  v89 = HIDWORD(v213) - (unsigned __int8)-(v88 >> 25) - 0x3FFFFFF;
  v145 = v214 - (unsigned __int8)-(v89 >> 26) - 0x1FFFFFF;
  v148 = HIDWORD(v214) - (unsigned __int8)-(v145 >> 25) - 0x3FFFFFF;
  v90 = v215 - (unsigned __int8)-(v148 >> 26) - 0x1FFFFFF;
  v91 = v90 >> 25;
  if ( v90 >> 25 )
    v91 = -1;
  v92 = (v91 & 0x3FFFFED) + ((v210 - 0x3FFFFED) & 0x3FFFFFF);
  *a2 = (v91 & 0xED) + v210 + 0x13;
  a2[2] = BYTE2(v92);
  a2[1] = BYTE1(v92);
  v93 = (v84 & 0x1FFFFFF) + (v91 & 0x1FFFFFF) + (v92 >> 26);
  a2[3] = HIBYTE(v92) & 3 | (4 * (v84 + v91 + (v92 >> 26)));
  a2[5] = v93 >> 14;
  a2[4] = v93 >> 6;
  v94 = (v85 & 0x3FFFFFF) + (v91 & 0x3FFFFFF) + (v93 >> 25);
  a2[6] = (v93 >> 22) & 7 | (8 * (v85 + v91 + (v93 >> 25)));
  a2[8] = v94 >> 13;
  a2[7] = v94 >> 5;
  v95 = (v86 & 0x1FFFFFF) + (v91 & 0x1FFFFFF) + (v94 >> 26);
  a2[9] = (v94 >> 21) & 0x1F | (32 * (v86 + v91 + (v94 >> 26)));
  a2[11] = v95 >> 11;
  a2[10] = v95 >> 3;
  v96 = (v87 & 0x3FFFFFF) + (v91 & 0x3FFFFFF) + (v95 >> 25);
  a2[12] = (v95 >> 19) & 0x3F | (((_BYTE)v87 + (_BYTE)v91 + (v95 >> 25)) << 6);
  a2[15] = v96 >> 18;
  a2[14] = v96 >> 10;
  a2[13] = v96 >> 2;
  v97 = (v91 & 0x1FFFFFF) + (v96 >> 26) + (v88 & 0x1FFFFFF);
  a2[16] = v97;
  a2[18] = BYTE2(v97);
  a2[17] = BYTE1(v97);
  v98 = (v91 & 0x3FFFFFF) + (v97 >> 25) + (v89 & 0x3FFFFFF);
  a2[19] = HIBYTE(v97) & 1 | (2 * (v91 + (v97 >> 25) + v89));
  a2[21] = v98 >> 15;
  a2[20] = v98 >> 7;
  v99 = (v91 & 0x1FFFFFF) + (v98 >> 26) + (v145 & 0x1FFFFFF);
  a2[22] = (v98 >> 23) & 7 | (8 * (v91 + (v98 >> 26) + v145));
  a2[24] = v99 >> 13;
  a2[23] = v99 >> 5;
  v100 = (v91 & 0x3FFFFFF) + (v99 >> 25) + (v148 & 0x3FFFFFF);
  v101 = v90 + v91 + (v100 >> 26);
  a2[25] = (v99 >> 21) & 0xF | (16 * (v91 + (v99 >> 25) + v148));
  a2[31] = (v101 >> 18) & 0x7F;
  a2[27] = v100 >> 12;
  a2[28] = (v100 >> 20) & 0x3F | ((_BYTE)v101 << 6);
  a2[26] = v100 >> 4;
  a2[30] = v101 >> 10;
  a2[29] = v101 >> 2;
  return v226;
}