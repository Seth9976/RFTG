// 函数名称: sub_4b3f00
// 虚拟地址: 0x4b3f00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4b3f00(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4 @ esi, int32_t arg5)
{
    // 第一条实际指令: if (*(arg4 + 0x60) == 0x78)
    if (*(arg4 + 0x60) == 0x78)
        int32_t eax_1 = **(arg4 + 0x58)
        
        if (eax_1 != 0)
            _aligned_free_base(eax_1)
        
        for (int32_t i = 0; i s< 0x1dc; i += 4)
            int32_t* ecx = *(arg4 + 0x58)
            *(ecx + i) = *(ecx + i + 4)
            int32_t* ecx_1 = *(arg4 + 0x5c)
            *(ecx_1 + i) = *(ecx_1 + i + 4)
        
        *(arg4 + 0x60) -= 1
    
    *(*(arg4 + 0x58) + (*(arg4 + 0x60) << 2)) = sub_4cce80((*(arg4 + 0x18) << 3) + 8)
    sub_5ab990(*(*(arg4 + 0x58) + (*(arg4 + 0x60) << 2)), *(arg4 + 0x3c), (*(arg4 + 0x18) << 3) + 8, 
        arg3)
    int32_t result = *(arg4 + 0x60)
    *(*(arg4 + 0x5c) + (result << 2)) = arg5
    *(arg4 + 0x60) += 1
    return result
}
