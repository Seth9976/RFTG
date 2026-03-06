// 函数名称: sub_647f10
// 虚拟地址: 0x647f10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_647f10(void* arg1, double arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg2)
    long double x87_r7 = fconvert.t(arg2)
    int32_t eax = sub_685f40(x87_r7)
    void* edx_1 = *(*(arg1 + 0x1c) + (arg3 << 2) + 0xb24)
    arg2:4.d = eax
    long double x87_r7_1 = x87_r7 - float.t(arg2:4.d)
    int32_t* ecx_3 = arg4 + eax * 0x14
    long double x87_r6_2 = float.t(1) - x87_r7_1
    int32_t i_3 = 2
    *(edx_1 + 0xc) = fconvert.s(float.t(ecx_3[5]) * x87_r7_1 + float.t(*ecx_3) * x87_r6_2)
    *(edx_1 + 0x10) = fconvert.s(float.t(ecx_3[6]) * x87_r7_1 + float.t(ecx_3[1]) * x87_r6_2)
    *(edx_1 + 0x14) = fconvert.s(float.t(ecx_3[7]) * x87_r7_1 + float.t(ecx_3[2]) * x87_r6_2)
    *(edx_1 + 0x18) = fconvert.s(fconvert.t(ecx_3[8]) * x87_r7_1 + fconvert.t(ecx_3[3]) * x87_r6_2)
    int32_t* ecx_5 = arg5 + (eax << 2)
    void* esi_4 = arg6 + eax * 0x44
    void* eax_2 = esi_4 + 0x44
    *(edx_1 + 0x1c) = fconvert.s(fconvert.t(ecx_3[9]) * x87_r7_1 + fconvert.t(ecx_3[4]) * x87_r6_2)
    void* ecx_6 = edx_1 + 0x28
    *(edx_1 + 0x1f0) = fconvert.s(float.t(ecx_5[1]) * x87_r7_1 + float.t(*ecx_5) * x87_r6_2)
    int32_t i
    
    do
        long double x87_r5_18 = float.t(*(eax_2 - 0x44))
        eax_2 += 0x20
        ecx_6 += 0x20
        i = i_3
        i_3 -= 1
        *(ecx_6 - 0x24) = fconvert.s(x87_r5_18 * x87_r6_2 + float.t(*(eax_2 - 0x20)) * x87_r7_1)
        *(ecx_6 - 0x20) =
            fconvert.s(float.t(*(eax_2 - 0x1c)) * x87_r7_1 + float.t(*(eax_2 - 0x60)) * x87_r6_2)
        *(ecx_6 - 0x1c) =
            fconvert.s(float.t(*(eax_2 - 0x18)) * x87_r7_1 + float.t(*(eax_2 - 0x5c)) * x87_r6_2)
        *(ecx_6 - 0x18) =
            fconvert.s(float.t(*(eax_2 - 0x14)) * x87_r7_1 + float.t(*(eax_2 - 0x58)) * x87_r6_2)
        *(ecx_6 - 0x14) =
            fconvert.s(float.t(*(eax_2 - 0x10)) * x87_r7_1 + float.t(*(eax_2 - 0x54)) * x87_r6_2)
        *(ecx_6 - 0x10) =
            fconvert.s(float.t(*(eax_2 - 0xc)) * x87_r7_1 + float.t(*(eax_2 - 0x50)) * x87_r6_2)
        *(ecx_6 - 0xc) =
            fconvert.s(float.t(*(eax_2 - 8)) * x87_r7_1 + float.t(*(eax_2 - 0x4c)) * x87_r6_2)
        *(ecx_6 - 8) =
            fconvert.s(float.t(*(eax_2 - 4)) * x87_r7_1 + float.t(*(eax_2 - 0x48)) * x87_r6_2)
    while (i != 1)
    void* ecx_7 = edx_1 + 0x64
    int32_t i_2 = i_3 + 1
    void* result = esi_4 + 0x84
    int32_t i_1
    
    do
        long double x87_r5_42 = float.t(*(result - 0x44))
        result += 4
        ecx_7 += 4
        i_1 = i_2
        i_2 -= 1
        *(ecx_7 - 4) = fconvert.s(x87_r5_42 * x87_r6_2 + float.t(*(result - 4)) * x87_r7_1)
    while (i_1 != 1)
    return result
}
