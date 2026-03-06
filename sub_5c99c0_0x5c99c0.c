// 函数名称: sub_5c99c0
// 虚拟地址: 0x5c99c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c99c0(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ecx = data_bed820
    int32_t ecx = data_bed820
    
    if (ecx == 0)
        sub_5c8d60()
        return 0
    
    if (arg1 == 0 || *arg1 != ecx + 0xf4)
        sub_5cce60("Invalid window")
        return 0
    
    if (arg2 == 0 || *arg2 == 0)
        char const* const __saved_esi = "name"
        sub_5cce60("Parameter '%s' is invalid")
        return 0
    
    for (char** i = arg1[0x1c]; i != 0; i = i[2])
        char* eax_2 = *i
        
        if (eax_2 != 0 && sub_5cd590(eax_2, arg2) == 0)
            return i[1]
    
    return 0
}
