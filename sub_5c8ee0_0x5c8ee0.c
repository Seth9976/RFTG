// 函数名称: sub_5c8ee0
// 虚拟地址: 0x5c8ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c8ee0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: void* eax = data_bed820
    void* eax = data_bed820
    
    if (eax == 0)
        sub_5c8d60()
        return 0xffffffff
    
    if (arg1 s< 0 || arg1 s>= *(eax + 0xe8))
        int32_t __saved_ebx = *(eax + 0xe8) - 1
        sub_5cce60("displayIndex must be in the range 0 - %d")
        return 0xffffffff
    
    if (arg2 != 0)
        void* ebx_1 = *(eax + 0xec) + arg1 * 0x44
        int32_t ecx_4 = *(eax + 0xc)
        int32_t eax_2
        
        if (ecx_4 != 0)
            eax_2 = ecx_4(eax, ebx_1, arg2)
        
        if (ecx_4 == 0 || eax_2 != 0)
            if (arg1 == 0)
                *arg2 = arg1
                arg2[1] = arg1
                arg2[2] = *(ebx_1 + 0x28)
                arg2[3] = *(ebx_1 + 0x2c)
                return 0
            
            sub_5c8ee0(arg1 - 1, arg2)
            *arg2 += arg2[2]
            arg2[2] = *(ebx_1 + 0x28)
            arg2[3] = *(ebx_1 + 0x2c)
    
    return 0
}
