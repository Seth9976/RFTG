// 函数名称: sub_5a6900
// 虚拟地址: 0x5a6900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_5a6900(void* arg1)
{
    // 第一条实际指令: void* result = sub_56c510(*(arg1 + 4))
    void* result = sub_56c510(*(arg1 + 4))
    
    if (result == 0)
        return result
    
    return (**result)(1)
}
