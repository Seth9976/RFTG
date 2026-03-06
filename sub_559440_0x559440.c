// 函数名称: sub_559440
// 虚拟地址: 0x559440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __stdcallsub_559440(int32_t* arg1)
{
    // 第一条实际指令: void* result = sub_4d6c80(*arg1)
    void* result = sub_4d6c80(*arg1)
    int32_t* ecx = arg1[2]
    
    if (ecx != *(result + 0x14))
        result = (*(*ecx + 8))(ecx)
        arg1[2] = 0
    
    return result
}
