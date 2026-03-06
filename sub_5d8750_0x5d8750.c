// 函数名称: sub_5d8750
// 虚拟地址: 0x5d8750
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d8750(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        sub_5cce60("SDL_SetPixelFormatPalette() passed NULL format")
        return 0xffffffff
    
    if (arg2 != 0 && *arg2 != 1 << *(arg1 + 8))
        sub_5cce60("SDL_SetPixelFormatPalette() passed a palette that doesn't match the format")
        return 0xffffffff
    
    void* eax_2 = *(arg1 + 4)
    
    if (eax_2 != arg2)
        if (eax_2 != 0)
            sub_5d7c20(eax_2)
        
        *(arg1 + 4) = arg2
        
        if (arg2 != 0)
            arg2[3] += 1
    
    return 0
}
