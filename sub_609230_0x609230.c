// 函数名称: sub_609230
// 虚拟地址: 0x609230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_609230(void* arg1 @ edi, int32_t arg2)
{
    // 第一条实际指令: int32_t* i
    int32_t* i
    int32_t entry_ebx
    
    for (i = *(arg1 + 0x30); i != 0; i = i[3])
        if (*i == arg2 && i[1] == entry_ebx)
            return i
    
    int32_t var_c_1 = 0x10
    i = sub_5d0ac0()
    
    if (i == 0)
        return i
    
    *i = arg2
    i[1] = entry_ebx
    (*(arg1 + 0xec))(1, &i[2])
    i[3] = *(arg1 + 0x30)
    *(arg1 + 0x30) = i
    return i
}
