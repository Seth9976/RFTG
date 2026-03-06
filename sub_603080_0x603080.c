// 函数名称: sub_603080
// 虚拟地址: 0x603080
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_603080(void* arg1)
{
    // 第一条实际指令: int32_t* result = sub_5d0ba0()
    int32_t* result = sub_5d0ba0()
    
    if (result == 0)
        return result
    
    HWND esi = *(arg1 + 0x274)
    HWND edi = *(result[0x1d] + 4)
    sub_5c9bb0(result, &esi[0x537], &esi[0x538])
    sub_602f30(esi, edi)
    return sub_603040(esi) __tailcall
}
