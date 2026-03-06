// 函数名称: sub_564b20
// 虚拟地址: 0x564b20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_564b20(void* arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebx_1 = *(arg1 + 0x18) - *(arg1 + 0x10)
    int32_t ebx_1 = *(arg1 + 0x18) - *(arg1 + 0x10)
    int32_t edi_1 = *(arg1 + 0x14) - *(arg1 + 0xc)
    int32_t eax_2 = sub_553f70(*(arg2 + 0x10))
    int32_t var_24 = *(arg2 + 0x10)
    int32_t eax_3 = *(arg2 + 0xc)
    int32_t var_28 = eax_3
    int32_t edx_4 = *(arg1 + 0x10) * eax_3 + *(arg1 + 0xc) * eax_2 + *arg2
    int32_t esi_1 = *(arg3 + 0x30)
    int32_t var_30 = edi_1
    int32_t var_2c = ebx_1
    int32_t var_34 = edx_4
    int32_t var_1c = edi_1
    int32_t var_18 = ebx_1
    int32_t var_10 = esi_1
    int32_t var_14 = sub_5540b0(esi_1, edi_1)
    int32_t eax_9 = sub_4cce80(sub_554170(esi_1, edx_4, edi_1))
    int32_t var_20 = eax_9
    sub_554750(&var_20)
    *(arg1 + 0x2c) = edi_1
    *(arg1 + 0x34) = eax_9
    *(arg1 + 0x30) = ebx_1
    return arg1
}
