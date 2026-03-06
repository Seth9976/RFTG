// 函数名称: sub_445f60
// 虚拟地址: 0x445f60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_445f60()
{
    // 第一条实际指令: int32_t* var_8
    int32_t* var_8
    void* result = sub_419400(&var_8)
    
    if (result.b != 0)
        result = *var_8
        
        if (result == 0x49 || result == 0x4a)
            return sub_419340()
    
    return result
}
