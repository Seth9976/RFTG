// 函数名称: sub_5ae50a
// 虚拟地址: 0x5ae50a
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5ae50a(uint32_t arg1 @ esi)
{
    // 第一条实际指令: void* var_14
    void* var_14
    sub_5a73dd(&var_14, nullptr)
    data_bec944 = 0
    void* var_c
    char var_8
    uint32_t eax_1
    
    if (arg1 == 0xfffffffe)
        data_bec944 = 1
        eax_1 = GetOEMCP()
    else if (arg1 != 0xfffffffd)
        if (arg1 != 0xfffffffc)
            if (var_8 != 0)
                *(var_c + 0x70) &= 0xfffffffd
            
            return arg1
        
        eax_1 = *(var_14 + 4)
        data_bec944 = 1
    else
        data_bec944 = 1
        eax_1 = GetACP()
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
    
    return eax_1
}
