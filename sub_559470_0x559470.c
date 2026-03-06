// 函数名称: sub_559470
// 虚拟地址: 0x559470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_559470(int32_t* arg1)
{
    // 第一条实际指令: void* eax = sub_4d6c80(arg1)
    void* eax = sub_4d6c80(arg1)
    int32_t* result = *(eax + 0x14)
    
    if (result != 0)
        result = (*(*result + 8))(result)
        *(eax + 0x14) = 0
    
    return result
}
