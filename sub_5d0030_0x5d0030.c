// 函数名称: sub_5d0030
// 虚拟地址: 0x5d0030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d0030(void* arg1)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 0x28)
    int32_t* eax = *(arg1 + 0x28)
    
    if (*(eax + 0xc4e) == 0)
        int32_t* eax_1 = *eax
        (*(*eax_1 + 0x20))(eax_1)
        int32_t* eax_3 = **(arg1 + 0x28)
        (*(*eax_3 + 8))(eax_3)
    
    int32_t var_c_3 = *(arg1 + 0x28)
    int32_t result = sub_5d0af0()
    *(arg1 + 0x30) = 1
    return result
}
