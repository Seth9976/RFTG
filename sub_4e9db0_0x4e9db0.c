// 函数名称: sub_4e9db0
// 虚拟地址: 0x4e9db0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4e9db0(void* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* edx = arg2
    int32_t* edx = arg2
    int32_t* entry_ebx
    int32_t esi_1 = entry_ebx[1] * 2
    int32_t esi_2 = esi_1 * 2
    edx[1] = esi_2
    int128_t* edi
    
    if (esi_1 != neg.d(esi_1))
        edi = sub_4cce80(esi_2)
        sub_5abfc0(edi, 0, esi_2)
        edx = arg2
    else
        edi = nullptr
    
    int32_t i = 0
    *edx = edi
    edx[2] = 2
    
    if (entry_ebx[1] s<= 0)
        return 
    
    int32_t var_8_1 = 0
    
    do
        int32_t* ecx_1 = *edx + (i << 2)
        void* eax_5 = *entry_ebx + var_8_1
        int128_t* eax
        
        if (arg3 == 4)
            eax = *(eax_5 + 0x20)
        else if (arg3 == 5)
            eax = *(eax_5 + 0x24)
        else if (arg3 != 6)
            if (arg3 != 7)
                sub_4c5870("Halt", &data_83f3d3, "Flanim.cpp", 0x55b, "FlanimCompressGetInt")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            eax = *(eax_5 + 0x2c)
        else
            eax = sub_4e99c0(arg1, *(eax_5 + 0x28))
            edx = arg2
        
        var_8_1 += 0x30
        i += 1
        *ecx_1 = eax
    while (i s< entry_ebx[1])
}
