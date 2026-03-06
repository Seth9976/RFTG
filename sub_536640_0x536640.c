// 函数名称: sub_536640
// 虚拟地址: 0x536640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_536640(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, char* arg5)
{
    // 第一条实际指令: void* var_c = arg3
    void* var_c = arg3
    int32_t i = arg1
    
    if (*(arg3 + 0x50) == 0)
        sub_536440()
    
    int32_t* ebx_1 = *(arg3 + 0x50)
    int32_t ecx_1 = *(sub_660730(ebx_1, 0xffffffff) + 4) * 2
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(arg4)
    int32_t temp0 = divs.dp.d(edx:eax_2, ecx_1)
    
    if (mods.dp.d(edx:eax_2, ecx_1) != 0)
        sub_4c5870("offsetFromStart % (2 * vi->channels) == 0", &data_83f3d3, "SoundOgg.cpp", 0x185, 
            "SoundOggReadBits")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (mods.dp.d(sx.q(i), ecx_1) != 0)
        sub_4c5870("readSize % (2 * vi->channels) == 0", &data_83f3d3, "SoundOgg.cpp", 0x186, 
            "SoundOggReadBits")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t result = sub_660710(ebx_1)
    
    if (result != temp0)
        int32_t eax_10
        int32_t edx_4
        edx_4:eax_10 = sx.q(temp0)
        result = sub_6603e0(ebx_1, eax_10, edx_4)
        
        if (result != 0)
            sub_4c5870("result == 0", &data_83f3d3, "SoundOgg.cpp", 0x18e, "SoundOggReadBits")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    char* edi_1 = arg5
    
    while (i s> 0)
        result = sub_660aa0(ebx_1, edi_1, i, 0, 2, 1, &var_c)
        
        if (result s<= 0)
            sub_4c5870("bytes_read > 0", &data_83f3d3, "SoundOgg.cpp", 0x199, "SoundOggReadBits")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (result s> i)
            sub_4c5870("bytes_read <= bytesLeft", &data_83f3d3, "SoundOgg.cpp", 0x19a, 
                "SoundOggReadBits")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        i -= result
        edi_1 = &edi_1[result]
    
    return result
}
