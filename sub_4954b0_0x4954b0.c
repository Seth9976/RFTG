// 函数名称: sub_4954b0
// 虚拟地址: 0x4954b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4954b0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5, void* arg6)
{
    // 第一条实际指令: int32_t i_2 = arg4
    int32_t i_2 = arg4
    
    if (i_2 s> 0)
        int32_t* esi_2 = arg6 + 0x18
        int32_t i_1 = i_2
        int32_t i
        
        do
            arg2 = sub_492910(*esi_2, arg2, arg3, arg1)
            int32_t eax_1 = *esi_2
            *(arg3 + eax_1 * 0x14 + 0x468) |= 0x80
            esi_2 = &esi_2[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        i_2 = arg4
    
    int32_t eax_4 = i_2 - arg5
    int32_t result = sub_49dbf0(eax_4, arg6 + 0x538, arg3, arg1, eax_4)
    int32_t ebx_1 = arg1 * 0xb4
    *(arg3 + ebx_1 + 0xb2) = 0
    *(arg3 + ebx_1 + 0xae) = 0
    return result
}
