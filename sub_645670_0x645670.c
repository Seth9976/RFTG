// 函数名称: sub_645670
// 虚拟地址: 0x645670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_645670(int32_t arg1, int32_t* arg2 @ esi)
{
    // 第一条实际指令: int32_t eax = arg2[6]
    int32_t eax = arg2[6]
    
    if (eax s<= arg2[7] + arg1)
        int32_t eax_3 = _realloc(arg2[4], ((eax + arg1) << 2) + 0x80)
        int32_t eax_6
        
        if (eax_3 != 0)
            void* edx_2 = ((arg2[6] + arg1) << 3) + 0x100
            arg2[4] = eax_3
            eax_6 = _realloc(arg2[5], edx_2)
        
        if (eax_3 == 0 || eax_6 == 0)
            sub_645620(arg2)
            return 0xffffffff
        
        arg2[6] += arg1 + 0x20
        arg2[5] = eax_6
    
    return 0
}
