// 函数名称: sub_402140
// 虚拟地址: 0x402140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_402140(void* arg1 @ esi, char** arg2 @ edi)
{
    // 第一条实际指令: int32_t var_8 = 0
    int32_t var_8 = 0
    uint32_t var_10_1 = zx.d(ntohs(*(arg1 + 2)))
    PSTR var_14_1 = inet_ntoa(*(arg1 + 4))
    sub_4c4a50(arg2, "%s:%d")
    return arg2
}
