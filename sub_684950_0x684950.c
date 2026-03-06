// 函数名称: sub_684950
// 虚拟地址: 0x684950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_684950(void* arg1, void* arg2, int16_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7 = fconvert.t(1.4142135381698608)
    long double result = fconvert.t(1.8477590084075928)
    long double x87_r5 = fconvert.t(1.0823922157287598)
    int32_t ebx = *(arg1 + 0x144)
    float* edx_1 = *(arg2 + 0x50)
    int16_t* ecx_1 = arg3
    void var_108
    void* eax_4 = &var_108
    int32_t i_2 = 8
    int32_t i
    
    do
        int16_t esi_1 = ecx_1[8]
        
        if (esi_1 != 0 || ecx_1[0x10] != esi_1 || ecx_1[0x18] != esi_1 || ecx_1[0x20] != esi_1
                || ecx_1[0x28] != esi_1 || ecx_1[0x30] != esi_1 || ecx_1[0x38] != esi_1)
            long double x87_r5_9 =
                fconvert.t(fconvert.s(float.t(sx.d(ecx_1[0x20])) * fconvert.t(edx_1[0x20])))
            long double x87_r3_1 = fconvert.t(fconvert.s(float.t(sx.d(*ecx_1)) * fconvert.t(*edx_1)))
            long double x87_r5_11 =
                fconvert.t(fconvert.s(float.t(sx.d(ecx_1[0x30])) * fconvert.t(edx_1[0x30])))
            long double x87_r3_3 =
                fconvert.t(fconvert.s(float.t(sx.d(ecx_1[0x10])) * fconvert.t(edx_1[0x10])))
            long double x87_r4_10 = fconvert.t(fconvert.s(x87_r5_11 + x87_r3_3))
            long double x87_r3_6 = fconvert.t(fconvert.s(x87_r5_9 + x87_r3_1))
            long double x87_r5_17 = fconvert.t(fconvert.s((x87_r3_3 - x87_r5_11) * x87_r7 - x87_r4_10))
            long double x87_r3_8 = fconvert.t(fconvert.s(x87_r3_1 - x87_r5_9))
            long double x87_r5_27 =
                fconvert.t(fconvert.s(float.t(sx.d(ecx_1[0x28])) * fconvert.t(edx_1[0x28])))
            long double x87_r3_10 =
                fconvert.t(fconvert.s(float.t(sx.d(ecx_1[0x18])) * fconvert.t(edx_1[0x18])))
            long double x87_r5_29 =
                fconvert.t(fconvert.s(float.t(sx.d(ecx_1[0x38])) * fconvert.t(edx_1[0x38])))
            long double x87_r3_12 = fconvert.t(fconvert.s(fconvert.t(edx_1[8]) * float.t(sx.d(esi_1))))
            long double x87_r5_31 = fconvert.t(fconvert.s(x87_r5_29 + x87_r3_12))
            long double x87_r3_14 = fconvert.t(fconvert.s(x87_r5_27 + x87_r3_10))
            long double x87_r3_16 = fconvert.t(fconvert.s(x87_r3_12 - x87_r5_29))
            long double x87_r1_1 = fconvert.t(fconvert.s(x87_r5_27 - x87_r3_10))
            long double x87_r2_12 = fconvert.t(fconvert.s(x87_r5 * (x87_r3_16 + x87_r1_1)))
            long double x87_r1_6 = fconvert.t(fconvert.s(x87_r5_31 + x87_r3_14))
            long double x87_r2_18 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r2_12 - x87_r1_1 * fconvert.t(2.6131260395050049)))
                - x87_r1_6))
            long double x87_r2_20 = fconvert.t(1.0823922157287598)
            long double x87_r2_22 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s((x87_r5_31 - x87_r3_14) * x87_r7)) - x87_r2_18))
            long double x87_r1_10 = fconvert.t(fconvert.s(x87_r4_10 + x87_r3_6))
            *eax_4 = fconvert.s(x87_r1_6 + x87_r1_10)
            *(eax_4 + 0xe0) = fconvert.s(x87_r1_10 - x87_r1_6)
            long double x87_r2_27 = fconvert.t(fconvert.s(x87_r5_17 + x87_r3_8))
            *(eax_4 + 0x20) = fconvert.s(x87_r2_18 + x87_r2_27)
            *(eax_4 + 0xc0) = fconvert.s(x87_r2_27 - x87_r2_18)
            long double x87_r3_30 = fconvert.t(fconvert.s(x87_r3_8 - x87_r5_17))
            *(eax_4 + 0x40) = fconvert.s(x87_r2_22 + x87_r3_30)
            *(eax_4 + 0xa0) = fconvert.s(x87_r3_30 - x87_r2_22)
            long double x87_r5_36 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r3_16 * x87_r2_20 - x87_r2_12)) + x87_r2_22))
            long double x87_r3_32 = fconvert.t(fconvert.s(x87_r3_6 - x87_r4_10))
            *(eax_4 + 0x80) = fconvert.s(x87_r5_36 + x87_r3_32)
            *(eax_4 + 0x60) = fconvert.s(x87_r3_32 - x87_r5_36)
            x87_r5 = x87_r2_20
            result = fconvert.t(1.8477590084075928)
        else
            long double x87_r4_3 = fconvert.t(fconvert.s(float.t(sx.d(*ecx_1)) * fconvert.t(*edx_1)))
            *eax_4 = fconvert.s(x87_r4_3)
            *(eax_4 + 0x20) = fconvert.s(x87_r4_3)
            *(eax_4 + 0x40) = fconvert.s(x87_r4_3)
            *(eax_4 + 0x60) = fconvert.s(x87_r4_3)
            *(eax_4 + 0x80) = fconvert.s(x87_r4_3)
            *(eax_4 + 0xa0) = fconvert.s(x87_r4_3)
            *(eax_4 + 0xc0) = fconvert.s(x87_r4_3)
            *(eax_4 + 0xe0) = fconvert.s(x87_r4_3)
        
        i = i_2 - 1
        ecx_1 = &ecx_1[1]
        edx_1 = &edx_1[1]
        eax_4 += 4
        i_2 = i
    while (i s> 0)
    int32_t i_3 = 0
    void var_100
    void* esi_8 = &var_100
    int32_t i_1
    
    do
        char* edi_6 = *(arg4 + (i_3 << 2)) + arg5
        long double x87_r3_34 = fconvert.t(fconvert.s(fconvert.t(*(esi_8 + 0x10)) + fconvert.t(*esi_8)))
        long double x87_r2_32 =
            fconvert.t(fconvert.s(fconvert.t(*(esi_8 + 8)) + fconvert.t(*(esi_8 - 8))))
        float var_120_3 = fconvert.s(x87_r3_34 + x87_r2_32)
        long double x87_r4_50 = fconvert.t(fconvert.s(
            (fconvert.t(*esi_8) - fconvert.t(*(esi_8 + 0x10))) * x87_r7 - x87_r3_34))
        long double x87_r2_34 =
            fconvert.t(fconvert.s(fconvert.t(*(esi_8 - 8)) - fconvert.t(*(esi_8 + 8))))
        float var_110_6 = fconvert.s(fconvert.t(*(esi_8 - 4)) - fconvert.t(*(esi_8 + 0x14)))
        long double x87_r4_60 =
            fconvert.t(fconvert.s(fconvert.t(*(esi_8 + 0x14)) + fconvert.t(*(esi_8 - 4))))
        long double x87_r2_36 =
            fconvert.t(fconvert.s(fconvert.t(*(esi_8 + 0xc)) + fconvert.t(*(esi_8 + 4))))
        long double x87_r1_16 =
            fconvert.t(fconvert.s(fconvert.t(*(esi_8 + 0xc)) - fconvert.t(*(esi_8 + 4))))
        float var_10c_21 = fconvert.s((fconvert.t(var_110_6) + x87_r1_16) * result)
        long double x87_r1_22 = fconvert.t(fconvert.s(x87_r4_60 + x87_r2_36))
        long double x87_r2_47 = fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(fconvert.t(var_10c_21) - x87_r1_16 * fconvert.t(2.6131260395050049)))
            - x87_r1_22))
        long double x87_r1_25 =
            fconvert.t(fconvert.s(fconvert.t(fconvert.s((x87_r4_60 - x87_r2_36) * x87_r7)) - x87_r2_47))
        *edi_6 = *(((sub_685f40(x87_r1_22 + fconvert.t(var_120_3)) + 4) s>> 3 & 0x3ff) + ebx + 0x80)
        long double x87_r1_30 = fconvert.t(fconvert.s(x87_r4_50 + x87_r2_34))
        edi_6[7] = *(((sub_685f40(fconvert.t(var_120_3) - x87_r1_22) + 4) s>> 3 & 0x3ff) + ebx + 0x80)
        edi_6[1] = *(((sub_685f40(x87_r2_47 + x87_r1_30) + 4) s>> 3 & 0x3ff) + ebx + 0x80)
        long double x87_r2_59 = fconvert.t(fconvert.s(x87_r2_34 - x87_r4_50))
        edi_6[6] = *(((sub_685f40(x87_r1_30 - x87_r2_47) + 4) s>> 3 & 0x3ff) + ebx + 0x80)
        edi_6[2] = *(((sub_685f40(x87_r1_25 + x87_r2_59) + 4) s>> 3 & 0x3ff) + ebx + 0x80)
        long double x87_r4_65 = fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(fconvert.t(var_110_6) * x87_r5 - fconvert.t(var_10c_21)))
            + x87_r1_25))
        long double x87_r2_61 = fconvert.t(fconvert.s(x87_r2_32 - x87_r3_34))
        edi_6[5] = *(((sub_685f40(x87_r2_59 - x87_r1_25) + 4) s>> 3 & 0x3ff) + ebx + 0x80)
        edi_6[4] = *(((sub_685f40(x87_r4_65 + x87_r2_61) + 4) s>> 3 & 0x3ff) + ebx + 0x80)
        i_1 = i_3 + 1
        esi_8 += 0x20
        edi_6[3] = *(((sub_685f40(x87_r2_61 - x87_r4_65) + 4) s>> 3 & 0x3ff) + ebx + 0x80)
        i_3 = i_1
    while (i_1 s< 8)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
