// 函数名称: sub_5de1b0
// 虚拟地址: 0x5de1b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5de1b0(int32_t* arg1 @ esi, void* arg2 @ edi)
{
    // 第一条实际指令: int32_t var_4 = 0x28
    int32_t var_4 = 0x28
    int32_t var_8 = 0
    int32_t* var_c = arg1
    sub_5cd100()
    *arg1 = 0x10028
    arg1[1] = 0x24
    
    if (*(arg2 + 0x11c) != 0)
        arg1[1] = 0x25
    
    if (*(arg2 + 0x130) != 0)
        arg1[1] |= 2
    
    *(arg1 + 0x1a) = 0
    arg1[2].b = 0
    *(arg1 + 0xa) = *(arg2 + 0x100)
    char eax = *(arg2 + 0x104)
    arg1[3].b = eax
    char ecx = *(arg2 + 0x108)
    *(arg1 + 0xe) = ecx
    arg1[4].b = *(arg2 + 0x10c)
    
    if (*(arg2 + 0x114) == 0)
        *(arg1 + 9) = ecx + eax + *(arg1 + 0xa)
    else
        *(arg1 + 9) = *(arg2 + 0x114) - *(arg2 + 0x10c)
    
    char edx_2 = *(arg2 + 0x120)
    *(arg1 + 0x13) = edx_2
    arg1[5].b = *(arg2 + 0x124)
    char ecx_2 = *(arg2 + 0x128)
    *(arg1 + 0x15) = ecx_2
    char eax_1 = *(arg2 + 0x12c)
    char edx_3 = edx_2 + eax_1 + ecx_2 + arg1[5].b
    *(arg1 + 0x16) = eax_1
    *(arg1 + 0x12) = edx_3
    char result = *(arg2 + 0x110)
    *(arg1 + 0x17) = result
    arg1[6].b = *(arg2 + 0x118)
    return result
}
