// 函数名称: sub_5aeb9a
// 虚拟地址: 0x5aeb9a
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5aeb9a(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    
    if (arg2 == 0 || arg1 == 0)
        return nullptr
    
    void* esi_1 = *arg1
    
    if (esi_1 != arg2)
        *arg1 = arg2
        sub_5ae927(arg2)
        
        if (esi_1 != 0)
            sub_5ae9b6(esi_1)
            
            if (*esi_1 == 0 && esi_1 != 0x8b8bc0)
                sub_5aea4f(esi_1)
    
    return arg2
}
