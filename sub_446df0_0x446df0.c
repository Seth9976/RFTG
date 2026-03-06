// 函数名称: sub_446df0
// 虚拟地址: 0x446df0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_446df0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_10 = 0
    int32_t var_10 = 0
    int32_t var_c = 0
    int32_t var_8 = 0
    int32_t* ecx_1 = *(data_27e7a40 + 0x548) + 0x43960
    var_10 = 3
    int32_t var_c_1 = arg1
    int32_t edx = sub_445e20(sub_463f60(ecx_1, arg1))
    void* eax_2 = data_27e7a40
    return sub_472e60(*(eax_2 + 0x74), edx, &var_10, *(eax_2 + 0x548))
}
