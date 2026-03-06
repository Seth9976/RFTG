// 函数名称: sub_47c3a0
// 虚拟地址: 0x47c3a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_47c3a0(void* arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg4 s<= 0)
    if (arg4 s<= 0)
        sub_4c5870("numButtons > 0", &data_83f3d3, "..\code\RftGVR.cpp", 0xbbc, "ClickstateFold")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_1 = *arg3
    void* edx
    
    if (ecx_1 s>= 0x1d)
        edx = arg1 + 0x5c08
        
        if (*(arg1 + 8) != 0)
            edx = arg1 + 0x723c
        
        ecx_1 -= 0x1d
    else
        edx = arg1 + 0xc
    
    int32_t ebx = 0
    __builtin_memcpy(arg2, edx + ecx_1 * 0x32c, 0x32c)
    
    if (arg4 s> 0)
        do
            int32_t ecx_3 = arg3[ebx]
            void* edx_2
            
            if (ecx_3 s>= 0x1d)
                edx_2 = arg1 + 0x5c08
                
                if (*(arg1 + 8) != 0)
                    edx_2 = arg1 + 0x723c
                
                ecx_3 -= 0x1d
            else
                edx_2 = arg1 + 0xc
            
            int32_t ecx_4 = ecx_3 * 0x32c
            void* esi_1 = edx_2 + ecx_4
            
            if (*(edx_2 + ecx_4 + 4) != 0 || *(esi_1 + 0x327) != 0 || *(esi_1 + 0x326) != 0)
                __builtin_memcpy(arg2, esi_1, 0x32c)
            
            ebx += 1
        while (ebx s< arg4)
    
    return arg2
}
