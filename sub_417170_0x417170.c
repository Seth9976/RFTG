// 函数名称: sub_417170
// 虚拟地址: 0x417170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_417170(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_1 = lookup_table_846e90[*arg1]
    int32_t eax_1 = lookup_table_846e90[*arg1]
    void* ecx_1 = data_26a44ec
    *(data_27e7a50 + 0x18) = eax_1
    void* edx_1 = data_27e7fd0
    *(ecx_1 + 0x120) = eax_1
    
    if (*(edx_1 + 0x27) != 0)
        data_30d6f38 = data_307c588
        return 0
    
    void* eax_4 = data_bf80cc
    *(eax_4 + 0xc) = fconvert.s(float.t(0))
    *(eax_4 + 8) = 0
    return 0
}
