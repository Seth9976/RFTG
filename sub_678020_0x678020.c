// 函数名称: sub_678020
// 虚拟地址: 0x678020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_678020(void* arg1, char* arg2, int32_t arg3, int16_t arg4)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x16bc)
    int32_t ecx = *(arg1 + 0x16bc)
    int32_t edx
    
    if (ecx s<= 0xd)
        edx.w = arg4
        edx.w <<= ecx.b
        *(arg1 + 0x16bc) = ecx + 3
        *(arg1 + 0x16b8) |= edx.w
        sub_677ba0(arg1, edx, arg3, arg2, 1)
        return arg1
    
    edx.w = arg4
    edx.w <<= ecx.b
    char* ecx_1 = *(arg1 + 8)
    *(arg1 + 0x16b8) |= edx.w
    ecx_1[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
    char ebx_1 = *(arg1 + 0x16b9)
    *(arg1 + 0x14) += 1
    (*(arg1 + 0x14))[*(arg1 + 8)] = ebx_1
    int32_t edx_3 = *(arg1 + 0x16bc)
    *(arg1 + 0x14) += 1
    char* ecx_2
    ecx_2.b = 0x10
    ecx_2.b = 0x10 - edx_3.b
    *(arg1 + 0x16bc) = edx_3 - 0xd
    *(arg1 + 0x16b8) = arg4 u>> ecx_2.b
    sub_677ba0(arg1, edx_3 - 0xd, arg3, arg2, 1)
    return arg1
}
