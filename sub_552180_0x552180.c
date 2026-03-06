// 函数名称: sub_552180
// 虚拟地址: 0x552180
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_552180(void* arg1 @ edi, void* arg2, int32_t arg3)
{
    // 第一条实际指令: if (*(arg1 + 8) != *(arg2 + 8))
    if (*(arg1 + 8) != *(arg2 + 8))
        sub_4c5870("sourceImage->height == destImage->height", &data_83f3d3, "TextureImport.cpp", 
            0x3f4, "ImageBufferRotateCopy")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(arg1 + 4) != *(arg2 + 4))
        sub_4c5870("sourceImage->width == destImage->width", &data_83f3d3, "TextureImport.cpp", 0x3f5, 
            "ImageBufferRotateCopy")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_4 = sub_553f70(*(arg1 + 0x10))
    int32_t result = sub_553f70(*(arg2 + 0x10))
    int32_t i = 0
    int32_t result_1 = result
    int32_t i_1 = 0
    
    if (*(arg1 + 8) s> 0)
        result = *(arg1 + 4)
        
        do
            int32_t i_4 = 0
            
            if (result s> 0)
                int32_t var_8_1 = 0
                
                do
                    if (arg3 u> 3)
                        sub_4c5870("Halt", &data_83f3d3, "TextureImport.cpp", 0x414, 
                            "ImageBufferRotateCopy")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t i_2
                    int32_t i_3
                    
                    switch (arg3)
                        case 0
                            i_2 = i_4
                            i_3 = i
                        case 1
                            i_2 = i
                            i_3 = result - i_4 - 1
                        case 2
                            i_2 = result - i_4 - 1
                            i_3 = *(arg1 + 8) - i - 1
                        case 3
                            i_2 = *(arg1 + 8) - i - 1
                            i_3 = i_4
                    
                    if (i_2 s>= *(arg2 + 4))
                        sub_4c5870("destX < destImage->width", &data_83f3d3, "TextureImport.cpp", 
                            0x417, "ImageBufferRotateCopy")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (i_3 s>= *(arg2 + 8))
                        sub_4c5870("destY < destImage->height", &data_83f3d3, "TextureImport.cpp", 
                            0x418, "ImageBufferRotateCopy")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    uint8_t* esi_5 = *(arg2 + 0xc) * i_3 + i_2 * result_1 + *arg2
                    int32_t eax_13
                    int32_t edx_4
                    eax_13, edx_4 =
                        sub_554240(*(arg1 + 0xc) * i + *arg1 + var_8_1, arg2.b, *(arg1 + 0x10))
                    sub_554500(*(arg2 + 0x10), edx_4, esi_5, eax_13)
                    result = *(arg1 + 4)
                    var_8_1 += eax_4
                    i = i_1
                    i_4 += 1
                while (i_4 s< result)
            
            i += 1
            i_1 = i
        while (i s< *(arg1 + 8))
    
    return result
}
