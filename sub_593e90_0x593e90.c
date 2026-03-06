// 函数名称: sub_593e90
// 虚拟地址: 0x593e90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_593e90(void* arg1, void* arg2 @ esi, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* eax_1 = sub_660ea0(arg3, arg1)
    int32_t eax_2 = sub_660ec0(arg3, arg1)
    int32_t eax_3 = *(arg2 + 0x10)
    int128_t* eax_4
    
    if (eax_3 != 4)
        eax_4 = sub_553f70(eax_3)
        
        if (eax_1 != *(arg2 + 4) * eax_4)
            sub_4c5870("(int)row_bytes == pDestImage->width * pixelSize", &data_83f3d3, 
                "PngImport.cpp", 0x22, "PngCopyImageToDest")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t i = 0
        
        if (*(arg2 + 8) s> 0)
            do
                eax_4 = sub_5ab990(*(arg2 + 0xc) * i + *arg2, *(eax_2 + (i << 2)), eax_1)
                i += 1
            while (i s< *(arg2 + 8))
    else
        eax_4 = *(arg2 + 4)
        
        if (eax_1 != eax_4 * 3)
            sub_4c5870("(int)row_bytes == pDestImage->width * 3", &data_83f3d3, "PngImport.cpp", 0x18, 
                "PngCopyImageToDest")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t i_1 = 0
        
        if (*(arg2 + 8) s> 0)
            int32_t eax_8
            
            do
                eax_8 = sub_553e80(*(eax_2 + (i_1 << 2)), *(arg2 + 4), *(arg2 + 0xc) * i_1 + *arg2)
                i_1 += 1
            while (i_1 s< *(arg2 + 8))
            
            return eax_8
    
    return eax_4
}
