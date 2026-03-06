// 函数名称: sub_601c10
// 虚拟地址: 0x601c10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_601c10(void* arg1 @ edi)
{
    // 第一条实际指令: int32_t var_10 = sub_5cd1d0(arg1 + 0x38) * 2 + 2
    int32_t var_10 = sub_5cd1d0(arg1 + 0x38) * 2 + 2
    int16_t* var_14 = arg1 + 0x38
    char* eax_2 = sub_5dd160("UTF-8", "UTF-16LE")
    sub_5d0f40(eax_2)
    char* var_24 = eax_2
    int32_t result = sub_5d0af0()
    *(arg1 + 0x38) = 0
    *(arg1 + 0x78) = 0
    *(arg1 + 0x98) = 0
    return result
}
