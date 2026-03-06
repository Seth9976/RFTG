// 函数名称: sub_5018a0
// 虚拟地址: 0x5018a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5018a0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t eax_12 = arg1[1]
    int32_t eax_12 = arg1[1]
    
    if (eax_12 == 0)
        arg1[1] = 1
        *arg1 = sub_4cce80(0xc)
        return *arg1 + arg1[1] * 0xc - 0xc
    
    int128_t* edi = *arg1
    arg1[1] = eax_12 + 1
    int128_t* eax_8 = sub_4cce80((eax_12 + 1) * 0xc)
    void* ecx_2 = arg1[1] * 6
    *arg1 = eax_8
    sub_5ab990(eax_8, edi, ecx_2 * 2)
    
    if (edi != 0)
        _aligned_free_base(edi)
    
    return *arg1 + arg1[1] * 0xc - 0xc
}
