// 函数名称: sub_6030d0
// 虚拟地址: 0x6030d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_6030d0(void* arg1)
{
    // 第一条实际指令: void* result = sub_5d0ba0()
    void* result = sub_5d0ba0()
    
    if (result == 0)
        return result
    
    int32_t* esi = *(arg1 + 0x274)
    sub_602f30(esi, *(*(result + 0x74) + 4))
    return sub_6024e0(esi) __tailcall
}
