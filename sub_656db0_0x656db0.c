// 函数名称: sub_656db0
// 虚拟地址: 0x656db0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_656db0(int32_t arg1, void* arg2, int32_t arg3, float arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t edi_1 = arg3 s>> 1
    int32_t esi_2 = arg4 i* 4
    int32_t entry_ebx
    void* result = entry_ebx + (edi_1 << 2) - 0x20
    float* ecx_1 = result + ((arg3 - edi_1) << 2) + 0x1c
    
    do
        float var_8_1 = fconvert.s(fconvert.t(ecx_1[-1]) - fconvert.t(*(result + 0x18)))
        arg4 = fconvert.s(fconvert.t(*ecx_1) - fconvert.t(*(result + 0x1c)))
        ecx_1[-1] = fconvert.s(fconvert.t(*(result + 0x18)) + fconvert.t(ecx_1[-1]))
        *ecx_1 = fconvert.s(fconvert.t(*(result + 0x1c)) + fconvert.t(*ecx_1))
        long double x87_r6_1 = fconvert.t(arg4)
        long double x87_r4_1 = fconvert.t(var_8_1)
        *(result + 0x18) = fconvert.s(fconvert.t(*arg2) * x87_r4_1 + fconvert.t(*(arg2 + 4)) * x87_r6_1)
        void* edx = arg2 + esi_2
        *(result + 0x1c) = fconvert.s(x87_r6_1 * fconvert.t(*arg2) - x87_r4_1 * fconvert.t(*(arg2 + 4)))
        float var_8_2 = fconvert.s(fconvert.t(ecx_1[-3]) - fconvert.t(*(result + 0x10)))
        arg4 = fconvert.s(fconvert.t(ecx_1[-2]) - fconvert.t(*(result + 0x14)))
        ecx_1[-3] = fconvert.s(fconvert.t(*(result + 0x10)) + fconvert.t(ecx_1[-3]))
        ecx_1[-2] = fconvert.s(fconvert.t(*(result + 0x14)) + fconvert.t(ecx_1[-2]))
        long double x87_r6_3 = fconvert.t(arg4)
        long double x87_r4_3 = fconvert.t(var_8_2)
        *(result + 0x10) = fconvert.s(fconvert.t(*edx) * x87_r4_3 + fconvert.t(*(edx + 4)) * x87_r6_3)
        void* edx_1 = edx + esi_2
        *(result + 0x14) = fconvert.s(x87_r6_3 * fconvert.t(*edx) - x87_r4_3 * fconvert.t(*(edx + 4)))
        float var_8_3 = fconvert.s(fconvert.t(ecx_1[-5]) - fconvert.t(*(result + 8)))
        arg4 = fconvert.s(fconvert.t(ecx_1[-4]) - fconvert.t(*(result + 0xc)))
        ecx_1[-5] = fconvert.s(fconvert.t(*(result + 8)) + fconvert.t(ecx_1[-5]))
        ecx_1[-4] = fconvert.s(fconvert.t(ecx_1[-4]) + fconvert.t(*(result + 0xc)))
        long double x87_r6_5 = fconvert.t(arg4)
        long double x87_r4_5 = fconvert.t(var_8_3)
        *(result + 8) = fconvert.s(fconvert.t(*edx_1) * x87_r4_5 + fconvert.t(*(edx_1 + 4)) * x87_r6_5)
        result -= 0x20
        float* edx_2 = edx_1 + esi_2
        ecx_1 -= 0x20
        *(result + 0x2c) =
            fconvert.s(x87_r6_5 * fconvert.t(*edx_1) - x87_r4_5 * fconvert.t(*(edx_1 + 4)))
        float var_8_4 = fconvert.s(fconvert.t(ecx_1[1]) - fconvert.t(*(result + 0x20)))
        arg4 = fconvert.s(fconvert.t(ecx_1[2]) - fconvert.t(*(result + 0x24)))
        ecx_1[1] = fconvert.s(fconvert.t(*(result + 0x20)) + fconvert.t(ecx_1[1]))
        ecx_1[2] = fconvert.s(fconvert.t(*(result + 0x24)) + fconvert.t(ecx_1[2]))
        long double x87_r6_7 = fconvert.t(arg4)
        long double x87_r4_7 = fconvert.t(var_8_4)
        *(result + 0x20) = fconvert.s(fconvert.t(*edx_2) * x87_r4_7 + fconvert.t(edx_2[1]) * x87_r6_7)
        arg2 = &edx_2[arg4]
        *(result + 0x24) = fconvert.s(x87_r6_7 * fconvert.t(*edx_2) - x87_r4_7 * fconvert.t(edx_2[1]))
    while (result u>= entry_ebx)
    
    return result
}
