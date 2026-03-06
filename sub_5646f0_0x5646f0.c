// 函数名称: sub_5646f0
// 虚拟地址: 0x5646f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_5646f0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t esi = *(arg2 + 0x30)
    int32_t esi = *(arg2 + 0x30)
    int32_t edi = *arg1
    int32_t var_28 = edi
    int32_t var_24 = arg1[1]
    int32_t var_1c = esi
    int32_t var_20 = sub_5540b0(esi, edi)
    int32_t var_2c = arg1[2]
    int32_t eax_3 = sub_553f70(*(arg2 + 0x30))
    int32_t var_10 = arg1[1]
    int32_t var_8 = *(arg2 + 0x30)
    int32_t var_14 = *arg1
    int32_t ecx_2 = *(arg2 + 0x38)
    int32_t var_c = ecx_2
    int32_t var_18 = arg1[4] * ecx_2 + arg1[3] * eax_3 + *(arg2 + 0x3c)
    return sub_554750(&var_18)
}
