// 函数名称: sub_5c2ec0
// 虚拟地址: 0x5c2ec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c2ec0(void* arg1)
{
    // 第一条实际指令: BOOL eax_1 = MoveFileExW(*(arg1 + 0x80), *(arg1 + 0x1c), MOVEFILE_REPLACE_EXISTING)
    BOOL eax_1 = MoveFileExW(*(arg1 + 0x80), *(arg1 + 0x1c), MOVEFILE_REPLACE_EXISTING)
    int32_t eax_2 = neg.d(eax_1)
    return neg.d(sbb.d(eax_2, eax_2, eax_1 != 0)) - 1
}
