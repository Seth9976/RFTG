// 函数名称: sub_4ccf20
// 虚拟地址: 0x4ccf20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4ccf20(int32_t arg1 @ edi)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0
    
    int128_t* result = sub_4cce80(arg1)
    sub_5abfc0(result, 0, arg1)
    return result
}
