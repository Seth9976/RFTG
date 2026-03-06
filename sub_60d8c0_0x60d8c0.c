// 函数名称: sub_60d8c0
// 虚拟地址: 0x60d8c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60d8c0(int32_t arg1)
{
    // 第一条实际指令: void* edi = *(arg1 + 0x134)
    void* edi = *(arg1 + 0x134)
    int32_t* eax = *(edi + 0x74)
    
    if (eax != 0)
        (*(*eax + 8))(eax)
        *(edi + 0x74) = 0
    
    int32_t* eax_1 = *(edi + 8)
    int32_t eax_3
    int32_t edx_3
    eax_3, edx_3 = (*(*eax_1 + 0x40))(eax_1, edi + 0x10)
    
    if (eax_3 s>= 0)
        int32_t* eax_4 = *(edi + 8)
        (*(*eax_4 + 0x98))(eax_4, 0, edi + 0x74)
        sub_60cad0(edi)
        sub_60d300(arg1)
    else if (eax_3 != 0x88760868)
        char const* const var_14_3 = "Reset()"
        sub_60c740(eax_3, edx_3)
        return 0xffffffff
    
    return 0
}
