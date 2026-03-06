// 函数名称: sub_677ba0
// 虚拟地址: 0x677ba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_677ba0(void* arg1, int32_t arg2, int32_t arg3, char* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 0x16bc)
    int32_t edx = *(arg1 + 0x16bc)
    
    if (edx s> 8)
        (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b8)
        *(arg1 + 0x14) += 1
        (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
        *(arg1 + 0x14) += 1
    else if (edx s> 0)
        int32_t ebx
        ebx.b = *(arg1 + 0x16b8)
        (*(arg1 + 8))[*(arg1 + 0x14)] = ebx.b
        *(arg1 + 0x14) += 1
    
    *(arg1 + 0x16b8) = 0
    *(arg1 + 0x16bc) = 0
    
    if (arg5 != 0)
        (*(arg1 + 0x14))[*(arg1 + 8)] = arg3.b
        *(arg1 + 0x14) += 1
        (*(arg1 + 0x14))[*(arg1 + 8)] = (arg3 u>> 8).b
        *(arg1 + 0x14) += 1
        (*(arg1 + 0x14))[*(arg1 + 8)] = not.b(arg3.b)
        *(arg1 + 0x14) += 1
        (*(arg1 + 0x14))[*(arg1 + 8)] = (not.d(arg3) u>> 8).b
        *(arg1 + 0x14) += 1
    
    if (arg3 == 0)
        return 
    
    int32_t i
    
    do
        char* ebx_6
        ebx_6.b = *arg4
        arg4 = &arg4[1]
        (*(arg1 + 0x14))[*(arg1 + 8)] = ebx_6.b
        *(arg1 + 0x14) += 1
        i = arg3
        arg3 -= 1
    while (i != 1)
}
