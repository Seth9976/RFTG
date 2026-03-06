// 函数名称: sub_47c480
// 虚拟地址: 0x47c480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_47c480(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    for (void* i = nullptr; i u< 0x24; i += 4)
        int32_t eax_1 = *(i + 0x84134c)
        int32_t ecx
        
        if (eax_1 s>= 0x1d)
            ecx = arg2 + 0x5c08
            
            if (*(arg2 + 8) != 0)
                ecx = arg2 + 0x723c
            
            eax_1 -= 0x1d
        else
            ecx = arg2 + 0xc
        
        if (*(eax_1 * 0x32c + ecx + 4) != 0)
            result.b = 1
            return result
    
    result.b = 0
    return result
}
