// 函数名称: sub_53c8a0
// 虚拟地址: 0x53c8a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_53c8a0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    LRESULT result = SendMessageA(GetDlgItem(data_3078830, 0x7b), 0x188, 0, 0)
    
    if (result == 0xffffffff || result == 0)
        return result
    
    int32_t* eax_2
    int32_t ecx_1
    eax_2, ecx_1 = sub_536db0()
    int32_t var_1c_1 = ecx_1
    int32_t* eax_4 = sub_4fff30(data_315f704, 4)
    char* ecx_3 = sub_505390(eax_4, result, eax_2, eax_4, result - 1)
    void* eax_5 = data_3079208
    
    if (eax_5 != 0)
        int32_t eax_6 = *(eax_5 + 4)
        
        if (eax_6 == 0x19)
            int32_t var_18_2 = result - 1
            return sub_536c00(sub_538a80(0xffffffff))
        
        if (eax_6 == 0x1b)
            ecx_3 = sub_539d30(0xffffffff)
    
    return sub_536c00(ecx_3)
}
