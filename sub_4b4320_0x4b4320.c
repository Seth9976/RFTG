// 函数名称: sub_4b4320
// 虚拟地址: 0x4b4320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_4b4320(int32_t* arg1)
{
    // 第一条实际指令: void* result = *arg1
    void* result = *arg1
    
    if (result != 0)
        *(result + 0x1c) -= 1
        *arg1 = 0
    
    return result
}
