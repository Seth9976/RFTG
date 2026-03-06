// 函数名称: sub_5cbc30
// 虚拟地址: 0x5cbc30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_5cbc30(int32_t arg1, void* arg2, void* arg3 @ edi)
{
    // 第一条实际指令: void* i = *(arg3 + 0xa4)
    void* i = *(arg3 + 0xa4)
    void* i_1 = nullptr
    
    if (i != 0)
        do
            *(i + 0x10)
            
            if (*(arg2 + 0x10) - *(i + 0x10) s< 0)
                break
            
            i_1 = i
            i = *(i + 0x18)
        while (i != 0)
        
        if (i_1 != 0)
            *(i_1 + 0x18) = arg2
            *(arg2 + 0x18) = i
            return i
    
    *(arg3 + 0xa4) = arg2
    *(arg2 + 0x18) = i
    return i
}
