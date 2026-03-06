// 函数名称: sub_665080
// 虚拟地址: 0x665080
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_665080(void* arg1, void* arg2, int128_t* arg3, void* arg4, int128_t** arg5)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        return 
    
    void* ebx_1 = arg4
    uint32_t edx
    
    if (arg3 != 0)
        sub_6622f0(arg1, arg2, 0x2000, 0)
        int32_t eax_1
        eax_1, edx = sub_6664e0(arg1, 0x100)
        *(arg2 + 0x4c) = eax_1
        *(arg1 + 0x1a4) = eax_1
        int128_t* eax
        
        if (ebx_1 - 1 u<= 0xff)
            eax, edx = sub_5ab990(*(arg2 + 0x4c), arg3, ebx_1)
    
    if (arg5 != 0)
        int32_t eax_2 = 1 << *(arg2 + 0x18)
        char ecx_2 = *(arg2 + 0x19)
        
        if (ecx_2 == 0 && zx.d(arg5[2].w) s> eax_2)
            sub_664100(arg1, "tRNS chunk has out-of-range samples for bit_depth")
        else if (ecx_2 == 2 &&
                (zx.d(*(arg5 + 2)) s> eax_2 || zx.d(arg5[1].w) s> eax_2 || zx.d(*(arg5 + 6)) s> eax_2))
            sub_664100(arg1, "tRNS chunk has out-of-range samples for bit_depth")
        
        *(arg2 + 0x50) = *arg5
        *(arg2 + 0x54) = arg5[1]
        edx.w = arg5[2].w
        *(arg2 + 0x58) = edx.w
        
        if (ebx_1 == 0)
            ebx_1 = 1
    
    *(arg2 + 0x16) = ebx_1.w
    
    if (ebx_1 != 0)
        *(arg2 + 8) |= 0x10
        *(arg2 + 0xb8) |= 0x2000
}
